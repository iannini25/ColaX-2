/* Generated code for Python module 'PIL$PdfImagePlugin'
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



/* The "module_PIL$PdfImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$PdfImagePlugin;
PyDictObject *moduledict_PIL$PdfImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__save;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_save_all_tuple;
PyObject *const_str_plain_size;
PyObject *const_dict_263e96889f94ed65e7165e4e2d8f776c;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_1;
PyObject *const_str_plain_features;
PyObject *const_str_plain_check;
PyObject *const_tuple_str_plain_libtiff_tuple;
PyObject *const_str_plain_CCITTFaxDecode;
PyObject *const_str_plain_BitsPerComponent;
PyObject *const_str_plain_PdfParser;
PyObject *const_str_plain_PdfArray;
PyObject *const_str_plain_PdfDict;
PyObject *const_str_plain_K;
PyObject *const_str_plain_BlackIs1;
PyObject *const_str_plain_Columns;
PyObject *const_str_plain_Rows;
PyObject *const_str_plain_DCTDecode;
PyObject *const_str_plain_PdfName;
PyObject *const_tuple_str_plain_DeviceGray_tuple;
PyObject *const_str_plain_ColorSpace;
PyObject *const_str_plain_ImageB;
PyObject *const_str_plain_L;
PyObject *const_str_plain_LA;
PyObject *const_str_plain_JPXDecode;
PyObject *const_str_plain_SMaskInData;
PyObject *const_str_plain_P;
PyObject *const_str_plain_ASCIIHexDecode;
PyObject *const_str_plain_getpalette;
PyObject *const_tuple_str_plain_Indexed_tuple;
PyObject *const_tuple_str_plain_DeviceRGB_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PdfBinary;
PyObject *const_str_plain_ImageI;
PyObject *const_str_plain_transparency;
PyObject *const_str_plain_info;
PyObject *const_str_plain_convert;
PyObject *const_tuple_str_plain_LA_tuple;
PyObject *const_str_plain_getchannel;
PyObject *const_tuple_str_plain_A_tuple;
PyObject *const_str_plain_encoderinfo;
PyObject *const_str_plain__write_image;
PyObject *const_str_plain_SMask;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain_ImageC;
PyObject *const_str_plain_RGBA;
PyObject *const_str_plain_CMYK;
PyObject *const_tuple_str_plain_DeviceCMYK_tuple;
PyObject *const_list_841024d558cf19cdd5a7cd3847b75dc7_list;
PyObject *const_str_digest_25f78f2af888c3ebd2d54d15d704c10d;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_hex;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_save;
PyObject *const_str_plain_TIFF;
PyObject *const_str_plain_group4;
PyObject *const_str_plain_math;
PyObject *const_str_plain_ceil;
PyObject *const_int_pos_8;
PyObject *const_tuple_str_plain_compression_str_plain_strip_size_tuple;
PyObject *const_tuple_str_plain_JpegImagePlugin_tuple;
PyObject *const_str_plain_JpegImagePlugin;
PyObject *const_tuple_str_plain_Jpeg2KImagePlugin_tuple;
PyObject *const_str_plain_Jpeg2KImagePlugin;
PyObject *const_str_digest_75ed59d7ab917e59ddb21e20072f2a43;
PyObject *const_str_chr_41;
PyObject *const_str_plain_getvalue;
PyObject *const_slice_int_pos_8_none_none;
PyObject *const_str_plain_pop;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_write_obj;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_Type;
PyObject *const_tuple_str_plain_XObject_tuple;
PyObject *const_str_plain_Subtype;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_str_plain_Width;
PyObject *const_str_plain_Height;
PyObject *const_str_plain_Filter;
PyObject *const_str_plain_Decode;
PyObject *const_str_plain_DecodeParms;
PyObject *const_tuple_str_plain_append_false_tuple;
PyObject *const_str_plain_decode;
PyObject *const_str_digest_e8f5d73778524447b7d7037d41e7364f;
PyObject *const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple;
PyObject *const_str_digest_6500339fb9ac37f5860ed740a1224c1b;
PyObject *const_tuple_str_plain_dpi_tuple;
PyObject *const_tuple_str_plain_resolution_float_72_0_tuple;
PyObject *const_str_plain_title;
PyObject *const_str_plain_splitext;
PyObject *const_str_plain_author;
PyObject *const_str_plain_subject;
PyObject *const_str_plain_keywords;
PyObject *const_str_plain_creator;
PyObject *const_str_plain_producer;
PyObject *const_str_plain_creationDate;
PyObject *const_str_plain_time;
PyObject *const_str_plain_gmtime;
PyObject *const_str_plain_modDate;
PyObject *const_str_plain_im;
PyObject *const_str_plain_existing_pdf;
PyObject *const_str_plain_upper;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_load;
PyObject *const_str_plain_start_writing;
PyObject *const_str_plain_write_header;
PyObject *const_str_plain_write_comment;
PyObject *const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple;
PyObject *const_str_plain_append_images;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_ims;
PyObject *const_str_plain_n_frames;
PyObject *const_str_plain_number_of_pages;
PyObject *const_str_plain_image_refs;
PyObject *const_str_plain_append;
PyObject *const_str_plain_next_object_id;
PyObject *const_str_plain_page_refs;
PyObject *const_str_plain_contents_refs;
PyObject *const_str_plain_pages;
PyObject *const_str_plain_write_catalog;
PyObject *const_str_plain_ImageSequence;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_filename;
PyObject *const_str_plain_write_page;
PyObject *const_str_plain_page_number;
PyObject *const_tuple_str_plain_PDF_tuple;
PyObject *const_tuple_str_plain_image_tuple;
PyObject *const_tuple_str_plain_ProcSet_str_plain_XObject_tuple;
PyObject *const_str_plain_width;
PyObject *const_float_72_0;
PyObject *const_str_plain_x_resolution;
PyObject *const_str_plain_height;
PyObject *const_str_plain_y_resolution;
PyObject *const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple;
PyObject *const_bytes_digest_e4e807518027307056803ec8eb18c943;
PyObject *const_tuple_str_plain_stream_tuple;
PyObject *const_str_plain_write_xref_and_trailer;
PyObject *const_str_plain_flush;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_plain_os;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_Any;
PyObject *const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple;
PyObject *const_str_plain_Image;
PyObject *const_dict_b018ccd271180f61287e4749ac87b316;
PyObject *const_str_plain__save_all;
PyObject *const_dict_a6c55e23e54c7a12f70ae8f29ef61be1;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32;
PyObject *const_str_plain_register_save;
PyObject *const_str_plain_PDF;
PyObject *const_str_plain_register_save_all;
PyObject *const_str_plain_register_extension;
PyObject *const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple;
PyObject *const_str_plain_register_mime;
PyObject *const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple;
PyObject *const_str_digest_b4526143837278b2786563b968c547b3;
PyObject *const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580;
PyObject *const_tuple_76489b0209cefb093f669676130b2d1a_tuple;
PyObject *const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple;
PyObject *const_tuple_7564941c5272812c325160ed1838bf52_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[168];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.PdfImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 168) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 168 values, got %d\n",
                    UN_TRANSLATE("PIL.PdfImagePlugin"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_save_all_tuple", mod_consts.const_tuple_str_plain_save_all_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_save_all_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c", mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_features", mod_consts.const_str_plain_features);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_features);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_check", mod_consts.const_str_plain_check);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_check);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_libtiff_tuple", mod_consts.const_tuple_str_plain_libtiff_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_libtiff_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CCITTFaxDecode", mod_consts.const_str_plain_CCITTFaxDecode);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_CCITTFaxDecode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitsPerComponent", mod_consts.const_str_plain_BitsPerComponent);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_BitsPerComponent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfParser", mod_consts.const_str_plain_PdfParser);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_PdfParser);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfArray", mod_consts.const_str_plain_PdfArray);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_PdfArray);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfDict", mod_consts.const_str_plain_PdfDict);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_PdfDict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_K", mod_consts.const_str_plain_K);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_K);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackIs1", mod_consts.const_str_plain_BlackIs1);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_BlackIs1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Columns", mod_consts.const_str_plain_Columns);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_Columns);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Rows", mod_consts.const_str_plain_Rows);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Rows);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DCTDecode", mod_consts.const_str_plain_DCTDecode);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_DCTDecode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfName", mod_consts.const_str_plain_PdfName);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_PdfName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeviceGray_tuple", mod_consts.const_tuple_str_plain_DeviceGray_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeviceGray_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorSpace", mod_consts.const_str_plain_ColorSpace);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorSpace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageB", mod_consts.const_str_plain_ImageB);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LA", mod_consts.const_str_plain_LA);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_LA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPXDecode", mod_consts.const_str_plain_JPXDecode);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPXDecode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMaskInData", mod_consts.const_str_plain_SMaskInData);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMaskInData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ASCIIHexDecode", mod_consts.const_str_plain_ASCIIHexDecode);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ASCIIHexDecode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Indexed_tuple", mod_consts.const_tuple_str_plain_Indexed_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Indexed_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeviceRGB_tuple", mod_consts.const_tuple_str_plain_DeviceRGB_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeviceRGB_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfBinary", mod_consts.const_str_plain_PdfBinary);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_PdfBinary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageI", mod_consts.const_str_plain_ImageI);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageI);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transparency", mod_consts.const_str_plain_transparency);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_transparency);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LA_tuple", mod_consts.const_tuple_str_plain_LA_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LA_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getchannel", mod_consts.const_str_plain_getchannel);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_getchannel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_A_tuple", mod_consts.const_tuple_str_plain_A_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_A_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__write_image", mod_consts.const_str_plain__write_image);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__write_image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMask", mod_consts.const_str_plain_SMask);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageC", mod_consts.const_str_plain_ImageC);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CMYK", mod_consts.const_str_plain_CMYK);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_CMYK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeviceCMYK_tuple", mod_consts.const_tuple_str_plain_DeviceCMYK_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeviceCMYK_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list", mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d", mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_save", mod_consts.const_str_plain_save);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TIFF", mod_consts.const_str_plain_TIFF);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_TIFF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group4", mod_consts.const_str_plain_group4);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_group4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_math", mod_consts.const_str_plain_math);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ceil", mod_consts.const_str_plain_ceil);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ceil);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple", mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple", mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegImagePlugin", mod_consts.const_str_plain_JpegImagePlugin);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegImagePlugin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple", mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Jpeg2KImagePlugin", mod_consts.const_str_plain_Jpeg2KImagePlugin);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Jpeg2KImagePlugin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43", mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getvalue", mod_consts.const_str_plain_getvalue);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_8_none_none", mod_consts.const_slice_int_pos_8_none_none);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_8_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_obj", mod_consts.const_str_plain_write_obj);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_obj);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stream", mod_consts.const_str_plain_stream);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Type", mod_consts.const_str_plain_Type);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_XObject_tuple", mod_consts.const_tuple_str_plain_XObject_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_XObject_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Subtype", mod_consts.const_str_plain_Subtype);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_Subtype);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Width", mod_consts.const_str_plain_Width);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_Width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Height", mod_consts.const_str_plain_Height);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_Height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Filter", mod_consts.const_str_plain_Filter);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Filter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Decode", mod_consts.const_str_plain_Decode);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_Decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DecodeParms", mod_consts.const_str_plain_DecodeParms);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_DecodeParms);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_append_false_tuple", mod_consts.const_tuple_str_plain_append_false_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_append_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f", mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b", mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dpi_tuple", mod_consts.const_tuple_str_plain_dpi_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dpi_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple", mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_splitext", mod_consts.const_str_plain_splitext);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_author", mod_consts.const_str_plain_author);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_author);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subject", mod_consts.const_str_plain_subject);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keywords", mod_consts.const_str_plain_keywords);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_keywords);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_creator", mod_consts.const_str_plain_creator);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_creator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_producer", mod_consts.const_str_plain_producer);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_producer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_creationDate", mod_consts.const_str_plain_creationDate);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_creationDate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gmtime", mod_consts.const_str_plain_gmtime);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_gmtime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_modDate", mod_consts.const_str_plain_modDate);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_modDate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_existing_pdf", mod_consts.const_str_plain_existing_pdf);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_existing_pdf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start_writing", mod_consts.const_str_plain_start_writing);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_writing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_header", mod_consts.const_str_plain_write_header);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_comment", mod_consts.const_str_plain_write_comment);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_comment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple", mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append_images", mod_consts.const_str_plain_append_images);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_images);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ims);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n_frames", mod_consts.const_str_plain_n_frames);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_n_frames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_number_of_pages", mod_consts.const_str_plain_number_of_pages);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_number_of_pages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_image_refs", mod_consts.const_str_plain_image_refs);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_image_refs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_next_object_id", mod_consts.const_str_plain_next_object_id);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_next_object_id);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_refs", mod_consts.const_str_plain_page_refs);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_page_refs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents_refs", mod_consts.const_str_plain_contents_refs);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_contents_refs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pages", mod_consts.const_str_plain_pages);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_pages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_catalog", mod_consts.const_str_plain_write_catalog);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_catalog);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageSequence", mod_consts.const_str_plain_ImageSequence);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageSequence);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filename", mod_consts.const_str_plain_filename);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_page", mod_consts.const_str_plain_write_page);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_page);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_number", mod_consts.const_str_plain_page_number);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_page_number);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PDF_tuple", mod_consts.const_tuple_str_plain_PDF_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PDF_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_tuple", mod_consts.const_tuple_str_plain_image_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple", mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_72_0", mod_consts.const_float_72_0);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_float_72_0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x_resolution", mod_consts.const_str_plain_x_resolution);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_x_resolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y_resolution", mod_consts.const_str_plain_y_resolution);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_y_resolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple", mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943", mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_stream_tuple", mod_consts.const_tuple_str_plain_stream_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_xref_and_trailer", mod_consts.const_str_plain_write_xref_and_trailer);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_xref_and_trailer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flush", mod_consts.const_str_plain_flush);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple", mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save_all", mod_consts.const_str_plain__save_all);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain__save_all);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1", mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32", mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PDF", mod_consts.const_str_plain_PDF);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_PDF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save_all", mod_consts.const_str_plain_register_save_all);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save_all);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple", mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple", mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4526143837278b2786563b968c547b3", mod_consts.const_str_digest_b4526143837278b2786563b968c547b3);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4526143837278b2786563b968c547b3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580", mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple", mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple", mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple", mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple);
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
void checkModuleConstants_PIL$PdfImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__save) && "mod_consts.const_str_plain__save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_save_all_tuple", mod_consts.const_tuple_str_plain_save_all_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_save_all_tuple) && "mod_consts.const_tuple_str_plain_save_all_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c", mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c) && "mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_1) && "mod_consts.const_str_plain_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_features", mod_consts.const_str_plain_features);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_features) && "mod_consts.const_str_plain_features");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_check", mod_consts.const_str_plain_check);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_check) && "mod_consts.const_str_plain_check");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_libtiff_tuple", mod_consts.const_tuple_str_plain_libtiff_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_libtiff_tuple) && "mod_consts.const_tuple_str_plain_libtiff_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CCITTFaxDecode", mod_consts.const_str_plain_CCITTFaxDecode);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_CCITTFaxDecode) && "mod_consts.const_str_plain_CCITTFaxDecode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitsPerComponent", mod_consts.const_str_plain_BitsPerComponent);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_BitsPerComponent) && "mod_consts.const_str_plain_BitsPerComponent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfParser", mod_consts.const_str_plain_PdfParser);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_PdfParser) && "mod_consts.const_str_plain_PdfParser");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfArray", mod_consts.const_str_plain_PdfArray);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_PdfArray) && "mod_consts.const_str_plain_PdfArray");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfDict", mod_consts.const_str_plain_PdfDict);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_PdfDict) && "mod_consts.const_str_plain_PdfDict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_K", mod_consts.const_str_plain_K);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_K) && "mod_consts.const_str_plain_K");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackIs1", mod_consts.const_str_plain_BlackIs1);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_BlackIs1) && "mod_consts.const_str_plain_BlackIs1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Columns", mod_consts.const_str_plain_Columns);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_Columns) && "mod_consts.const_str_plain_Columns");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Rows", mod_consts.const_str_plain_Rows);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Rows) && "mod_consts.const_str_plain_Rows");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DCTDecode", mod_consts.const_str_plain_DCTDecode);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_DCTDecode) && "mod_consts.const_str_plain_DCTDecode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfName", mod_consts.const_str_plain_PdfName);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_PdfName) && "mod_consts.const_str_plain_PdfName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeviceGray_tuple", mod_consts.const_tuple_str_plain_DeviceGray_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeviceGray_tuple) && "mod_consts.const_tuple_str_plain_DeviceGray_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorSpace", mod_consts.const_str_plain_ColorSpace);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorSpace) && "mod_consts.const_str_plain_ColorSpace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageB", mod_consts.const_str_plain_ImageB);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageB) && "mod_consts.const_str_plain_ImageB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LA", mod_consts.const_str_plain_LA);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_LA) && "mod_consts.const_str_plain_LA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPXDecode", mod_consts.const_str_plain_JPXDecode);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPXDecode) && "mod_consts.const_str_plain_JPXDecode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMaskInData", mod_consts.const_str_plain_SMaskInData);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMaskInData) && "mod_consts.const_str_plain_SMaskInData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ASCIIHexDecode", mod_consts.const_str_plain_ASCIIHexDecode);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ASCIIHexDecode) && "mod_consts.const_str_plain_ASCIIHexDecode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Indexed_tuple", mod_consts.const_tuple_str_plain_Indexed_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Indexed_tuple) && "mod_consts.const_tuple_str_plain_Indexed_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeviceRGB_tuple", mod_consts.const_tuple_str_plain_DeviceRGB_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeviceRGB_tuple) && "mod_consts.const_tuple_str_plain_DeviceRGB_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PdfBinary", mod_consts.const_str_plain_PdfBinary);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_PdfBinary) && "mod_consts.const_str_plain_PdfBinary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageI", mod_consts.const_str_plain_ImageI);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageI) && "mod_consts.const_str_plain_ImageI");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transparency", mod_consts.const_str_plain_transparency);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_transparency) && "mod_consts.const_str_plain_transparency");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert) && "mod_consts.const_str_plain_convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LA_tuple", mod_consts.const_tuple_str_plain_LA_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LA_tuple) && "mod_consts.const_tuple_str_plain_LA_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getchannel", mod_consts.const_str_plain_getchannel);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_getchannel) && "mod_consts.const_str_plain_getchannel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_A_tuple", mod_consts.const_tuple_str_plain_A_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_A_tuple) && "mod_consts.const_tuple_str_plain_A_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo) && "mod_consts.const_str_plain_encoderinfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__write_image", mod_consts.const_str_plain__write_image);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__write_image) && "mod_consts.const_str_plain__write_image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMask", mod_consts.const_str_plain_SMask);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMask) && "mod_consts.const_str_plain_SMask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageC", mod_consts.const_str_plain_ImageC);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageC) && "mod_consts.const_str_plain_ImageC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA) && "mod_consts.const_str_plain_RGBA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CMYK", mod_consts.const_str_plain_CMYK);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_CMYK) && "mod_consts.const_str_plain_CMYK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeviceCMYK_tuple", mod_consts.const_tuple_str_plain_DeviceCMYK_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeviceCMYK_tuple) && "mod_consts.const_tuple_str_plain_DeviceCMYK_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list", mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list) && "mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d", mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d) && "mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO) && "mod_consts.const_str_plain_BytesIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex) && "mod_consts.const_str_plain_hex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_save", mod_consts.const_str_plain_save);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_save) && "mod_consts.const_str_plain_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TIFF", mod_consts.const_str_plain_TIFF);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_TIFF) && "mod_consts.const_str_plain_TIFF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group4", mod_consts.const_str_plain_group4);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_group4) && "mod_consts.const_str_plain_group4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_math", mod_consts.const_str_plain_math);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_math) && "mod_consts.const_str_plain_math");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ceil", mod_consts.const_str_plain_ceil);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ceil) && "mod_consts.const_str_plain_ceil");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple", mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple) && "mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple", mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple) && "mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegImagePlugin", mod_consts.const_str_plain_JpegImagePlugin);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegImagePlugin) && "mod_consts.const_str_plain_JpegImagePlugin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple", mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple) && "mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Jpeg2KImagePlugin", mod_consts.const_str_plain_Jpeg2KImagePlugin);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Jpeg2KImagePlugin) && "mod_consts.const_str_plain_Jpeg2KImagePlugin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43", mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43) && "mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_chr_41) && "mod_consts.const_str_chr_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getvalue", mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue) && "mod_consts.const_str_plain_getvalue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_8_none_none", mod_consts.const_slice_int_pos_8_none_none);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_8_none_none) && "mod_consts.const_slice_int_pos_8_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop) && "mod_consts.const_str_plain_pop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_obj", mod_consts.const_str_plain_write_obj);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_obj) && "mod_consts.const_str_plain_write_obj");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stream", mod_consts.const_str_plain_stream);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream) && "mod_consts.const_str_plain_stream");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Type", mod_consts.const_str_plain_Type);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type) && "mod_consts.const_str_plain_Type");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_XObject_tuple", mod_consts.const_tuple_str_plain_XObject_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_XObject_tuple) && "mod_consts.const_tuple_str_plain_XObject_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Subtype", mod_consts.const_str_plain_Subtype);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_Subtype) && "mod_consts.const_str_plain_Subtype");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple) && "mod_consts.const_tuple_str_plain_Image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Width", mod_consts.const_str_plain_Width);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_Width) && "mod_consts.const_str_plain_Width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Height", mod_consts.const_str_plain_Height);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_Height) && "mod_consts.const_str_plain_Height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Filter", mod_consts.const_str_plain_Filter);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Filter) && "mod_consts.const_str_plain_Filter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Decode", mod_consts.const_str_plain_Decode);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_Decode) && "mod_consts.const_str_plain_Decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DecodeParms", mod_consts.const_str_plain_DecodeParms);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_DecodeParms) && "mod_consts.const_str_plain_DecodeParms");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_append_false_tuple", mod_consts.const_tuple_str_plain_append_false_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_append_false_tuple) && "mod_consts.const_tuple_str_plain_append_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f", mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f) && "mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple) && "mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b", mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b) && "mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dpi_tuple", mod_consts.const_tuple_str_plain_dpi_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dpi_tuple) && "mod_consts.const_tuple_str_plain_dpi_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple", mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple) && "mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_title) && "mod_consts.const_str_plain_title");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_splitext", mod_consts.const_str_plain_splitext);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitext) && "mod_consts.const_str_plain_splitext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_author", mod_consts.const_str_plain_author);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_author) && "mod_consts.const_str_plain_author");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subject", mod_consts.const_str_plain_subject);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject) && "mod_consts.const_str_plain_subject");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keywords", mod_consts.const_str_plain_keywords);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_keywords) && "mod_consts.const_str_plain_keywords");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_creator", mod_consts.const_str_plain_creator);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_creator) && "mod_consts.const_str_plain_creator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_producer", mod_consts.const_str_plain_producer);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_producer) && "mod_consts.const_str_plain_producer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_creationDate", mod_consts.const_str_plain_creationDate);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_creationDate) && "mod_consts.const_str_plain_creationDate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gmtime", mod_consts.const_str_plain_gmtime);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_gmtime) && "mod_consts.const_str_plain_gmtime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_modDate", mod_consts.const_str_plain_modDate);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_modDate) && "mod_consts.const_str_plain_modDate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_existing_pdf", mod_consts.const_str_plain_existing_pdf);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_existing_pdf) && "mod_consts.const_str_plain_existing_pdf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none) && "mod_consts.const_slice_int_pos_1_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start_writing", mod_consts.const_str_plain_start_writing);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_writing) && "mod_consts.const_str_plain_start_writing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_header", mod_consts.const_str_plain_write_header);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_header) && "mod_consts.const_str_plain_write_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_comment", mod_consts.const_str_plain_write_comment);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_comment) && "mod_consts.const_str_plain_write_comment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple", mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple) && "mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append_images", mod_consts.const_str_plain_append_images);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_images) && "mod_consts.const_str_plain_append_images");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ims) && "mod_consts.const_str_plain_ims");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n_frames", mod_consts.const_str_plain_n_frames);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_n_frames) && "mod_consts.const_str_plain_n_frames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_number_of_pages", mod_consts.const_str_plain_number_of_pages);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_number_of_pages) && "mod_consts.const_str_plain_number_of_pages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_image_refs", mod_consts.const_str_plain_image_refs);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_image_refs) && "mod_consts.const_str_plain_image_refs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_next_object_id", mod_consts.const_str_plain_next_object_id);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_next_object_id) && "mod_consts.const_str_plain_next_object_id");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_refs", mod_consts.const_str_plain_page_refs);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_page_refs) && "mod_consts.const_str_plain_page_refs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents_refs", mod_consts.const_str_plain_contents_refs);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_contents_refs) && "mod_consts.const_str_plain_contents_refs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pages", mod_consts.const_str_plain_pages);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_pages) && "mod_consts.const_str_plain_pages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_catalog", mod_consts.const_str_plain_write_catalog);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_catalog) && "mod_consts.const_str_plain_write_catalog");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageSequence", mod_consts.const_str_plain_ImageSequence);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageSequence) && "mod_consts.const_str_plain_ImageSequence");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator) && "mod_consts.const_str_plain_Iterator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filename", mod_consts.const_str_plain_filename);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename) && "mod_consts.const_str_plain_filename");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_page", mod_consts.const_str_plain_write_page);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_page) && "mod_consts.const_str_plain_write_page");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_number", mod_consts.const_str_plain_page_number);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_page_number) && "mod_consts.const_str_plain_page_number");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PDF_tuple", mod_consts.const_tuple_str_plain_PDF_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PDF_tuple) && "mod_consts.const_tuple_str_plain_PDF_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_tuple", mod_consts.const_tuple_str_plain_image_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_tuple) && "mod_consts.const_tuple_str_plain_image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple", mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple) && "mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_width) && "mod_consts.const_str_plain_width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_72_0", mod_consts.const_float_72_0);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_float_72_0) && "mod_consts.const_float_72_0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x_resolution", mod_consts.const_str_plain_x_resolution);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_x_resolution) && "mod_consts.const_str_plain_x_resolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_height) && "mod_consts.const_str_plain_height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y_resolution", mod_consts.const_str_plain_y_resolution);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_y_resolution) && "mod_consts.const_str_plain_y_resolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple", mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple) && "mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943", mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943) && "mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_stream_tuple", mod_consts.const_tuple_str_plain_stream_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_tuple) && "mod_consts.const_tuple_str_plain_stream_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_xref_and_trailer", mod_consts.const_str_plain_write_xref_and_trailer);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_xref_and_trailer) && "mod_consts.const_str_plain_write_xref_and_trailer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flush", mod_consts.const_str_plain_flush);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush) && "mod_consts.const_str_plain_flush");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_io) && "mod_consts.const_str_plain_io");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO) && "mod_consts.const_str_plain_IO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple", mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple) && "mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316) && "mod_consts.const_dict_b018ccd271180f61287e4749ac87b316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save_all", mod_consts.const_str_plain__save_all);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain__save_all) && "mod_consts.const_str_plain__save_all");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1", mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1) && "mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32", mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32) && "mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save) && "mod_consts.const_str_plain_register_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PDF", mod_consts.const_str_plain_PDF);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_PDF) && "mod_consts.const_str_plain_PDF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save_all", mod_consts.const_str_plain_register_save_all);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save_all) && "mod_consts.const_str_plain_register_save_all");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension) && "mod_consts.const_str_plain_register_extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple", mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple) && "mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime) && "mod_consts.const_str_plain_register_mime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple", mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple) && "mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4526143837278b2786563b968c547b3", mod_consts.const_str_digest_b4526143837278b2786563b968c547b3);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4526143837278b2786563b968c547b3) && "mod_consts.const_str_digest_b4526143837278b2786563b968c547b3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580", mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580) && "mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple", mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple) && "mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple", mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple) && "mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple", mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple) && "mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple");
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
static PyObject *module_var_accessor_PIL$PdfImagePlugin$Image(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$ImageSequence(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$PdfParser(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PdfParser);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PdfParser);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PdfParser, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PdfParser);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PdfParser, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PdfParser);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PdfParser);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PdfParser);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$_save(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$_save_all(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$_write_image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__write_image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__write_image);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__write_image, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__write_image);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__write_image, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__write_image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__write_image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__write_image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$features(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_features);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_features);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_features, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_features);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_features, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_features);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_features);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_features);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PdfImagePlugin$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PdfImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PdfImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PdfImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0433a348eed728c1e6ba6409103f84c0;
static PyCodeObject *code_objects_75042b07445813b282fa77fda350af31;
static PyCodeObject *code_objects_865169dd233f4986e8423307d2f979a2;
static PyCodeObject *code_objects_2557cecb84893173b58190ca1aea0572;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b4526143837278b2786563b968c547b3); CHECK_OBJECT(module_filename_obj);
code_objects_0433a348eed728c1e6ba6409103f84c0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580, mod_consts.const_str_digest_fb69433756c6e0a6ec9bb5f00b55a580, NULL, NULL, 0, 0, 0);
code_objects_75042b07445813b282fa77fda350af31 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save, mod_consts.const_str_plain__save, mod_consts.const_tuple_76489b0209cefb093f669676130b2d1a_tuple, NULL, 4, 0, 0);
code_objects_865169dd233f4986e8423307d2f979a2 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save_all, mod_consts.const_str_plain__save_all, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple, NULL, 3, 0, 0);
code_objects_2557cecb84893173b58190ca1aea0572 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__write_image, mod_consts.const_str_plain__write_image, mod_consts.const_tuple_7564941c5272812c325160ed1838bf52_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__1__save_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__2__write_image(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__3__save(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$PdfImagePlugin$$$function__1__save_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$PdfImagePlugin$$$function__1__save_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all)) {
    Py_XDECREF(cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all = MAKE_FUNCTION_FRAME(tstate, code_objects_865169dd233f4986e8423307d2f979a2, module_PIL$PdfImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all->m_type_description == NULL);
frame_frame_PIL$PdfImagePlugin$$$function__1__save_all = cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PdfImagePlugin$$$function__1__save_all);
assert(Py_REFCNT(frame_frame_PIL$PdfImagePlugin$$$function__1__save_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_called_value_1 = module_var_accessor_PIL$PdfImagePlugin$_save(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_kw_call_arg_value_0_1 = par_im;
CHECK_OBJECT(par_fp);
tmp_kw_call_arg_value_1_1 = par_fp;
CHECK_OBJECT(par_filename);
tmp_kw_call_arg_value_2_1 = par_filename;
frame_frame_PIL$PdfImagePlugin$$$function__1__save_all->m_frame.f_lineno = 44;
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


exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PdfImagePlugin$$$function__1__save_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PdfImagePlugin$$$function__1__save_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PdfImagePlugin$$$function__1__save_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PdfImagePlugin$$$function__1__save_all,
    type_description_1,
    par_im,
    par_fp,
    par_filename
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PdfImagePlugin$$$function__1__save_all == cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all);
    cache_frame_frame_PIL$PdfImagePlugin$$$function__1__save_all = NULL;
}

assertFrameObject(frame_frame_PIL$PdfImagePlugin$$$function__1__save_all);

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


static PyObject *impl_PIL$PdfImagePlugin$$$function__2__write_image(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_existing_pdf = python_pars[2];
PyObject *par_image_refs = python_pars[3];
PyObject *var_dict_obj = NULL;
PyObject *var_filter = NULL;
PyObject *var_params = NULL;
PyObject *var_decode = NULL;
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *var_decode_filter = NULL;
PyObject *var_procset = NULL;
PyObject *var_palette = NULL;
PyObject *var_smask = NULL;
PyObject *var_image_ref = NULL;
PyObject *var_msg = NULL;
PyObject *var_op = NULL;
PyObject *var_JpegImagePlugin = NULL;
PyObject *var_Jpeg2KImagePlugin = NULL;
PyObject *var_stream = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PdfImagePlugin$$$function__2__write_image;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_params;
    var_params = tmp_assign_source_1;
    Py_INCREF(var_params);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
{
    PyObject *old = var_decode;
    var_decode = tmp_assign_source_2;
    Py_INCREF(var_decode);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image)) {
    Py_XDECREF(cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image = MAKE_FUNCTION_FRAME(tstate, code_objects_2557cecb84893173b58190ca1aea0572, module_PIL$PdfImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_type_description == NULL);
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image = cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PdfImagePlugin$$$function__2__write_image);
assert(Py_REFCNT(frame_frame_PIL$PdfImagePlugin$$$function__2__write_image) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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



exception_lineno = 67;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_6;
    Py_INCREF(var_width);
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
    PyObject *old = var_height;
    var_height = tmp_assign_source_7;
    Py_INCREF(var_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = DICT_COPY(tstate, mod_consts.const_dict_263e96889f94ed65e7165e4e2d8f776c);
{
    PyObject *old = var_dict_obj;
    var_dict_obj = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_PIL$PdfImagePlugin$features(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_features);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 71;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_check,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_libtiff_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 71;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_CCITTFaxDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_9;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
tmp_dictset_value = const_int_pos_1;
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_BitsPerComponent;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_3 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PdfArray);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 76;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_K;
tmp_dict_value_1 = const_int_neg_1;
tmp_args_element_value_2 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_BlackIs1;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Columns;
CHECK_OBJECT(var_width);
tmp_dict_value_1 = var_width;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Rows;
CHECK_OBJECT(var_height);
tmp_dict_value_1 = var_height;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 76;
tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_PdfDict, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 76;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 74;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_params;
    assert(old != NULL);
    var_params = tmp_assign_source_10;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_str_plain_DCTDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_11;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 88;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_DeviceGray_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_ColorSpace;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_plain_ImageB;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_12;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_im);
tmp_expression_value_4 = par_im;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_L;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_plain_DCTDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_13;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 93;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_DeviceGray_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_ColorSpace;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_plain_ImageB;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_14;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_im);
tmp_expression_value_5 = par_im;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_LA;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_plain_JPXDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_15;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_plain_ImageB;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_16;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
tmp_dictset_value = const_int_pos_1;
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_SMaskInData;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_im);
tmp_expression_value_6 = par_im;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_P;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_plain_ASCIIHexDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_17;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(par_im);
tmp_called_instance_5 = par_im;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 102;
tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_getpalette);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_palette);
tmp_cmp_expr_left_5 = var_palette;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_1;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 103;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_list_element_2;
PyObject *tmp_called_instance_6;
tmp_called_instance_6 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 105;
tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_Indexed_tuple, 0)
);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_called_instance_7;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_3;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
tmp_called_instance_7 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 106;
tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_DeviceRGB_tuple, 0)
);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
CHECK_OBJECT(var_palette);
tmp_len_arg_1 = var_palette;
tmp_floordiv_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_3;
tmp_sub_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
tmp_sub_expr_right_1 = 1;
tmp_list_element_2 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_list_element_2 == NULL));
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
tmp_called_instance_8 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
CHECK_OBJECT(var_palette);
tmp_args_element_value_3 = var_palette;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 108;
tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_PdfBinary, tmp_args_element_value_3);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_ColorSpace;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_plain_ImageI;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_19;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_7;
tmp_cmp_expr_left_6 = mod_consts.const_str_plain_transparency;
CHECK_OBJECT(par_im);
tmp_expression_value_7 = par_im;
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_9;
PyObject *tmp_called_instance_10;
CHECK_OBJECT(par_im);
tmp_called_instance_10 = par_im;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 113;
tmp_called_instance_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_LA_tuple, 0)
);

if (tmp_called_instance_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 113;
tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_getchannel,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_A_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_smask;
    var_smask = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(var_smask);
tmp_ass_attr_target_1 = var_smask;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_encoderinfo, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_subscript_value_1;
tmp_called_value_2 = module_var_accessor_PIL$PdfImagePlugin$_write_image(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__write_image);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_smask);
tmp_args_element_value_4 = var_smask;
CHECK_OBJECT(par_filename);
tmp_args_element_value_5 = par_filename;
CHECK_OBJECT(par_existing_pdf);
tmp_args_element_value_6 = par_existing_pdf;
CHECK_OBJECT(par_image_refs);
tmp_args_element_value_7 = par_image_refs;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_image_ref;
    var_image_ref = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(var_image_ref);
tmp_dictset_value = var_image_ref;
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_SMask;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_7:;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_im);
tmp_expression_value_9 = par_im;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_RGB;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_plain_DCTDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_22;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_11;
tmp_called_instance_11 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 120;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_11,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_DeviceRGB_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_ColorSpace;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_plain_ImageC;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_23;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_im);
tmp_expression_value_10 = par_im;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_RGBA;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_str_plain_JPXDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_24;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_str_plain_ImageC;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_25;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
tmp_dictset_value = const_int_pos_1;
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_SMaskInData;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_im);
tmp_expression_value_11 = par_im;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_CMYK;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_str_plain_DCTDecode;
{
    PyObject *old = var_decode_filter;
    var_decode_filter = tmp_assign_source_26;
    Py_INCREF(var_decode_filter);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_12;
tmp_called_instance_12 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 128;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_12,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_DeviceCMYK_tuple, 0)
);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dict_obj);
tmp_dictset_dict = var_dict_obj;
tmp_dictset_key = mod_consts.const_str_plain_ColorSpace;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_plain_ImageC;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_27;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_LIST8(tstate, mod_consts.const_list_841024d558cf19cdd5a7cd3847b75dc7_list);
{
    PyObject *old = var_decode;
    assert(old != NULL);
    var_decode = tmp_assign_source_28;
    Py_DECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_25f78f2af888c3ebd2d54d15d704c10d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_im);
tmp_expression_value_12 = par_im;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_mode);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooooooooooo";
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
tmp_assign_source_29 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_29 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 133;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 133;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_10:;
branch_end_9:;
branch_end_8:;
branch_end_5:;
branch_end_4:;
branch_end_3:;
branch_end_1:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_3;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_3 == NULL));
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 138;
tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_op;
    var_op = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_decode_filter);
tmp_cmp_expr_left_10 = var_decode_filter;
tmp_cmp_expr_right_10 = mod_consts.const_str_plain_ASCIIHexDecode;
tmp_condition_result_11 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_list_element_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_16;
tmp_expression_value_13 = module_var_accessor_PIL$PdfImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__save);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_8 = par_im;
CHECK_OBJECT(var_op);
tmp_args_element_value_9 = var_op;
tmp_expression_value_14 = module_var_accessor_PIL$PdfImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__Tile);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = mod_consts.const_str_plain_hex;
tmp_add_expr_left_1 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_im);
tmp_expression_value_15 = par_im;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = const_int_0;
CHECK_OBJECT(par_im);
tmp_expression_value_16 = par_im;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_mode);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_10, 0, tmp_list_element_3);
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_11;
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_decode_filter);
tmp_cmp_expr_left_11 = var_decode_filter;
tmp_cmp_expr_right_11 = mod_consts.const_str_plain_CCITTFaxDecode;
tmp_condition_result_12 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_15;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(par_im);
tmp_expression_value_17 = par_im;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_save);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_op);
tmp_kw_call_arg_value_0_1 = var_op;
tmp_kw_call_arg_value_1_1 = mod_consts.const_str_plain_TIFF;
tmp_kw_call_dict_value_0_1 = mod_consts.const_str_plain_group4;
tmp_expression_value_18 = module_var_accessor_PIL$PdfImagePlugin$math(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 148;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ceil);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 148;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_truediv_expr_left_1 = var_width;
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_8;
tmp_args_element_value_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_called_value_7);

exception_lineno = 148;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 148;
tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 148;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_height);
tmp_mult_expr_right_1 = var_height;
tmp_kw_call_dict_value_1_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 148;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 143;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_compression_str_plain_strip_size_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_12;
branch_no_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_decode_filter);
tmp_cmp_expr_left_12 = var_decode_filter;
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_DCTDecode;
tmp_condition_result_13 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$PdfImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_JpegImagePlugin_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 151;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_JpegImagePlugin,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_JpegImagePlugin);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_JpegImagePlugin;
    var_JpegImagePlugin = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(var_JpegImagePlugin);
tmp_called_instance_13 = var_JpegImagePlugin;
CHECK_OBJECT(par_im);
tmp_args_element_value_16 = par_im;
CHECK_OBJECT(var_op);
tmp_args_element_value_17 = var_op;
CHECK_OBJECT(par_filename);
tmp_args_element_value_18 = par_filename;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 153;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_13,
        mod_consts.const_str_plain__save,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto branch_end_13;
branch_no_13:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_decode_filter);
tmp_cmp_expr_left_13 = var_decode_filter;
tmp_cmp_expr_right_13 = mod_consts.const_str_plain_JPXDecode;
tmp_condition_result_14 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$PdfImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Jpeg2KImagePlugin_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 155;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_Jpeg2KImagePlugin,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Jpeg2KImagePlugin);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_Jpeg2KImagePlugin;
    var_Jpeg2KImagePlugin = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(var_dict_obj);
tmp_dictdel_dict = var_dict_obj;
tmp_dictdel_key = mod_consts.const_str_plain_BitsPerComponent;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_called_instance_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
CHECK_OBJECT(var_Jpeg2KImagePlugin);
tmp_called_instance_14 = var_Jpeg2KImagePlugin;
CHECK_OBJECT(par_im);
tmp_args_element_value_19 = par_im;
CHECK_OBJECT(var_op);
tmp_args_element_value_20 = var_op;
CHECK_OBJECT(par_filename);
tmp_args_element_value_21 = par_filename;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_14,
        mod_consts.const_str_plain__save,
        call_args
    );
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_75ed59d7ab917e59ddb21e20072f2a43;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_decode_filter);
tmp_tuple_element_2 = var_decode_filter;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_assign_source_33 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_33 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 161;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 161;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_14:;
branch_end_13:;
branch_end_12:;
branch_end_11:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_instance_15;
CHECK_OBJECT(var_op);
tmp_called_instance_15 = var_op;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 163;
tmp_assign_source_34 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts.const_str_plain_getvalue);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stream;
    var_stream = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_decode_filter);
tmp_cmp_expr_left_14 = var_decode_filter;
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_CCITTFaxDecode;
tmp_condition_result_15 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_stream);
tmp_expression_value_19 = var_stream;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_8_none_none;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stream;
    assert(old != NULL);
    var_stream = tmp_assign_source_35;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_22;
PyObject *tmp_list_element_4;
PyObject *tmp_called_instance_16;
PyObject *tmp_args_element_value_23;
tmp_expression_value_20 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_PdfArray);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_16 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decode_filter);
tmp_args_element_value_23 = var_decode_filter;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 167;
tmp_list_element_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts.const_str_plain_PdfName, tmp_args_element_value_23);
if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_22, 0, tmp_list_element_4);
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 167;
tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_filter;
    var_filter = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
goto branch_end_15;
branch_no_15:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_instance_17;
PyObject *tmp_args_element_value_24;
tmp_called_instance_17 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decode_filter);
tmp_args_element_value_24 = var_decode_filter;
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 169;
tmp_assign_source_37 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts.const_str_plain_PdfName, tmp_args_element_value_24);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_filter;
    var_filter = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
branch_end_15:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_image_refs);
tmp_expression_value_21 = par_image_refs;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_pop);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 171;
tmp_assign_source_38 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_image_ref;
    var_image_ref = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_22;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_6;
CHECK_OBJECT(par_existing_pdf);
tmp_expression_value_22 = par_existing_pdf;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_write_obj);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_image_ref);
tmp_tuple_element_3 = var_image_ref;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_3);
tmp_dict_key_2 = mod_consts.const_str_plain_stream;
CHECK_OBJECT(var_stream);
tmp_dict_value_2 = var_stream;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 8 );
{
PyObject *tmp_called_instance_18;
PyObject *tmp_called_instance_19;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_Type;
tmp_called_instance_18 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto dict_build_exception_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 175;
tmp_dict_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_18,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_XObject_tuple, 0)
);

if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_Subtype;
tmp_called_instance_19 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "oooooooooooooooooooo";
    goto dict_build_exception_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame.f_lineno = 176;
tmp_dict_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_19,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_Image_tuple, 0)
);

if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_Width;
CHECK_OBJECT(var_width);
tmp_dict_value_2 = var_width;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_Height;
CHECK_OBJECT(var_height);
tmp_dict_value_2 = var_height;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_Filter;
CHECK_OBJECT(var_filter);
tmp_dict_value_2 = var_filter;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_Decode;
CHECK_OBJECT(var_decode);
tmp_dict_value_2 = var_decode;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_DecodeParms;
CHECK_OBJECT(var_params);
tmp_dict_value_2 = var_params;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
Py_DECREF(tmp_direct_call_arg3_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(var_dict_obj);
tmp_direct_call_arg4_1 = var_dict_obj;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_6 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PdfImagePlugin$$$function__2__write_image, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PdfImagePlugin$$$function__2__write_image->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PdfImagePlugin$$$function__2__write_image, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PdfImagePlugin$$$function__2__write_image,
    type_description_1,
    par_im,
    par_filename,
    par_existing_pdf,
    par_image_refs,
    var_dict_obj,
    var_filter,
    var_params,
    var_decode,
    var_width,
    var_height,
    var_decode_filter,
    var_procset,
    var_palette,
    var_smask,
    var_image_ref,
    var_msg,
    var_op,
    var_JpegImagePlugin,
    var_Jpeg2KImagePlugin,
    var_stream
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PdfImagePlugin$$$function__2__write_image == cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image);
    cache_frame_frame_PIL$PdfImagePlugin$$$function__2__write_image = NULL;
}

assertFrameObject(frame_frame_PIL$PdfImagePlugin$$$function__2__write_image);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_image_ref);
tmp_tuple_element_4 = var_image_ref;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_procset);
tmp_tuple_element_4 = var_procset;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_dict_obj);
CHECK_OBJECT(var_dict_obj);
Py_DECREF(var_dict_obj);
var_dict_obj = NULL;
CHECK_OBJECT(var_filter);
CHECK_OBJECT(var_filter);
Py_DECREF(var_filter);
var_filter = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
CHECK_OBJECT(var_decode);
CHECK_OBJECT(var_decode);
Py_DECREF(var_decode);
var_decode = NULL;
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var_height);
CHECK_OBJECT(var_height);
Py_DECREF(var_height);
var_height = NULL;
CHECK_OBJECT(var_decode_filter);
CHECK_OBJECT(var_decode_filter);
Py_DECREF(var_decode_filter);
var_decode_filter = NULL;
CHECK_OBJECT(var_procset);
CHECK_OBJECT(var_procset);
Py_DECREF(var_procset);
var_procset = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_smask);
var_smask = NULL;
CHECK_OBJECT(var_image_ref);
CHECK_OBJECT(var_image_ref);
Py_DECREF(var_image_ref);
var_image_ref = NULL;
CHECK_OBJECT(var_op);
CHECK_OBJECT(var_op);
Py_DECREF(var_op);
var_op = NULL;
Py_XDECREF(var_JpegImagePlugin);
var_JpegImagePlugin = NULL;
Py_XDECREF(var_Jpeg2KImagePlugin);
var_Jpeg2KImagePlugin = NULL;
CHECK_OBJECT(var_stream);
CHECK_OBJECT(var_stream);
Py_DECREF(var_stream);
var_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dict_obj);
var_dict_obj = NULL;
Py_XDECREF(var_filter);
var_filter = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
CHECK_OBJECT(var_decode);
CHECK_OBJECT(var_decode);
Py_DECREF(var_decode);
var_decode = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_decode_filter);
var_decode_filter = NULL;
Py_XDECREF(var_procset);
var_procset = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_smask);
var_smask = NULL;
Py_XDECREF(var_image_ref);
var_image_ref = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_op);
var_op = NULL;
Py_XDECREF(var_JpegImagePlugin);
var_JpegImagePlugin = NULL;
Py_XDECREF(var_Jpeg2KImagePlugin);
var_Jpeg2KImagePlugin = NULL;
Py_XDECREF(var_stream);
var_stream = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_existing_pdf);
Py_DECREF(par_existing_pdf);
CHECK_OBJECT(par_image_refs);
Py_DECREF(par_image_refs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_existing_pdf);
Py_DECREF(par_existing_pdf);
CHECK_OBJECT(par_image_refs);
Py_DECREF(par_image_refs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$PdfImagePlugin$$$function__3__save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *par_save_all = python_pars[3];
PyObject *var_im_pages = NULL;
PyObject *var_is_appending = NULL;
PyObject *var_filename_str = NULL;
PyObject *var_existing_pdf = NULL;
PyObject *var_dpi = NULL;
PyObject *var_x_resolution = NULL;
PyObject *var_y_resolution = NULL;
PyObject *var_info = NULL;
PyObject *var_k = NULL;
PyObject *var_default = NULL;
PyObject *var_v = NULL;
PyObject *var_ims = NULL;
PyObject *var_append_images = NULL;
PyObject *var_append_im = NULL;
PyObject *var_number_of_pages = NULL;
PyObject *var_image_refs = NULL;
PyObject *var_page_refs = NULL;
PyObject *var_contents_refs = NULL;
PyObject *var_im_number_of_pages = NULL;
PyObject *var_i = NULL;
PyObject *var_page_number = NULL;
PyObject *var_im_sequence = NULL;
PyObject *var_image_ref = NULL;
PyObject *var_procset = NULL;
PyObject *var_page_contents = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PdfImagePlugin$$$function__3__save;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save)) {
    Py_XDECREF(cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save = MAKE_FUNCTION_FRAME(tstate, code_objects_75042b07445813b282fa77fda350af31, module_PIL$PdfImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_type_description == NULL);
frame_frame_PIL$PdfImagePlugin$$$function__3__save = cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PdfImagePlugin$$$function__3__save);
assert(Py_REFCNT(frame_frame_PIL$PdfImagePlugin$$$function__3__save) == 2);

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


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 191;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_append_false_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_appending;
    var_is_appending = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_filename);
tmp_isinstance_inst_1 = par_filename;
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_filename);
tmp_expression_value_3 = par_filename;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 192;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_filename);
tmp_assign_source_2 = par_filename;
Py_INCREF(tmp_assign_source_2);
condexpr_end_1:;
{
    PyObject *old = var_filename_str;
    var_filename_str = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_is_appending);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_appending);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_expression_value_4 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_PdfParser);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fp);
tmp_kw_call_value_0_1 = par_fp;
CHECK_OBJECT(var_filename_str);
tmp_kw_call_value_1_1 = var_filename_str;
tmp_kw_call_value_2_1 = mod_consts.const_str_digest_e8f5d73778524447b7d7037d41e7364f;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 194;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_existing_pdf;
    var_existing_pdf = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
tmp_expression_value_5 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_PdfParser);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fp);
tmp_kw_call_value_0_2 = par_fp;
CHECK_OBJECT(var_filename_str);
tmp_kw_call_value_1_2 = var_filename_str;
tmp_kw_call_value_2_2 = mod_consts.const_str_digest_6500339fb9ac37f5860ed740a1224c1b;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 196;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_f_str_plain_filename_str_plain_mode_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_existing_pdf;
    var_existing_pdf = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_im);
tmp_expression_value_7 = par_im;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 198;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_dpi_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dpi;
    var_dpi = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_dpi);
tmp_truth_name_2 = CHECK_IF_TRUE(var_dpi);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_dpi);
tmp_expression_value_8 = var_dpi;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_1, 0);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x_resolution;
    var_x_resolution = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_dpi);
tmp_expression_value_9 = var_dpi;
tmp_subscript_value_2 = const_int_pos_1;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_y_resolution;
    var_y_resolution = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_im);
tmp_expression_value_11 = par_im;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 203;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_resolution_float_72_0_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_assign_unpack_1__assign_source;
    tmp_assign_unpack_1__assign_source = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_9 = tmp_assign_unpack_1__assign_source;
{
    PyObject *old = var_x_resolution;
    var_x_resolution = tmp_assign_source_9;
    Py_INCREF(var_x_resolution);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
{
    PyObject *old = var_y_resolution;
    var_y_resolution = tmp_assign_source_10;
    Py_INCREF(var_y_resolution);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
branch_end_2:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_subscript_value_3;
tmp_dict_key_1 = mod_consts.const_str_plain_title;
CHECK_OBJECT(var_is_appending);
tmp_truth_name_3 = CHECK_IF_TRUE(var_is_appending);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_dict_value_1 = Py_None;
Py_INCREF(tmp_dict_value_1);
goto condexpr_end_2;
condexpr_false_2:;
tmp_expression_value_13 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_splitext);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_filename);
tmp_path_arg_1 = par_filename;
tmp_args_element_value_1 = OS_PATH_BASENAME(tstate, tmp_path_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 207;
tmp_expression_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
tmp_assign_source_11 = _PyDict_NewPresized( 8 );
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_4;
PyObject *tmp_called_instance_1;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_5;
PyObject *tmp_called_instance_2;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_author;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_subject;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_keywords;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_creator;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_producer;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_creationDate;
CHECK_OBJECT(var_is_appending);
tmp_truth_name_4 = CHECK_IF_TRUE(var_is_appending);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_dict_value_1 = Py_None;
Py_INCREF(tmp_dict_value_1);
goto condexpr_end_3;
condexpr_false_3:;
tmp_called_instance_1 = module_var_accessor_PIL$PdfImagePlugin$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 214;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_gmtime);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
condexpr_end_3:;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_modDate;
CHECK_OBJECT(var_is_appending);
tmp_truth_name_5 = CHECK_IF_TRUE(var_is_appending);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_dict_value_1 = Py_None;
Py_INCREF(tmp_dict_value_1);
goto condexpr_end_4;
condexpr_false_4:;
tmp_called_instance_2 = module_var_accessor_PIL$PdfImagePlugin$time(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 215;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_gmtime);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
condexpr_end_4:;
tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_11);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(var_info);
tmp_dict_arg_1 = var_info;
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 217;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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



exception_lineno = 217;
type_description_1 = "ooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_17;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_default;
    var_default = tmp_assign_source_18;
    Py_INCREF(var_default);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_19;
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_k);
tmp_cmp_expr_left_1 = var_k;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_14 = par_im;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_encoderinfo);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_16 = par_im;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_k);
tmp_args_element_value_2 = var_k;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 218;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_5;
condexpr_false_5:;
CHECK_OBJECT(var_default);
tmp_assign_source_19 = var_default;
Py_INCREF(tmp_assign_source_19);
condexpr_end_5:;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_6;
CHECK_OBJECT(var_v);
tmp_truth_name_6 = CHECK_IF_TRUE(var_v);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_v);
tmp_ass_subvalue_1 = var_v;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_17 = var_existing_pdf;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_k);
tmp_expression_value_19 = var_k;
tmp_subscript_value_4 = const_int_0;
tmp_expression_value_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 220;
tmp_add_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_k);
tmp_expression_value_20 = var_k;
tmp_subscript_value_5 = mod_consts.const_slice_int_pos_1_none_none;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_5);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooooooooooooooooooo";
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
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 224;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = par_im;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 224;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 226;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_start_writing);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_3;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 227;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_write_header);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_4;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_6 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 228;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_write_comment,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_fb57b3921a2cdb409513922fffe46ba9_tuple, 0)
);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_list_element_1;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_element_1 = par_im;
tmp_assign_source_20 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_20, 0, tmp_list_element_1);
{
    PyObject *old = var_ims;
    var_ims = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_7;
CHECK_OBJECT(par_save_all);
tmp_truth_name_7 = CHECK_IF_TRUE(par_save_all);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = par_im;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_append_images;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 234;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_append_images;
    var_append_images = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_append_images);
tmp_iter_arg_3 = var_append_images;
tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_23 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 235;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_24 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_append_im;
    var_append_im = tmp_assign_source_24;
    Py_INCREF(var_append_im);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_ass_attr_target_1;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_24 = par_im;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 236;
tmp_ass_attr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_append_im);
tmp_ass_attr_target_1 = var_append_im;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_encoderinfo, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_1 = var_ims;
CHECK_OBJECT(var_append_im);
tmp_item_value_1 = var_append_im;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
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
branch_no_4:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = const_int_0;
{
    PyObject *old = var_number_of_pages;
    var_number_of_pages = tmp_assign_source_25;
    Py_INCREF(var_number_of_pages);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_image_refs;
    var_image_refs = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_page_refs;
    var_page_refs = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_contents_refs;
    var_contents_refs = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iter_arg_4;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 242;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_4 = var_ims;
tmp_assign_source_29 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_30 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_30 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 242;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_31 = tmp_for_loop_3__iter_value;
{
    PyObject *old = par_im;
    par_im = tmp_assign_source_31;
    Py_INCREF(par_im);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = const_int_pos_1;
{
    PyObject *old = var_im_number_of_pages;
    var_im_number_of_pages = tmp_assign_source_32;
    Py_INCREF(var_im_number_of_pages);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_8;
CHECK_OBJECT(par_save_all);
tmp_truth_name_8 = CHECK_IF_TRUE(par_save_all);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_10 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_25 = par_im;
tmp_name_value_1 = mod_consts.const_str_plain_n_frames;
tmp_default_value_1 = const_int_pos_1;
tmp_assign_source_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_im_number_of_pages;
    assert(old != NULL);
    var_im_number_of_pages = tmp_assign_source_33;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_number_of_pages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_number_of_pages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_iadd_expr_left_1 = var_number_of_pages;
CHECK_OBJECT(var_im_number_of_pages);
tmp_iadd_expr_right_1 = var_im_number_of_pages;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_34 = tmp_iadd_expr_left_1;
var_number_of_pages = tmp_assign_source_34;

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_iter_arg_5;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_im_number_of_pages);
tmp_xrange_low_1 = var_im_number_of_pages;
tmp_iter_arg_5 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_35 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_36;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_36 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_36 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 247;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_37 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_37;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_7;
if (var_image_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_26 = var_image_refs;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_append);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (var_existing_pdf == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_instance_7 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 248;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_next_object_id,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 248;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_27;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_28;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_27 = par_im;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_P;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_transparency;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_28 = par_im;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_11 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_29;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_8;
if (var_image_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_29 = var_image_refs;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_append);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (var_existing_pdf == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_instance_8 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 250;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_next_object_id,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 250;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_6:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_9;
if (var_page_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_30 = var_page_refs;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_append);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (var_existing_pdf == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_instance_9 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 252;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_next_object_id,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 252;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_instance_10;
if (var_contents_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contents_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_31 = var_contents_refs;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_append);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (var_existing_pdf == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_instance_10 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 253;
tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_next_object_id,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 253;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_6;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_33 = var_existing_pdf;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_pages);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (var_page_refs == NULL) {
Py_DECREF(tmp_called_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_34 = var_page_refs;
tmp_subscript_value_6 = const_int_neg_1;
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_6, -1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 254;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_4;
loop_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
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

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_called_instance_11;
PyObject *tmp_call_result_10;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_11 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 258;
tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts.const_str_plain_write_catalog);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = const_int_0;
{
    PyObject *old = var_page_number;
    var_page_number = tmp_assign_source_38;
    Py_INCREF(var_page_number);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iter_arg_6;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_6 = var_ims;
tmp_assign_source_39 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_5__for_iterator;
    tmp_for_loop_5__for_iterator = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_40 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_40 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 261;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_assign_source_41 = tmp_for_loop_5__iter_value;
{
    PyObject *old = var_im_sequence;
    var_im_sequence = tmp_assign_source_41;
    Py_INCREF(var_im_sequence);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_9;
PyObject *tmp_called_instance_12;
PyObject *tmp_args_element_value_8;
PyObject *tmp_list_element_2;
CHECK_OBJECT(par_save_all);
tmp_truth_name_9 = CHECK_IF_TRUE(par_save_all);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_12 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
tmp_called_instance_12 = module_var_accessor_PIL$PdfImagePlugin$ImageSequence(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageSequence);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_im_sequence);
tmp_args_element_value_8 = var_im_sequence;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 263;
tmp_assign_source_42 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_Iterator, tmp_args_element_value_8);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto condexpr_end_6;
condexpr_false_6:;
CHECK_OBJECT(var_im_sequence);
tmp_list_element_2 = var_im_sequence;
tmp_assign_source_42 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_42, 0, tmp_list_element_2);
condexpr_end_6:;
{
    PyObject *old = var_im_pages;
    var_im_pages = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(var_im_pages);
tmp_iter_arg_7 = var_im_pages;
tmp_assign_source_43 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_6__for_iterator;
    tmp_for_loop_6__for_iterator = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
tmp_next_source_6 = tmp_for_loop_6__for_iterator;
tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_44 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 265;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_6__iter_value;
    tmp_for_loop_6__iter_value = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_for_loop_6__iter_value);
tmp_assign_source_45 = tmp_for_loop_6__iter_value;
{
    PyObject *old = par_im;
    par_im = tmp_assign_source_45;
    Py_INCREF(par_im);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_8;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_17 = module_var_accessor_PIL$PdfImagePlugin$_write_image(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__write_image);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_9 = par_im;
if (par_filename == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_10 = par_filename;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_11 = var_existing_pdf;
if (var_image_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_12 = var_image_refs;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 266;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_17, call_args);
}

if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_48;
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



exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_10;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_49 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_image_ref;
    var_image_ref = tmp_assign_source_49;
    Py_INCREF(var_image_ref);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_50 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_procset;
    var_procset = tmp_assign_source_50;
    Py_INCREF(var_procset);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_7;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_37;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_list_element_3;
PyObject *tmp_called_instance_13;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_list_element_4;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_8;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_35 = var_existing_pdf;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_write_page);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_page_refs == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_36 = var_page_refs;
if (var_page_number == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_number);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_subscript_value_7 = var_page_number;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_7);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_37 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_PdfDict);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_called_instance_13 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_called_value_19);

exception_lineno = 274;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 274;
tmp_list_element_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_13,
    mod_consts.const_str_plain_PdfName,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PDF_tuple, 0)
);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_called_value_19);

exception_lineno = 274;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_kw_call_value_0_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_14;
PyObject *tmp_args_element_value_13;
PyList_SET_ITEM(tmp_kw_call_value_0_3, 0, tmp_list_element_3);
tmp_called_instance_14 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_called_instance_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_called_instance_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_1;
}
CHECK_OBJECT(var_procset);
tmp_args_element_value_13 = var_procset;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 274;
tmp_list_element_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts.const_str_plain_PdfName, tmp_args_element_value_13);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_kw_call_value_0_3, 1, tmp_list_element_3);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_kw_call_value_0_3);
goto try_except_handler_9;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_expression_value_38 = module_var_accessor_PIL$PdfImagePlugin$PdfParser(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PdfParser);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_PdfDict);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_image_ref);
tmp_kw_call_value_0_4 = var_image_ref;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 275;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

    tmp_kw_call_value_1_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, kw_values, mod_consts.const_tuple_str_plain_image_tuple);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 273;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

    tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_19, kw_values, mod_consts.const_tuple_str_plain_ProcSet_str_plain_XObject_tuple);
}

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_3);
Py_DECREF(tmp_kw_call_value_1_3);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_list_element_4 = const_int_0;
tmp_kw_call_dict_value_1_1 = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_39;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_40;
PyList_SET_ITEM0(tmp_kw_call_dict_value_1_1, 0, tmp_list_element_4);
tmp_list_element_4 = const_int_0;
PyList_SET_ITEM0(tmp_kw_call_dict_value_1_1, 1, tmp_list_element_4);
CHECK_OBJECT(par_im);
tmp_expression_value_39 = par_im;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_width);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
tmp_mult_expr_right_1 = mod_consts.const_float_72_0;
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
if (var_x_resolution == NULL) {
Py_DECREF(tmp_truediv_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x_resolution);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}

tmp_truediv_expr_right_1 = var_x_resolution;
tmp_list_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_kw_call_dict_value_1_1, 2, tmp_list_element_4);
CHECK_OBJECT(par_im);
tmp_expression_value_40 = par_im;
tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_height);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
tmp_mult_expr_right_2 = mod_consts.const_float_72_0;
tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
if (var_y_resolution == NULL) {
Py_DECREF(tmp_truediv_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_y_resolution);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}

tmp_truediv_expr_right_2 = var_y_resolution;
tmp_list_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_kw_call_dict_value_1_1, 3, tmp_list_element_4);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
goto try_except_handler_9;
// Finished with no exception for list_build:
list_build_no_exception_2:;
if (var_contents_refs == NULL) {
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contents_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_41 = var_contents_refs;
if (var_page_number == NULL) {
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_number);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_subscript_value_8 = var_page_number;
tmp_kw_call_dict_value_2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_8);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 271;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts.const_tuple_str_plain_Resources_str_plain_MediaBox_str_plain_Contents_tuple);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_42;
tmp_mod_expr_left_1 = mod_consts.const_bytes_digest_e4e807518027307056803ec8eb18c943;
CHECK_OBJECT(par_im);
tmp_expression_value_42 = par_im;
tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_width);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_mult_expr_right_3 = mod_consts.const_float_72_0;
tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_x_resolution == NULL) {
Py_DECREF(tmp_truediv_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x_resolution);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_truediv_expr_right_3 = var_x_resolution;
tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_43;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_im);
tmp_expression_value_43 = par_im;
tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_height);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_mult_expr_right_4 = mod_consts.const_float_72_0;
tmp_truediv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
if (var_y_resolution == NULL) {
Py_DECREF(tmp_truediv_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_y_resolution);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_truediv_expr_right_4 = var_y_resolution;
tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_51 = BINARY_OPERATION_MOD_OBJECT_BYTES_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_page_contents;
    var_page_contents = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_44;
PyObject *tmp_call_result_12;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_9;
PyObject *tmp_kw_call_dict_value_0_2;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_44 = var_existing_pdf;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_write_obj);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_contents_refs == NULL) {
Py_DECREF(tmp_called_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contents_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_45 = var_contents_refs;
if (var_page_number == NULL) {
Py_DECREF(tmp_called_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_number);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_subscript_value_9 = var_page_number;
tmp_kw_call_arg_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_9);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_page_contents);
tmp_kw_call_dict_value_0_2 = var_page_contents;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 294;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts.const_tuple_str_plain_stream_tuple);
}

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_page_number == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_page_number);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_iadd_expr_left_2 = var_page_number;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_52 = tmp_iadd_expr_left_2;
var_page_number = tmp_assign_source_52;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_6;
loop_end_6:;
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_8;
// End of try:
try_end_9:;
Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_5;
loop_end_5:;
goto try_end_10;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
{
PyObject *tmp_called_instance_15;
PyObject *tmp_call_result_13;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 300;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_15 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 300;
tmp_call_result_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts.const_str_plain_write_xref_and_trailer);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
{
bool tmp_condition_result_13;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(par_fp);
tmp_expression_value_46 = par_fp;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain_flush);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_16;
PyObject *tmp_call_result_14;
CHECK_OBJECT(par_fp);
tmp_called_instance_16 = par_fp;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 302;
tmp_call_result_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts.const_str_plain_flush);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
branch_no_7:;
{
PyObject *tmp_called_instance_17;
PyObject *tmp_call_result_15;
if (var_existing_pdf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_existing_pdf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_17 = var_existing_pdf;
frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame.f_lineno = 303;
tmp_call_result_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, const_str_plain_close);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PdfImagePlugin$$$function__3__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PdfImagePlugin$$$function__3__save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PdfImagePlugin$$$function__3__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PdfImagePlugin$$$function__3__save,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    par_save_all,
    var_im_pages,
    var_is_appending,
    var_filename_str,
    var_existing_pdf,
    var_dpi,
    var_x_resolution,
    var_y_resolution,
    var_info,
    var_k,
    var_default,
    var_v,
    var_ims,
    var_append_images,
    var_append_im,
    var_number_of_pages,
    var_image_refs,
    var_page_refs,
    var_contents_refs,
    var_im_number_of_pages,
    var_i,
    var_page_number,
    var_im_sequence,
    var_image_ref,
    var_procset,
    var_page_contents
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PdfImagePlugin$$$function__3__save == cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save);
    cache_frame_frame_PIL$PdfImagePlugin$$$function__3__save = NULL;
}

assertFrameObject(frame_frame_PIL$PdfImagePlugin$$$function__3__save);

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
Py_XDECREF(var_im_pages);
var_im_pages = NULL;
CHECK_OBJECT(var_is_appending);
CHECK_OBJECT(var_is_appending);
Py_DECREF(var_is_appending);
var_is_appending = NULL;
CHECK_OBJECT(var_filename_str);
CHECK_OBJECT(var_filename_str);
Py_DECREF(var_filename_str);
var_filename_str = NULL;
Py_XDECREF(var_existing_pdf);
var_existing_pdf = NULL;
CHECK_OBJECT(var_dpi);
CHECK_OBJECT(var_dpi);
Py_DECREF(var_dpi);
var_dpi = NULL;
Py_XDECREF(var_x_resolution);
var_x_resolution = NULL;
Py_XDECREF(var_y_resolution);
var_y_resolution = NULL;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_default);
var_default = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_append_images);
var_append_images = NULL;
Py_XDECREF(var_append_im);
var_append_im = NULL;
Py_XDECREF(var_number_of_pages);
var_number_of_pages = NULL;
Py_XDECREF(var_image_refs);
var_image_refs = NULL;
Py_XDECREF(var_page_refs);
var_page_refs = NULL;
Py_XDECREF(var_contents_refs);
var_contents_refs = NULL;
Py_XDECREF(var_im_number_of_pages);
var_im_number_of_pages = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_page_number);
var_page_number = NULL;
Py_XDECREF(var_im_sequence);
var_im_sequence = NULL;
Py_XDECREF(var_image_ref);
var_image_ref = NULL;
Py_XDECREF(var_procset);
var_procset = NULL;
Py_XDECREF(var_page_contents);
var_page_contents = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_im);
par_im = NULL;
Py_XDECREF(var_im_pages);
var_im_pages = NULL;
Py_XDECREF(var_is_appending);
var_is_appending = NULL;
Py_XDECREF(var_filename_str);
var_filename_str = NULL;
Py_XDECREF(var_existing_pdf);
var_existing_pdf = NULL;
Py_XDECREF(var_dpi);
var_dpi = NULL;
Py_XDECREF(var_x_resolution);
var_x_resolution = NULL;
Py_XDECREF(var_y_resolution);
var_y_resolution = NULL;
Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_default);
var_default = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_append_images);
var_append_images = NULL;
Py_XDECREF(var_append_im);
var_append_im = NULL;
Py_XDECREF(var_number_of_pages);
var_number_of_pages = NULL;
Py_XDECREF(var_image_refs);
var_image_refs = NULL;
Py_XDECREF(var_page_refs);
var_page_refs = NULL;
Py_XDECREF(var_contents_refs);
var_contents_refs = NULL;
Py_XDECREF(var_im_number_of_pages);
var_im_number_of_pages = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_page_number);
var_page_number = NULL;
Py_XDECREF(var_im_sequence);
var_im_sequence = NULL;
Py_XDECREF(var_image_ref);
var_image_ref = NULL;
Py_XDECREF(var_procset);
var_procset = NULL;
Py_XDECREF(var_page_contents);
var_page_contents = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
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



static PyObject *MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__1__save_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PdfImagePlugin$$$function__1__save_all,
        mod_consts.const_str_plain__save_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_865169dd233f4986e8423307d2f979a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PdfImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__2__write_image(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PdfImagePlugin$$$function__2__write_image,
        mod_consts.const_str_plain__write_image,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2557cecb84893173b58190ca1aea0572,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PdfImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__3__save(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PdfImagePlugin$$$function__3__save,
        mod_consts.const_str_plain__save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_75042b07445813b282fa77fda350af31,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PdfImagePlugin,
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

static function_impl_code const function_table_PIL$PdfImagePlugin[] = {
impl_PIL$PdfImagePlugin$$$function__1__save_all,
impl_PIL$PdfImagePlugin$$$function__2__write_image,
impl_PIL$PdfImagePlugin$$$function__3__save,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$PdfImagePlugin);
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
        module_PIL$PdfImagePlugin,
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
        function_table_PIL$PdfImagePlugin,
        sizeof(function_table_PIL$PdfImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.PdfImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$PdfImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$PdfImagePlugin");

    // Store the module for future use.
    module_PIL$PdfImagePlugin = module;

    moduledict_PIL$PdfImagePlugin = MODULE_DICT(module_PIL$PdfImagePlugin);

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
        PRINT_STRING("PIL$PdfImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$PdfImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$PdfImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PdfImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$PdfImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$PdfImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$PdfImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$PdfImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PdfImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PdfImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$PdfImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$PdfImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PdfImagePlugin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$PdfImagePlugin = MAKE_MODULE_FRAME(code_objects_0433a348eed728c1e6ba6409103f84c0, module_PIL$PdfImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PdfImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$PdfImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$PdfImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$PdfImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$PdfImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 25;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$PdfImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 27;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_9);
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
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$PdfImagePlugin;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_bf57ce8a949b6dd6da532dc34d21c80a_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 30;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_ImageSequence,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ImageSequence);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_PdfParser,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PdfParser);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PdfParser, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_PIL$PdfImagePlugin,
        mod_consts.const_str_plain_features,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_features);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_features, tmp_assign_source_18);
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
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_19 = MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__1__save_all(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a6c55e23e54c7a12f70ae8f29ef61be1);

tmp_assign_source_20 = MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__2__write_image(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__write_image, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$PdfImagePlugin$$$function__3__save(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save, tmp_assign_source_21);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_PIL$PdfImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_register_save);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_PDF;
tmp_args_element_value_2 = module_var_accessor_PIL$PdfImagePlugin$_save(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 310;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 310;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_PIL$PdfImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_register_save_all);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_PDF;
tmp_args_element_value_4 = module_var_accessor_PIL$PdfImagePlugin$_save_all(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save_all);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 311;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
tmp_called_instance_1 = module_var_accessor_PIL$PdfImagePlugin$Image(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 313;
tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_register_extension,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PDF_str_digest_95b5a35bf65b30dbf9ed0eb8d4519976_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
tmp_called_instance_2 = module_var_accessor_PIL$PdfImagePlugin$Image(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PdfImagePlugin->m_frame.f_lineno = 315;
tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_register_mime,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PDF_str_digest_d5c187b86dc6b4ec38f0ddb9c3eb9233_tuple, 0)
);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PdfImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PdfImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PdfImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$PdfImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$PdfImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PdfImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$PdfImagePlugin);
    return module_PIL$PdfImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PdfImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$PdfImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
