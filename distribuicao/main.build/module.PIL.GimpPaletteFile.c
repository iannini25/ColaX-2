/* Generated code for Python module 'PIL$GimpPaletteFile'
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



/* The "module_PIL$GimpPaletteFile" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$GimpPaletteFile;
PyDictObject *moduledict_PIL$GimpPaletteFile;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_readline;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple;
PyObject *const_str_digest_e53e300ee4b550ae3bdacd54fb94d896;
PyObject *const_str_plain_i;
PyObject *const_str_plain_fp;
PyObject *const_str_plain_re;
PyObject *const_str_plain_match;
PyObject *const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db;
PyObject *const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f;
PyObject *const_tuple_int_pos_3_tuple;
PyObject *const_tuple_str_plain_maxsplit_tuple;
PyObject *const_str_digest_c243e9d10d7308133be76625fef7b3c1;
PyObject *const_str_plain_palette;
PyObject *const_xrange_0_3;
PyObject *const_str_plain_v;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5;
PyObject *const_str_plain__read;
PyObject *const_str_plain___new__;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_rawmode;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_2d934143132f57b7c59f8aec8816711f;
PyObject *const_str_digest_12a4f5186e00a8671121da3be8270f46;
PyObject *const_str_plain_GimpPaletteFile;
PyObject *const_int_pos_26;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_RGB;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_5152dfabbdf8a57b42db25ab9a2f88b9;
PyObject *const_str_digest_8b2609af419daafd1f76e0703bdedae1;
PyObject *const_dict_c29778f9a3c58155ea4ab135014591d7;
PyObject *const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee;
PyObject *const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2;
PyObject *const_str_plain_frombytes;
PyObject *const_str_digest_4f6e3736ee37445b44900124c47c0dbe;
PyObject *const_dict_df443308a1cec37b92f84c32f9c253f1;
PyObject *const_str_plain_getpalette;
PyObject *const_str_digest_7b287e4db4653929386233ee14401158;
PyObject *const_tuple_str_plain_palette_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_43e5ca40fbb646c7091159010ad6b129;
PyObject *const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple;
PyObject *const_str_digest_5a41b36b835a7f94d39b986cdf77afd7;
PyObject *const_tuple_str_plain_self_str_plain_fp_tuple;
PyObject *const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.GimpPaletteFile"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 52) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 52 values, got %d\n",
                    UN_TRANSLATE("PIL.GimpPaletteFile"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_readline", mod_consts.const_str_plain_readline);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_readline);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple", mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896", mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i", mod_consts.const_str_plain_i);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db", mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f", mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxsplit_tuple", mod_consts.const_tuple_str_plain_maxsplit_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsplit_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1", mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_palette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_3", mod_consts.const_xrange_0_3);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_xrange_0_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_v", mod_consts.const_str_plain_v);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5", mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__read", mod_consts.const_str_plain__read);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__read);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___new__", mod_consts.const_str_plain___new__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rawmode", mod_consts.const_str_plain_rawmode);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_rawmode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f", mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46", mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GimpPaletteFile", mod_consts.const_str_plain_GimpPaletteFile);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_GimpPaletteFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_26);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9", mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1", mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7", mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee", mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2", mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frombytes", mod_consts.const_str_plain_frombytes);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_frombytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe", mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1", mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b287e4db4653929386233ee14401158", mod_consts.const_str_digest_7b287e4db4653929386233ee14401158);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b287e4db4653929386233ee14401158);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_palette_tuple", mod_consts.const_tuple_str_plain_palette_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_palette_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129", mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple", mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7", mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple", mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple", mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_PIL$GimpPaletteFile(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_readline", mod_consts.const_str_plain_readline);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_readline) && "mod_consts.const_str_plain_readline");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple", mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple) && "mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896", mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896) && "mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i", mod_consts.const_str_plain_i);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_i) && "mod_consts.const_str_plain_i");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_match) && "mod_consts.const_str_plain_match");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db", mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db) && "mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f", mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f) && "mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple) && "mod_consts.const_tuple_int_pos_3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxsplit_tuple", mod_consts.const_tuple_str_plain_maxsplit_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsplit_tuple) && "mod_consts.const_tuple_str_plain_maxsplit_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1", mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1) && "mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_palette) && "mod_consts.const_str_plain_palette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_3", mod_consts.const_xrange_0_3);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_xrange_0_3) && "mod_consts.const_xrange_0_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_v", mod_consts.const_str_plain_v);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_v) && "mod_consts.const_str_plain_v");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5", mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5) && "mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__read", mod_consts.const_str_plain__read);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__read) && "mod_consts.const_str_plain__read");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___new__", mod_consts.const_str_plain___new__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__) && "mod_consts.const_str_plain___new__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO) && "mod_consts.const_str_plain_BytesIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rawmode", mod_consts.const_str_plain_rawmode);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_rawmode) && "mod_consts.const_str_plain_rawmode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f", mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f) && "mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46", mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46) && "mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GimpPaletteFile", mod_consts.const_str_plain_GimpPaletteFile);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_GimpPaletteFile) && "mod_consts.const_str_plain_GimpPaletteFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_26) && "mod_consts.const_int_pos_26");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9", mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9) && "mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1", mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1) && "mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7", mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7) && "mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee", mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee) && "mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2", mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2) && "mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frombytes", mod_consts.const_str_plain_frombytes);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_frombytes) && "mod_consts.const_str_plain_frombytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe", mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe) && "mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1", mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1) && "mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b287e4db4653929386233ee14401158", mod_consts.const_str_digest_7b287e4db4653929386233ee14401158);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b287e4db4653929386233ee14401158) && "mod_consts.const_str_digest_7b287e4db4653929386233ee14401158");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_palette_tuple", mod_consts.const_tuple_str_plain_palette_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_palette_tuple) && "mod_consts.const_tuple_str_plain_palette_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129", mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129) && "mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple", mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple) && "mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7", mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7) && "mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple", mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple", mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple) && "mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
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
static PyObject *module_var_accessor_PIL$GimpPaletteFile$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$GimpPaletteFile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$GimpPaletteFile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$GimpPaletteFile->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$GimpPaletteFile$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$GimpPaletteFile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$GimpPaletteFile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$GimpPaletteFile->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_913347b0b2e5d49a63f5048bce109873;
static PyCodeObject *code_objects_fbb3e935c1846f3c3eb1126cecc8ded2;
static PyCodeObject *code_objects_815e0efcb99c1092439c8128db526fa8;
static PyCodeObject *code_objects_dde3667557e5f47f84ae0784487887c6;
static PyCodeObject *code_objects_77a0784a911c2c854e44e5fbc614ca3f;
static PyCodeObject *code_objects_43b6924776158fabe86306cdb84b45d0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_43e5ca40fbb646c7091159010ad6b129); CHECK_OBJECT(module_filename_obj);
code_objects_913347b0b2e5d49a63f5048bce109873 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5, mod_consts.const_tuple_141d0f610dcd9a337d5dd4fac23ec781_tuple, NULL, 1, 0, 0);
code_objects_fbb3e935c1846f3c3eb1126cecc8ded2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7, mod_consts.const_str_digest_5a41b36b835a7f94d39b986cdf77afd7, NULL, NULL, 0, 0, 0);
code_objects_815e0efcb99c1092439c8128db526fa8 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple, NULL, 2, 0, 0);
code_objects_dde3667557e5f47f84ae0784487887c6 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__read, mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1, mod_consts.const_tuple_15d51d82d6df0832c49d35b9dd939af1_tuple, NULL, 3, 0, 0);
code_objects_77a0784a911c2c854e44e5fbc614ca3f = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_frombytes, mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe, mod_consts.const_tuple_str_plain_cls_str_plain_data_str_plain_self_tuple, NULL, 2, 0, 0);
code_objects_43b6924776158fabe86306cdb84b45d0 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getpalette, mod_consts.const_str_digest_7b287e4db4653929386233ee14401158, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__1__read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__3_frombytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__4_getpalette(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$GimpPaletteFile$$$function__1__read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_limit = python_pars[2];
PyObject *var_palette = NULL;
PyObject *var_i = NULL;
PyObject *var_s = NULL;
struct Nuitka_CellObject *var_v = Nuitka_Cell_NewEmpty();
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$GimpPaletteFile$$$function__1__read;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read)) {
    Py_XDECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read = MAKE_FUNCTION_FRAME(tstate, code_objects_dde3667557e5f47f84ae0784487887c6, module_PIL$GimpPaletteFile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_type_description == NULL);
frame_frame_PIL$GimpPaletteFile$$$function__1__read = cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$GimpPaletteFile$$$function__1__read);
assert(Py_REFCNT(frame_frame_PIL$GimpPaletteFile$$$function__1__read) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_fp);
tmp_called_instance_1 = par_fp;
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 32;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_readline);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 32;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_digest_6aa1b9342c341e4f2a57f01534ca6981_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooNooc";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e53e300ee4b550ae3bdacd54fb94d896;
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 34;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 34;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooNooc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_2;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
loop_start_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(par_limit);
tmp_truth_name_1 = CHECK_IF_TRUE(par_limit);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 39;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_i;
tmp_cmp_expr_right_1 = 259;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 42;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_i;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_3 = tmp_iadd_expr_left_1;
var_i = tmp_assign_source_3;

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
if (par_fp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = par_fp;
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 43;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_readline);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_s;
    var_s = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_s);
tmp_operand_value_2 = var_s;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooNooc";
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
tmp_called_instance_3 = module_var_accessor_PIL$GimpPaletteFile$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_bytes_digest_f0ec10d9dcadf82877cf531fb721c9db;
CHECK_OBJECT(var_s);
tmp_args_element_value_2 = var_s;
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 48;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_start_1;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_right_value_2_cbool_1;
CHECK_OBJECT(par_limit);
tmp_truth_name_3 = CHECK_IF_TRUE(par_limit);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_s);
tmp_len_arg_1 = var_s;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 100;
tmp_tmp_and_right_value_2_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_right_value_2 = tmp_tmp_and_right_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_d5fd04dedd0c85d3e5ecf7d4bee2253f;
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 52;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 52;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooNooc";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_s);
tmp_expression_value_2 = var_s;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 54;
tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0), mod_consts.const_tuple_str_plain_maxsplit_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_v);
    Nuitka_Cell_SET(var_v, tmp_assign_source_5);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(Nuitka_Cell_GET(var_v));
tmp_len_arg_2 = Nuitka_Cell_GET(var_v);
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 3;
tmp_condition_result_6 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_c243e9d10d7308133be76625fef7b3c1;
frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame.f_lineno = 57;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooNooc";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_palette == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palette);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 59;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_palette;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_3;
tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_v;
Py_INCREF(tmp_closure_1[1]);
tmp_iadd_expr_right_2 = MAKE_GENERATOR_PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_iadd_expr_left_2;
var_palette = tmp_assign_source_6;

}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_4;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_3;
bool tmp_tmp_and_right_value_3_cbool_1;
CHECK_OBJECT(par_limit);
tmp_truth_name_4 = CHECK_IF_TRUE(par_limit);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_palette);
tmp_len_arg_3 = var_palette;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 768;
tmp_tmp_and_right_value_3_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_right_value_3 = tmp_tmp_and_right_value_3_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_end_1;
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_ass_attr_target_1;
if (var_palette == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palette);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}

tmp_bytes_arg_1 = var_palette;
tmp_ass_attr_value_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooNooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_palette, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooNooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$GimpPaletteFile$$$function__1__read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$GimpPaletteFile$$$function__1__read->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$GimpPaletteFile$$$function__1__read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$GimpPaletteFile$$$function__1__read,
    type_description_1,
    par_self,
    par_fp,
    par_limit,
    var_palette,
    NULL,
    var_i,
    var_s,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$GimpPaletteFile$$$function__1__read == cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read);
    cache_frame_frame_PIL$GimpPaletteFile$$$function__1__read = NULL;
}

assertFrameObject(frame_frame_PIL$GimpPaletteFile$$$function__1__read);

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
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_s);
var_s = NULL;
CHECK_OBJECT(var_v);
CHECK_OBJECT(var_v);
Py_DECREF(var_v);
var_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_s);
var_s = NULL;
CHECK_OBJECT(var_v);
CHECK_OBJECT(var_v);
Py_DECREF(var_v);
var_v = NULL;
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
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_limit);
Py_DECREF(par_limit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr_locals {
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

static PyObject *PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr_locals *generator_heap = (struct PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_913347b0b2e5d49a63f5048bce109873, module_PIL$GimpPaletteFile, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 59;
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
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_i);
tmp_subscript_value_1 = generator_heap->var_i;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
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


generator_heap->exception_lineno = 59;
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
    generator_heap->var_i,
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

static PyObject *MAKE_GENERATOR_PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr_context,
        module_PIL$GimpPaletteFile,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_1a541a45d9d55ac7140b1814ae1dafa5,
#endif
        code_objects_913347b0b2e5d49a63f5048bce109873,
        closure,
        2,
#if 1
        sizeof(struct PIL$GimpPaletteFile$$$function__1__read$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_PIL$GimpPaletteFile$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fp = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$GimpPaletteFile$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_815e0efcb99c1092439c8128db526fa8, module_PIL$GimpPaletteFile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__->m_type_description == NULL);
frame_frame_PIL$GimpPaletteFile$$$function__2___init__ = cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$GimpPaletteFile$$$function__2___init__);
assert(Py_REFCNT(frame_frame_PIL$GimpPaletteFile$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_fp);
tmp_args_element_value_1 = par_fp;
frame_frame_PIL$GimpPaletteFile$$$function__2___init__->m_frame.f_lineno = 66;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__read, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$GimpPaletteFile$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$GimpPaletteFile$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$GimpPaletteFile$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$GimpPaletteFile$$$function__2___init__,
    type_description_1,
    par_self,
    par_fp
);


// Release cached frame if used for exception.
if (frame_frame_PIL$GimpPaletteFile$$$function__2___init__ == cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__);
    cache_frame_frame_PIL$GimpPaletteFile$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$GimpPaletteFile$$$function__2___init__);

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
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$GimpPaletteFile$$$function__3_frombytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_self = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes)) {
    Py_XDECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes = MAKE_FUNCTION_FRAME(tstate, code_objects_77a0784a911c2c854e44e5fbc614ca3f, module_PIL$GimpPaletteFile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes->m_type_description == NULL);
frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes = cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes);
assert(Py_REFCNT(frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_cls);
tmp_called_instance_1 = par_cls;
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes->m_frame.f_lineno = 70;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___new__, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_self;
    var_self = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_self);
tmp_expression_value_1 = var_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__read);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(par_data);
tmp_args_element_value_3 = par_data;
frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes->m_frame.f_lineno = 71;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = Py_False;
frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes->m_frame.f_lineno = 71;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes,
    type_description_1,
    par_cls,
    par_data,
    var_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes == cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes);
    cache_frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes = NULL;
}

assertFrameObject(frame_frame_PIL$GimpPaletteFile$$$function__3_frombytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_self);
tmp_return_value = var_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_self);
CHECK_OBJECT(var_self);
Py_DECREF(var_self);
var_self = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_self);
var_self = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$GimpPaletteFile$$$function__4_getpalette(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette)) {
    Py_XDECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette = MAKE_FUNCTION_FRAME(tstate, code_objects_43b6924776158fabe86306cdb84b45d0, module_PIL$GimpPaletteFile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette->m_type_description == NULL);
frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette = cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette);
assert(Py_REFCNT(frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_palette);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rawmode);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette == cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette);
    cache_frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette = NULL;
}

assertFrameObject(frame_frame_PIL$GimpPaletteFile$$$function__4_getpalette);

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



static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__1__read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$GimpPaletteFile$$$function__1__read,
        mod_consts.const_str_plain__read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b2609af419daafd1f76e0703bdedae1,
#endif
        code_objects_dde3667557e5f47f84ae0784487887c6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$GimpPaletteFile,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$GimpPaletteFile$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af88a4e3ac4d9b9e1254513097fcbbee,
#endif
        code_objects_815e0efcb99c1092439c8128db526fa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$GimpPaletteFile,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__3_frombytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$GimpPaletteFile$$$function__3_frombytes,
        mod_consts.const_str_plain_frombytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f6e3736ee37445b44900124c47c0dbe,
#endif
        code_objects_77a0784a911c2c854e44e5fbc614ca3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$GimpPaletteFile,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__4_getpalette(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$GimpPaletteFile$$$function__4_getpalette,
        mod_consts.const_str_plain_getpalette,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b287e4db4653929386233ee14401158,
#endif
        code_objects_43b6924776158fabe86306cdb84b45d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$GimpPaletteFile,
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

static function_impl_code const function_table_PIL$GimpPaletteFile[] = {
impl_PIL$GimpPaletteFile$$$function__1__read,
impl_PIL$GimpPaletteFile$$$function__2___init__,
impl_PIL$GimpPaletteFile$$$function__3_frombytes,
impl_PIL$GimpPaletteFile$$$function__4_getpalette,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$GimpPaletteFile);
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
        module_PIL$GimpPaletteFile,
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
        function_table_PIL$GimpPaletteFile,
        sizeof(function_table_PIL$GimpPaletteFile) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.GimpPaletteFile";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$GimpPaletteFile(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$GimpPaletteFile");

    // Store the module for future use.
    module_PIL$GimpPaletteFile = module;

    moduledict_PIL$GimpPaletteFile = MODULE_DICT(module_PIL$GimpPaletteFile);

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
        PRINT_STRING("PIL$GimpPaletteFile: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$GimpPaletteFile: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$GimpPaletteFile: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.GimpPaletteFile" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$GimpPaletteFile\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$GimpPaletteFile,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$GimpPaletteFile,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$GimpPaletteFile,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$GimpPaletteFile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$GimpPaletteFile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$GimpPaletteFile);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$GimpPaletteFile);
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

        UPDATE_STRING_DICT1(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$GimpPaletteFile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$GimpPaletteFile = MAKE_MODULE_FRAME(code_objects_fbb3e935c1846f3c3eb1126cecc8ded2, module_PIL$GimpPaletteFile);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$GimpPaletteFile);
assert(Py_REFCNT(frame_frame_PIL$GimpPaletteFile) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$GimpPaletteFile$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$GimpPaletteFile$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$GimpPaletteFile;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$GimpPaletteFile->m_frame.f_lineno = 18;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesIO, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_2d934143132f57b7c59f8aec8816711f;
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_12a4f5186e00a8671121da3be8270f46;
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_GimpPaletteFile;
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_26;
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_RGB;
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, mod_consts.const_str_plain_rawmode, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_5152dfabbdf8a57b42db25ab9a2f88b9);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__1__read(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, mod_consts.const_str_plain__read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c29778f9a3c58155ea4ab135014591d7);

tmp_dictset_value = MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__2___init__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_1fb53715bfbb5ce9e1cfc10a73a45af2);

tmp_classmethod_arg_1 = MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__3_frombytes(tstate, tmp_annotations_3);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, mod_consts.const_str_plain_frombytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_df443308a1cec37b92f84c32f9c253f1);

tmp_dictset_value = MAKE_FUNCTION_PIL$GimpPaletteFile$$$function__4_getpalette(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, mod_consts.const_str_plain_getpalette, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_palette_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_2;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_2 = mod_consts.const_str_plain_GimpPaletteFile;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_2, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_11 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26);
locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26);
locals_PIL$GimpPaletteFile$$$class__1_GimpPaletteFile_26 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 26;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)mod_consts.const_str_plain_GimpPaletteFile, tmp_assign_source_11);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$GimpPaletteFile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$GimpPaletteFile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$GimpPaletteFile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$GimpPaletteFile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$GimpPaletteFile", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.GimpPaletteFile" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$GimpPaletteFile);
    return module_PIL$GimpPaletteFile;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$GimpPaletteFile, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$GimpPaletteFile", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
