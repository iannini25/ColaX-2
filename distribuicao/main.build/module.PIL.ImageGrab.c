/* Generated code for Python module 'PIL$ImageGrab'
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



/* The "module_PIL$ImageGrab" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageGrab;
PyDictObject *moduledict_PIL$ImageGrab;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Image;
PyObject *const_str_plain_core;
PyObject *const_str_plain_grabscreen_win32;
PyObject *const_str_plain_frombytes;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_BGR;
PyObject *const_int_pos_3;
PyObject *const_int_neg_4;
PyObject *const_str_plain_crop;
PyObject *const_str_plain_HAVE_XCB;
PyObject *const_str_digest_0776e21e1db0c3c8c9e402394e345400;
PyObject *const_str_plain_grabscreen_x11;
PyObject *const_str_plain_BGRX;
PyObject *const_int_pos_4;
PyObject *const_str_plain_grabclipboard_win32;
PyObject *const_str_plain_struct;
PyObject *const_str_plain_unpack_from;
PyObject *const_str_plain_I;
PyObject *const_int_pos_16;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_mbcs_tuple;
PyObject *const_tuple_str_null_tuple;
PyObject *const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple;
PyObject *const_str_plain_index;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_png;
PyObject *const_tuple_str_plain_PngImagePlugin_tuple;
PyObject *const_str_plain_PngImagePlugin;
PyObject *const_str_plain_PngImageFile;
PyObject *const_str_plain_DIB;
PyObject *const_tuple_str_plain_BmpImagePlugin_tuple;
PyObject *const_str_plain_BmpImagePlugin;
PyObject *const_str_plain_DibImageFile;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_plain_os;
PyObject *const_str_plain_shutil;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_tempfile;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_tuple_none_false_false_none_none_tuple;
PyObject *const_dict_091ba4a974d7e29519f57a3e76fa24c2;
PyObject *const_dict_250f785f17d65377d8e494913afa85c3;
PyObject *const_str_plain_grab;
PyObject *const_dict_4b637caedae863e48115bf478a68b499;
PyObject *const_str_plain_grabclipboard;
PyObject *const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5;
PyObject *const_str_digest_a952137f85c339bcf8d089f95dbfd25b;
PyObject *const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple;
PyObject *const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageGrab"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 56) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 56 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageGrab"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_core", mod_consts.const_str_plain_core);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabscreen_win32", mod_consts.const_str_plain_grabscreen_win32);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_grabscreen_win32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frombytes", mod_consts.const_str_plain_frombytes);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_frombytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGR", mod_consts.const_str_plain_BGR);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_BGR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_neg_4", mod_consts.const_int_neg_4);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_neg_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crop", mod_consts.const_str_plain_crop);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_crop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAVE_XCB", mod_consts.const_str_plain_HAVE_XCB);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_HAVE_XCB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400", mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabscreen_x11", mod_consts.const_str_plain_grabscreen_x11);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_grabscreen_x11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGRX", mod_consts.const_str_plain_BGRX);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_BGRX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabclipboard_win32", mod_consts.const_str_plain_grabclipboard_win32);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_grabclipboard_win32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_struct", mod_consts.const_str_plain_struct);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_struct);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpack_from", mod_consts.const_str_plain_unpack_from);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpack_from);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_I", mod_consts.const_str_plain_I);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_I);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mbcs_tuple", mod_consts.const_tuple_str_plain_mbcs_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mbcs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_null_tuple", mod_consts.const_tuple_str_null_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_null_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple", mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_index", mod_consts.const_str_plain_index);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_empty_tuple", mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_png", mod_consts.const_str_plain_png);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_png);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PngImagePlugin_tuple", mod_consts.const_tuple_str_plain_PngImagePlugin_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PngImagePlugin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PngImagePlugin", mod_consts.const_str_plain_PngImagePlugin);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_PngImagePlugin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PngImageFile", mod_consts.const_str_plain_PngImageFile);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PngImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIB", mod_consts.const_str_plain_DIB);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple", mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BmpImagePlugin", mod_consts.const_str_plain_BmpImagePlugin);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BmpImagePlugin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DibImageFile", mod_consts.const_str_plain_DibImageFile);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_DibImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shutil", mod_consts.const_str_plain_shutil);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_shutil);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subprocess", mod_consts.const_str_plain_subprocess);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tempfile", mod_consts.const_str_plain_tempfile);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_false_false_none_none_tuple", mod_consts.const_tuple_none_false_false_none_none_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_false_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2", mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_250f785f17d65377d8e494913afa85c3", mod_consts.const_dict_250f785f17d65377d8e494913afa85c3);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_250f785f17d65377d8e494913afa85c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grab", mod_consts.const_str_plain_grab);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_grab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4b637caedae863e48115bf478a68b499", mod_consts.const_dict_4b637caedae863e48115bf478a68b499);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_4b637caedae863e48115bf478a68b499);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabclipboard", mod_consts.const_str_plain_grabclipboard);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_grabclipboard);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5", mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b", mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple", mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple", mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple);
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
void checkModuleConstants_PIL$ImageGrab(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_core", mod_consts.const_str_plain_core);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_core) && "mod_consts.const_str_plain_core");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabscreen_win32", mod_consts.const_str_plain_grabscreen_win32);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_grabscreen_win32) && "mod_consts.const_str_plain_grabscreen_win32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frombytes", mod_consts.const_str_plain_frombytes);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_frombytes) && "mod_consts.const_str_plain_frombytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGR", mod_consts.const_str_plain_BGR);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_BGR) && "mod_consts.const_str_plain_BGR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_neg_4", mod_consts.const_int_neg_4);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_neg_4) && "mod_consts.const_int_neg_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crop", mod_consts.const_str_plain_crop);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_crop) && "mod_consts.const_str_plain_crop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAVE_XCB", mod_consts.const_str_plain_HAVE_XCB);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_HAVE_XCB) && "mod_consts.const_str_plain_HAVE_XCB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400", mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400) && "mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabscreen_x11", mod_consts.const_str_plain_grabscreen_x11);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_grabscreen_x11) && "mod_consts.const_str_plain_grabscreen_x11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGRX", mod_consts.const_str_plain_BGRX);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_BGRX) && "mod_consts.const_str_plain_BGRX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabclipboard_win32", mod_consts.const_str_plain_grabclipboard_win32);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_grabclipboard_win32) && "mod_consts.const_str_plain_grabclipboard_win32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_struct", mod_consts.const_str_plain_struct);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_struct) && "mod_consts.const_str_plain_struct");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpack_from", mod_consts.const_str_plain_unpack_from);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpack_from) && "mod_consts.const_str_plain_unpack_from");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_I", mod_consts.const_str_plain_I);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_I) && "mod_consts.const_str_plain_I");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mbcs_tuple", mod_consts.const_tuple_str_plain_mbcs_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mbcs_tuple) && "mod_consts.const_tuple_str_plain_mbcs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_null_tuple", mod_consts.const_tuple_str_null_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_null_tuple) && "mod_consts.const_tuple_str_null_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple", mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple) && "mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_index", mod_consts.const_str_plain_index);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_index) && "mod_consts.const_str_plain_index");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_empty_tuple", mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple) && "mod_consts.const_tuple_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO) && "mod_consts.const_str_plain_BytesIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_png", mod_consts.const_str_plain_png);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_png) && "mod_consts.const_str_plain_png");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PngImagePlugin_tuple", mod_consts.const_tuple_str_plain_PngImagePlugin_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PngImagePlugin_tuple) && "mod_consts.const_tuple_str_plain_PngImagePlugin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PngImagePlugin", mod_consts.const_str_plain_PngImagePlugin);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_PngImagePlugin) && "mod_consts.const_str_plain_PngImagePlugin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PngImageFile", mod_consts.const_str_plain_PngImageFile);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PngImageFile) && "mod_consts.const_str_plain_PngImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIB", mod_consts.const_str_plain_DIB);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIB) && "mod_consts.const_str_plain_DIB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple", mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple) && "mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BmpImagePlugin", mod_consts.const_str_plain_BmpImagePlugin);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BmpImagePlugin) && "mod_consts.const_str_plain_BmpImagePlugin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DibImageFile", mod_consts.const_str_plain_DibImageFile);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_DibImageFile) && "mod_consts.const_str_plain_DibImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_io) && "mod_consts.const_str_plain_io");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shutil", mod_consts.const_str_plain_shutil);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_shutil) && "mod_consts.const_str_plain_shutil");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subprocess", mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess) && "mod_consts.const_str_plain_subprocess");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tempfile", mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile) && "mod_consts.const_str_plain_tempfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple) && "mod_consts.const_tuple_str_plain_Image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_false_false_none_none_tuple", mod_consts.const_tuple_none_false_false_none_none_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_false_none_none_tuple) && "mod_consts.const_tuple_none_false_false_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2", mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2) && "mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_250f785f17d65377d8e494913afa85c3", mod_consts.const_dict_250f785f17d65377d8e494913afa85c3);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_250f785f17d65377d8e494913afa85c3) && "mod_consts.const_dict_250f785f17d65377d8e494913afa85c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grab", mod_consts.const_str_plain_grab);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_grab) && "mod_consts.const_str_plain_grab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4b637caedae863e48115bf478a68b499", mod_consts.const_dict_4b637caedae863e48115bf478a68b499);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_4b637caedae863e48115bf478a68b499) && "mod_consts.const_dict_4b637caedae863e48115bf478a68b499");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grabclipboard", mod_consts.const_str_plain_grabclipboard);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_grabclipboard) && "mod_consts.const_str_plain_grabclipboard");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5", mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5) && "mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b", mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b) && "mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple", mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple) && "mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple", mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple) && "mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_PIL$ImageGrab$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageGrab->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageGrab->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageGrab->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageGrab$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageGrab->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageGrab->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageGrab->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_43d3d9189e7a9db505fbabd012a12ef7;
static PyCodeObject *code_objects_063da12980627ff133f682aed39f0678;
static PyCodeObject *code_objects_7d1834608563da1a1138bb0fb93a3a50;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7c4eeeb4d39137fa99e170d9a06deac5); CHECK_OBJECT(module_filename_obj);
code_objects_43d3d9189e7a9db505fbabd012a12ef7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b, mod_consts.const_str_digest_a952137f85c339bcf8d089f95dbfd25b, NULL, NULL, 0, 0, 0);
code_objects_063da12980627ff133f682aed39f0678 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_grab, mod_consts.const_str_plain_grab, mod_consts.const_tuple_fc19f805c60ec8c499a566aef8ebbc39_tuple, NULL, 5, 1, 0);
code_objects_7d1834608563da1a1138bb0fb93a3a50 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_grabclipboard, mod_consts.const_str_plain_grabclipboard, mod_consts.const_tuple_247fda00723fdfccc8c13864ca7d0ed5_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageGrab$$$function__1_grab(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageGrab$$$function__2_grabclipboard(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageGrab$$$function__1_grab(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_bbox = python_pars[0];
PyObject *par_include_layered_windows = python_pars[1];
PyObject *par_all_screens = python_pars[2];
PyObject *par_xdisplay = python_pars[3];
PyObject *par_window = python_pars[4];
PyObject *par_scale_down = python_pars[5];
PyObject *var_im = NULL;
PyObject *var_display_name = NULL;
PyObject *var_left = NULL;
PyObject *var_top = NULL;
PyObject *var_right = NULL;
PyObject *var_bottom = NULL;
PyObject *var_offset = NULL;
PyObject *var_size = NULL;
PyObject *var_data = NULL;
PyObject *var_x0 = NULL;
PyObject *var_y0 = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__element_3 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__element_2 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
PyObject *tmp_tuple_unpack_7__element_1 = NULL;
PyObject *tmp_tuple_unpack_7__element_2 = NULL;
PyObject *tmp_tuple_unpack_7__element_3 = NULL;
PyObject *tmp_tuple_unpack_7__element_4 = NULL;
PyObject *tmp_tuple_unpack_7__source_iter = NULL;
PyObject *tmp_tuple_unpack_8__element_1 = NULL;
PyObject *tmp_tuple_unpack_8__element_2 = NULL;
PyObject *tmp_tuple_unpack_8__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageGrab$$$function__1_grab;
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
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageGrab$$$function__1_grab = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageGrab$$$function__1_grab)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageGrab$$$function__1_grab);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageGrab$$$function__1_grab == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageGrab$$$function__1_grab = MAKE_FUNCTION_FRAME(tstate, code_objects_063da12980627ff133f682aed39f0678, module_PIL$ImageGrab, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageGrab$$$function__1_grab->m_type_description == NULL);
frame_frame_PIL$ImageGrab$$$function__1_grab = cache_frame_frame_PIL$ImageGrab$$$function__1_grab;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageGrab$$$function__1_grab);
assert(Py_REFCNT(frame_frame_PIL$ImageGrab$$$function__1_grab) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_xdisplay);
tmp_cmp_expr_left_1 = par_xdisplay;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_window);
tmp_cmp_expr_left_2 = par_window;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_neg_1;
{
    PyObject *old = par_all_screens;
    assert(old != NULL);
    par_all_screens = tmp_assign_source_1;
    Py_INCREF(par_all_screens);
    Py_DECREF(old);
}

}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_int_arg_1;
tmp_expression_value_2 = module_var_accessor_PIL$ImageGrab$Image(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_2;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_core);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_grabscreen_win32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_include_layered_windows);
tmp_args_element_value_1 = par_include_layered_windows;
CHECK_OBJECT(par_all_screens);
tmp_args_element_value_2 = par_all_screens;
CHECK_OBJECT(par_window);
tmp_cmp_expr_left_3 = par_window;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_window);
tmp_int_arg_1 = par_window;
tmp_args_element_value_3 = PyNumber_Int(tmp_int_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 99;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_args_element_value_3 = const_int_0;
Py_INCREF(tmp_args_element_value_3);
condexpr_end_1:;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 96;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_3;
    tmp_tuple_unpack_5__element_3 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
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

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_6;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_5__element_2;
{
    PyObject *old = var_size;
    var_size = tmp_assign_source_7;
    Py_INCREF(var_size);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_5__element_3;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_8;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_10;
tmp_expression_value_3 = module_var_accessor_PIL$ImageGrab$Image(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_frombytes);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_RGB;
CHECK_OBJECT(var_size);
tmp_args_element_value_5 = var_size;
CHECK_OBJECT(var_data);
tmp_args_element_value_6 = var_data;
tmp_args_element_value_7 = mod_consts.const_str_plain_raw;
tmp_args_element_value_8 = mod_consts.const_str_plain_BGR;
CHECK_OBJECT(var_size);
tmp_expression_value_4 = var_size;
tmp_subscript_value_1 = const_int_0;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 108;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_3;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 108;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_3;
tmp_bitand_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 108;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_neg_4;
tmp_args_element_value_9 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 108;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = const_int_neg_1;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im;
    var_im = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_bbox);
tmp_truth_name_1 = CHECK_IF_TRUE(par_bbox);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_offset);
tmp_iter_arg_2 = var_offset;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_6__source_iter;
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_1;
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_2;
    tmp_tuple_unpack_6__element_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
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

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_6__element_1;
{
    PyObject *old = var_x0;
    var_x0 = tmp_assign_source_13;
    Py_INCREF(var_x0);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_6__element_2;
{
    PyObject *old = var_y0;
    var_y0 = tmp_assign_source_14;
    Py_INCREF(var_y0);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_bbox);
tmp_iter_arg_3 = par_bbox;
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_7__source_iter;
    tmp_tuple_unpack_7__source_iter = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 0, 4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_1;
    tmp_tuple_unpack_7__element_1 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 1, 4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_2;
    tmp_tuple_unpack_7__element_2 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 2, 4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_3;
    tmp_tuple_unpack_7__element_3 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 3, 4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_4;
    tmp_tuple_unpack_7__element_4 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
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

CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_3);
tmp_tuple_unpack_7__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_4);
tmp_tuple_unpack_7__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_7__element_1;
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_20;
    Py_INCREF(var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_7__element_2;
{
    PyObject *old = var_top;
    var_top = tmp_assign_source_21;
    Py_INCREF(var_top);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
tmp_assign_source_22 = tmp_tuple_unpack_7__element_3;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_22;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_3);
tmp_tuple_unpack_7__element_3 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_tuple_unpack_7__element_4);
tmp_assign_source_23 = tmp_tuple_unpack_7__element_4;
{
    PyObject *old = var_bottom;
    var_bottom = tmp_assign_source_23;
    Py_INCREF(var_bottom);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_4);
tmp_tuple_unpack_7__element_4 = NULL;

{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_tuple_element_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_im);
tmp_expression_value_5 = var_im;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_crop);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left);
tmp_sub_expr_left_1 = var_left;
CHECK_OBJECT(var_x0);
tmp_sub_expr_right_1 = var_x0;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 114;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyTuple_SET_ITEM(tmp_args_element_value_11, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_top);
tmp_sub_expr_left_2 = var_top;
CHECK_OBJECT(var_y0);
tmp_sub_expr_right_2 = var_y0;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_11, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_right);
tmp_sub_expr_left_3 = var_right;
CHECK_OBJECT(var_x0);
tmp_sub_expr_right_3 = var_x0;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_11, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_bottom);
tmp_sub_expr_left_4 = var_bottom;
CHECK_OBJECT(var_y0);
tmp_sub_expr_right_4 = var_y0;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_11, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_11);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 114;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im;
    assert(old != NULL);
    var_im = tmp_assign_source_24;
    Py_DECREF(old);
}

}
branch_no_3:;
CHECK_OBJECT(var_im);
tmp_return_value = var_im;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(par_xdisplay);
tmp_assign_source_25 = par_xdisplay;
{
    PyObject *old = var_display_name;
    var_display_name = tmp_assign_source_25;
    Py_INCREF(var_display_name);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_PIL$ImageGrab$Image(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_8;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_core);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_8;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_HAVE_XCB);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_8;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0776e21e1db0c3c8c9e402394e345400;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 121;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
goto try_except_handler_8;
}
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_12;
tmp_expression_value_8 = module_var_accessor_PIL$ImageGrab$Image(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_9;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_core);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_display_name);
tmp_args_element_value_12 = var_display_name;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 122;
tmp_iter_arg_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_grabscreen_x11, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_9;
}
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_8__source_iter;
    tmp_tuple_unpack_8__source_iter = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_1;
    tmp_tuple_unpack_8__element_1 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_2;
    tmp_tuple_unpack_8__element_2 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_8__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
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

CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageGrab$$$function__1_grab, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageGrab$$$function__1_grab, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 148;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame)) {
        frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
goto try_except_handler_11;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 118;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame)) {
        frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
goto try_except_handler_11;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
tmp_assign_source_29 = tmp_tuple_unpack_8__element_1;
{
    PyObject *old = var_size;
    var_size = tmp_assign_source_29;
    Py_INCREF(var_size);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_8__element_2;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_30;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;

{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_19;
tmp_expression_value_9 = module_var_accessor_PIL$ImageGrab$Image(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_frombytes);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = mod_consts.const_str_plain_RGB;
CHECK_OBJECT(var_size);
tmp_args_element_value_14 = var_size;
CHECK_OBJECT(var_data);
tmp_args_element_value_15 = var_data;
tmp_args_element_value_16 = mod_consts.const_str_plain_raw;
tmp_args_element_value_17 = mod_consts.const_str_plain_BGRX;
CHECK_OBJECT(var_size);
tmp_expression_value_10 = var_size;
tmp_subscript_value_2 = const_int_0;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 150;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_2 = mod_consts.const_int_pos_4;
tmp_args_element_value_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 150;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = const_int_pos_1;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im;
    var_im = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
CHECK_OBJECT(par_bbox);
tmp_truth_name_2 = CHECK_IF_TRUE(par_bbox);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_20;
CHECK_OBJECT(var_im);
tmp_called_instance_2 = var_im;
CHECK_OBJECT(par_bbox);
tmp_args_element_value_20 = par_bbox;
frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame.f_lineno = 152;
tmp_assign_source_32 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_crop, tmp_args_element_value_20);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooNNNooooNNNNNNoooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im;
    assert(old != NULL);
    var_im = tmp_assign_source_32;
    Py_DECREF(old);
}

}
branch_no_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageGrab$$$function__1_grab, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageGrab$$$function__1_grab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageGrab$$$function__1_grab, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageGrab$$$function__1_grab,
    type_description_1,
    par_bbox,
    par_include_layered_windows,
    par_all_screens,
    par_xdisplay,
    par_window,
    par_scale_down,
    var_im,
    var_display_name,
    NULL,
    NULL,
    NULL,
    var_left,
    var_top,
    var_right,
    var_bottom,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    var_offset,
    var_size,
    var_data,
    var_x0,
    var_y0,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageGrab$$$function__1_grab == cache_frame_frame_PIL$ImageGrab$$$function__1_grab) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageGrab$$$function__1_grab);
    cache_frame_frame_PIL$ImageGrab$$$function__1_grab = NULL;
}

assertFrameObject(frame_frame_PIL$ImageGrab$$$function__1_grab);

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
Py_XDECREF(par_all_screens);
par_all_screens = NULL;
CHECK_OBJECT(var_im);
CHECK_OBJECT(var_im);
Py_DECREF(var_im);
var_im = NULL;
Py_XDECREF(var_display_name);
var_display_name = NULL;
Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_top);
var_top = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_bottom);
var_bottom = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_x0);
var_x0 = NULL;
Py_XDECREF(var_y0);
var_y0 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_all_screens);
par_all_screens = NULL;
Py_XDECREF(var_im);
var_im = NULL;
Py_XDECREF(var_display_name);
var_display_name = NULL;
Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_top);
var_top = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_bottom);
var_bottom = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_x0);
var_x0 = NULL;
Py_XDECREF(var_y0);
var_y0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bbox);
Py_DECREF(par_bbox);
CHECK_OBJECT(par_include_layered_windows);
Py_DECREF(par_include_layered_windows);
CHECK_OBJECT(par_xdisplay);
Py_DECREF(par_xdisplay);
CHECK_OBJECT(par_window);
Py_DECREF(par_window);
CHECK_OBJECT(par_scale_down);
Py_DECREF(par_scale_down);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bbox);
Py_DECREF(par_bbox);
CHECK_OBJECT(par_include_layered_windows);
Py_DECREF(par_include_layered_windows);
CHECK_OBJECT(par_xdisplay);
Py_DECREF(par_xdisplay);
CHECK_OBJECT(par_window);
Py_DECREF(par_window);
CHECK_OBJECT(par_scale_down);
Py_DECREF(par_scale_down);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageGrab$$$function__2_grabclipboard(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_data = NULL;
PyObject *var_fmt = NULL;
PyObject *var_struct = NULL;
PyObject *var_o = NULL;
PyObject *var_files = NULL;
PyObject *var_PngImagePlugin = NULL;
PyObject *var_BmpImagePlugin = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageGrab$$$function__2_grabclipboard;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard = MAKE_FUNCTION_FRAME(tstate, code_objects_7d1834608563da1a1138bb0fb93a3a50, module_PIL$ImageGrab, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_type_description == NULL);
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard = cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageGrab$$$function__2_grabclipboard);
assert(Py_REFCNT(frame_frame_PIL$ImageGrab$$$function__2_grabclipboard) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageGrab$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_core);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
    goto try_except_handler_2;
}
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 170;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_grabclipboard_win32);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
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



exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
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



exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
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



exception_lineno = 170;
type_description_1 = "NNoooooooNNNNNN";
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
    PyObject *old = var_fmt;
    var_fmt = tmp_assign_source_4;
    Py_INCREF(var_fmt);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_fmt);
tmp_cmp_expr_left_1 = var_fmt;
tmp_cmp_expr_right_1 = const_str_plain_file;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "NNoooooooNNNNNN";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_struct;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 172;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_struct;
    var_struct = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_struct);
tmp_called_instance_2 = var_struct;
tmp_args_element_value_1 = mod_consts.const_str_plain_I;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 174;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_unpack_from,
        call_args
    );
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_o;
    var_o = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_data);
tmp_expression_value_3 = var_data;
tmp_subscript_value_2 = mod_consts.const_int_pos_16;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 16);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "NNoooooooNNNNNN";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_data);
tmp_expression_value_6 = var_data;
CHECK_OBJECT(var_o);
tmp_start_value_1 = var_o;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 176;
tmp_expression_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_mbcs_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 176;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_null_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_files;
    var_files = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
CHECK_OBJECT(var_data);
tmp_expression_value_9 = var_data;
CHECK_OBJECT(var_o);
tmp_start_value_2 = var_o;
tmp_stop_value_2 = Py_None;
tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
assert(!(tmp_subscript_value_4 == NULL));
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 178;
tmp_expression_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_1313659eb556d37f6d4c08b89c10540f_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 178;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_null_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_files;
    var_files = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
PyObject *tmp_stop_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_files);
tmp_expression_value_10 = var_files;
CHECK_OBJECT(var_files);
tmp_expression_value_11 = var_files;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_index);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 179;
tmp_stop_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_5 == NULL));
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_data);
tmp_isinstance_inst_1 = var_data;
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "NNoooooooNNNNNN";
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_6 == NULL));
CHECK_OBJECT(var_data);
tmp_args_element_value_3 = var_data;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 181;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    assert(old != NULL);
    var_data = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_fmt);
tmp_cmp_expr_left_3 = var_fmt;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_png;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "NNoooooooNNNNNN";
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PngImagePlugin_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 183;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageGrab,
        mod_consts.const_str_plain_PngImagePlugin,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PngImagePlugin);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_PngImagePlugin;
    var_PngImagePlugin = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_PngImagePlugin);
tmp_called_instance_3 = var_PngImagePlugin;
CHECK_OBJECT(var_data);
tmp_args_element_value_4 = var_data;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 185;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_PngImageFile, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_fmt);
tmp_cmp_expr_left_4 = var_fmt;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_DIB;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "NNoooooooNNNNNN";
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_BmpImagePlugin_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 187;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$ImageGrab,
        mod_consts.const_str_plain_BmpImagePlugin,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_BmpImagePlugin);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_BmpImagePlugin;
    var_BmpImagePlugin = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_BmpImagePlugin);
tmp_called_instance_4 = var_BmpImagePlugin;
CHECK_OBJECT(var_data);
tmp_args_element_value_5 = var_data;
frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame.f_lineno = 189;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_DibImageFile, tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "NNoooooooNNNNNN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
branch_end_4:;
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageGrab$$$function__2_grabclipboard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageGrab$$$function__2_grabclipboard->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageGrab$$$function__2_grabclipboard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageGrab$$$function__2_grabclipboard,
    type_description_1,
    NULL,
    NULL,
    var_data,
    var_fmt,
    var_struct,
    var_o,
    var_files,
    var_PngImagePlugin,
    var_BmpImagePlugin,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageGrab$$$function__2_grabclipboard == cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard);
    cache_frame_frame_PIL$ImageGrab$$$function__2_grabclipboard = NULL;
}

assertFrameObject(frame_frame_PIL$ImageGrab$$$function__2_grabclipboard);

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
Py_XDECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_fmt);
CHECK_OBJECT(var_fmt);
Py_DECREF(var_fmt);
var_fmt = NULL;
Py_XDECREF(var_struct);
var_struct = NULL;
Py_XDECREF(var_o);
var_o = NULL;
Py_XDECREF(var_files);
var_files = NULL;
Py_XDECREF(var_PngImagePlugin);
var_PngImagePlugin = NULL;
Py_XDECREF(var_BmpImagePlugin);
var_BmpImagePlugin = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_fmt);
var_fmt = NULL;
Py_XDECREF(var_struct);
var_struct = NULL;
Py_XDECREF(var_o);
var_o = NULL;
Py_XDECREF(var_files);
var_files = NULL;
Py_XDECREF(var_PngImagePlugin);
var_PngImagePlugin = NULL;
Py_XDECREF(var_BmpImagePlugin);
var_BmpImagePlugin = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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



static PyObject *MAKE_FUNCTION_PIL$ImageGrab$$$function__1_grab(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageGrab$$$function__1_grab,
        mod_consts.const_str_plain_grab,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_063da12980627ff133f682aed39f0678,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_PIL$ImageGrab,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageGrab$$$function__2_grabclipboard(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageGrab$$$function__2_grabclipboard,
        mod_consts.const_str_plain_grabclipboard,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7d1834608563da1a1138bb0fb93a3a50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageGrab,
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

static function_impl_code const function_table_PIL$ImageGrab[] = {
impl_PIL$ImageGrab$$$function__1_grab,
impl_PIL$ImageGrab$$$function__2_grabclipboard,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageGrab);
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
        module_PIL$ImageGrab,
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
        function_table_PIL$ImageGrab,
        sizeof(function_table_PIL$ImageGrab) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageGrab";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageGrab(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageGrab");

    // Store the module for future use.
    module_PIL$ImageGrab = module;

    moduledict_PIL$ImageGrab = MODULE_DICT(module_PIL$ImageGrab);

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
        PRINT_STRING("PIL$ImageGrab: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageGrab: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageGrab: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageGrab" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageGrab\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageGrab,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageGrab,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageGrab,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageGrab,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageGrab,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageGrab);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageGrab);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_PIL$ImageGrab;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageGrab = MAKE_MODULE_FRAME(code_objects_43d3d9189e7a9db505fbabd012a12ef7, module_PIL$ImageGrab);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageGrab);
assert(Py_REFCNT(frame_frame_PIL$ImageGrab) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageGrab$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageGrab$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageGrab->m_frame.f_lineno = 21;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_shutil, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_PIL$ImageGrab->m_frame.f_lineno = 22;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_PIL$ImageGrab->m_frame.f_lineno = 24;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_PIL$ImageGrab;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Image_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_PIL$ImageGrab->m_frame.f_lineno = 26;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageGrab,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Image);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_12);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageGrab, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageGrab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageGrab, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageGrab);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_false_false_none_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_091ba4a974d7e29519f57a3e76fa24c2);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_250f785f17d65377d8e494913afa85c3);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_14 = MAKE_FUNCTION_PIL$ImageGrab$$$function__1_grab(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_grab, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_4b637caedae863e48115bf478a68b499);

tmp_assign_source_15 = MAKE_FUNCTION_PIL$ImageGrab$$$function__2_grabclipboard(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)mod_consts.const_str_plain_grabclipboard, tmp_assign_source_15);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageGrab", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageGrab" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageGrab);
    return module_PIL$ImageGrab;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageGrab, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageGrab", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
