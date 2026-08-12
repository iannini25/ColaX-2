/* Generated code for Python module 'requests$compat'
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



/* The "module_requests$compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$compat;
PyDictObject *moduledict_requests$compat;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple;
PyObject *const_str_plain_chardet;
PyObject *const_str_plain_import_module;
PyObject *const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84;
PyObject *const_str_digest_704467d3045f3caca1a48365bc4b7318;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_importlib;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_ModuleType;
PyObject *const_str_plain_urllib3;
PyObject *const_tuple_str_plain___version___tuple;
PyObject *const_str_plain___version__;
PyObject *const_str_plain_urllib3_version;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_is_urllib3_1;
PyObject *const_tuple_type_TypeError_type_AttributeError_tuple;
PyObject *const_dict_1eeeef44cae8bd3063c258c38b8e36f5;
PyObject *const_str_plain__resolve_char_detection;
PyObject *const_str_plain__ver;
PyObject *const_str_plain_is_py2;
PyObject *const_str_plain_is_py3;
PyObject *const_str_plain_has_simplejson;
PyObject *const_str_plain_simplejson;
PyObject *const_str_plain_json;
PyObject *const_tuple_str_plain_JSONDecodeError_tuple;
PyObject *const_str_plain_JSONDecodeError;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_OrderedDict_tuple;
PyObject *const_str_plain_OrderedDict;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_MutableMapping;
PyObject *const_str_plain_http;
PyObject *const_tuple_str_plain_cookiejar_tuple;
PyObject *const_str_plain_cookiejar;
PyObject *const_str_plain_cookielib;
PyObject *const_str_digest_faf5973379f42e9b5528565b323f20e0;
PyObject *const_tuple_str_plain_Morsel_tuple;
PyObject *const_str_plain_Morsel;
PyObject *const_str_plain_StringIO;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple;
PyObject *const_str_plain_quote;
PyObject *const_str_plain_quote_plus;
PyObject *const_str_plain_unquote;
PyObject *const_str_plain_unquote_plus;
PyObject *const_str_plain_urldefrag;
PyObject *const_str_plain_urlencode;
PyObject *const_str_plain_urljoin;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_urlsplit;
PyObject *const_str_plain_urlunparse;
PyObject *const_str_digest_59bc9c95777e64e4720c3af0837aec42;
PyObject *const_tuple_aab17c794828e7910fe2e55149fcf512_tuple;
PyObject *const_str_plain_getproxies;
PyObject *const_str_plain_getproxies_environment;
PyObject *const_str_plain_parse_http_list;
PyObject *const_str_plain_proxy_bypass;
PyObject *const_str_plain_proxy_bypass_environment;
PyObject *const_str_plain_str;
PyObject *const_str_plain_builtin_str;
PyObject *const_str_plain_basestring;
PyObject *const_tuple_type_int_type_float_tuple;
PyObject *const_str_plain_numeric_types;
PyObject *const_tuple_type_int_tuple;
PyObject *const_str_plain_integer_types;
PyObject *const_str_digest_49b69b2314f33bce8e46065213455365;
PyObject *const_str_digest_05642becbbbe29affa5245f2742ae8ed;
PyObject *const_tuple_str_plain_chardet_str_plain_lib_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[73];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 73) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 73 values, got %d\n",
                    UN_TRANSLATE("requests.compat"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple", mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chardet", mod_consts.const_str_plain_chardet);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_chardet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_import_module", mod_consts.const_str_plain_import_module);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_module);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84", mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318", mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_importlib", mod_consts.const_str_plain_importlib);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_importlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ModuleType", mod_consts.const_str_plain_ModuleType);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urllib3", mod_consts.const_str_plain_urllib3);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___version___tuple", mod_consts.const_tuple_str_plain___version___tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urllib3_version", mod_consts.const_str_plain_urllib3_version);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib3_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_urllib3_1", mod_consts.const_str_plain_is_urllib3_1);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_urllib3_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple", mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5", mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__resolve_char_detection", mod_consts.const_str_plain__resolve_char_detection);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__resolve_char_detection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ver", mod_consts.const_str_plain__ver);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__ver);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_py2", mod_consts.const_str_plain_is_py2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_py2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_py3", mod_consts.const_str_plain_is_py3);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_py3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_simplejson", mod_consts.const_str_plain_has_simplejson);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_simplejson);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_simplejson", mod_consts.const_str_plain_simplejson);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_simplejson);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_JSONDecodeError_tuple", mod_consts.const_tuple_str_plain_JSONDecodeError_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JSONDecodeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JSONDecodeError", mod_consts.const_str_plain_JSONDecodeError);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_collections", mod_consts.const_str_plain_collections);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_OrderedDict_tuple", mod_consts.const_tuple_str_plain_OrderedDict_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OrderedDict_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OrderedDict", mod_consts.const_str_plain_OrderedDict);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_OrderedDict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple", mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Callable", mod_consts.const_str_plain_Callable);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Mapping", mod_consts.const_str_plain_Mapping);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MutableMapping", mod_consts.const_str_plain_MutableMapping);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_http", mod_consts.const_str_plain_http);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_http);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cookiejar_tuple", mod_consts.const_tuple_str_plain_cookiejar_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cookiejar_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookiejar", mod_consts.const_str_plain_cookiejar);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookielib", mod_consts.const_str_plain_cookielib);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookielib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0", mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Morsel_tuple", mod_consts.const_tuple_str_plain_Morsel_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Morsel_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Morsel", mod_consts.const_str_plain_Morsel);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Morsel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StringIO", mod_consts.const_str_plain_StringIO);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f", mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple", mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_quote", mod_consts.const_str_plain_quote);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_quote_plus", mod_consts.const_str_plain_quote_plus);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote_plus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unquote", mod_consts.const_str_plain_unquote);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_unquote);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unquote_plus", mod_consts.const_str_plain_unquote_plus);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_unquote_plus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urldefrag", mod_consts.const_str_plain_urldefrag);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_urldefrag);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlencode", mod_consts.const_str_plain_urlencode);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urljoin", mod_consts.const_str_plain_urljoin);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlparse", mod_consts.const_str_plain_urlparse);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsplit", mod_consts.const_str_plain_urlsplit);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsplit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlunparse", mod_consts.const_str_plain_urlunparse);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42", mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple", mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getproxies", mod_consts.const_str_plain_getproxies);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_getproxies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getproxies_environment", mod_consts.const_str_plain_getproxies_environment);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_getproxies_environment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_http_list", mod_consts.const_str_plain_parse_http_list);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_http_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_bypass", mod_consts.const_str_plain_proxy_bypass);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_bypass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_bypass_environment", mod_consts.const_str_plain_proxy_bypass_environment);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_bypass_environment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_builtin_str", mod_consts.const_str_plain_builtin_str);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_builtin_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_basestring", mod_consts.const_str_plain_basestring);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_basestring);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_float_tuple", mod_consts.const_tuple_type_int_type_float_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_numeric_types", mod_consts.const_str_plain_numeric_types);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_numeric_types);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_tuple", mod_consts.const_tuple_type_int_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_integer_types", mod_consts.const_str_plain_integer_types);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_integer_types);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365", mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed", mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple", mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple);
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
void checkModuleConstants_requests$compat(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple", mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple) && "mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chardet", mod_consts.const_str_plain_chardet);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_chardet) && "mod_consts.const_str_plain_chardet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_import_module", mod_consts.const_str_plain_import_module);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_module) && "mod_consts.const_str_plain_import_module");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84", mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84) && "mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318", mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318) && "mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_importlib", mod_consts.const_str_plain_importlib);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_importlib) && "mod_consts.const_str_plain_importlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ModuleType", mod_consts.const_str_plain_ModuleType);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleType) && "mod_consts.const_str_plain_ModuleType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urllib3", mod_consts.const_str_plain_urllib3);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib3) && "mod_consts.const_str_plain_urllib3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___version___tuple", mod_consts.const_tuple_str_plain___version___tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple) && "mod_consts.const_tuple_str_plain___version___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__) && "mod_consts.const_str_plain___version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urllib3_version", mod_consts.const_str_plain_urllib3_version);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib3_version) && "mod_consts.const_str_plain_urllib3_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple) && "mod_consts.const_tuple_str_dot_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_urllib3_1", mod_consts.const_str_plain_is_urllib3_1);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_urllib3_1) && "mod_consts.const_str_plain_is_urllib3_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple", mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple) && "mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5", mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5) && "mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__resolve_char_detection", mod_consts.const_str_plain__resolve_char_detection);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__resolve_char_detection) && "mod_consts.const_str_plain__resolve_char_detection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ver", mod_consts.const_str_plain__ver);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__ver) && "mod_consts.const_str_plain__ver");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_py2", mod_consts.const_str_plain_is_py2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_py2) && "mod_consts.const_str_plain_is_py2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_py3", mod_consts.const_str_plain_is_py3);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_py3) && "mod_consts.const_str_plain_is_py3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_simplejson", mod_consts.const_str_plain_has_simplejson);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_simplejson) && "mod_consts.const_str_plain_has_simplejson");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_simplejson", mod_consts.const_str_plain_simplejson);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_simplejson) && "mod_consts.const_str_plain_simplejson");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_json) && "mod_consts.const_str_plain_json");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_JSONDecodeError_tuple", mod_consts.const_tuple_str_plain_JSONDecodeError_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JSONDecodeError_tuple) && "mod_consts.const_tuple_str_plain_JSONDecodeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JSONDecodeError", mod_consts.const_str_plain_JSONDecodeError);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError) && "mod_consts.const_str_plain_JSONDecodeError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_collections", mod_consts.const_str_plain_collections);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections) && "mod_consts.const_str_plain_collections");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_OrderedDict_tuple", mod_consts.const_tuple_str_plain_OrderedDict_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OrderedDict_tuple) && "mod_consts.const_tuple_str_plain_OrderedDict_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OrderedDict", mod_consts.const_str_plain_OrderedDict);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_OrderedDict) && "mod_consts.const_str_plain_OrderedDict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e) && "mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple", mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple) && "mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Callable", mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable) && "mod_consts.const_str_plain_Callable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Mapping", mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping) && "mod_consts.const_str_plain_Mapping");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MutableMapping", mod_consts.const_str_plain_MutableMapping);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping) && "mod_consts.const_str_plain_MutableMapping");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_http", mod_consts.const_str_plain_http);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_http) && "mod_consts.const_str_plain_http");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cookiejar_tuple", mod_consts.const_tuple_str_plain_cookiejar_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cookiejar_tuple) && "mod_consts.const_tuple_str_plain_cookiejar_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookiejar", mod_consts.const_str_plain_cookiejar);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar) && "mod_consts.const_str_plain_cookiejar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookielib", mod_consts.const_str_plain_cookielib);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookielib) && "mod_consts.const_str_plain_cookielib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0", mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0) && "mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Morsel_tuple", mod_consts.const_tuple_str_plain_Morsel_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Morsel_tuple) && "mod_consts.const_tuple_str_plain_Morsel_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Morsel", mod_consts.const_str_plain_Morsel);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Morsel) && "mod_consts.const_str_plain_Morsel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StringIO", mod_consts.const_str_plain_StringIO);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO) && "mod_consts.const_str_plain_StringIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f", mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f) && "mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple", mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple) && "mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_quote", mod_consts.const_str_plain_quote);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote) && "mod_consts.const_str_plain_quote");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_quote_plus", mod_consts.const_str_plain_quote_plus);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote_plus) && "mod_consts.const_str_plain_quote_plus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unquote", mod_consts.const_str_plain_unquote);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_unquote) && "mod_consts.const_str_plain_unquote");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unquote_plus", mod_consts.const_str_plain_unquote_plus);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_unquote_plus) && "mod_consts.const_str_plain_unquote_plus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urldefrag", mod_consts.const_str_plain_urldefrag);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_urldefrag) && "mod_consts.const_str_plain_urldefrag");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlencode", mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode) && "mod_consts.const_str_plain_urlencode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urljoin", mod_consts.const_str_plain_urljoin);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin) && "mod_consts.const_str_plain_urljoin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlparse", mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse) && "mod_consts.const_str_plain_urlparse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsplit", mod_consts.const_str_plain_urlsplit);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsplit) && "mod_consts.const_str_plain_urlsplit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlunparse", mod_consts.const_str_plain_urlunparse);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse) && "mod_consts.const_str_plain_urlunparse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42", mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42) && "mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple", mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple) && "mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getproxies", mod_consts.const_str_plain_getproxies);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_getproxies) && "mod_consts.const_str_plain_getproxies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getproxies_environment", mod_consts.const_str_plain_getproxies_environment);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_getproxies_environment) && "mod_consts.const_str_plain_getproxies_environment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_http_list", mod_consts.const_str_plain_parse_http_list);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_http_list) && "mod_consts.const_str_plain_parse_http_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_bypass", mod_consts.const_str_plain_proxy_bypass);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_bypass) && "mod_consts.const_str_plain_proxy_bypass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_bypass_environment", mod_consts.const_str_plain_proxy_bypass_environment);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_bypass_environment) && "mod_consts.const_str_plain_proxy_bypass_environment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_str) && "mod_consts.const_str_plain_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_builtin_str", mod_consts.const_str_plain_builtin_str);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_builtin_str) && "mod_consts.const_str_plain_builtin_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_basestring", mod_consts.const_str_plain_basestring);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_basestring) && "mod_consts.const_str_plain_basestring");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_float_tuple", mod_consts.const_tuple_type_int_type_float_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple) && "mod_consts.const_tuple_type_int_type_float_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_numeric_types", mod_consts.const_str_plain_numeric_types);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_numeric_types) && "mod_consts.const_str_plain_numeric_types");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_tuple", mod_consts.const_tuple_type_int_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_tuple) && "mod_consts.const_tuple_type_int_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_integer_types", mod_consts.const_str_plain_integer_types);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_integer_types) && "mod_consts.const_str_plain_integer_types");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365", mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365) && "mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed", mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed) && "mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple", mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple) && "mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_requests$compat$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$compat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$compat$_resolve_char_detection(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain__resolve_char_detection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__resolve_char_detection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__resolve_char_detection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__resolve_char_detection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__resolve_char_detection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain__resolve_char_detection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain__resolve_char_detection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__resolve_char_detection);
    }

    return result;
}

static PyObject *module_var_accessor_requests$compat$bytes(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_requests$compat$has_simplejson(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_has_simplejson);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has_simplejson);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has_simplejson, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has_simplejson);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has_simplejson, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_has_simplejson);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_has_simplejson);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_has_simplejson);
    }

    return result;
}

static PyObject *module_var_accessor_requests$compat$str(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }

    return result;
}

static PyObject *module_var_accessor_requests$compat$urllib3_version(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib3_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib3_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib3_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib3_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3_version);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3913c229b1b0a9ff8d3c6d105a1e51a3;
static PyCodeObject *code_objects_f7f79d83889bd10e06d19a1f021616f2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_49b69b2314f33bce8e46065213455365); CHECK_OBJECT(module_filename_obj);
code_objects_3913c229b1b0a9ff8d3c6d105a1e51a3 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed, mod_consts.const_str_digest_05642becbbbe29affa5245f2742ae8ed, NULL, NULL, 0, 0, 0);
code_objects_f7f79d83889bd10e06d19a1f021616f2 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__resolve_char_detection, mod_consts.const_str_plain__resolve_char_detection, mod_consts.const_tuple_str_plain_chardet_str_plain_lib_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_requests$compat$$$function__1__resolve_char_detection(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$compat$$$function__1__resolve_char_detection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_chardet = NULL;
PyObject *var_lib = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$compat$$$function__1__resolve_char_detection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$compat$$$function__1__resolve_char_detection = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_chardet;
    var_chardet = tmp_assign_source_1;
    Py_INCREF(var_chardet);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_plain_chardet_str_plain_charset_normalizer_tuple;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$compat$$$function__1__resolve_char_detection)) {
    Py_XDECREF(cache_frame_frame_requests$compat$$$function__1__resolve_char_detection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$compat$$$function__1__resolve_char_detection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$compat$$$function__1__resolve_char_detection = MAKE_FUNCTION_FRAME(tstate, code_objects_f7f79d83889bd10e06d19a1f021616f2, module_requests$compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$compat$$$function__1__resolve_char_detection->m_type_description == NULL);
frame_frame_requests$compat$$$function__1__resolve_char_detection = cache_frame_frame_requests$compat$$$function__1__resolve_char_detection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$compat$$$function__1__resolve_char_detection);
assert(Py_REFCNT(frame_frame_requests$compat$$$function__1__resolve_char_detection) == 2);

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
type_description_1 = "oo";
exception_lineno = 40;
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
    PyObject *old = var_lib;
    var_lib = tmp_assign_source_4;
    Py_INCREF(var_lib);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_chardet == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chardet);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 41;
type_description_1 = "oo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = var_chardet;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
CHECK_OBJECT(var_lib);
tmp_name_value_1 = var_lib;
frame_frame_requests$compat$$$function__1__resolve_char_detection->m_frame.f_lineno = 43;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, import_module_func, tmp_name_value_1);
    Py_DECREF(import_module_func);
}
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_chardet;
    var_chardet = tmp_assign_source_5;
    Py_INCREF(var_chardet);
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$compat$$$function__1__resolve_char_detection, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$compat$$$function__1__resolve_char_detection, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_ImportError;
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
    exception_lineno = 42;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$compat$$$function__1__resolve_char_detection->m_frame)) {
        frame_frame_requests$compat$$$function__1__resolve_char_detection->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_no_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oo";
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
if (var_chardet == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chardet);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_chardet;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$compat$$$function__1__resolve_char_detection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$compat$$$function__1__resolve_char_detection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$compat$$$function__1__resolve_char_detection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$compat$$$function__1__resolve_char_detection,
    type_description_1,
    var_chardet,
    var_lib
);


// Release cached frame if used for exception.
if (frame_frame_requests$compat$$$function__1__resolve_char_detection == cache_frame_frame_requests$compat$$$function__1__resolve_char_detection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$compat$$$function__1__resolve_char_detection);
    cache_frame_frame_requests$compat$$$function__1__resolve_char_detection = NULL;
}

assertFrameObject(frame_frame_requests$compat$$$function__1__resolve_char_detection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_chardet);
var_chardet = NULL;
Py_XDECREF(var_lib);
var_lib = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_chardet);
var_chardet = NULL;
Py_XDECREF(var_lib);
var_lib = NULL;
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



static PyObject *MAKE_FUNCTION_requests$compat$$$function__1__resolve_char_detection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$compat$$$function__1__resolve_char_detection,
        mod_consts.const_str_plain__resolve_char_detection,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f7f79d83889bd10e06d19a1f021616f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$compat,
        mod_consts.const_str_digest_a22ffb7d9d0781f4a35f9d879b3eef84,
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

static function_impl_code const function_table_requests$compat[] = {
impl_requests$compat$$$function__1__resolve_char_detection,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$compat);
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
        module_requests$compat,
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
        function_table_requests$compat,
        sizeof(function_table_requests$compat) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.compat";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$compat(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$compat");

    // Store the module for future use.
    module_requests$compat = module;

    moduledict_requests$compat = MODULE_DICT(module_requests$compat);

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
        PRINT_STRING("requests$compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$compat: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$compat: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.compat" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$compat\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests$compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$compat);
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

        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_requests$compat;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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
tmp_assign_source_1 = mod_consts.const_str_digest_704467d3045f3caca1a48365bc4b7318;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$compat = MAKE_MODULE_FRAME(code_objects_3913c229b1b0a9ff8d3c6d105a1e51a3, module_requests$compat);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$compat);
assert(Py_REFCNT(frame_frame_requests$compat) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$compat$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$compat$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_IMPORTLIB();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_ModuleType,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ModuleType);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_ModuleType, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_urllib3;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_1 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 21;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3_version, tmp_assign_source_9);
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = module_var_accessor_requests$compat$urllib3_version(tstate);
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
frame_frame_requests$compat->m_frame.f_lineno = 27;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_cmp_expr_left_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_assign_source_10 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_urllib3_1, tmp_assign_source_10);
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$compat, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$compat, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_TypeError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_True;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_urllib3_1, tmp_assign_source_11);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$compat->m_frame)) {
        frame_frame_requests$compat->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1eeeef44cae8bd3063c258c38b8e36f5);

tmp_assign_source_12 = MAKE_FUNCTION_requests$compat$$$function__1__resolve_char_detection(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain__resolve_char_detection, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_requests$compat$_resolve_char_detection(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_requests$compat->m_frame.f_lineno = 49;
tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Nuitka_SysGetObject("version_info");
assert(!(tmp_assign_source_14 == NULL));
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain__ver, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_py2, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_True;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_py3, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_has_simplejson, tmp_assign_source_17);
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_simplejson;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 67;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = Py_True;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_has_simplejson, tmp_assign_source_19);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$compat, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$compat, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 71;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_20);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 66;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$compat->m_frame)) {
        frame_frame_requests$compat->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_3;
PyObject *tmp_mvar_value_1;
tmp_mvar_value_1 = module_var_accessor_requests$compat$has_simplejson(tstate);
assert(!(tmp_mvar_value_1 == NULL));
tmp_condition_result_3 = CHECK_IF_TRUE(tmp_mvar_value_1) == 1;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_simplejson;
tmp_globals_arg_value_4 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_JSONDecodeError_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 74;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_JSONDecodeError,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_JSONDecodeError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_JSONDecodeError, tmp_assign_source_21);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_5 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_JSONDecodeError_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 76;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_JSONDecodeError,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_JSONDecodeError);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_JSONDecodeError, tmp_assign_source_22);
}
branch_end_3:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_6 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_OrderedDict_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 79;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_OrderedDict,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_OrderedDict);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_OrderedDict, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_7 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 80;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_MutableMapping,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_MutableMapping);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping, tmp_assign_source_27);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_http;
tmp_globals_arg_value_8 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_cookiejar_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 81;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_cookiejar,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_cookiejar);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_faf5973379f42e9b5528565b323f20e0;
tmp_globals_arg_value_9 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Morsel_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 82;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_Morsel,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Morsel);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_assign_source_30 == NULL));
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_StringIO, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_10 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_01654ebfebc1e856d028dfb593640c8e_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 88;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_quote,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_quote);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_quote, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_quote_plus,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_quote_plus);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_quote_plus, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_unquote,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_unquote);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_unquote, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_unquote_plus,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_unquote_plus);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_unquote_plus, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_urldefrag,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_urldefrag);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urldefrag, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_urlencode,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_urlencode);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_urljoin,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_urljoin);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_19 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_urlsplit,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_urlsplit);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urlsplit, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_20 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_urlunparse,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_urlunparse);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse, tmp_assign_source_41);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42;
tmp_globals_arg_value_11 = (PyObject *)moduledict_requests$compat;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_aab17c794828e7910fe2e55149fcf512_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_requests$compat->m_frame.f_lineno = 100;
tmp_assign_source_42 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_42;
}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_getproxies,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_getproxies);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_getproxies, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_22 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_getproxies_environment,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_getproxies_environment);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_getproxies_environment, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_23 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_parse_http_list,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_parse_http_list);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_http_list, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_24 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_proxy_bypass,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_proxy_bypass);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_bypass, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_25 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_requests$compat,
        mod_consts.const_str_plain_proxy_bypass_environment,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_proxy_bypass_environment);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_bypass_environment, tmp_assign_source_47);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = module_var_accessor_requests$compat$str(tstate);
if (unlikely(tmp_assign_source_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_str, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = module_var_accessor_requests$compat$str(tstate);
if (unlikely(tmp_assign_source_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_str, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = module_var_accessor_requests$compat$bytes(tstate);
if (unlikely(tmp_assign_source_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_bytes);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_requests$compat$str(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;

    goto frame_exception_exit_1;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_requests$compat$bytes(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_bytes);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assign_source_51, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_51);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring, tmp_assign_source_51);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$compat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$compat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$compat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$compat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = mod_consts.const_tuple_type_int_type_float_tuple;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric_types, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = mod_consts.const_tuple_type_int_tuple;
UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)mod_consts.const_str_plain_integer_types, tmp_assign_source_53);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$compat", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.compat" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$compat);
    return module_requests$compat;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$compat", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
