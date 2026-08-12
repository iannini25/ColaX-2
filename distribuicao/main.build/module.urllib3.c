/* Generated code for Python module 'urllib3'
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



/* The "module_urllib3" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3;
PyDictObject *moduledict_urllib3;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_logging;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_plain_urllib3_tuple;
PyObject *const_str_plain_StreamHandler;
PyObject *const_str_plain_setFormatter;
PyObject *const_str_plain_Formatter;
PyObject *const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple;
PyObject *const_str_plain_addHandler;
PyObject *const_str_plain_setLevel;
PyObject *const_str_plain_debug;
PyObject *const_tuple_a8b5457a455379132108111c71bf3ec5_tuple;
PyObject *const_str_digest_6658a1ea9114e73c398341fd423e2d44;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_simplefilter;
PyObject *const_str_plain_ignore;
PyObject *const_str_digest_67183c002961d0a92c7c97d0628b2747;
PyObject *const_str_plain__DEFAULT_POOL;
PyObject *const_str_plain_request;
PyObject *const_tuple_32fa62149c9037f3209c486a585bf78c_tuple;
PyObject *const_str_digest_a7e1f37472f030a520e1fc7d6e261d96;
PyObject *const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc;
PyObject *const_str_plain_environ;
PyObject *const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_tuple_str_plain_NullHandler_tuple;
PyObject *const_str_plain_NullHandler;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain__base_connection;
PyObject *const_tuple_str_plain__TYPE_BODY_tuple;
PyObject *const_str_plain__TYPE_BODY;
PyObject *const_str_plain__collections;
PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
PyObject *const_str_plain_HTTPHeaderDict;
PyObject *const_str_plain__version;
PyObject *const_tuple_str_plain___version___tuple;
PyObject *const_str_plain___version__;
PyObject *const_str_plain_connectionpool;
PyObject *const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
PyObject *const_str_plain_HTTPConnectionPool;
PyObject *const_str_plain_HTTPSConnectionPool;
PyObject *const_str_plain_connection_from_url;
PyObject *const_str_plain_filepost;
PyObject *const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple;
PyObject *const_str_plain__TYPE_FIELDS;
PyObject *const_str_plain_encode_multipart_formdata;
PyObject *const_str_plain_poolmanager;
PyObject *const_tuple_8867a986f001c831bce500d134c983ea_tuple;
PyObject *const_str_plain_PoolManager;
PyObject *const_str_plain_ProxyManager;
PyObject *const_str_plain_proxy_from_url;
PyObject *const_str_plain_response;
PyObject *const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple;
PyObject *const_str_plain_BaseHTTPResponse;
PyObject *const_str_plain_HTTPResponse;
PyObject *const_str_digest_eec49d283d20cbc4ed650539d1524272;
PyObject *const_tuple_str_plain_make_headers_tuple;
PyObject *const_str_plain_make_headers;
PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
PyObject *const_tuple_str_plain_Retry_tuple;
PyObject *const_str_plain_Retry;
PyObject *const_str_digest_522bfd5e75e11cb6ec433673b0570303;
PyObject *const_tuple_str_plain_Timeout_tuple;
PyObject *const_str_plain_Timeout;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_OPENSSL_VERSION;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e;
PyObject *const_str_digest_873c905d5fb9e7edc132560a5fe46d9f;
PyObject *const_str_plain_NotOpenSSLWarning;
PyObject *const_str_plain_OPENSSL_VERSION_INFO;
PyObject *const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple;
PyObject *const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf;
PyObject *const_str_digest_81b98f1a8ecf97715642eb1142269402;
PyObject *const_str_plain___author__;
PyObject *const_str_plain_MIT;
PyObject *const_str_plain___license__;
PyObject *const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple;
PyObject *const_str_plain_DEBUG;
PyObject *const_dict_d1a45c216cfeed0a9148685bd70cc047;
PyObject *const_str_plain_add_stderr_logger;
PyObject *const_str_plain_always;
PyObject *const_str_plain_SecurityWarning;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_append_tuple;
PyObject *const_str_plain_default;
PyObject *const_str_plain_InsecurePlatformWarning;
PyObject *const_str_plain_HTTPWarning;
PyObject *const_dict_1efbb6577469b96f6110cc02048e7fae;
PyObject *const_str_plain_disable_warnings;
PyObject *const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1;
PyObject *const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4;
PyObject *const_str_digest_00e6d36fce917af4821c0b9719e56d87;
PyObject *const_str_digest_c2a5aae7bb235405ed8e87579bccaea2;
PyObject *const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple;
PyObject *const_tuple_str_plain_category_tuple;
PyObject *const_tuple_150e1740af141f6df8e372f46239c34d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 104) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 104 values, got %d\n",
                    UN_TRANSLATE("urllib3"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_urllib3_tuple", mod_consts.const_tuple_str_plain_urllib3_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urllib3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamHandler", mod_consts.const_str_plain_StreamHandler);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setFormatter", mod_consts.const_str_plain_setFormatter);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_setFormatter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Formatter", mod_consts.const_str_plain_Formatter);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Formatter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple", mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLevel", mod_consts.const_str_plain_setLevel);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_setLevel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple", mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44", mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_simplefilter", mod_consts.const_str_plain_simplefilter);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_simplefilter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747", mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_POOL", mod_consts.const_str_plain__DEFAULT_POOL);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_POOL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple", mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96", mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc", mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple", mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_NullHandler_tuple", mod_consts.const_tuple_str_plain_NullHandler_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NullHandler_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NullHandler", mod_consts.const_str_plain_NullHandler);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_NullHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exceptions_tuple", mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base_connection", mod_consts.const_str_plain__base_connection);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_BODY_tuple", mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY", mod_consts.const_str_plain__TYPE_BODY);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__collections);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__version", mod_consts.const_str_plain__version);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___version___tuple", mod_consts.const_tuple_str_plain___version___tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connectionpool", mod_consts.const_str_plain_connectionpool);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_connectionpool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple", mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPConnectionPool", mod_consts.const_str_plain_HTTPConnectionPool);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnectionPool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnectionPool", mod_consts.const_str_plain_HTTPSConnectionPool);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnectionPool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_url", mod_consts.const_str_plain_connection_from_url);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filepost", mod_consts.const_str_plain_filepost);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_filepost);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple", mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_FIELDS", mod_consts.const_str_plain__TYPE_FIELDS);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_FIELDS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode_multipart_formdata", mod_consts.const_str_plain_encode_multipart_formdata);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_multipart_formdata);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poolmanager", mod_consts.const_str_plain_poolmanager);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_poolmanager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple", mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PoolManager", mod_consts.const_str_plain_PoolManager);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolManager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyManager", mod_consts.const_str_plain_ProxyManager);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyManager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_from_url", mod_consts.const_str_plain_proxy_from_url);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_from_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPResponse", mod_consts.const_str_plain_HTTPResponse);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272", mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_make_headers_tuple", mod_consts.const_tuple_str_plain_make_headers_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_headers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_make_headers", mod_consts.const_str_plain_make_headers);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152", mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Retry_tuple", mod_consts.const_tuple_str_plain_Retry_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Retry_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Retry", mod_consts.const_str_plain_Retry);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Retry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303", mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Timeout_tuple", mod_consts.const_tuple_str_plain_Timeout_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Timeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPENSSL_VERSION", mod_consts.const_str_plain_OPENSSL_VERSION);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPENSSL_VERSION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple", mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e", mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f", mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NotOpenSSLWarning", mod_consts.const_str_plain_NotOpenSSLWarning);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotOpenSSLWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPENSSL_VERSION_INFO", mod_consts.const_str_plain_OPENSSL_VERSION_INFO);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPENSSL_VERSION_INFO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf", mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402", mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___author__", mod_consts.const_str_plain___author__);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain___author__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIT", mod_consts.const_str_plain_MIT);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___license__", mod_consts.const_str_plain___license__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___license__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple", mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEBUG", mod_consts.const_str_plain_DEBUG);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047", mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_stderr_logger", mod_consts.const_str_plain_add_stderr_logger);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_stderr_logger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_always", mod_consts.const_str_plain_always);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_always);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SecurityWarning", mod_consts.const_str_plain_SecurityWarning);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_append_tuple", mod_consts.const_tuple_str_plain_append_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_append_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_default", mod_consts.const_str_plain_default);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InsecurePlatformWarning", mod_consts.const_str_plain_InsecurePlatformWarning);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_InsecurePlatformWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPWarning", mod_consts.const_str_plain_HTTPWarning);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae", mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_disable_warnings", mod_consts.const_str_plain_disable_warnings);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_disable_warnings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1", mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4", mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87", mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2", mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple", mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_tuple", mod_consts.const_tuple_str_plain_category_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple", mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple);
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
void checkModuleConstants_urllib3(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_urllib3_tuple", mod_consts.const_tuple_str_plain_urllib3_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urllib3_tuple) && "mod_consts.const_tuple_str_plain_urllib3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamHandler", mod_consts.const_str_plain_StreamHandler);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamHandler) && "mod_consts.const_str_plain_StreamHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setFormatter", mod_consts.const_str_plain_setFormatter);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_setFormatter) && "mod_consts.const_str_plain_setFormatter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Formatter", mod_consts.const_str_plain_Formatter);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Formatter) && "mod_consts.const_str_plain_Formatter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple", mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple) && "mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler) && "mod_consts.const_str_plain_addHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLevel", mod_consts.const_str_plain_setLevel);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_setLevel) && "mod_consts.const_str_plain_setLevel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug) && "mod_consts.const_str_plain_debug");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple", mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple) && "mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44", mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44) && "mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings) && "mod_consts.const_str_plain_warnings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_simplefilter", mod_consts.const_str_plain_simplefilter);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_simplefilter) && "mod_consts.const_str_plain_simplefilter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore) && "mod_consts.const_str_plain_ignore");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747", mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747) && "mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_POOL", mod_consts.const_str_plain__DEFAULT_POOL);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_POOL) && "mod_consts.const_str_plain__DEFAULT_POOL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple", mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple) && "mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96", mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96) && "mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc", mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc) && "mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple", mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple) && "mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_NullHandler_tuple", mod_consts.const_tuple_str_plain_NullHandler_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NullHandler_tuple) && "mod_consts.const_tuple_str_plain_NullHandler_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NullHandler", mod_consts.const_str_plain_NullHandler);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_NullHandler) && "mod_consts.const_str_plain_NullHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exceptions_tuple", mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple) && "mod_consts.const_tuple_str_plain_exceptions_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base_connection", mod_consts.const_str_plain__base_connection);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_connection) && "mod_consts.const_str_plain__base_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_BODY_tuple", mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_BODY_tuple) && "mod_consts.const_tuple_str_plain__TYPE_BODY_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY", mod_consts.const_str_plain__TYPE_BODY);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY) && "mod_consts.const_str_plain__TYPE_BODY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__collections) && "mod_consts.const_str_plain__collections");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple) && "mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict) && "mod_consts.const_str_plain_HTTPHeaderDict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__version", mod_consts.const_str_plain__version);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__version) && "mod_consts.const_str_plain__version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___version___tuple", mod_consts.const_tuple_str_plain___version___tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple) && "mod_consts.const_tuple_str_plain___version___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__) && "mod_consts.const_str_plain___version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connectionpool", mod_consts.const_str_plain_connectionpool);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_connectionpool) && "mod_consts.const_str_plain_connectionpool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple", mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple) && "mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPConnectionPool", mod_consts.const_str_plain_HTTPConnectionPool);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnectionPool) && "mod_consts.const_str_plain_HTTPConnectionPool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnectionPool", mod_consts.const_str_plain_HTTPSConnectionPool);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnectionPool) && "mod_consts.const_str_plain_HTTPSConnectionPool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_url", mod_consts.const_str_plain_connection_from_url);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_url) && "mod_consts.const_str_plain_connection_from_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filepost", mod_consts.const_str_plain_filepost);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_filepost) && "mod_consts.const_str_plain_filepost");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple", mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple) && "mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_FIELDS", mod_consts.const_str_plain__TYPE_FIELDS);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_FIELDS) && "mod_consts.const_str_plain__TYPE_FIELDS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode_multipart_formdata", mod_consts.const_str_plain_encode_multipart_formdata);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_multipart_formdata) && "mod_consts.const_str_plain_encode_multipart_formdata");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poolmanager", mod_consts.const_str_plain_poolmanager);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_poolmanager) && "mod_consts.const_str_plain_poolmanager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple", mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple) && "mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PoolManager", mod_consts.const_str_plain_PoolManager);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolManager) && "mod_consts.const_str_plain_PoolManager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyManager", mod_consts.const_str_plain_ProxyManager);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyManager) && "mod_consts.const_str_plain_ProxyManager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_from_url", mod_consts.const_str_plain_proxy_from_url);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_from_url) && "mod_consts.const_str_plain_proxy_from_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_response) && "mod_consts.const_str_plain_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple) && "mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse) && "mod_consts.const_str_plain_BaseHTTPResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPResponse", mod_consts.const_str_plain_HTTPResponse);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPResponse) && "mod_consts.const_str_plain_HTTPResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272", mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272) && "mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_make_headers_tuple", mod_consts.const_tuple_str_plain_make_headers_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_headers_tuple) && "mod_consts.const_tuple_str_plain_make_headers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_make_headers", mod_consts.const_str_plain_make_headers);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_headers) && "mod_consts.const_str_plain_make_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152", mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152) && "mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Retry_tuple", mod_consts.const_tuple_str_plain_Retry_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Retry_tuple) && "mod_consts.const_tuple_str_plain_Retry_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Retry", mod_consts.const_str_plain_Retry);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Retry) && "mod_consts.const_str_plain_Retry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303", mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303) && "mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Timeout_tuple", mod_consts.const_tuple_str_plain_Timeout_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Timeout_tuple) && "mod_consts.const_tuple_str_plain_Timeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout) && "mod_consts.const_str_plain_Timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl) && "mod_consts.const_str_plain_ssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPENSSL_VERSION", mod_consts.const_str_plain_OPENSSL_VERSION);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPENSSL_VERSION) && "mod_consts.const_str_plain_OPENSSL_VERSION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple", mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple) && "mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn) && "mod_consts.const_str_plain_warn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e", mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e) && "mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f", mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f) && "mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NotOpenSSLWarning", mod_consts.const_str_plain_NotOpenSSLWarning);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotOpenSSLWarning) && "mod_consts.const_str_plain_NotOpenSSLWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPENSSL_VERSION_INFO", mod_consts.const_str_plain_OPENSSL_VERSION_INFO);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPENSSL_VERSION_INFO) && "mod_consts.const_str_plain_OPENSSL_VERSION_INFO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf", mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf) && "mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402", mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402) && "mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___author__", mod_consts.const_str_plain___author__);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain___author__) && "mod_consts.const_str_plain___author__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIT", mod_consts.const_str_plain_MIT);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIT) && "mod_consts.const_str_plain_MIT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___license__", mod_consts.const_str_plain___license__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___license__) && "mod_consts.const_str_plain___license__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple", mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple) && "mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEBUG", mod_consts.const_str_plain_DEBUG);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG) && "mod_consts.const_str_plain_DEBUG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047", mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047) && "mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_stderr_logger", mod_consts.const_str_plain_add_stderr_logger);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_stderr_logger) && "mod_consts.const_str_plain_add_stderr_logger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_always", mod_consts.const_str_plain_always);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_always) && "mod_consts.const_str_plain_always");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SecurityWarning", mod_consts.const_str_plain_SecurityWarning);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityWarning) && "mod_consts.const_str_plain_SecurityWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_append_tuple", mod_consts.const_tuple_str_plain_append_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_append_tuple) && "mod_consts.const_tuple_str_plain_append_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_default", mod_consts.const_str_plain_default);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_default) && "mod_consts.const_str_plain_default");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InsecurePlatformWarning", mod_consts.const_str_plain_InsecurePlatformWarning);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_InsecurePlatformWarning) && "mod_consts.const_str_plain_InsecurePlatformWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPWarning", mod_consts.const_str_plain_HTTPWarning);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPWarning) && "mod_consts.const_str_plain_HTTPWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae", mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae) && "mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_disable_warnings", mod_consts.const_str_plain_disable_warnings);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_disable_warnings) && "mod_consts.const_str_plain_disable_warnings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1", mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1) && "mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4", mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4) && "mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87", mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87) && "mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2", mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2) && "mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple", mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple) && "mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_tuple", mod_consts.const_tuple_str_plain_category_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_tuple) && "mod_consts.const_tuple_str_plain_category_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple", mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple) && "mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_urllib3$NullHandler(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NullHandler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NullHandler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NullHandler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NullHandler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$PoolManager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolManager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolManager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolManager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolManager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$_DEFAULT_POOL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_POOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_POOL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_POOL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_POOL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_POOL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_POOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_POOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_POOL);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$__version__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___version__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___version__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___version__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___version__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$exceptions(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$ssl(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7550e48c5c339c334a0fbeb512cc6eb9;
static PyCodeObject *code_objects_c549d977f4b9d93245d803a9a25ac590;
static PyCodeObject *code_objects_1e6f10ea2a7dff7112e348e2e665d97b;
static PyCodeObject *code_objects_832abf4c361e93bd44745bb7921c5249;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_00e6d36fce917af4821c0b9719e56d87); CHECK_OBJECT(module_filename_obj);
code_objects_7550e48c5c339c334a0fbeb512cc6eb9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2, mod_consts.const_str_digest_c2a5aae7bb235405ed8e87579bccaea2, NULL, NULL, 0, 0, 0);
code_objects_c549d977f4b9d93245d803a9a25ac590 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add_stderr_logger, mod_consts.const_str_plain_add_stderr_logger, mod_consts.const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, NULL, 1, 0, 0);
code_objects_1e6f10ea2a7dff7112e348e2e665d97b = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_disable_warnings, mod_consts.const_str_plain_disable_warnings, mod_consts.const_tuple_str_plain_category_tuple, NULL, 1, 0, 0);
code_objects_832abf4c361e93bd44745bb7921c5249 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_plain_request, mod_consts.const_tuple_150e1740af141f6df8e372f46239c34d_tuple, NULL, 2, 9, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$$$function__1_add_stderr_logger(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$$$function__2_disable_warnings(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$$$function__3_request(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$$$function__1_add_stderr_logger(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_level = python_pars[0];
PyObject *var_logger = NULL;
PyObject *var_handler = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$$$function__1_add_stderr_logger;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$$$function__1_add_stderr_logger = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$$$function__1_add_stderr_logger)) {
    Py_XDECREF(cache_frame_frame_urllib3$$$function__1_add_stderr_logger);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$$$function__1_add_stderr_logger == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$$$function__1_add_stderr_logger = MAKE_FUNCTION_FRAME(tstate, code_objects_c549d977f4b9d93245d803a9a25ac590, module_urllib3, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$$$function__1_add_stderr_logger->m_type_description == NULL);
frame_frame_urllib3$$$function__1_add_stderr_logger = cache_frame_frame_urllib3$$$function__1_add_stderr_logger;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$$$function__1_add_stderr_logger);
assert(Py_REFCNT(frame_frame_urllib3$$$function__1_add_stderr_logger) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_urllib3$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 85;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_urllib3_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_logger;
    var_logger = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_urllib3$logging(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 86;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_StreamHandler);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_handler;
    var_handler = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_handler);
tmp_expression_value_1 = var_handler;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setFormatter);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_urllib3$logging(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 87;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_Formatter,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0)
);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 87;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_logger);
tmp_called_instance_4 = var_logger;
CHECK_OBJECT(var_handler);
tmp_args_element_value_2 = var_handler;
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 88;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_addHandler, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_logger);
tmp_called_instance_5 = var_logger;
CHECK_OBJECT(par_level);
tmp_args_element_value_3 = par_level;
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 89;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_setLevel, tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_4;
CHECK_OBJECT(var_logger);
tmp_called_instance_6 = var_logger;
frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame.f_lineno = 90;
tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_debug,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0)
);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$$$function__1_add_stderr_logger, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$$$function__1_add_stderr_logger->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$$$function__1_add_stderr_logger, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$$$function__1_add_stderr_logger,
    type_description_1,
    par_level,
    var_logger,
    var_handler
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$$$function__1_add_stderr_logger == cache_frame_frame_urllib3$$$function__1_add_stderr_logger) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$$$function__1_add_stderr_logger);
    cache_frame_frame_urllib3$$$function__1_add_stderr_logger = NULL;
}

assertFrameObject(frame_frame_urllib3$$$function__1_add_stderr_logger);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_handler);
tmp_return_value = var_handler;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_logger);
CHECK_OBJECT(var_logger);
Py_DECREF(var_logger);
var_logger = NULL;
CHECK_OBJECT(var_handler);
CHECK_OBJECT(var_handler);
Py_DECREF(var_handler);
var_handler = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_logger);
var_logger = NULL;
Py_XDECREF(var_handler);
var_handler = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_level);
Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$$$function__2_disable_warnings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_category = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$$$function__2_disable_warnings;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$$$function__2_disable_warnings = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$$$function__2_disable_warnings)) {
    Py_XDECREF(cache_frame_frame_urllib3$$$function__2_disable_warnings);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$$$function__2_disable_warnings == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$$$function__2_disable_warnings = MAKE_FUNCTION_FRAME(tstate, code_objects_1e6f10ea2a7dff7112e348e2e665d97b, module_urllib3, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$$$function__2_disable_warnings->m_type_description == NULL);
frame_frame_urllib3$$$function__2_disable_warnings = cache_frame_frame_urllib3$$$function__2_disable_warnings;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$$$function__2_disable_warnings);
assert(Py_REFCNT(frame_frame_urllib3$$$function__2_disable_warnings) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_urllib3$warnings(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_ignore;
CHECK_OBJECT(par_category);
tmp_args_element_value_2 = par_category;
frame_frame_urllib3$$$function__2_disable_warnings->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_simplefilter,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$$$function__2_disable_warnings, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$$$function__2_disable_warnings->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$$$function__2_disable_warnings, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$$$function__2_disable_warnings,
    type_description_1,
    par_category
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$$$function__2_disable_warnings == cache_frame_frame_urllib3$$$function__2_disable_warnings) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$$$function__2_disable_warnings);
    cache_frame_frame_urllib3$$$function__2_disable_warnings = NULL;
}

assertFrameObject(frame_frame_urllib3$$$function__2_disable_warnings);

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
CHECK_OBJECT(par_category);
Py_DECREF(par_category);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_category);
Py_DECREF(par_category);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$$$function__3_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_method = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_body = python_pars[2];
PyObject *par_fields = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_preload_content = python_pars[5];
PyObject *par_decode_content = python_pars[6];
PyObject *par_redirect = python_pars[7];
PyObject *par_retries = python_pars[8];
PyObject *par_timeout = python_pars[9];
PyObject *par_json = python_pars[10];
struct Nuitka_FrameObject *frame_frame_urllib3$$$function__3_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$$$function__3_request = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$$$function__3_request)) {
    Py_XDECREF(cache_frame_frame_urllib3$$$function__3_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$$$function__3_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$$$function__3_request = MAKE_FUNCTION_FRAME(tstate, code_objects_832abf4c361e93bd44745bb7921c5249, module_urllib3, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$$$function__3_request->m_type_description == NULL);
frame_frame_urllib3$$$function__3_request = cache_frame_frame_urllib3$$$function__3_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$$$function__3_request);
assert(Py_REFCNT(frame_frame_urllib3$$$function__3_request) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_expression_value_1 = module_var_accessor_urllib3$_DEFAULT_POOL(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_POOL);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_request);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_kw_call_arg_value_0_1 = par_method;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_0_1 = par_body;
CHECK_OBJECT(par_fields);
tmp_kw_call_dict_value_1_1 = par_fields;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_2_1 = par_headers;
CHECK_OBJECT(par_preload_content);
tmp_kw_call_dict_value_3_1 = par_preload_content;
CHECK_OBJECT(par_decode_content);
tmp_kw_call_dict_value_4_1 = par_decode_content;
CHECK_OBJECT(par_redirect);
tmp_kw_call_dict_value_5_1 = par_redirect;
CHECK_OBJECT(par_retries);
tmp_kw_call_dict_value_6_1 = par_retries;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_7_1 = par_timeout;
CHECK_OBJECT(par_json);
tmp_kw_call_dict_value_8_1 = par_json;
frame_frame_urllib3$$$function__3_request->m_frame.f_lineno = 193;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_32fa62149c9037f3209c486a585bf78c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$$$function__3_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$$$function__3_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$$$function__3_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$$$function__3_request,
    type_description_1,
    par_method,
    par_url,
    par_body,
    par_fields,
    par_headers,
    par_preload_content,
    par_decode_content,
    par_redirect,
    par_retries,
    par_timeout,
    par_json
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$$$function__3_request == cache_frame_frame_urllib3$$$function__3_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$$$function__3_request);
    cache_frame_frame_urllib3$$$function__3_request = NULL;
}

assertFrameObject(frame_frame_urllib3$$$function__3_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_preload_content);
Py_DECREF(par_preload_content);
CHECK_OBJECT(par_decode_content);
Py_DECREF(par_decode_content);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_preload_content);
Py_DECREF(par_preload_content);
CHECK_OBJECT(par_decode_content);
Py_DECREF(par_decode_content);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function__1_add_stderr_logger(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function__1_add_stderr_logger,
        mod_consts.const_str_plain_add_stderr_logger,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c549d977f4b9d93245d803a9a25ac590,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3,
        mod_consts.const_str_digest_6658a1ea9114e73c398341fd423e2d44,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function__2_disable_warnings(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function__2_disable_warnings,
        mod_consts.const_str_plain_disable_warnings,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e6f10ea2a7dff7112e348e2e665d97b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3,
        mod_consts.const_str_digest_67183c002961d0a92c7c97d0628b2747,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function__3_request(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function__3_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_832abf4c361e93bd44745bb7921c5249,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_urllib3,
        mod_consts.const_str_digest_a7e1f37472f030a520e1fc7d6e261d96,
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

static function_impl_code const function_table_urllib3[] = {
impl_urllib3$$$function__1_add_stderr_logger,
impl_urllib3$$$function__2_disable_warnings,
impl_urllib3$$$function__3_request,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3);
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
        module_urllib3,
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
        function_table_urllib3,
        sizeof(function_table_urllib3) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3");

    // Store the module for future use.
    module_urllib3 = module;

    moduledict_urllib3 = MODULE_DICT(module_urllib3);

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
        PRINT_STRING("urllib3: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // For Python 3.11 standalone modules, package "__path__" is inserted by the
    // loader before module code runs. Pre-seed "__compiled__" for non-packages
    // to keep their dangerous dict slots aligned with packages.
#if PYTHON_VERSION >= 0x3b0 && PYTHON_VERSION < 0x3c0 && _NUITKA_STANDALONE_MODE && !1
    UPDATE_STRING_DICT0(
        moduledict_urllib3,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3);
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

        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_urllib3;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_8908a93f6f38bf1a20deb02e5e8b38cc;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3 = MAKE_MODULE_FRAME(code_objects_7550e48c5c339c334a0fbeb512cc6eb9, module_urllib3);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3);
assert(Py_REFCNT(frame_frame_urllib3) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_urllib3->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_urllib3->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_urllib3->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_urllib3->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$__spec__(tstate);
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
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = module_var_accessor_urllib3$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_urllib3$__spec__(tstate);
assert(!(tmp_ass_attr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3->m_frame.f_lineno = 11;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_NullHandler_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_urllib3->m_frame.f_lineno = 12;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_NullHandler,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_NullHandler);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 14;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__base_connection;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__TYPE_BODY_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 15;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain__TYPE_BODY,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__TYPE_BODY);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_BODY, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__collections;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 16;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_HTTPHeaderDict,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_HTTPHeaderDict);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__version;
tmp_globals_arg_value_7 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 17;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_connectionpool;
tmp_globals_arg_value_8 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 18;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_HTTPConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_HTTPConnectionPool);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnectionPool, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_HTTPSConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_HTTPSConnectionPool);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnectionPool, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_connection_from_url,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_connection_from_url);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_connection_from_url, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_filepost;
tmp_globals_arg_value_9 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 19;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain__TYPE_FIELDS,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain__TYPE_FIELDS);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FIELDS, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_encode_multipart_formdata,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_encode_multipart_formdata);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_formdata, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_poolmanager;
tmp_globals_arg_value_10 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_8867a986f001c831bce500d134c983ea_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 20;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_PoolManager,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_PoolManager);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_ProxyManager,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ProxyManager);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyManager, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_proxy_from_url,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_proxy_from_url);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url, tmp_assign_source_26);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_response;
tmp_globals_arg_value_11 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BaseHTTPResponse_str_plain_HTTPResponse_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 21;
tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_BaseHTTPResponse,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BaseHTTPResponse);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_HTTPResponse,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_HTTPResponse);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPResponse, tmp_assign_source_29);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_eec49d283d20cbc4ed650539d1524272;
tmp_globals_arg_value_12 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_make_headers_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 22;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_make_headers,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_make_headers);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_make_headers, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152;
tmp_globals_arg_value_13 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_Retry_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 23;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_Retry,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Retry);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303;
tmp_globals_arg_value_14 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_Timeout_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_urllib3->m_frame.f_lineno = 24;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_urllib3,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Timeout);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_32);
}
{
nuitka_bool tmp_assign_source_33;
tmp_assign_source_33 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_15 = (PyObject *)moduledict_urllib3;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = Py_None;
tmp_level_value_15 = const_int_0;
frame_frame_urllib3->m_frame.f_lineno = 30;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_34);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_35;
tmp_assign_source_35 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_35;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 29;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3->m_frame)) {
        frame_frame_urllib3->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_6;
branch_no_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
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
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
bool tmp_condition_result_2;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_urllib3$ssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_OPENSSL_VERSION);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 34;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

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
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
tmp_expression_value_5 = module_var_accessor_urllib3$warnings(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_urllib3$ssl(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_1;
}
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_OPENSSL_VERSION);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_1;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_873c905d5fb9e7edc132560a5fe46d9f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
tmp_expression_value_7 = module_var_accessor_urllib3$exceptions(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_NotOpenSSLWarning);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 35;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_urllib3$ssl(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_OPENSSL_VERSION_INFO);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_int_pos_1_int_pos_1_int_pos_1_tuple;
tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_c6cfe8a4ae9ac8c97cfafff804b4a64e;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_expression_value_9 = module_var_accessor_urllib3$ssl(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_2;
}
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_OPENSSL_VERSION);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_2;
}
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_bcc8dc0f74fe8284a1a093bfe27e77bf;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_urllib3->m_frame.f_lineno = 42;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 42;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto frame_exception_exit_1;
}
branch_no_4:;
branch_end_3:;
branch_no_2:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_str_digest_81b98f1a8ecf97715642eb1142269402;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___author__, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = mod_consts.const_str_plain_MIT;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___license__, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = module_var_accessor_urllib3$__version__(tstate);
if (unlikely(tmp_assign_source_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___version__);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = mod_consts.const_tuple_5a372c8cba944b2d8ae881039ac97fe5_tuple;
UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_39);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
tmp_called_instance_1 = module_var_accessor_urllib3$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 71;
tmp_expression_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_urllib3_tuple, 0)
);

if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_urllib3$NullHandler(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NullHandler);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 71;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 71;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 71;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 71;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_annotations_1;
tmp_expression_value_11 = module_var_accessor_urllib3$logging(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_DEBUG);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_3);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d1a45c216cfeed0a9148685bd70cc047);

tmp_assign_source_40 = MAKE_FUNCTION_urllib3$$$function__1_add_stderr_logger(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_add_stderr_logger, tmp_assign_source_40);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_urllib3, mod_consts.const_str_plain_NullHandler);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NullHandler);

exception_lineno = 95;

    goto frame_exception_exit_1;
}

{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_13;
tmp_expression_value_12 = module_var_accessor_urllib3$warnings(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_simplefilter);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_always;
tmp_expression_value_13 = module_var_accessor_urllib3$exceptions(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_SecurityWarning);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 102;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 102;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_7,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_append_tuple
    );
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_15;
tmp_expression_value_14 = module_var_accessor_urllib3$warnings(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_simplefilter);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_plain_default;
tmp_expression_value_15 = module_var_accessor_urllib3$exceptions(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_InsecurePlatformWarning);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 104;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 104;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_8,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_append_tuple
    );
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_annotations_2;
tmp_expression_value_16 = module_var_accessor_urllib3$exceptions(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_HTTPWarning);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_4);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_1efbb6577469b96f6110cc02048e7fae);

tmp_assign_source_41 = MAKE_FUNCTION_urllib3$$$function__2_disable_warnings(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_disable_warnings, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_urllib3$PoolManager(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolManager);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto frame_exception_exit_1;
}
frame_frame_urllib3->m_frame.f_lineno = 114;
tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_POOL, tmp_assign_source_42);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_3;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_6b29c64de444c5de2a3ff4a5f5a12fe1);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8f2beb6b3dabfbc0f8f84d26cfe308f4);

tmp_assign_source_43 = MAKE_FUNCTION_urllib3$$$function__3_request(tstate, tmp_kw_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)mod_consts.const_str_plain_request, tmp_assign_source_43);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3);
    return module_urllib3;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
