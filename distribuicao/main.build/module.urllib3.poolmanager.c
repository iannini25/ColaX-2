/* Generated code for Python module 'urllib3$poolmanager'
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



/* The "module_urllib3$poolmanager" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$poolmanager;
PyDictObject *moduledict_urllib3$poolmanager;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_copy;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_host;
PyObject *const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple;
PyObject *const_str_plain_context;
PyObject *const_str_plain_items;
PyObject *const_tuple_str_plain_socket_options_tuple;
PyObject *const_str_plain_socket_options;
PyObject *const_str_plain_pop;
PyObject *const_str_plain_key_;
PyObject *const_str_plain__fields;
PyObject *const_tuple_str_plain_key_blocksize_tuple;
PyObject *const_str_plain__DEFAULT_BLOCKSIZE;
PyObject *const_str_plain_key_blocksize;
PyObject *const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694;
PyObject *const_str_plain_retries;
PyObject *const_str_plain_Retry;
PyObject *const_str_plain_from_int;
PyObject *const_str_plain_connection_pool_kw;
PyObject *const_str_plain_RecentlyUsedContainer;
PyObject *const_str_plain_pools;
PyObject *const_str_plain_pool_classes_by_scheme;
PyObject *const_str_plain_key_fn_by_scheme;
PyObject *const_str_plain_clear;
PyObject *const_tuple_str_plain_blocksize_tuple;
PyObject *const_str_plain_blocksize;
PyObject *const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple;
PyObject *const_str_plain_request_context;
PyObject *const_str_plain_http;
PyObject *const_str_plain_SSL_KEYWORDS;
PyObject *const_str_digest_21600d731d4c18753067ac34238fa236;
PyObject *const_str_digest_5dbd73ce38e0a194d35778447907f4fa;
PyObject *const_str_plain_LocationValueError;
PyObject *const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple;
PyObject *const_str_plain__merge_pool_kwargs;
PyObject *const_str_plain_port_by_scheme;
PyObject *const_int_pos_80;
PyObject *const_str_plain_port;
PyObject *const_str_plain_connection_from_context;
PyObject *const_str_digest_4da161a884ed71d642791cce577b33e8;
PyObject *const_str_plain_strict;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_8cfe95631dbd877a5a4ac46864284e0c;
PyObject *const_str_plain_FutureWarning;
PyObject *const_tuple_str_plain_strict_tuple;
PyObject *const_str_plain_URLSchemeUnknown;
PyObject *const_str_plain_connection_from_pool_key;
PyObject *const_tuple_str_plain_request_context_tuple;
PyObject *const_str_digest_1b356b67c770c772a142632f443bbf81;
PyObject *const_str_plain_lock;
PyObject *const_str_plain__new_pool;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_pool;
PyObject *const_str_digest_6e28485fe62dde72eed752d843ef1ec6;
PyObject *const_str_plain_parse_url;
PyObject *const_str_plain_connection_from_host;
PyObject *const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple;
PyObject *const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e;
PyObject *const_str_plain_base_pool_kwargs;
PyObject *const_str_digest_a050ca78aa472f2c5b57441d0496ce83;
PyObject *const_str_plain_proxy;
PyObject *const_str_plain_connection_requires_http_tunnel;
PyObject *const_str_plain_proxy_config;
PyObject *const_str_digest_2652849bfeb87d067402edac4eccdd70;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple;
PyObject *const_tuple_str_plain_category_str_plain_stacklevel_tuple;
PyObject *const_tuple_str_plain_port_str_plain_scheme_tuple;
PyObject *const_str_plain_assert_same_host;
PyObject *const_str_plain_redirect;
PyObject *const_str_plain_headers;
PyObject *const_str_plain__proxy_requires_url_absolute_form;
PyObject *const_str_plain_urlopen;
PyObject *const_str_plain_request_uri;
PyObject *const_str_plain_get_redirect_location;
PyObject *const_str_plain_urljoin;
PyObject *const_str_plain_status;
PyObject *const_int_pos_303;
PyObject *const_str_plain_GET;
PyObject *const_str_plain_body;
PyObject *const_str_plain_HTTPHeaderDict;
PyObject *const_str_plain__prepare_for_method_change;
PyObject *const_tuple_str_plain_redirect_tuple;
PyObject *const_str_plain_remove_headers_on_redirect;
PyObject *const_str_plain_is_same_host;
PyObject *const_str_plain_new_headers;
PyObject *const_str_plain_increment;
PyObject *const_str_plain_method;
PyObject *const_tuple_str_plain_response_str_plain__pool_tuple;
PyObject *const_str_plain_MaxRetryError;
PyObject *const_str_plain_raise_on_redirect;
PyObject *const_str_plain_drain_conn;
PyObject *const_str_plain_log;
PyObject *const_str_plain_info;
PyObject *const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
PyObject *const_str_digest_1fc95c87b0be10953189ac503651cfae;
PyObject *const_str_plain_HTTPConnectionPool;
PyObject *const_str_digest_a05fa8f67e9c342eb59afe566750507b;
PyObject *const_str_chr_58;
PyObject *const_tuple_str_plain_http_str_plain_https_tuple;
PyObject *const_str_plain_ProxySchemeUnknown;
PyObject *const_str_plain__replace;
PyObject *const_tuple_str_plain_port_tuple;
PyObject *const_str_plain_proxy_headers;
PyObject *const_str_plain_proxy_ssl_context;
PyObject *const_str_plain_ProxyConfig;
PyObject *const_str_plain__proxy;
PyObject *const_str_plain__proxy_headers;
PyObject *const_str_plain__proxy_config;
PyObject *const_str_plain_https;
PyObject *const_tuple_str_plain_pool_kwargs_tuple;
PyObject *const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce;
PyObject *const_str_plain_netloc;
PyObject *const_str_plain_Host;
PyObject *const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc;
PyObject *const_str_plain__set_proxy_headers;
PyObject *const_str_digest_1552d535bdde2b752b496af3502874b7;
PyObject *const_str_plain_ProxyManager;
PyObject *const_str_plain_proxy_url;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urljoin_tuple;
PyObject *const_str_plain__collections;
PyObject *const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple;
PyObject *const_str_plain__request_methods;
PyObject *const_tuple_str_plain_RequestMethods_tuple;
PyObject *const_str_plain_RequestMethods;
PyObject *const_str_plain_connection;
PyObject *const_tuple_str_plain_ProxyConfig_tuple;
PyObject *const_str_plain_connectionpool;
PyObject *const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple;
PyObject *const_str_plain_HTTPSConnectionPool;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple;
PyObject *const_str_plain_response;
PyObject *const_tuple_str_plain_BaseHTTPResponse_tuple;
PyObject *const_str_plain_BaseHTTPResponse;
PyObject *const_str_digest_77799d2fef7894b65fb30e7df14c6471;
PyObject *const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple;
PyObject *const_str_plain__TYPE_SOCKET_OPTIONS;
PyObject *const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de;
PyObject *const_tuple_str_plain_connection_requires_http_tunnel_tuple;
PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
PyObject *const_tuple_str_plain_Retry_tuple;
PyObject *const_str_digest_522bfd5e75e11cb6ec433673b0570303;
PyObject *const_tuple_str_plain_Timeout_tuple;
PyObject *const_str_plain_Timeout;
PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
PyObject *const_tuple_str_plain_Url_str_plain_parse_url_tuple;
PyObject *const_str_plain_Url;
PyObject *const_str_plain_PoolManager;
PyObject *const_str_plain_proxy_from_url;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple;
PyObject *const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple;
PyObject *const_int_pos_16384;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_PoolKey;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
PyObject *const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7;
PyObject *const_int_pos_56;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_str;
PyObject *const_str_plain_key_scheme;
PyObject *const_str_plain_key_host;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_str_plain_key_port;
PyObject *const_str_digest_944f16325f6df0dee4daf0dabfec4a58;
PyObject *const_str_plain_key_timeout;
PyObject *const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59;
PyObject *const_str_plain_key_retries;
PyObject *const_str_digest_74c1228720a3ef24152210367f6503ca;
PyObject *const_str_plain_key_block;
PyObject *const_str_digest_da3dae280158f5ea10725d61f2ba5074;
PyObject *const_str_plain_key_source_address;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_str_plain_key_key_file;
PyObject *const_str_plain_key_key_password;
PyObject *const_str_plain_key_cert_file;
PyObject *const_str_plain_key_cert_reqs;
PyObject *const_str_plain_key_ca_certs;
PyObject *const_str_digest_91593c038aaffbc1977f0dcf43037004;
PyObject *const_str_plain_key_ca_cert_data;
PyObject *const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc;
PyObject *const_str_plain_key_ssl_version;
PyObject *const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a;
PyObject *const_str_plain_key_ssl_minimum_version;
PyObject *const_str_plain_key_ssl_maximum_version;
PyObject *const_str_plain_key_ca_cert_dir;
PyObject *const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1;
PyObject *const_str_plain_key_ssl_context;
PyObject *const_str_plain_key_maxsize;
PyObject *const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520;
PyObject *const_str_plain_key_headers;
PyObject *const_str_digest_991b0e883fb0ad3756198bb63bcdae00;
PyObject *const_str_plain_key__proxy;
PyObject *const_str_plain_key__proxy_headers;
PyObject *const_str_digest_5c18c65c04645af207701740f137e33b;
PyObject *const_str_plain_key__proxy_config;
PyObject *const_str_digest_c6714ac067c433093ca51e26005b778f;
PyObject *const_str_plain_key_socket_options;
PyObject *const_str_plain_key__socks_options;
PyObject *const_str_digest_e330e1f63cfecfca1e6ba67db776922b;
PyObject *const_str_plain_key_assert_hostname;
PyObject *const_str_plain_key_assert_fingerprint;
PyObject *const_str_plain_key_server_hostname;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_33292b837b24009f29a7e089bd91e09a;
PyObject *const_str_plain__default_key_normalizer;
PyObject *const_str_plain_partial;
PyObject *const_str_digest_5827159d0548822ba1ce39a1191c382b;
PyObject *const_int_pos_162;
PyObject *const_tuple_int_pos_10_none_tuple;
PyObject *const_dict_ebdb4b45ef007dbd0dce855e88ca7a21;
PyObject *const_str_digest_c693d3d582276b7b2edfad1a40061e7a;
PyObject *const_dict_71adc2ba5737c82f5bb97b4d3b034ead;
PyObject *const_str_digest_9fbd1260836ddbad56854d8b9c0186c8;
PyObject *const_dict_01669e220d2c4b01b73594e81ac1a026;
PyObject *const_str_digest_d867a048a787bc50c8cc5e46f1c6583f;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_e12424d1c12318755765b15c967e6dd3;
PyObject *const_str_digest_13408ef5640dc399fffe039ff946ada1;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_6077c56a9bf23cde9bad19d172735047;
PyObject *const_tuple_none_str_plain_http_none_tuple;
PyObject *const_dict_c0d1044c08d9ebea04e40b893d8cc0c4;
PyObject *const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef;
PyObject *const_dict_6f2f0f0d8491eb885cf53868f006d8e0;
PyObject *const_str_digest_e5a07a0dc70d8af35bcd050243335215;
PyObject *const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe;
PyObject *const_str_digest_df49728476f1c106520a9c1d8d838d08;
PyObject *const_dict_b303e5522e44734c4d6e28598f034257;
PyObject *const_str_plain_connection_from_url;
PyObject *const_str_digest_207bd888d8d92daafa6abe19cac5a8f7;
PyObject *const_dict_11b6b7625382e90ef15aea2e305c68b8;
PyObject *const_str_digest_5cc25be09470e6d83192f743509a3e44;
PyObject *const_dict_6a349da13af6493fb34c5d93bda84c27;
PyObject *const_str_digest_203cb81c7689ac40dcee168c450785c6;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_af966b76a25811eb93841d688a6c6e33;
PyObject *const_str_digest_30b54feb3c940a6350ed755fb780fac0;
PyObject *const_tuple_4f9dc447e301976538e99c98af24fcee_tuple;
PyObject *const_str_digest_2b538996d6d0575adf3afba9f3fff7ed;
PyObject *const_int_pos_506;
PyObject *const_tuple_int_pos_10_none_none_none_false_none_none_tuple;
PyObject *const_dict_4ad6bc5222ff84c7afd41de4db585b18;
PyObject *const_str_digest_27aab67055f718697d7ee2aa049bc069;
PyObject *const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48;
PyObject *const_dict_ccec3d81d2b524ac778d43477f4d7c9b;
PyObject *const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21;
PyObject *const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096;
PyObject *const_tuple_da394afa18ec8c1083d658eef24f2300_tuple;
PyObject *const_dict_a1bc570ac84b18cc31a134a36f4366cc;
PyObject *const_str_digest_de37edcd825e67321401541982b1456b;
PyObject *const_str_digest_707a5a9b156f542056749b61f0d359c1;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
PyObject *const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple;
PyObject *const_tuple_81734b8113654781a9cf1684903a4e5b_tuple;
PyObject *const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple;
PyObject *const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple;
PyObject *const_tuple_d809e6c1c02528295433eb5105003bd8_tuple;
PyObject *const_tuple_str_plain_self_str_plain_parsed_url_tuple;
PyObject *const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple;
PyObject *const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple;
PyObject *const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple;
PyObject *const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple;
PyObject *const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple;
PyObject *const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple;
PyObject *const_tuple_str_plain_url_str_plain_kw_tuple;
PyObject *const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple;
PyObject *const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[285];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.poolmanager"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 285) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 285 values, got %d\n",
                    UN_TRANSLATE("urllib3.poolmanager"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scheme", mod_consts.const_str_plain_scheme);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple", mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_context", mod_consts.const_str_plain_context);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_context);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_socket_options_tuple", mod_consts.const_tuple_str_plain_socket_options_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socket_options_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket_options", mod_consts.const_str_plain_socket_options);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_", mod_consts.const_str_plain_key_);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields", mod_consts.const_str_plain__fields);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_blocksize_tuple", mod_consts.const_tuple_str_plain_key_blocksize_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_blocksize_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_BLOCKSIZE", mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_blocksize", mod_consts.const_str_plain_key_blocksize);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_blocksize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694", mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_retries", mod_consts.const_str_plain_retries);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_retries);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Retry", mod_consts.const_str_plain_Retry);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Retry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_int", mod_consts.const_str_plain_from_int);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_pool_kw", mod_consts.const_str_plain_connection_pool_kw);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool_kw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RecentlyUsedContainer", mod_consts.const_str_plain_RecentlyUsedContainer);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_RecentlyUsedContainer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pools", mod_consts.const_str_plain_pools);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_pools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pool_classes_by_scheme", mod_consts.const_str_plain_pool_classes_by_scheme);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_pool_classes_by_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_fn_by_scheme", mod_consts.const_str_plain_key_fn_by_scheme);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_fn_by_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clear", mod_consts.const_str_plain_clear);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_blocksize_tuple", mod_consts.const_tuple_str_plain_blocksize_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blocksize_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blocksize", mod_consts.const_str_plain_blocksize);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple", mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_context", mod_consts.const_str_plain_request_context);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_context);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_http", mod_consts.const_str_plain_http);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_http);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_KEYWORDS", mod_consts.const_str_plain_SSL_KEYWORDS);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_KEYWORDS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236", mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa", mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocationValueError", mod_consts.const_str_plain_LocationValueError);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocationValueError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple", mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__merge_pool_kwargs", mod_consts.const_str_plain__merge_pool_kwargs);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__merge_pool_kwargs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port_by_scheme", mod_consts.const_str_plain_port_by_scheme);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_port_by_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_80", mod_consts.const_int_pos_80);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_80);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_context", mod_consts.const_str_plain_connection_from_context);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_context);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8", mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strict", mod_consts.const_str_plain_strict);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_strict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c", mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FutureWarning", mod_consts.const_str_plain_FutureWarning);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_FutureWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_strict_tuple", mod_consts.const_tuple_str_plain_strict_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_URLSchemeUnknown", mod_consts.const_str_plain_URLSchemeUnknown);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_URLSchemeUnknown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_pool_key", mod_consts.const_str_plain_connection_from_pool_key);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_pool_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_request_context_tuple", mod_consts.const_tuple_str_plain_request_context_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_context_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81", mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lock", mod_consts.const_str_plain_lock);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new_pool", mod_consts.const_str_plain__new_pool);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__new_pool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pool", mod_consts.const_str_plain_pool);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_pool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6", mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_url", mod_consts.const_str_plain_parse_url);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_host", mod_consts.const_str_plain_connection_from_host);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple", mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e", mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base_pool_kwargs", mod_consts.const_str_plain_base_pool_kwargs);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_pool_kwargs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83", mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy", mod_consts.const_str_plain_proxy);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_requires_http_tunnel", mod_consts.const_str_plain_connection_requires_http_tunnel);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_requires_http_tunnel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_config", mod_consts.const_str_plain_proxy_config);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_config);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70", mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple", mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple", mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple", mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assert_same_host", mod_consts.const_str_plain_assert_same_host);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_same_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_redirect", mod_consts.const_str_plain_redirect);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy_requires_url_absolute_form", mod_consts.const_str_plain__proxy_requires_url_absolute_form);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_requires_url_absolute_form);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlopen", mod_consts.const_str_plain_urlopen);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_uri", mod_consts.const_str_plain_request_uri);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_uri);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_redirect_location", mod_consts.const_str_plain_get_redirect_location);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_redirect_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urljoin", mod_consts.const_str_plain_urljoin);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status", mod_consts.const_str_plain_status);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_303", mod_consts.const_int_pos_303);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_303);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GET", mod_consts.const_str_plain_GET);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__prepare_for_method_change", mod_consts.const_str_plain__prepare_for_method_change);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_for_method_change);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_redirect_tuple", mod_consts.const_tuple_str_plain_redirect_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_redirect_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_headers_on_redirect", mod_consts.const_str_plain_remove_headers_on_redirect);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_headers_on_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_same_host", mod_consts.const_str_plain_is_same_host);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_same_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new_headers", mod_consts.const_str_plain_new_headers);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_increment", mod_consts.const_str_plain_increment);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_increment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple", mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxRetryError", mod_consts.const_str_plain_MaxRetryError);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxRetryError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raise_on_redirect", mod_consts.const_str_plain_raise_on_redirect);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_on_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_drain_conn", mod_consts.const_str_plain_drain_conn);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_drain_conn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085", mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae", mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPConnectionPool", mod_consts.const_str_plain_HTTPConnectionPool);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnectionPool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b", mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_http_str_plain_https_tuple", mod_consts.const_tuple_str_plain_http_str_plain_https_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxySchemeUnknown", mod_consts.const_str_plain_ProxySchemeUnknown);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxySchemeUnknown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__replace", mod_consts.const_str_plain__replace);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__replace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_port_tuple", mod_consts.const_tuple_str_plain_port_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_port_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_headers", mod_consts.const_str_plain_proxy_headers);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_ssl_context", mod_consts.const_str_plain_proxy_ssl_context);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_ssl_context);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyConfig", mod_consts.const_str_plain_ProxyConfig);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyConfig);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy", mod_consts.const_str_plain__proxy);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy_headers", mod_consts.const_str_plain__proxy_headers);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy_config", mod_consts.const_str_plain__proxy_config);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_config);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_https", mod_consts.const_str_plain_https);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_https);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_pool_kwargs_tuple", mod_consts.const_tuple_str_plain_pool_kwargs_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pool_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce", mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_netloc", mod_consts.const_str_plain_netloc);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Host", mod_consts.const_str_plain_Host);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc", mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__set_proxy_headers", mod_consts.const_str_plain__set_proxy_headers);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_proxy_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7", mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyManager", mod_consts.const_str_plain_ProxyManager);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyManager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_url", mod_consts.const_str_plain_proxy_url);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_functools", mod_consts.const_str_plain_functools);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TracebackType", mod_consts.const_str_plain_TracebackType);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f", mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_urljoin_tuple", mod_consts.const_tuple_str_plain_urljoin_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urljoin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain__collections);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__request_methods", mod_consts.const_str_plain__request_methods);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__request_methods);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RequestMethods_tuple", mod_consts.const_tuple_str_plain_RequestMethods_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RequestMethods_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestMethods", mod_consts.const_str_plain_RequestMethods);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestMethods);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProxyConfig_tuple", mod_consts.const_tuple_str_plain_ProxyConfig_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxyConfig_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connectionpool", mod_consts.const_str_plain_connectionpool);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_connectionpool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple", mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnectionPool", mod_consts.const_str_plain_HTTPSConnectionPool);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnectionPool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple", mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471", mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple", mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS", mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de", mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple", mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152", mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Retry_tuple", mod_consts.const_tuple_str_plain_Retry_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Retry_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303", mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Timeout_tuple", mod_consts.const_tuple_str_plain_Timeout_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Timeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d", mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple", mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Url", mod_consts.const_str_plain_Url);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PoolManager", mod_consts.const_str_plain_PoolManager);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolManager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_from_url", mod_consts.const_str_plain_proxy_from_url);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_from_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple", mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple", mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_int_pos_16384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PoolKey", mod_consts.const_str_plain_PoolKey);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_PoolKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6", mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7", mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_56", mod_consts.const_int_pos_56);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_56);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_scheme", mod_consts.const_str_plain_key_scheme);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_host", mod_consts.const_str_plain_key_host);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_port", mod_consts.const_str_plain_key_port);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_port);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58", mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_timeout", mod_consts.const_str_plain_key_timeout);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59", mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_retries", mod_consts.const_str_plain_key_retries);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_retries);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca", mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_block", mod_consts.const_str_plain_key_block);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_block);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074", mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_source_address", mod_consts.const_str_plain_key_source_address);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_source_address);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58", mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_key_file", mod_consts.const_str_plain_key_key_file);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_key_file);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_key_password", mod_consts.const_str_plain_key_key_password);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_key_password);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_cert_file", mod_consts.const_str_plain_key_cert_file);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_cert_file);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_cert_reqs", mod_consts.const_str_plain_key_cert_reqs);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_cert_reqs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ca_certs", mod_consts.const_str_plain_key_ca_certs);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ca_certs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004", mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ca_cert_data", mod_consts.const_str_plain_key_ca_cert_data);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ca_cert_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc", mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_version", mod_consts.const_str_plain_key_ssl_version);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a", mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_minimum_version", mod_consts.const_str_plain_key_ssl_minimum_version);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_minimum_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_maximum_version", mod_consts.const_str_plain_key_ssl_maximum_version);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_maximum_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ca_cert_dir", mod_consts.const_str_plain_key_ca_cert_dir);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ca_cert_dir);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1", mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_context", mod_consts.const_str_plain_key_ssl_context);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_context);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_maxsize", mod_consts.const_str_plain_key_maxsize);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_maxsize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520", mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_headers", mod_consts.const_str_plain_key_headers);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00", mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__proxy", mod_consts.const_str_plain_key__proxy);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_key__proxy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__proxy_headers", mod_consts.const_str_plain_key__proxy_headers);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_key__proxy_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b", mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__proxy_config", mod_consts.const_str_plain_key__proxy_config);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_key__proxy_config);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f", mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_socket_options", mod_consts.const_str_plain_key_socket_options);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_socket_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__socks_options", mod_consts.const_str_plain_key__socks_options);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_key__socks_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b", mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_assert_hostname", mod_consts.const_str_plain_key_assert_hostname);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_assert_hostname);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_assert_fingerprint", mod_consts.const_str_plain_key_assert_fingerprint);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_assert_fingerprint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_server_hostname", mod_consts.const_str_plain_key_server_hostname);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_server_hostname);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a", mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__default_key_normalizer", mod_consts.const_str_plain__default_key_normalizer);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_key_normalizer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_partial", mod_consts.const_str_plain_partial);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b", mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_162", mod_consts.const_int_pos_162);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_int_pos_162);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_10_none_tuple", mod_consts.const_tuple_int_pos_10_none_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21", mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a", mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead", mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8", mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026", mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f", mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3", mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1", mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047", mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_str_plain_http_none_tuple", mod_consts.const_tuple_none_str_plain_http_none_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_none_str_plain_http_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4", mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef", mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0", mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215", mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe", mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08", mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b303e5522e44734c4d6e28598f034257", mod_consts.const_dict_b303e5522e44734c4d6e28598f034257);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_dict_b303e5522e44734c4d6e28598f034257);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_url", mod_consts.const_str_plain_connection_from_url);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7", mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8", mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44", mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27", mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6", mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33", mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0", mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple", mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed", mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_506", mod_consts.const_int_pos_506);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_int_pos_506);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple", mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18", mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069", mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48", mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b", mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21", mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096", mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple", mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc", mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de37edcd825e67321401541982b1456b", mod_consts.const_str_digest_de37edcd825e67321401541982b1456b);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_digest_de37edcd825e67321401541982b1456b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1", mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple", mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple", mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple", mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple", mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple", mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple", mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple", mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple", mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple", mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple", mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple", mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple", mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple", mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple", mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple", mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple", mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple);
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
void checkModuleConstants_urllib3$poolmanager(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scheme", mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme) && "mod_consts.const_str_plain_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_host) && "mod_consts.const_str_plain_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple", mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple) && "mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_context", mod_consts.const_str_plain_context);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_context) && "mod_consts.const_str_plain_context");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_socket_options_tuple", mod_consts.const_tuple_str_plain_socket_options_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socket_options_tuple) && "mod_consts.const_tuple_str_plain_socket_options_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket_options", mod_consts.const_str_plain_socket_options);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket_options) && "mod_consts.const_str_plain_socket_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop) && "mod_consts.const_str_plain_pop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_", mod_consts.const_str_plain_key_);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_) && "mod_consts.const_str_plain_key_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields", mod_consts.const_str_plain__fields);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields) && "mod_consts.const_str_plain__fields");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_blocksize_tuple", mod_consts.const_tuple_str_plain_key_blocksize_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_blocksize_tuple) && "mod_consts.const_tuple_str_plain_key_blocksize_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_BLOCKSIZE", mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_BLOCKSIZE) && "mod_consts.const_str_plain__DEFAULT_BLOCKSIZE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_blocksize", mod_consts.const_str_plain_key_blocksize);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_blocksize) && "mod_consts.const_str_plain_key_blocksize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694", mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694) && "mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_retries", mod_consts.const_str_plain_retries);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_retries) && "mod_consts.const_str_plain_retries");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Retry", mod_consts.const_str_plain_Retry);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Retry) && "mod_consts.const_str_plain_Retry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_int", mod_consts.const_str_plain_from_int);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_int) && "mod_consts.const_str_plain_from_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_pool_kw", mod_consts.const_str_plain_connection_pool_kw);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_pool_kw) && "mod_consts.const_str_plain_connection_pool_kw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RecentlyUsedContainer", mod_consts.const_str_plain_RecentlyUsedContainer);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_RecentlyUsedContainer) && "mod_consts.const_str_plain_RecentlyUsedContainer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pools", mod_consts.const_str_plain_pools);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_pools) && "mod_consts.const_str_plain_pools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pool_classes_by_scheme", mod_consts.const_str_plain_pool_classes_by_scheme);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_pool_classes_by_scheme) && "mod_consts.const_str_plain_pool_classes_by_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_fn_by_scheme", mod_consts.const_str_plain_key_fn_by_scheme);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_fn_by_scheme) && "mod_consts.const_str_plain_key_fn_by_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clear", mod_consts.const_str_plain_clear);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear) && "mod_consts.const_str_plain_clear");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_blocksize_tuple", mod_consts.const_tuple_str_plain_blocksize_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blocksize_tuple) && "mod_consts.const_tuple_str_plain_blocksize_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blocksize", mod_consts.const_str_plain_blocksize);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize) && "mod_consts.const_str_plain_blocksize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple", mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple) && "mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_context", mod_consts.const_str_plain_request_context);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_context) && "mod_consts.const_str_plain_request_context");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_http", mod_consts.const_str_plain_http);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_http) && "mod_consts.const_str_plain_http");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_KEYWORDS", mod_consts.const_str_plain_SSL_KEYWORDS);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_KEYWORDS) && "mod_consts.const_str_plain_SSL_KEYWORDS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236", mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236) && "mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa", mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa) && "mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocationValueError", mod_consts.const_str_plain_LocationValueError);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocationValueError) && "mod_consts.const_str_plain_LocationValueError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple", mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple) && "mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__merge_pool_kwargs", mod_consts.const_str_plain__merge_pool_kwargs);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__merge_pool_kwargs) && "mod_consts.const_str_plain__merge_pool_kwargs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port_by_scheme", mod_consts.const_str_plain_port_by_scheme);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_port_by_scheme) && "mod_consts.const_str_plain_port_by_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_80", mod_consts.const_int_pos_80);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_80) && "mod_consts.const_int_pos_80");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_port) && "mod_consts.const_str_plain_port");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_context", mod_consts.const_str_plain_connection_from_context);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_context) && "mod_consts.const_str_plain_connection_from_context");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8", mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8) && "mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strict", mod_consts.const_str_plain_strict);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_strict) && "mod_consts.const_str_plain_strict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings) && "mod_consts.const_str_plain_warnings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn) && "mod_consts.const_str_plain_warn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c", mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c) && "mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FutureWarning", mod_consts.const_str_plain_FutureWarning);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_FutureWarning) && "mod_consts.const_str_plain_FutureWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_strict_tuple", mod_consts.const_tuple_str_plain_strict_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_tuple) && "mod_consts.const_tuple_str_plain_strict_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_URLSchemeUnknown", mod_consts.const_str_plain_URLSchemeUnknown);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_URLSchemeUnknown) && "mod_consts.const_str_plain_URLSchemeUnknown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_pool_key", mod_consts.const_str_plain_connection_from_pool_key);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_pool_key) && "mod_consts.const_str_plain_connection_from_pool_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_request_context_tuple", mod_consts.const_tuple_str_plain_request_context_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_context_tuple) && "mod_consts.const_tuple_str_plain_request_context_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81", mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81) && "mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lock", mod_consts.const_str_plain_lock);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_lock) && "mod_consts.const_str_plain_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new_pool", mod_consts.const_str_plain__new_pool);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__new_pool) && "mod_consts.const_str_plain__new_pool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pool", mod_consts.const_str_plain_pool);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_pool) && "mod_consts.const_str_plain_pool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6", mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6) && "mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_url", mod_consts.const_str_plain_parse_url);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_url) && "mod_consts.const_str_plain_parse_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_host", mod_consts.const_str_plain_connection_from_host);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_host) && "mod_consts.const_str_plain_connection_from_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple", mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple) && "mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e", mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e) && "mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base_pool_kwargs", mod_consts.const_str_plain_base_pool_kwargs);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_pool_kwargs) && "mod_consts.const_str_plain_base_pool_kwargs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83", mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83) && "mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy", mod_consts.const_str_plain_proxy);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy) && "mod_consts.const_str_plain_proxy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_requires_http_tunnel", mod_consts.const_str_plain_connection_requires_http_tunnel);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_requires_http_tunnel) && "mod_consts.const_str_plain_connection_requires_http_tunnel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_config", mod_consts.const_str_plain_proxy_config);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_config) && "mod_consts.const_str_plain_proxy_config");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70", mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70) && "mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple", mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple) && "mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple", mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple) && "mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple", mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple) && "mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assert_same_host", mod_consts.const_str_plain_assert_same_host);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_same_host) && "mod_consts.const_str_plain_assert_same_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_redirect", mod_consts.const_str_plain_redirect);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_redirect) && "mod_consts.const_str_plain_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers) && "mod_consts.const_str_plain_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy_requires_url_absolute_form", mod_consts.const_str_plain__proxy_requires_url_absolute_form);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_requires_url_absolute_form) && "mod_consts.const_str_plain__proxy_requires_url_absolute_form");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlopen", mod_consts.const_str_plain_urlopen);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen) && "mod_consts.const_str_plain_urlopen");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_uri", mod_consts.const_str_plain_request_uri);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_uri) && "mod_consts.const_str_plain_request_uri");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_redirect_location", mod_consts.const_str_plain_get_redirect_location);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_redirect_location) && "mod_consts.const_str_plain_get_redirect_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urljoin", mod_consts.const_str_plain_urljoin);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin) && "mod_consts.const_str_plain_urljoin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status", mod_consts.const_str_plain_status);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_status) && "mod_consts.const_str_plain_status");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_303", mod_consts.const_int_pos_303);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_303) && "mod_consts.const_int_pos_303");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GET", mod_consts.const_str_plain_GET);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET) && "mod_consts.const_str_plain_GET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_body) && "mod_consts.const_str_plain_body");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict) && "mod_consts.const_str_plain_HTTPHeaderDict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__prepare_for_method_change", mod_consts.const_str_plain__prepare_for_method_change);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_for_method_change) && "mod_consts.const_str_plain__prepare_for_method_change");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_redirect_tuple", mod_consts.const_tuple_str_plain_redirect_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_redirect_tuple) && "mod_consts.const_tuple_str_plain_redirect_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_headers_on_redirect", mod_consts.const_str_plain_remove_headers_on_redirect);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_headers_on_redirect) && "mod_consts.const_str_plain_remove_headers_on_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_same_host", mod_consts.const_str_plain_is_same_host);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_same_host) && "mod_consts.const_str_plain_is_same_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new_headers", mod_consts.const_str_plain_new_headers);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_headers) && "mod_consts.const_str_plain_new_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_increment", mod_consts.const_str_plain_increment);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_increment) && "mod_consts.const_str_plain_increment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_method) && "mod_consts.const_str_plain_method");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple", mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple) && "mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxRetryError", mod_consts.const_str_plain_MaxRetryError);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxRetryError) && "mod_consts.const_str_plain_MaxRetryError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raise_on_redirect", mod_consts.const_str_plain_raise_on_redirect);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_on_redirect) && "mod_consts.const_str_plain_raise_on_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_drain_conn", mod_consts.const_str_plain_drain_conn);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_drain_conn) && "mod_consts.const_str_plain_drain_conn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_log) && "mod_consts.const_str_plain_log");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085", mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085) && "mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae", mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae) && "mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPConnectionPool", mod_consts.const_str_plain_HTTPConnectionPool);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPConnectionPool) && "mod_consts.const_str_plain_HTTPConnectionPool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b", mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b) && "mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_chr_58) && "mod_consts.const_str_chr_58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_http_str_plain_https_tuple", mod_consts.const_tuple_str_plain_http_str_plain_https_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_tuple) && "mod_consts.const_tuple_str_plain_http_str_plain_https_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxySchemeUnknown", mod_consts.const_str_plain_ProxySchemeUnknown);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxySchemeUnknown) && "mod_consts.const_str_plain_ProxySchemeUnknown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__replace", mod_consts.const_str_plain__replace);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__replace) && "mod_consts.const_str_plain__replace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_port_tuple", mod_consts.const_tuple_str_plain_port_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_port_tuple) && "mod_consts.const_tuple_str_plain_port_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_headers", mod_consts.const_str_plain_proxy_headers);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_headers) && "mod_consts.const_str_plain_proxy_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_ssl_context", mod_consts.const_str_plain_proxy_ssl_context);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_ssl_context) && "mod_consts.const_str_plain_proxy_ssl_context");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyConfig", mod_consts.const_str_plain_ProxyConfig);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyConfig) && "mod_consts.const_str_plain_ProxyConfig");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy", mod_consts.const_str_plain__proxy);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy) && "mod_consts.const_str_plain__proxy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy_headers", mod_consts.const_str_plain__proxy_headers);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_headers) && "mod_consts.const_str_plain__proxy_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__proxy_config", mod_consts.const_str_plain__proxy_config);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy_config) && "mod_consts.const_str_plain__proxy_config");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_https", mod_consts.const_str_plain_https);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_https) && "mod_consts.const_str_plain_https");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_pool_kwargs_tuple", mod_consts.const_tuple_str_plain_pool_kwargs_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pool_kwargs_tuple) && "mod_consts.const_tuple_str_plain_pool_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce", mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce) && "mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_netloc", mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc) && "mod_consts.const_str_plain_netloc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Host", mod_consts.const_str_plain_Host);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Host) && "mod_consts.const_str_plain_Host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc", mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc) && "mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__set_proxy_headers", mod_consts.const_str_plain__set_proxy_headers);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_proxy_headers) && "mod_consts.const_str_plain__set_proxy_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7", mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7) && "mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyManager", mod_consts.const_str_plain_ProxyManager);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyManager) && "mod_consts.const_str_plain_ProxyManager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_url", mod_consts.const_str_plain_proxy_url);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_url) && "mod_consts.const_str_plain_proxy_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_functools", mod_consts.const_str_plain_functools);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools) && "mod_consts.const_str_plain_functools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TracebackType", mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType) && "mod_consts.const_str_plain_TracebackType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f", mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f) && "mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_urljoin_tuple", mod_consts.const_tuple_str_plain_urljoin_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urljoin_tuple) && "mod_consts.const_tuple_str_plain_urljoin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain__collections) && "mod_consts.const_str_plain__collections");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple) && "mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__request_methods", mod_consts.const_str_plain__request_methods);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__request_methods) && "mod_consts.const_str_plain__request_methods");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RequestMethods_tuple", mod_consts.const_tuple_str_plain_RequestMethods_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RequestMethods_tuple) && "mod_consts.const_tuple_str_plain_RequestMethods_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestMethods", mod_consts.const_str_plain_RequestMethods);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestMethods) && "mod_consts.const_str_plain_RequestMethods");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection) && "mod_consts.const_str_plain_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProxyConfig_tuple", mod_consts.const_tuple_str_plain_ProxyConfig_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxyConfig_tuple) && "mod_consts.const_tuple_str_plain_ProxyConfig_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connectionpool", mod_consts.const_str_plain_connectionpool);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_connectionpool) && "mod_consts.const_str_plain_connectionpool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple", mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple) && "mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnectionPool", mod_consts.const_str_plain_HTTPSConnectionPool);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnectionPool) && "mod_consts.const_str_plain_HTTPSConnectionPool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple", mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple) && "mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_response) && "mod_consts.const_str_plain_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple) && "mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse) && "mod_consts.const_str_plain_BaseHTTPResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471", mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471) && "mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple", mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple) && "mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS", mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS) && "mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de", mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de) && "mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple", mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple) && "mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152", mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152) && "mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Retry_tuple", mod_consts.const_tuple_str_plain_Retry_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Retry_tuple) && "mod_consts.const_tuple_str_plain_Retry_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303", mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303) && "mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Timeout_tuple", mod_consts.const_tuple_str_plain_Timeout_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Timeout_tuple) && "mod_consts.const_tuple_str_plain_Timeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout) && "mod_consts.const_str_plain_Timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d", mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d) && "mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple", mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple) && "mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Url", mod_consts.const_str_plain_Url);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Url) && "mod_consts.const_str_plain_Url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PoolManager", mod_consts.const_str_plain_PoolManager);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolManager) && "mod_consts.const_str_plain_PoolManager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_from_url", mod_consts.const_str_plain_proxy_from_url);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_from_url) && "mod_consts.const_str_plain_proxy_from_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple", mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple) && "mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple", mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple) && "mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_int_pos_16384) && "mod_consts.const_int_pos_16384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple) && "mod_consts.const_str_plain_NamedTuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PoolKey", mod_consts.const_str_plain_PoolKey);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_PoolKey) && "mod_consts.const_str_plain_PoolKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6", mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6) && "mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7", mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7) && "mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_56", mod_consts.const_int_pos_56);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_56) && "mod_consts.const_int_pos_56");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_str) && "mod_consts.const_str_plain_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_scheme", mod_consts.const_str_plain_key_scheme);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_scheme) && "mod_consts.const_str_plain_key_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_host", mod_consts.const_str_plain_key_host);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_host) && "mod_consts.const_str_plain_key_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a) && "mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_port", mod_consts.const_str_plain_key_port);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_port) && "mod_consts.const_str_plain_key_port");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58", mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58) && "mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_timeout", mod_consts.const_str_plain_key_timeout);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_timeout) && "mod_consts.const_str_plain_key_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59", mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59) && "mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_retries", mod_consts.const_str_plain_key_retries);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_retries) && "mod_consts.const_str_plain_key_retries");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca", mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca) && "mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_block", mod_consts.const_str_plain_key_block);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_block) && "mod_consts.const_str_plain_key_block");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074", mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074) && "mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_source_address", mod_consts.const_str_plain_key_source_address);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_source_address) && "mod_consts.const_str_plain_key_source_address");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58", mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58) && "mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_key_file", mod_consts.const_str_plain_key_key_file);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_key_file) && "mod_consts.const_str_plain_key_key_file");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_key_password", mod_consts.const_str_plain_key_key_password);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_key_password) && "mod_consts.const_str_plain_key_key_password");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_cert_file", mod_consts.const_str_plain_key_cert_file);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_cert_file) && "mod_consts.const_str_plain_key_cert_file");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_cert_reqs", mod_consts.const_str_plain_key_cert_reqs);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_cert_reqs) && "mod_consts.const_str_plain_key_cert_reqs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ca_certs", mod_consts.const_str_plain_key_ca_certs);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ca_certs) && "mod_consts.const_str_plain_key_ca_certs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004", mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004) && "mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ca_cert_data", mod_consts.const_str_plain_key_ca_cert_data);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ca_cert_data) && "mod_consts.const_str_plain_key_ca_cert_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc", mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc) && "mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_version", mod_consts.const_str_plain_key_ssl_version);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_version) && "mod_consts.const_str_plain_key_ssl_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a", mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a) && "mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_minimum_version", mod_consts.const_str_plain_key_ssl_minimum_version);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_minimum_version) && "mod_consts.const_str_plain_key_ssl_minimum_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_maximum_version", mod_consts.const_str_plain_key_ssl_maximum_version);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_maximum_version) && "mod_consts.const_str_plain_key_ssl_maximum_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ca_cert_dir", mod_consts.const_str_plain_key_ca_cert_dir);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ca_cert_dir) && "mod_consts.const_str_plain_key_ca_cert_dir");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1", mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1) && "mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_ssl_context", mod_consts.const_str_plain_key_ssl_context);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_ssl_context) && "mod_consts.const_str_plain_key_ssl_context");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_maxsize", mod_consts.const_str_plain_key_maxsize);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_maxsize) && "mod_consts.const_str_plain_key_maxsize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520", mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520) && "mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_headers", mod_consts.const_str_plain_key_headers);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_headers) && "mod_consts.const_str_plain_key_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00", mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00) && "mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__proxy", mod_consts.const_str_plain_key__proxy);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_key__proxy) && "mod_consts.const_str_plain_key__proxy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__proxy_headers", mod_consts.const_str_plain_key__proxy_headers);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_key__proxy_headers) && "mod_consts.const_str_plain_key__proxy_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b", mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b) && "mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__proxy_config", mod_consts.const_str_plain_key__proxy_config);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_key__proxy_config) && "mod_consts.const_str_plain_key__proxy_config");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f", mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f) && "mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_socket_options", mod_consts.const_str_plain_key_socket_options);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_socket_options) && "mod_consts.const_str_plain_key_socket_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key__socks_options", mod_consts.const_str_plain_key__socks_options);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_key__socks_options) && "mod_consts.const_str_plain_key__socks_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b", mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b) && "mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_assert_hostname", mod_consts.const_str_plain_key_assert_hostname);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_assert_hostname) && "mod_consts.const_str_plain_key_assert_hostname");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_assert_fingerprint", mod_consts.const_str_plain_key_assert_fingerprint);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_assert_fingerprint) && "mod_consts.const_str_plain_key_assert_fingerprint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_server_hostname", mod_consts.const_str_plain_key_server_hostname);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_server_hostname) && "mod_consts.const_str_plain_key_server_hostname");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a", mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a) && "mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__default_key_normalizer", mod_consts.const_str_plain__default_key_normalizer);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_key_normalizer) && "mod_consts.const_str_plain__default_key_normalizer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_partial", mod_consts.const_str_plain_partial);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial) && "mod_consts.const_str_plain_partial");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b", mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b) && "mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_162", mod_consts.const_int_pos_162);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_int_pos_162) && "mod_consts.const_int_pos_162");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_10_none_tuple", mod_consts.const_tuple_int_pos_10_none_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_tuple) && "mod_consts.const_tuple_int_pos_10_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21", mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21) && "mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a", mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a) && "mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead", mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead) && "mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8", mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8) && "mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026", mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026) && "mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f", mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f) && "mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3", mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3) && "mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1", mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1) && "mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047", mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047) && "mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_str_plain_http_none_tuple", mod_consts.const_tuple_none_str_plain_http_none_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_none_str_plain_http_none_tuple) && "mod_consts.const_tuple_none_str_plain_http_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4", mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4) && "mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef", mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef) && "mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0", mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0) && "mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215", mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215) && "mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe", mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe) && "mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08", mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08) && "mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b303e5522e44734c4d6e28598f034257", mod_consts.const_dict_b303e5522e44734c4d6e28598f034257);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_dict_b303e5522e44734c4d6e28598f034257) && "mod_consts.const_dict_b303e5522e44734c4d6e28598f034257");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection_from_url", mod_consts.const_str_plain_connection_from_url);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection_from_url) && "mod_consts.const_str_plain_connection_from_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7", mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7) && "mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8", mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8) && "mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44", mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44) && "mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27", mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27) && "mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6", mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6) && "mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33", mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33) && "mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0", mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0) && "mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple", mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple) && "mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed", mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed) && "mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_506", mod_consts.const_int_pos_506);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_int_pos_506) && "mod_consts.const_int_pos_506");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple", mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple) && "mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18", mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18) && "mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069", mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069) && "mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48", mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48) && "mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b", mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b) && "mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21", mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21) && "mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096", mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096) && "mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple", mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple) && "mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc", mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc) && "mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de37edcd825e67321401541982b1456b", mod_consts.const_str_digest_de37edcd825e67321401541982b1456b);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_digest_de37edcd825e67321401541982b1456b) && "mod_consts.const_str_digest_de37edcd825e67321401541982b1456b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1", mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1) && "mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple", mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple) && "mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple", mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple) && "mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple", mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple) && "mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple", mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple) && "mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple", mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple) && "mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple", mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple) && "mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple", mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple", mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple) && "mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple", mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple) && "mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple", mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple) && "mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple", mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple) && "mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple", mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple) && "mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple", mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple) && "mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple", mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple) && "mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple", mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple) && "mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple", mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple) && "mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 28
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
static PyObject *module_var_accessor_urllib3$poolmanager$FutureWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FutureWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FutureWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FutureWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FutureWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$HTTPConnectionPool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnectionPool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPConnectionPool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPConnectionPool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPConnectionPool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPConnectionPool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnectionPool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnectionPool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnectionPool);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$HTTPHeaderDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPHeaderDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPHeaderDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPHeaderDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPHeaderDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$HTTPSConnectionPool(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnectionPool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPSConnectionPool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPSConnectionPool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPSConnectionPool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPSConnectionPool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnectionPool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnectionPool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnectionPool);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$LocationValueError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocationValueError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocationValueError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocationValueError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocationValueError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$MaxRetryError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxRetryError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxRetryError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxRetryError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxRetryError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$PoolKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PoolKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PoolKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolKey);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$PoolManager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$ProxyConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyConfig);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyConfig);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyConfig, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyConfig);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyConfig, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyConfig);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyConfig);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyConfig);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$ProxyManager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyManager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyManager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyManager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyManager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyManager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyManager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyManager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyManager);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$ProxySchemeUnknown(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnknown);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxySchemeUnknown);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxySchemeUnknown, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxySchemeUnknown);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxySchemeUnknown, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnknown);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnknown);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnknown);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$RecentlyUsedContainer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RecentlyUsedContainer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RecentlyUsedContainer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RecentlyUsedContainer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RecentlyUsedContainer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RecentlyUsedContainer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RecentlyUsedContainer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RecentlyUsedContainer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RecentlyUsedContainer);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$RequestMethods(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestMethods);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestMethods);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestMethods, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestMethods);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestMethods, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestMethods);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestMethods);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestMethods);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$Retry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Retry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Retry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Retry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Retry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$SSL_KEYWORDS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_KEYWORDS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSL_KEYWORDS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSL_KEYWORDS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSL_KEYWORDS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSL_KEYWORDS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_KEYWORDS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_KEYWORDS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_KEYWORDS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$URLSchemeUnknown(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_URLSchemeUnknown);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URLSchemeUnknown);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URLSchemeUnknown, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_URLSchemeUnknown);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_URLSchemeUnknown, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_URLSchemeUnknown);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_URLSchemeUnknown);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_URLSchemeUnknown);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$_DEFAULT_BLOCKSIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_BLOCKSIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_BLOCKSIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$_default_key_normalizer(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__default_key_normalizer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_key_normalizer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_key_normalizer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_key_normalizer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_key_normalizer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__default_key_normalizer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__default_key_normalizer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_key_normalizer);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$connection_requires_http_tunnel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_connection_requires_http_tunnel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_connection_requires_http_tunnel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_connection_requires_http_tunnel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_connection_requires_http_tunnel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_connection_requires_http_tunnel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_connection_requires_http_tunnel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_connection_requires_http_tunnel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_connection_requires_http_tunnel);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$key_fn_by_scheme(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_key_fn_by_scheme);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_key_fn_by_scheme);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_key_fn_by_scheme, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_key_fn_by_scheme);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_key_fn_by_scheme, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_key_fn_by_scheme);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_key_fn_by_scheme);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_key_fn_by_scheme);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$parse_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$pool_classes_by_scheme(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_pool_classes_by_scheme);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pool_classes_by_scheme);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pool_classes_by_scheme, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pool_classes_by_scheme);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pool_classes_by_scheme, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_pool_classes_by_scheme);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_pool_classes_by_scheme);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pool_classes_by_scheme);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$port_by_scheme(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_port_by_scheme);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_port_by_scheme);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_port_by_scheme, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_port_by_scheme);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_port_by_scheme, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_port_by_scheme);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_port_by_scheme);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_port_by_scheme);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$urljoin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urljoin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urljoin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urljoin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urljoin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$poolmanager$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$poolmanager->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$poolmanager->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$poolmanager->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f636928a05bd57345cbc6822b8bb9b77;
static PyCodeObject *code_objects_d1dfe6b049cd9b4f621c5da37de6a3db;
static PyCodeObject *code_objects_42fa760f4cb66f529e3a8bf3757e13c4;
static PyCodeObject *code_objects_30de9a4264608cb131fb45792ef62ca6;
static PyCodeObject *code_objects_1ae3b621d45bb34d9a83f43d89ac4559;
static PyCodeObject *code_objects_50394f0b5445794c8597064f8bfbf9e1;
static PyCodeObject *code_objects_db7cc454ee701b8da4d9cb1876dc66b6;
static PyCodeObject *code_objects_3290b8d99286e25c9ff4e526e0d9c73a;
static PyCodeObject *code_objects_912484390ed5f9e4deb0216500775676;
static PyCodeObject *code_objects_a748f9b91453bb1f5edd7a1412f8c6cd;
static PyCodeObject *code_objects_cc8b0be9f728d67e714006aa0946cde3;
static PyCodeObject *code_objects_0393a404351a67d4ef661d8cf2b96b6f;
static PyCodeObject *code_objects_49cb92324f4acc1a99674a2e81bebb2e;
static PyCodeObject *code_objects_84d94be87ee29c0025f059f45d55cf33;
static PyCodeObject *code_objects_d41ea9218316c58a04f6678ac978f17c;
static PyCodeObject *code_objects_6120c3d753ccb7f12679262491912497;
static PyCodeObject *code_objects_b05d88e79657aee4a2a808030c357324;
static PyCodeObject *code_objects_178cd882f891b3dc5dae31e281a0b8b3;
static PyCodeObject *code_objects_dd92d3ad903a8f57948c554c9a030488;
static PyCodeObject *code_objects_0bdfe060fa3b148f6c4524d1e3d130f2;
static PyCodeObject *code_objects_37e20b5855300524a1ed62f038e72cd7;
static PyCodeObject *code_objects_4bea48be3e47a32907124c0d5c044957;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_de37edcd825e67321401541982b1456b); CHECK_OBJECT(module_filename_obj);
code_objects_f636928a05bd57345cbc6822b8bb9b77 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1, mod_consts.const_str_digest_707a5a9b156f542056749b61f0d359c1, NULL, NULL, 0, 0, 0);
code_objects_d1dfe6b049cd9b4f621c5da37de6a3db = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PoolKey, mod_consts.const_str_plain_PoolKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_42fa760f4cb66f529e3a8bf3757e13c4 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PoolManager, mod_consts.const_str_plain_PoolManager, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_30de9a4264608cb131fb45792ef62ca6 = MAKE_CODE_OBJECT(module_filename_obj, 506, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ProxyManager, mod_consts.const_str_plain_ProxyManager, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1ae3b621d45bb34d9a83f43d89ac4559 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_50394f0b5445794c8597064f8bfbf9e1 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, NULL, 4, 0, 0);
code_objects_db7cc454ee701b8da4d9cb1876dc66b6 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a, mod_consts.const_tuple_7fbb4a91ee1c38161d86b002de5c1b80_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_3290b8d99286e25c9ff4e526e0d9c73a = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069, mod_consts.const_tuple_81734b8113654781a9cf1684903a4e5b_tuple, mod_consts.const_tuple_str_plain___class___tuple, 9, 0, 0);
code_objects_912484390ed5f9e4deb0216500775676 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__default_key_normalizer, mod_consts.const_str_plain__default_key_normalizer, mod_consts.const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, NULL, 2, 0, 0);
code_objects_a748f9b91453bb1f5edd7a1412f8c6cd = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__merge_pool_kwargs, mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44, mod_consts.const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, NULL, 2, 0, 0);
code_objects_cc8b0be9f728d67e714006aa0946cde3 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__new_pool, mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1, mod_consts.const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, NULL, 5, 0, 0);
code_objects_0393a404351a67d4ef661d8cf2b96b6f = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__proxy_requires_url_absolute_form, mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6, mod_consts.const_tuple_str_plain_self_str_plain_parsed_url_tuple, NULL, 2, 0, 0);
code_objects_49cb92324f4acc1a99674a2e81bebb2e = MAKE_CODE_OBJECT(module_filename_obj, 620, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__set_proxy_headers, mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21, mod_consts.const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, NULL, 3, 0, 0);
code_objects_84d94be87ee29c0025f059f45d55cf33 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_clear, mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d41ea9218316c58a04f6678ac978f17c = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connection_from_context, mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215, mod_consts.const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, NULL, 2, 0, 0);
code_objects_6120c3d753ccb7f12679262491912497 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connection_from_host, mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef, mod_consts.const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, NULL, 5, 0, 0);
code_objects_b05d88e79657aee4a2a808030c357324 = MAKE_CODE_OBJECT(module_filename_obj, 604, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connection_from_host, mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48, mod_consts.const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, mod_consts.const_tuple_str_plain___class___tuple, 5, 0, 0);
code_objects_178cd882f891b3dc5dae31e281a0b8b3 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connection_from_pool_key, mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08, mod_consts.const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, NULL, 3, 0, 0);
code_objects_dd92d3ad903a8f57948c554c9a030488 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connection_from_url, mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7, mod_consts.const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, NULL, 3, 0, 0);
code_objects_0bdfe060fa3b148f6c4524d1e3d130f2 = MAKE_CODE_OBJECT(module_filename_obj, 652, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_proxy_from_url, mod_consts.const_str_plain_proxy_from_url, mod_consts.const_tuple_str_plain_url_str_plain_kw_tuple, NULL, 1, 0, 0);
code_objects_37e20b5855300524a1ed62f038e72cd7 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_urlopen, mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0, mod_consts.const_tuple_0512ac370e6efe8f6aa6bcbb5f6ff686_tuple, NULL, 4, 0, 0);
code_objects_4bea48be3e47a32907124c0d5c044957 = MAKE_CODE_OBJECT(module_filename_obj, 637, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_urlopen, mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096, mod_consts.const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, mod_consts.const_tuple_str_plain___class___tuple, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__10_connection_from_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__11__merge_pool_kwargs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__13_urlopen(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__14___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__15_connection_from_host(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__16__set_proxy_headers(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__17_urlopen(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__18_proxy_from_url(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__1__default_key_normalizer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__3___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__4___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__5__new_pool(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__6_clear(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__7_connection_from_host(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__8_connection_from_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__9_connection_from_pool_key(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$poolmanager$$$function__1__default_key_normalizer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key_class = python_pars[0];
PyObject *par_request_context = python_pars[1];
PyObject *var_context = NULL;
PyObject *var_key = NULL;
PyObject *var_socket_opts = NULL;
PyObject *var_field = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer = MAKE_FUNCTION_FRAME(tstate, code_objects_912484390ed5f9e4deb0216500775676, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer = cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_request_context);
tmp_expression_value_1 = par_request_context;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 118;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_context;
    var_context = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_context);
tmp_expression_value_3 = var_context;
tmp_subscript_value_1 = mod_consts.const_str_plain_scheme;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 119;
tmp_ass_subvalue_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_context);
tmp_ass_subscribed_1 = var_context;
tmp_ass_subscript_1 = mod_consts.const_str_plain_scheme;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_context);
tmp_expression_value_5 = var_context;
tmp_subscript_value_2 = mod_consts.const_str_plain_host;
tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 120;
tmp_ass_subvalue_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_context);
tmp_ass_subscribed_2 = var_context;
tmp_ass_subscript_2 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
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
type_description_1 = "oooooo";
exception_lineno = 123;
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
    PyObject *old = var_key;
    var_key = tmp_assign_source_4;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_1 = var_key;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_context;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_context;
CHECK_OBJECT(var_key);
tmp_subscript_value_3 = var_key;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_frozenset_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = var_context;
CHECK_OBJECT(var_key);
tmp_subscript_value_4 = var_key;
tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 125;
tmp_frozenset_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_frozenset_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_ass_subvalue_3 = PyFrozenSet_New(tmp_frozenset_arg_1);
CHECK_OBJECT(tmp_frozenset_arg_1);
Py_DECREF(tmp_frozenset_arg_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (var_context == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_3 = var_context;
CHECK_OBJECT(var_key);
tmp_ass_subscript_3 = var_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = var_context;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 129;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_socket_options_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_socket_opts;
    var_socket_opts = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_socket_opts);
tmp_cmp_expr_left_3 = var_socket_opts;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_socket_opts);
tmp_tuple_arg_1 = var_socket_opts;
tmp_ass_subvalue_4 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (var_context == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_4 = var_context;
tmp_ass_subscript_4 = mod_consts.const_str_plain_socket_options;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = var_context;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_keys);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 135;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_6 == NULL));
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
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 135;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_8 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_8;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_1;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}

tmp_expression_value_11 = var_context;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_pop);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_1 = var_key;
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 136;
tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
if (var_context == NULL) {
Py_DECREF(tmp_ass_subvalue_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}

tmp_ass_subscribed_5 = var_context;
tmp_add_expr_left_1 = mod_consts.const_str_plain_key_;
CHECK_OBJECT(var_key);
tmp_add_expr_right_1 = var_key;
tmp_ass_subscript_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_ass_subscript_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscript_5);
Py_DECREF(tmp_ass_subscript_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
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
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_key_class);
tmp_expression_value_12 = par_key_class;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__fields);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 139;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_11 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_11;
    Py_INCREF(var_field);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_field);
tmp_cmp_expr_left_4 = var_field;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_cmp_expr_right_4 = var_context;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_4;
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
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = Py_None;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_6 = var_context;
CHECK_OBJECT(var_field);
tmp_ass_subscript_6 = var_field;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_context;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame.f_lineno = 144;
tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_key_blocksize_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = module_var_accessor_urllib3$poolmanager$_DEFAULT_BLOCKSIZE(tstate);
if (unlikely(tmp_ass_subvalue_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
}

if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_7 = var_context;
tmp_ass_subscript_7 = mod_consts.const_str_plain_key_blocksize;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_key_class);
tmp_direct_call_arg1_1 = par_key_class;
if (var_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = var_context;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer,
    type_description_1,
    par_key_class,
    par_request_context,
    var_context,
    var_key,
    var_socket_opts,
    var_field
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer == cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer);
    cache_frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__1__default_key_normalizer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_socket_opts);
CHECK_OBJECT(var_socket_opts);
Py_DECREF(var_socket_opts);
var_socket_opts = NULL;
Py_XDECREF(var_field);
var_field = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_socket_opts);
var_socket_opts = NULL;
Py_XDECREF(var_field);
var_field = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key_class);
Py_DECREF(par_key_class);
CHECK_OBJECT(par_request_context);
Py_DECREF(par_request_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key_class);
Py_DECREF(par_key_class);
CHECK_OBJECT(par_request_context);
Py_DECREF(par_request_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_num_pools = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_connection_pool_kw = python_pars[3];
PyObject *var_retries = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_db7cc454ee701b8da4d9cb1876dc66b6, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__2___init__->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__2___init__ = cache_frame_frame_urllib3$poolmanager$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__2___init__);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_urllib3$poolmanager, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_1 = par_headers;
frame_frame_urllib3$poolmanager$$$function__2___init__->m_frame.f_lineno = 205;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
tmp_key_value_1 = mod_consts.const_str_plain_retries;
CHECK_OBJECT(par_connection_pool_kw);
tmp_dict_arg_value_1 = par_connection_pool_kw;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
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
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
CHECK_OBJECT(par_connection_pool_kw);
tmp_dict_arg_value_2 = par_connection_pool_kw;
tmp_key_value_2 = mod_consts.const_str_plain_retries;
tmp_assign_source_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retries;
    var_retries = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_retries);
tmp_isinstance_inst_1 = var_retries;
tmp_isinstance_cls_1 = module_var_accessor_urllib3$poolmanager$Retry(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooc";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_urllib3$poolmanager$Retry(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_retries);
tmp_args_element_value_2 = var_retries;
frame_frame_urllib3$poolmanager$$$function__2___init__->m_frame.f_lineno = 217;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_from_int, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retries;
    assert(old != NULL);
    var_retries = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_connection_pool_kw);
tmp_dict_arg_1 = par_connection_pool_kw;
tmp_assign_source_3 = DICT_COPY(tstate, tmp_dict_arg_1);
assert(!(tmp_assign_source_3 == NULL));
{
    PyObject *old = par_connection_pool_kw;
    assert(old != NULL);
    par_connection_pool_kw = tmp_assign_source_3;
    Py_DECREF(old);
}

}
CHECK_OBJECT(var_retries);
tmp_dictset_value = var_retries;
CHECK_OBJECT(par_connection_pool_kw);
tmp_dictset_dict = par_connection_pool_kw;
tmp_dictset_key = mod_consts.const_str_plain_retries;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
if (par_connection_pool_kw == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_connection_pool_kw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_ass_attr_value_1 = par_connection_pool_kw;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_connection_pool_kw, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_ass_attr_target_2;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$RecentlyUsedContainer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RecentlyUsedContainer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_num_pools);
tmp_args_element_value_3 = par_num_pools;
frame_frame_urllib3$poolmanager$$$function__2___init__->m_frame.f_lineno = 223;
tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_pools, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = module_var_accessor_urllib3$poolmanager$pool_classes_by_scheme(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool_classes_by_scheme);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_pool_classes_by_scheme, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_attr_target_4;
tmp_expression_value_1 = module_var_accessor_urllib3$poolmanager$key_fn_by_scheme(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_fn_by_scheme);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__2___init__->m_frame.f_lineno = 228;
tmp_ass_attr_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_key_fn_by_scheme, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__2___init__,
    type_description_1,
    par_self,
    par_num_pools,
    par_headers,
    par_connection_pool_kw,
    var_retries,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__2___init__ == cache_frame_frame_urllib3$poolmanager$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__2___init__);
    cache_frame_frame_urllib3$poolmanager$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__2___init__);

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
Py_XDECREF(par_connection_pool_kw);
par_connection_pool_kw = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_connection_pool_kw);
par_connection_pool_kw = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
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
CHECK_OBJECT(par_num_pools);
Py_DECREF(par_num_pools);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_num_pools);
Py_DECREF(par_num_pools);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__3___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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


static PyObject *impl_urllib3$poolmanager$$$function__4___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_val = python_pars[2];
PyObject *par_exc_tb = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__4___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__4___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__4___exit__)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__4___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__4___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__4___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_50394f0b5445794c8597064f8bfbf9e1, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__4___exit__->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__4___exit__ = cache_frame_frame_urllib3$poolmanager$$$function__4___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__4___exit__);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__4___exit__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__4___exit__->m_frame.f_lineno = 239;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__4___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__4___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__4___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__4___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_val,
    par_exc_tb
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__4___exit__ == cache_frame_frame_urllib3$poolmanager$$$function__4___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__4___exit__);
    cache_frame_frame_urllib3$poolmanager$$$function__4___exit__ = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__4___exit__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_val);
Py_DECREF(par_exc_val);
CHECK_OBJECT(par_exc_tb);
Py_DECREF(par_exc_tb);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_val);
Py_DECREF(par_exc_val);
CHECK_OBJECT(par_exc_tb);
Py_DECREF(par_exc_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__5__new_pool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scheme = python_pars[1];
PyObject *par_host = python_pars[2];
PyObject *par_port = python_pars[3];
PyObject *par_request_context = python_pars[4];
PyObject *var_pool_cls = NULL;
PyObject *var_key = NULL;
PyObject *var_kw = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__5__new_pool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool = MAKE_FUNCTION_FRAME(tstate, code_objects_cc8b0be9f728d67e714006aa0946cde3, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__5__new_pool = cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__5__new_pool);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__5__new_pool) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pool_classes_by_scheme);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scheme);
tmp_subscript_value_1 = par_scheme;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pool_cls;
    var_pool_cls = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_request_context);
tmp_cmp_expr_left_1 = par_request_context;
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
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_connection_pool_kw);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__5__new_pool->m_frame.f_lineno = 261;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_request_context;
    assert(old != NULL);
    par_request_context = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_request_context);
tmp_expression_value_5 = par_request_context;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__5__new_pool->m_frame.f_lineno = 265;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_blocksize_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_urllib3$poolmanager$_DEFAULT_BLOCKSIZE(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_BLOCKSIZE);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request_context);
tmp_ass_subscribed_1 = par_request_context;
tmp_ass_subscript_1 = mod_consts.const_str_plain_blocksize;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple;
tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_3 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 272;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_5;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (par_request_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = par_request_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_pop);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_1 = var_key;
tmp_args_element_value_2 = Py_None;
frame_frame_urllib3$poolmanager$$$function__5__new_pool->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooo";
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_scheme);
tmp_cmp_expr_left_3 = par_scheme;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_http;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = module_var_accessor_urllib3$poolmanager$SSL_KEYWORDS(tstate);
if (unlikely(tmp_iter_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSL_KEYWORDS);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oooooooo";
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
type_description_1 = "oooooooo";
exception_lineno = 276;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_8 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_kw;
    var_kw = tmp_assign_source_8;
    Py_INCREF(var_kw);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (par_request_context == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_7 = par_request_context;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_pop);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_kw);
tmp_args_element_value_3 = var_kw;
tmp_args_element_value_4 = Py_None;
frame_frame_urllib3$poolmanager$$$function__5__new_pool->m_frame.f_lineno = 277;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oooooooo";
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
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_3:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(var_pool_cls);
tmp_direct_call_arg1_1 = var_pool_cls;
CHECK_OBJECT(par_host);
tmp_tuple_element_1 = par_host;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_port);
tmp_tuple_element_1 = par_port;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
if (par_request_context == NULL) {
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_context);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = par_request_context;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__5__new_pool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__5__new_pool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__5__new_pool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__5__new_pool,
    type_description_1,
    par_self,
    par_scheme,
    par_host,
    par_port,
    par_request_context,
    var_pool_cls,
    var_key,
    var_kw
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__5__new_pool == cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool);
    cache_frame_frame_urllib3$poolmanager$$$function__5__new_pool = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__5__new_pool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_request_context);
par_request_context = NULL;
CHECK_OBJECT(var_pool_cls);
CHECK_OBJECT(var_pool_cls);
Py_DECREF(var_pool_cls);
var_pool_cls = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_kw);
var_kw = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_request_context);
par_request_context = NULL;
Py_XDECREF(var_pool_cls);
var_pool_cls = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_kw);
var_kw = NULL;
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
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__6_clear(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__6_clear;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__6_clear = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__6_clear)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__6_clear);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__6_clear == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__6_clear = MAKE_FUNCTION_FRAME(tstate, code_objects_84d94be87ee29c0025f059f45d55cf33, module_urllib3$poolmanager, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__6_clear->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__6_clear = cache_frame_frame_urllib3$poolmanager$$$function__6_clear;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__6_clear);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__6_clear) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pools);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__6_clear->m_frame.f_lineno = 288;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__6_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__6_clear->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__6_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__6_clear,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__6_clear == cache_frame_frame_urllib3$poolmanager$$$function__6_clear) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__6_clear);
    cache_frame_frame_urllib3$poolmanager$$$function__6_clear = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__6_clear);

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


static PyObject *impl_urllib3$poolmanager$$$function__7_connection_from_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *par_port = python_pars[2];
PyObject *par_scheme = python_pars[3];
PyObject *par_pool_kwargs = python_pars[4];
PyObject *var_request_context = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__7_connection_from_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host = MAKE_FUNCTION_FRAME(tstate, code_objects_6120c3d753ccb7f12679262491912497, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__7_connection_from_host = cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__7_connection_from_host);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__7_connection_from_host) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_host);
tmp_operand_value_1 = par_host;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$LocationValueError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationValueError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_frame.f_lineno = 308;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 308;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_pool_kwargs);
tmp_args_element_value_1 = par_pool_kwargs;
frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_frame.f_lineno = 310;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__merge_pool_kwargs, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_request_context;
    var_request_context = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_scheme);
tmp_or_left_value_1 = par_scheme;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = mod_consts.const_str_plain_http;
tmp_ass_subvalue_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_ass_subvalue_1 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(var_request_context);
tmp_ass_subscribed_1 = var_request_context;
tmp_ass_subscript_1 = mod_consts.const_str_plain_scheme;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_port);
tmp_operand_value_2 = par_port;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_urllib3$poolmanager$port_by_scheme(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_port_by_scheme);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_request_context);
tmp_expression_value_3 = var_request_context;
tmp_subscript_value_1 = mod_consts.const_str_plain_scheme;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_frame.f_lineno = 313;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_int_pos_80;
frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_port;
    assert(old != NULL);
    par_port = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_port);
tmp_ass_subvalue_2 = par_port;
CHECK_OBJECT(var_request_context);
tmp_ass_subscribed_2 = var_request_context;
tmp_ass_subscript_2 = mod_consts.const_str_plain_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(par_host);
tmp_ass_subvalue_3 = par_host;
CHECK_OBJECT(var_request_context);
tmp_ass_subscribed_3 = var_request_context;
tmp_ass_subscript_3 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_request_context);
tmp_args_element_value_4 = var_request_context;
frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_frame.f_lineno = 317;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_connection_from_context, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__7_connection_from_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__7_connection_from_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__7_connection_from_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__7_connection_from_host,
    type_description_1,
    par_self,
    par_host,
    par_port,
    par_scheme,
    par_pool_kwargs,
    var_request_context
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__7_connection_from_host == cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host);
    cache_frame_frame_urllib3$poolmanager$$$function__7_connection_from_host = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__7_connection_from_host);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(var_request_context);
CHECK_OBJECT(var_request_context);
Py_DECREF(var_request_context);
var_request_context = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_port);
par_port = NULL;
Py_XDECREF(var_request_context);
var_request_context = NULL;
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
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__8_connection_from_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request_context = python_pars[1];
PyObject *var_scheme = NULL;
PyObject *var_pool_key_constructor = NULL;
PyObject *var_pool_key = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__8_connection_from_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context = MAKE_FUNCTION_FRAME(tstate, code_objects_d41ea9218316c58a04f6678ac978f17c, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context = cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__8_connection_from_context);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__8_connection_from_context) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_strict;
CHECK_OBJECT(par_request_context);
tmp_cmp_expr_right_1 = par_request_context;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooo";
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
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_urllib3$poolmanager$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_8cfe95631dbd877a5a4ac46864284e0c;
tmp_args_element_value_2 = module_var_accessor_urllib3$poolmanager$FutureWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FutureWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 332;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_request_context);
tmp_expression_value_2 = par_request_context;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 334;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_strict_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_request_context);
tmp_expression_value_4 = par_request_context;
tmp_subscript_value_1 = mod_consts.const_str_plain_scheme;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 336;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_scheme;
    var_scheme = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_key_fn_by_scheme);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scheme);
tmp_args_element_value_3 = var_scheme;
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 337;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pool_key_constructor;
    var_pool_key_constructor = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_pool_key_constructor);
tmp_operand_value_1 = var_pool_key_constructor;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = module_var_accessor_urllib3$poolmanager$URLSchemeUnknown(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_URLSchemeUnknown);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scheme);
tmp_args_element_value_4 = var_scheme;
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 339;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 339;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_pool_key_constructor);
tmp_called_value_6 = var_pool_key_constructor;
CHECK_OBJECT(par_request_context);
tmp_args_element_value_5 = par_request_context;
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 340;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pool_key;
    var_pool_key = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_connection_from_pool_key);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pool_key);
tmp_kw_call_arg_value_0_1 = var_pool_key;
CHECK_OBJECT(par_request_context);
tmp_kw_call_dict_value_0_1 = par_request_context;
frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame.f_lineno = 342;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_request_context_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__8_connection_from_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__8_connection_from_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__8_connection_from_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__8_connection_from_context,
    type_description_1,
    par_self,
    par_request_context,
    var_scheme,
    var_pool_key_constructor,
    var_pool_key
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__8_connection_from_context == cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context);
    cache_frame_frame_urllib3$poolmanager$$$function__8_connection_from_context = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__8_connection_from_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_pool_key_constructor);
CHECK_OBJECT(var_pool_key_constructor);
Py_DECREF(var_pool_key_constructor);
var_pool_key_constructor = NULL;
CHECK_OBJECT(var_pool_key);
CHECK_OBJECT(var_pool_key);
Py_DECREF(var_pool_key);
var_pool_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_pool_key_constructor);
var_pool_key_constructor = NULL;
Py_XDECREF(var_pool_key);
var_pool_key = NULL;
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
CHECK_OBJECT(par_request_context);
Py_DECREF(par_request_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request_context);
Py_DECREF(par_request_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__9_connection_from_pool_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pool_key = python_pars[1];
PyObject *par_request_context = python_pars[2];
PyObject *var_pool = NULL;
PyObject *var_scheme = NULL;
PyObject *var_host = NULL;
PyObject *var_port = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key = MAKE_FUNCTION_FRAME(tstate, code_objects_178cd882f891b3dc5dae31e281a0b8b3, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key = cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pools);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lock);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 354;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_pools);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_pool_key);
tmp_args_element_value_1 = par_pool_key;
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 357;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_pool;
    var_pool = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_pool);
tmp_truth_name_1 = CHECK_IF_TRUE(var_pool);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_pool);
tmp_return_value = var_pool;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_request_context);
tmp_expression_value_7 = par_request_context;
tmp_subscript_value_1 = mod_consts.const_str_plain_scheme;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_scheme;
    var_scheme = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_request_context);
tmp_expression_value_8 = par_request_context;
tmp_subscript_value_2 = mod_consts.const_str_plain_host;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_request_context);
tmp_expression_value_9 = par_request_context;
tmp_subscript_value_3 = mod_consts.const_str_plain_port;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__new_pool);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_scheme);
tmp_kw_call_arg_value_0_1 = var_scheme;
CHECK_OBJECT(var_host);
tmp_kw_call_arg_value_1_1 = var_host;
CHECK_OBJECT(var_port);
tmp_kw_call_arg_value_2_1 = var_port;
CHECK_OBJECT(par_request_context);
tmp_kw_call_dict_value_0_1 = par_request_context;
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 365;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_request_context_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_pool;
    assert(old != NULL);
    var_pool = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_pool);
tmp_ass_subvalue_1 = var_pool;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_pools);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_pool_key);
tmp_ass_subscript_1 = par_pool_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooo";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 354;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame)) {
        frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 354;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame)) {
        frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 354;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 354;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame.f_lineno = 354;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
if (var_pool == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pool);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 368;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_pool;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key,
    type_description_1,
    par_self,
    par_pool_key,
    par_request_context,
    var_pool,
    var_scheme,
    var_host,
    var_port
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key == cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key);
    cache_frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__9_connection_from_pool_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_pool);
var_pool = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pool);
var_pool = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
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
CHECK_OBJECT(par_pool_key);
Py_DECREF(par_pool_key);
CHECK_OBJECT(par_request_context);
Py_DECREF(par_request_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_pool_key);
Py_DECREF(par_pool_key);
CHECK_OBJECT(par_request_context);
Py_DECREF(par_request_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__10_connection_from_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_pool_kwargs = python_pars[2];
PyObject *var_u = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__10_connection_from_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url = MAKE_FUNCTION_FRAME(tstate, code_objects_dd92d3ad903a8f57948c554c9a030488, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__10_connection_from_url = cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__10_connection_from_url);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__10_connection_from_url) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$parse_url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_urllib3$poolmanager$$$function__10_connection_from_url->m_frame.f_lineno = 383;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_u;
    var_u = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_connection_from_host);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_2 = var_u;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_host);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_3 = var_u;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_port);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_4 = var_u;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_scheme);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pool_kwargs);
tmp_kw_call_dict_value_2_1 = par_pool_kwargs;
frame_frame_urllib3$poolmanager$$$function__10_connection_from_url->m_frame.f_lineno = 384;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_port_str_plain_scheme_str_plain_pool_kwargs_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__10_connection_from_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__10_connection_from_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__10_connection_from_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__10_connection_from_url,
    type_description_1,
    par_self,
    par_url,
    par_pool_kwargs,
    var_u
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__10_connection_from_url == cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url);
    cache_frame_frame_urllib3$poolmanager$$$function__10_connection_from_url = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__10_connection_from_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_u);
CHECK_OBJECT(var_u);
Py_DECREF(var_u);
var_u = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_u);
var_u = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__11__merge_pool_kwargs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_override = python_pars[1];
PyObject *var_base_pool_kwargs = NULL;
PyObject *var_key = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs = MAKE_FUNCTION_FRAME(tstate, code_objects_a748f9b91453bb1f5edd7a1412f8c6cd, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs = cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_connection_pool_kw);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs->m_frame.f_lineno = 398;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_base_pool_kwargs;
    var_base_pool_kwargs = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_override);
tmp_truth_name_1 = CHECK_IF_TRUE(par_override);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_override);
tmp_expression_value_3 = par_override;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs->m_frame.f_lineno = 400;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
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
type_description_1 = "ooooo";
exception_lineno = 400;
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


exception_lineno = 400;
type_description_1 = "ooooo";
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



exception_lineno = 400;
type_description_1 = "ooooo";
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



exception_lineno = 400;
type_description_1 = "ooooo";
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



exception_lineno = 400;
type_description_1 = "ooooo";
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
    PyObject *old = var_key;
    var_key = tmp_assign_source_7;
    Py_INCREF(var_key);
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
    PyObject *old = var_value;
    var_value = tmp_assign_source_8;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_1 = var_value;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
if (var_base_pool_kwargs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_pool_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 403;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_delsubscr_target_1 = var_base_pool_kwargs;
CHECK_OBJECT(var_key);
tmp_delsubscr_subscript_1 = var_key;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooooo";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 402;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs->m_frame)) {
        frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_no_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_value);
tmp_ass_subvalue_1 = var_value;
if (var_base_pool_kwargs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_pool_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 407;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = var_base_pool_kwargs;
CHECK_OBJECT(var_key);
tmp_ass_subscript_1 = var_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_1:;
if (var_base_pool_kwargs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_pool_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 408;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_base_pool_kwargs;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs,
    type_description_1,
    par_self,
    par_override,
    var_base_pool_kwargs,
    var_key,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs == cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs);
    cache_frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__11__merge_pool_kwargs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_base_pool_kwargs);
var_base_pool_kwargs = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_base_pool_kwargs);
var_base_pool_kwargs = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_override);
Py_DECREF(par_override);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_override);
Py_DECREF(par_override);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_parsed_url = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form = MAKE_FUNCTION_FRAME(tstate, code_objects_0393a404351a67d4ef661d8cf2b96b6f, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form = cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_proxy);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$connection_requires_http_tunnel(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_connection_requires_http_tunnel);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_proxy);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_proxy_config);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parsed_url);
tmp_expression_value_4 = par_parsed_url;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_scheme);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form->m_frame.f_lineno = 419;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form,
    type_description_1,
    par_self,
    par_parsed_url
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form == cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form);
    cache_frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form);

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
CHECK_OBJECT(par_parsed_url);
Py_DECREF(par_parsed_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_parsed_url);
Py_DECREF(par_parsed_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__13_urlopen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_redirect = python_pars[3];
PyObject *par_kw = python_pars[4];
PyObject *var_u = NULL;
PyObject *var_conn = NULL;
PyObject *var_response = NULL;
PyObject *var_redirect_location = NULL;
PyObject *var_retries = NULL;
PyObject *var_new_headers = NULL;
PyObject *var_header = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__13_urlopen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen = MAKE_FUNCTION_FRAME(tstate, code_objects_37e20b5855300524a1ed62f038e72cd7, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__13_urlopen = cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__13_urlopen);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__13_urlopen) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$parse_url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 434;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_u;
    var_u = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_u);
tmp_expression_value_1 = var_u;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_2 = module_var_accessor_urllib3$poolmanager$warnings(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_warn);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_urllib3$poolmanager$FutureWarning(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FutureWarning);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 442;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 437;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c310281d67975ff96e0213461ec62446_tuple, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_connection_from_host);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_4 = var_u;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_host);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 446;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_5 = var_u;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_port);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 446;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_6 = var_u;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_scheme);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 446;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 446;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_port_str_plain_scheme_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
tmp_dictset_value = Py_False;
CHECK_OBJECT(par_kw);
tmp_dictset_dict = par_kw;
tmp_dictset_key = mod_consts.const_str_plain_assert_same_host;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = Py_False;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_1 = par_kw;
tmp_ass_subscript_1 = mod_consts.const_str_plain_redirect;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_kw);
tmp_cmp_expr_right_2 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_headers);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_2 = par_kw;
tmp_ass_subscript_2 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_u);
tmp_args_element_value_2 = var_u;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 454;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__proxy_requires_url_absolute_form, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 454;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(var_conn);
tmp_expression_value_8 = var_conn;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_urlopen);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_1 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kw);
tmp_direct_call_arg3_1 = par_kw;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
CHECK_OBJECT(var_conn);
tmp_expression_value_9 = var_conn;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_urlopen);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_2 = par_method;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_u);
tmp_expression_value_10 = var_u;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_request_uri);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_direct_call_arg2_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_kw);
tmp_direct_call_arg3_2 = par_kw;
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_assign_source_4 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_assign_source_5;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_redirect);
tmp_and_left_value_1 = par_redirect;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_response);
tmp_called_instance_2 = var_response;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 459;
tmp_and_right_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_redirect_location);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_assign_source_5 = tmp_and_left_value_1;
and_end_1:;
{
    PyObject *old = var_redirect_location;
    var_redirect_location = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_redirect_location);
tmp_operand_value_1 = var_redirect_location;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(var_response);
tmp_return_value = var_response;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_urllib3$poolmanager$urljoin(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urljoin);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 464;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
CHECK_OBJECT(var_redirect_location);
tmp_args_element_value_4 = var_redirect_location;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 464;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_redirect_location;
    assert(old != NULL);
    var_redirect_location = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_response);
tmp_expression_value_11 = var_response;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_303;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
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
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_plain_GET;
{
    PyObject *old = par_method;
    assert(old != NULL);
    par_method = tmp_assign_source_7;
    Py_INCREF(par_method);
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = Py_None;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_3 = par_kw;
tmp_ass_subscript_3 = mod_consts.const_str_plain_body;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_called_value_5 = module_var_accessor_urllib3$poolmanager$HTTPHeaderDict(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPHeaderDict);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_expression_value_12 = par_kw;
tmp_subscript_value_1 = mod_consts.const_str_plain_headers;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 471;
tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 471;
tmp_ass_subvalue_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__prepare_for_method_change);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_4 = par_kw;
tmp_ass_subscript_4 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_kw);
tmp_expression_value_13 = par_kw;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
assert(!(tmp_called_value_6 == NULL));
tmp_args_element_value_6 = mod_consts.const_str_plain_retries;
CHECK_OBJECT(var_response);
tmp_expression_value_14 = var_response;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_retries);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 473;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 473;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retries;
    var_retries = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_retries);
tmp_isinstance_inst_1 = var_retries;
tmp_isinstance_cls_1 = module_var_accessor_urllib3$poolmanager$Retry(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 474;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_15 = module_var_accessor_urllib3$poolmanager$Retry(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_from_int);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_retries);
tmp_kw_call_arg_value_0_2 = var_retries;
CHECK_OBJECT(par_redirect);
tmp_kw_call_dict_value_0_2 = par_redirect;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 475;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_redirect_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retries;
    assert(old != NULL);
    var_retries = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_retries);
tmp_expression_value_16 = var_retries;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_remove_headers_on_redirect);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 480;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_conn);
tmp_called_instance_4 = var_conn;
CHECK_OBJECT(var_redirect_location);
tmp_args_element_value_8 = var_redirect_location;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 480;
tmp_operand_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_same_host, tmp_args_element_value_8);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_kw);
tmp_expression_value_18 = par_kw;
tmp_subscript_value_2 = mod_consts.const_str_plain_headers;
tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_2);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 483;
tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_headers;
    var_new_headers = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_kw);
tmp_expression_value_19 = par_kw;
tmp_subscript_value_3 = mod_consts.const_str_plain_headers;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 484;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_13 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_13;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(var_header);
tmp_expression_value_20 = var_header;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_lower);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 485;
tmp_cmp_expr_left_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
if (var_retries == NULL) {
Py_DECREF(tmp_cmp_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 485;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_21 = var_retries;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_remove_headers_on_redirect);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 485;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
if (var_new_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 486;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_22 = var_new_headers;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_pop);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_header);
tmp_args_element_value_9 = var_header;
tmp_args_element_value_10 = Py_None;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 486;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
if (var_new_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 487;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subvalue_5 = var_new_headers;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_5 = par_kw;
tmp_ass_subscript_5 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_23;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_2;
if (var_retries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 490;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_23 = var_retries;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_increment);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
if (par_method == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 490;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_arg_value_0_3 = par_method;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(var_response);
tmp_kw_call_dict_value_0_3 = var_response;
CHECK_OBJECT(var_conn);
tmp_kw_call_dict_value_1_2 = var_conn;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 490;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain__pool_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_retries;
    var_retries = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__13_urlopen, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__13_urlopen, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = module_var_accessor_urllib3$poolmanager$MaxRetryError(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MaxRetryError);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
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
nuitka_bool tmp_condition_result_10;
PyObject *tmp_expression_value_24;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
if (var_retries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 492;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_24 = var_retries;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_raise_on_redirect);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 492;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_4;
CHECK_OBJECT(var_response);
tmp_called_instance_5 = var_response;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 493;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_drain_conn);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 494;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame)) {
        frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_4;
branch_no_10:;
CHECK_OBJECT(var_response);
tmp_return_value = var_response;
Py_INCREF(tmp_return_value);
goto try_return_handler_4;
goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 489;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame)) {
        frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_4;
branch_end_9:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
CHECK_OBJECT(var_retries);
tmp_ass_subvalue_6 = var_retries;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_6 = par_kw;
tmp_ass_subscript_6 = mod_consts.const_str_plain_retries;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
CHECK_OBJECT(par_redirect);
tmp_ass_subvalue_7 = par_redirect;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_7 = par_kw;
tmp_ass_subscript_7 = mod_consts.const_str_plain_redirect;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_instance_6 = module_var_accessor_urllib3$poolmanager$log(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = mod_consts.const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
CHECK_OBJECT(par_url);
tmp_args_element_value_12 = par_url;
CHECK_OBJECT(var_redirect_location);
tmp_args_element_value_13 = var_redirect_location;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain_info,
        call_args
    );
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_6;
CHECK_OBJECT(var_response);
tmp_called_instance_7 = var_response;
frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame.f_lineno = 502;
tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_drain_conn);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_25;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_3;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_urlopen);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (par_method == NULL) {
Py_DECREF(tmp_direct_call_arg1_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 503;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = par_method;
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_redirect_location);
tmp_tuple_element_3 = var_redirect_location;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(par_kw);
tmp_direct_call_arg3_3 = par_kw;
Py_INCREF(tmp_direct_call_arg3_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__13_urlopen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__13_urlopen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__13_urlopen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__13_urlopen,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_redirect,
    par_kw,
    var_u,
    var_conn,
    var_response,
    var_redirect_location,
    var_retries,
    var_new_headers,
    var_header
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__13_urlopen == cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen);
    cache_frame_frame_urllib3$poolmanager$$$function__13_urlopen = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__13_urlopen);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_method);
par_method = NULL;
CHECK_OBJECT(var_u);
CHECK_OBJECT(var_u);
Py_DECREF(var_u);
var_u = NULL;
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
Py_XDECREF(var_redirect_location);
var_redirect_location = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var_new_headers);
var_new_headers = NULL;
Py_XDECREF(var_header);
var_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_method);
par_method = NULL;
Py_XDECREF(var_u);
var_u = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_redirect_location);
var_redirect_location = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var_new_headers);
var_new_headers = NULL;
Py_XDECREF(var_header);
var_header = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_proxy_url = python_pars[1];
PyObject *par_num_pools = python_pars[2];
PyObject *par_headers = python_pars[3];
PyObject *par_proxy_headers = python_pars[4];
PyObject *par_proxy_ssl_context = python_pars[5];
PyObject *par_use_forwarding_for_https = python_pars[6];
PyObject *par_proxy_assert_hostname = python_pars[7];
PyObject *par_proxy_assert_fingerprint = python_pars[8];
PyObject *par_connection_pool_kw = python_pars[9];
PyObject *var_str_proxy_url = NULL;
PyObject *var_proxy = NULL;
PyObject *var_port = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3290b8d99286e25c9ff4e526e0d9c73a, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__14___init__->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__14___init__ = cache_frame_frame_urllib3$poolmanager$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__14___init__);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__14___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_proxy_url);
tmp_isinstance_inst_1 = par_proxy_url;
tmp_isinstance_cls_1 = module_var_accessor_urllib3$poolmanager$HTTPConnectionPool(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPConnectionPool);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooooooooooooc";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_proxy_url);
tmp_expression_value_1 = par_proxy_url;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scheme);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_proxy_url);
tmp_expression_value_2 = par_proxy_url;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_host);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooc";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_proxy_url);
tmp_expression_value_3 = par_proxy_url;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_port);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooc";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
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
    PyObject *old = var_str_proxy_url;
    var_str_proxy_url = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_proxy_url);
tmp_assign_source_2 = par_proxy_url;
{
    PyObject *old = var_str_proxy_url;
    var_str_proxy_url = tmp_assign_source_2;
    Py_INCREF(var_str_proxy_url);
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$parse_url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 579;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_str_proxy_url);
tmp_args_element_value_1 = var_str_proxy_url;
frame_frame_urllib3$poolmanager$$$function__14___init__->m_frame.f_lineno = 579;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_proxy;
    var_proxy = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_proxy);
tmp_expression_value_4 = var_proxy;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_http_str_plain_https_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooooooooooooc";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
tmp_called_value_2 = module_var_accessor_urllib3$poolmanager$ProxySchemeUnknown(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxySchemeUnknown);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 582;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_expression_value_5 = var_proxy;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_scheme);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__14___init__->m_frame.f_lineno = 582;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 582;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_proxy);
tmp_expression_value_6 = var_proxy;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_port);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "oooooooooooooc";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
tmp_expression_value_7 = module_var_accessor_urllib3$poolmanager$port_by_scheme(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_port_by_scheme);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 585;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxy);
tmp_expression_value_8 = var_proxy;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_scheme);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 585;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_int_pos_80;
frame_frame_urllib3$poolmanager$$$function__14___init__->m_frame.f_lineno = 585;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_proxy);
tmp_expression_value_9 = var_proxy;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__replace);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_port);
tmp_kw_call_value_0_1 = var_port;
frame_frame_urllib3$poolmanager$$$function__14___init__->m_frame.f_lineno = 586;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_port_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_proxy;
    assert(old != NULL);
    var_proxy = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
if (var_proxy == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_proxy);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 588;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_ass_attr_value_1 = var_proxy;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_proxy, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_proxy_headers);
tmp_or_left_value_1 = par_proxy_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_ass_attr_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_ass_attr_value_2 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_proxy_headers, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_proxy_ssl_context);
tmp_ass_attr_value_3 = par_proxy_ssl_context;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_proxy_ssl_context, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_ass_attr_target_4;
tmp_called_value_5 = module_var_accessor_urllib3$poolmanager$ProxyConfig(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyConfig);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 591;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proxy_ssl_context);
tmp_args_element_value_5 = par_proxy_ssl_context;
CHECK_OBJECT(par_use_forwarding_for_https);
tmp_args_element_value_6 = par_use_forwarding_for_https;
CHECK_OBJECT(par_proxy_assert_hostname);
tmp_args_element_value_7 = par_proxy_assert_hostname;
CHECK_OBJECT(par_proxy_assert_fingerprint);
tmp_args_element_value_8 = par_proxy_assert_fingerprint;
frame_frame_urllib3$poolmanager$$$function__14___init__->m_frame.f_lineno = 591;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_ass_attr_value_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
}

if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_proxy_config, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_proxy);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_connection_pool_kw);
tmp_dictset_dict = par_connection_pool_kw;
tmp_dictset_key = mod_consts.const_str_plain__proxy;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_proxy_headers);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_connection_pool_kw);
tmp_ass_subscribed_1 = par_connection_pool_kw;
tmp_ass_subscript_1 = mod_consts.const_str_plain__proxy_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_proxy_config);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_connection_pool_kw);
tmp_ass_subscribed_2 = par_connection_pool_kw;
tmp_ass_subscript_2 = mod_consts.const_str_plain__proxy_config;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 602;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_13 = BUILTIN_SUPER0(tstate, moduledict_urllib3$poolmanager, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "oooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_num_pools);
tmp_tuple_element_2 = par_num_pools;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_headers);
tmp_tuple_element_2 = par_headers;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_connection_pool_kw);
tmp_direct_call_arg3_1 = par_connection_pool_kw;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "oooooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__14___init__,
    type_description_1,
    par_self,
    par_proxy_url,
    par_num_pools,
    par_headers,
    par_proxy_headers,
    par_proxy_ssl_context,
    par_use_forwarding_for_https,
    par_proxy_assert_hostname,
    par_proxy_assert_fingerprint,
    par_connection_pool_kw,
    var_str_proxy_url,
    var_proxy,
    var_port,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__14___init__ == cache_frame_frame_urllib3$poolmanager$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__14___init__);
    cache_frame_frame_urllib3$poolmanager$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__14___init__);

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
CHECK_OBJECT(var_str_proxy_url);
CHECK_OBJECT(var_str_proxy_url);
Py_DECREF(var_str_proxy_url);
var_str_proxy_url = NULL;
Py_XDECREF(var_proxy);
var_proxy = NULL;
Py_XDECREF(var_port);
var_port = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_str_proxy_url);
var_str_proxy_url = NULL;
Py_XDECREF(var_proxy);
var_proxy = NULL;
Py_XDECREF(var_port);
var_port = NULL;
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
CHECK_OBJECT(par_proxy_url);
Py_DECREF(par_proxy_url);
CHECK_OBJECT(par_num_pools);
Py_DECREF(par_num_pools);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
CHECK_OBJECT(par_use_forwarding_for_https);
Py_DECREF(par_use_forwarding_for_https);
CHECK_OBJECT(par_proxy_assert_hostname);
Py_DECREF(par_proxy_assert_hostname);
CHECK_OBJECT(par_proxy_assert_fingerprint);
Py_DECREF(par_proxy_assert_fingerprint);
CHECK_OBJECT(par_connection_pool_kw);
Py_DECREF(par_connection_pool_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_proxy_url);
Py_DECREF(par_proxy_url);
CHECK_OBJECT(par_num_pools);
Py_DECREF(par_num_pools);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_proxy_headers);
Py_DECREF(par_proxy_headers);
CHECK_OBJECT(par_proxy_ssl_context);
Py_DECREF(par_proxy_ssl_context);
CHECK_OBJECT(par_use_forwarding_for_https);
Py_DECREF(par_use_forwarding_for_https);
CHECK_OBJECT(par_proxy_assert_hostname);
Py_DECREF(par_proxy_assert_hostname);
CHECK_OBJECT(par_proxy_assert_fingerprint);
Py_DECREF(par_proxy_assert_fingerprint);
CHECK_OBJECT(par_connection_pool_kw);
Py_DECREF(par_connection_pool_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__15_connection_from_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *par_port = python_pars[2];
PyObject *par_scheme = python_pars[3];
PyObject *par_pool_kwargs = python_pars[4];
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__15_connection_from_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host = MAKE_FUNCTION_FRAME(tstate, code_objects_b05d88e79657aee4a2a808030c357324, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__15_connection_from_host = cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__15_connection_from_host);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__15_connection_from_host) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_scheme);
tmp_cmp_expr_left_1 = par_scheme;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_https;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "oooooc";
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
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 612;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_urllib3$poolmanager, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_connection_from_host);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_kw_call_arg_value_0_1 = par_host;
CHECK_OBJECT(par_port);
tmp_kw_call_arg_value_1_1 = par_port;
CHECK_OBJECT(par_scheme);
tmp_kw_call_arg_value_2_1 = par_scheme;
CHECK_OBJECT(par_pool_kwargs);
tmp_kw_call_dict_value_0_1 = par_pool_kwargs;
frame_frame_urllib3$poolmanager$$$function__15_connection_from_host->m_frame.f_lineno = 612;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_pool_kwargs_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_2;
PyObject *tmp_object_arg_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_0_2;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 616;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_2 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_2 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER0(tstate, moduledict_urllib3$poolmanager, tmp_type_arg_value_2, tmp_object_arg_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_connection_from_host);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_proxy);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 617;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_host);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 617;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_proxy);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 617;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_port);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 617;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_proxy);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 617;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_kw_call_arg_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 617;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pool_kwargs);
tmp_kw_call_dict_value_0_2 = par_pool_kwargs;
frame_frame_urllib3$poolmanager$$$function__15_connection_from_host->m_frame.f_lineno = 616;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_pool_kwargs_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__15_connection_from_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__15_connection_from_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__15_connection_from_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__15_connection_from_host,
    type_description_1,
    par_self,
    par_host,
    par_port,
    par_scheme,
    par_pool_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__15_connection_from_host == cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host);
    cache_frame_frame_urllib3$poolmanager$$$function__15_connection_from_host = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__15_connection_from_host);

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
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
CHECK_OBJECT(par_pool_kwargs);
Py_DECREF(par_pool_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__16__set_proxy_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *var_headers_ = NULL;
PyObject *var_netloc = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = DICT_COPY(tstate, mod_consts.const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce);
{
    PyObject *old = var_headers_;
    var_headers_ = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_49cb92324f4acc1a99674a2e81bebb2e, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers = cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$parse_url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 629;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers->m_frame.f_lineno = 629;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_netloc);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_netloc;
    var_netloc = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_netloc);
tmp_truth_name_1 = CHECK_IF_TRUE(var_netloc);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_1 = "ooooo";
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
CHECK_OBJECT(var_netloc);
tmp_dictset_value = var_netloc;
CHECK_OBJECT(var_headers_);
tmp_dictset_dict = var_headers_;
tmp_dictset_key = mod_consts.const_str_plain_Host;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_headers);
tmp_truth_name_2 = CHECK_IF_TRUE(par_headers);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_headers_);
tmp_dict_arg_value_1 = var_headers_;
CHECK_OBJECT(par_headers);
tmp_iterable_value_1 = par_headers;
assert(PyDict_Check(tmp_dict_arg_value_1));
if (HAS_ATTR_BOOL(tstate, tmp_iterable_value_1, const_str_plain_keys)){
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
} else {
    tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
}

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers,
    type_description_1,
    par_self,
    par_url,
    par_headers,
    var_headers_,
    var_netloc
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers == cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers);
    cache_frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__16__set_proxy_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_headers_);
tmp_return_value = var_headers_;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_headers_);
CHECK_OBJECT(var_headers_);
Py_DECREF(var_headers_);
var_headers_ = NULL;
CHECK_OBJECT(var_netloc);
CHECK_OBJECT(var_netloc);
Py_DECREF(var_netloc);
var_netloc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_headers_);
CHECK_OBJECT(var_headers_);
Py_DECREF(var_headers_);
var_headers_ = NULL;
Py_XDECREF(var_netloc);
var_netloc = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__17_urlopen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_redirect = python_pars[3];
PyObject *par_kw = python_pars[4];
PyObject *var_u = NULL;
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__17_urlopen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen = MAKE_FUNCTION_FRAME(tstate, code_objects_4bea48be3e47a32907124c0d5c044957, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__17_urlopen = cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__17_urlopen);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__17_urlopen) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$poolmanager$parse_url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 641;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_urllib3$poolmanager$$$function__17_urlopen->m_frame.f_lineno = 641;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 641;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_u;
    var_u = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
tmp_called_value_2 = module_var_accessor_urllib3$poolmanager$connection_requires_http_tunnel(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_connection_requires_http_tunnel);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 642;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_proxy);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_proxy_config);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 642;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_u);
tmp_expression_value_3 = var_u;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scheme);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 642;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager$$$function__17_urlopen->m_frame.f_lineno = 642;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oooooooc";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_kw);
tmp_dict_arg_value_1 = par_kw;
tmp_key_value_1 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_headers);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL) {
    tmp_assign_source_2 = tmp_default_value_1;
    Py_INCREF(tmp_assign_source_2);
}
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_headers;
    var_headers = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_url);
tmp_args_element_value_5 = par_url;
CHECK_OBJECT(var_headers);
tmp_args_element_value_6 = var_headers;
frame_frame_urllib3$poolmanager$$$function__17_urlopen->m_frame.f_lineno = 647;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_dictset_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__set_proxy_headers,
        call_args
    );
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_dictset_dict = par_kw;
tmp_dictset_key = mod_consts.const_str_plain_headers;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 649;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_5 = BUILTIN_SUPER0(tstate, moduledict_urllib3$poolmanager, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_urlopen);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_1 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_redirect;
CHECK_OBJECT(par_redirect);
tmp_dict_value_1 = par_redirect;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kw);
tmp_direct_call_arg4_1 = par_kw;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__17_urlopen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__17_urlopen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__17_urlopen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__17_urlopen,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_redirect,
    par_kw,
    var_u,
    var_headers,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__17_urlopen == cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen);
    cache_frame_frame_urllib3$poolmanager$$$function__17_urlopen = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__17_urlopen);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_u);
CHECK_OBJECT(var_u);
Py_DECREF(var_u);
var_u = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_u);
var_u = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function__18_proxy_from_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_kw = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url)) {
    Py_XDECREF(cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url = MAKE_FUNCTION_FRAME(tstate, code_objects_0bdfe060fa3b148f6c4524d1e3d130f2, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url->m_type_description == NULL);
frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url = cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_urllib3$poolmanager$ProxyManager(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyManager);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 653;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_proxy_url;
CHECK_OBJECT(par_url);
tmp_dict_value_1 = par_url;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kw);
tmp_direct_call_arg3_1 = par_kw;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url,
    type_description_1,
    par_url,
    par_kw
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url == cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url);
    cache_frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url = NULL;
}

assertFrameObject(frame_frame_urllib3$poolmanager$$$function__18_proxy_from_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__10_connection_from_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__10_connection_from_url,
        mod_consts.const_str_plain_connection_from_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_207bd888d8d92daafa6abe19cac5a8f7,
#endif
        code_objects_dd92d3ad903a8f57948c554c9a030488,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_782d6824e95fdcb2c99e4fa423f91f9e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__11__merge_pool_kwargs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__11__merge_pool_kwargs,
        mod_consts.const_str_plain__merge_pool_kwargs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5cc25be09470e6d83192f743509a3e44,
#endif
        code_objects_a748f9b91453bb1f5edd7a1412f8c6cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_a050ca78aa472f2c5b57441d0496ce83,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form,
        mod_consts.const_str_plain__proxy_requires_url_absolute_form,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_203cb81c7689ac40dcee168c450785c6,
#endif
        code_objects_0393a404351a67d4ef661d8cf2b96b6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_2652849bfeb87d067402edac4eccdd70,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__13_urlopen(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__13_urlopen,
        mod_consts.const_str_plain_urlopen,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30b54feb3c940a6350ed755fb780fac0,
#endif
        code_objects_37e20b5855300524a1ed62f038e72cd7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_1fc95c87b0be10953189ac503651cfae,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__14___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27aab67055f718697d7ee2aa049bc069,
#endif
        code_objects_3290b8d99286e25c9ff4e526e0d9c73a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__15_connection_from_host(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__15_connection_from_host,
        mod_consts.const_str_plain_connection_from_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48,
#endif
        code_objects_b05d88e79657aee4a2a808030c357324,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__16__set_proxy_headers(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__16__set_proxy_headers,
        mod_consts.const_str_plain__set_proxy_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21,
#endif
        code_objects_49cb92324f4acc1a99674a2e81bebb2e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_aae79aa5ae9ba35d7bba94eddaac6acc,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__17_urlopen(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__17_urlopen,
        mod_consts.const_str_plain_urlopen,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096,
#endif
        code_objects_4bea48be3e47a32907124c0d5c044957,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_1552d535bdde2b752b496af3502874b7,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__18_proxy_from_url(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__18_proxy_from_url,
        mod_consts.const_str_plain_proxy_from_url,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0bdfe060fa3b148f6c4524d1e3d130f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__1__default_key_normalizer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__1__default_key_normalizer,
        mod_consts.const_str_plain__default_key_normalizer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_912484390ed5f9e4deb0216500775676,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_0d731d0eed1a6b51f90c0ebbc1ea5694,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c693d3d582276b7b2edfad1a40061e7a,
#endif
        code_objects_db7cc454ee701b8da4d9cb1876dc66b6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__3___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__3___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9fbd1260836ddbad56854d8b9c0186c8,
#endif
        code_objects_1ae3b621d45bb34d9a83f43d89ac4559,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__4___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__4___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d867a048a787bc50c8cc5e46f1c6583f,
#endif
        code_objects_50394f0b5445794c8597064f8bfbf9e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__5__new_pool(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__5__new_pool,
        mod_consts.const_str_plain__new_pool,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_13408ef5640dc399fffe039ff946ada1,
#endif
        code_objects_cc8b0be9f728d67e714006aa0946cde3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_21600d731d4c18753067ac34238fa236,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__6_clear(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__6_clear,
        mod_consts.const_str_plain_clear,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6077c56a9bf23cde9bad19d172735047,
#endif
        code_objects_84d94be87ee29c0025f059f45d55cf33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_5dbd73ce38e0a194d35778447907f4fa,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__7_connection_from_host(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__7_connection_from_host,
        mod_consts.const_str_plain_connection_from_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef,
#endif
        code_objects_6120c3d753ccb7f12679262491912497,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_4da161a884ed71d642791cce577b33e8,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__8_connection_from_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__8_connection_from_context,
        mod_consts.const_str_plain_connection_from_context,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5a07a0dc70d8af35bcd050243335215,
#endif
        code_objects_d41ea9218316c58a04f6678ac978f17c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_1b356b67c770c772a142632f443bbf81,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function__9_connection_from_pool_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function__9_connection_from_pool_key,
        mod_consts.const_str_plain_connection_from_pool_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_df49728476f1c106520a9c1d8d838d08,
#endif
        code_objects_178cd882f891b3dc5dae31e281a0b8b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$poolmanager,
        mod_consts.const_str_digest_6e28485fe62dde72eed752d843ef1ec6,
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

static function_impl_code const function_table_urllib3$poolmanager[] = {
impl_urllib3$poolmanager$$$function__1__default_key_normalizer,
impl_urllib3$poolmanager$$$function__2___init__,
impl_urllib3$poolmanager$$$function__3___enter__,
impl_urllib3$poolmanager$$$function__4___exit__,
impl_urllib3$poolmanager$$$function__5__new_pool,
impl_urllib3$poolmanager$$$function__6_clear,
impl_urllib3$poolmanager$$$function__7_connection_from_host,
impl_urllib3$poolmanager$$$function__8_connection_from_context,
impl_urllib3$poolmanager$$$function__9_connection_from_pool_key,
impl_urllib3$poolmanager$$$function__10_connection_from_url,
impl_urllib3$poolmanager$$$function__11__merge_pool_kwargs,
impl_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form,
impl_urllib3$poolmanager$$$function__13_urlopen,
impl_urllib3$poolmanager$$$function__14___init__,
impl_urllib3$poolmanager$$$function__15_connection_from_host,
impl_urllib3$poolmanager$$$function__16__set_proxy_headers,
impl_urllib3$poolmanager$$$function__17_urlopen,
impl_urllib3$poolmanager$$$function__18_proxy_from_url,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$poolmanager);
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
        module_urllib3$poolmanager,
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
        function_table_urllib3$poolmanager,
        sizeof(function_table_urllib3$poolmanager) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.poolmanager";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$poolmanager(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$poolmanager");

    // Store the module for future use.
    module_urllib3$poolmanager = module;

    moduledict_urllib3$poolmanager = MODULE_DICT(module_urllib3$poolmanager);

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
        PRINT_STRING("urllib3$poolmanager: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$poolmanager: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$poolmanager: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.poolmanager" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$poolmanager\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$poolmanager,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$poolmanager,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$poolmanager,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$poolmanager,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$poolmanager,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$poolmanager);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$poolmanager);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyCellObject *outline_1_var___class__ = NULL;
PyCellObject *outline_2_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_urllib3$poolmanager$$$class__1_PoolKey_56 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_urllib3$poolmanager$$$class__2_PoolManager_162 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_urllib3$poolmanager$$$class__3_ProxyManager_506 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$poolmanager = MAKE_MODULE_FRAME(code_objects_f636928a05bd57345cbc6822b8bb9b77, module_urllib3$poolmanager);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$poolmanager$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$poolmanager$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 6;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_urljoin_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 8;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_urljoin,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_urljoin);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__collections;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_HTTPHeaderDict_str_plain_RecentlyUsedContainer_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 10;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_HTTPHeaderDict,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HTTPHeaderDict);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_RecentlyUsedContainer,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_RecentlyUsedContainer);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RecentlyUsedContainer, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__request_methods;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_RequestMethods_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 11;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_RequestMethods,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_RequestMethods);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestMethods, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_connection;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ProxyConfig_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 12;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_ProxyConfig,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ProxyConfig);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyConfig, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_connectionpool;
tmp_globals_arg_value_7 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_d65fa2d10f7ae28a12d528b543003fd3_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 13;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_HTTPConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_HTTPConnectionPool);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPConnectionPool, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_HTTPSConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_HTTPSConnectionPool);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnectionPool, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_port_by_scheme,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_port_by_scheme);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_port_by_scheme, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_8 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_3aa55d7de6a7a6dfa8457997cc262d36_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 14;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_LocationValueError,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_LocationValueError);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationValueError, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_MaxRetryError,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_MaxRetryError);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_ProxySchemeUnknown,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ProxySchemeUnknown);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnknown, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_URLSchemeUnknown,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_URLSchemeUnknown);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_URLSchemeUnknown, tmp_assign_source_25);
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
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_response;
tmp_globals_arg_value_9 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 20;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_BaseHTTPResponse,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BaseHTTPResponse);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_77799d2fef7894b65fb30e7df14c6471;
tmp_globals_arg_value_10 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain__TYPE_SOCKET_OPTIONS_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 21;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_6fc3e8e6716ea8cd522322b50b2a73de;
tmp_globals_arg_value_11 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_connection_requires_http_tunnel_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 22;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_connection_requires_http_tunnel,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_connection_requires_http_tunnel);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_connection_requires_http_tunnel, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_e68800bfc0da117494aca4ca9d48e152;
tmp_globals_arg_value_12 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_Retry_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 23;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_Retry,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Retry);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_522bfd5e75e11cb6ec433673b0570303;
tmp_globals_arg_value_13 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_Timeout_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 24;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Timeout);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
tmp_globals_arg_value_14 = (PyObject *)moduledict_urllib3$poolmanager;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_Url_str_plain_parse_url_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 25;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_Url,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Url);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_Url, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_urllib3$poolmanager,
        mod_consts.const_str_plain_parse_url,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_parse_url);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url, tmp_assign_source_33);
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
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_LIST3(tstate, mod_consts.const_str_plain_PoolManager,mod_consts.const_str_plain_ProxyManager,mod_consts.const_str_plain_proxy_from_url);
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_urllib3$poolmanager$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 35;
tmp_assign_source_35 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple, 0)
);

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_tuple_a244f28657f83bbb1a6de3dabe64851b_tuple;
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_KEYWORDS, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = mod_consts.const_int_pos_16384;
UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_BLOCKSIZE, tmp_assign_source_37);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NamedTuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_38, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
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


exception_lineno = 56;

    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 56;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_41;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_42;
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


exception_lineno = 56;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_PoolKey;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 56;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_42;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_15, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
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


exception_lineno = 56;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 56;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_43;
}
branch_end_1:;
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$poolmanager$$$class__1_PoolKey_56 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_8bde6350cbb2355e844e4dac23a1e9b7;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_PoolKey;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_56;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2 = MAKE_CLASS_FRAME(tstate, code_objects_d1dfe6b049cd9b4f621c5da37de6a3db, module_urllib3$poolmanager, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2, locals_urllib3$poolmanager$$$class__1_PoolKey_56);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_key_scheme;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_key_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_key_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_944f16325f6df0dee4daf0dabfec4a58;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_key_timeout;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_3c1e577296ac3cc86dd73a5c9a972d59;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_key_retries;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_74c1228720a3ef24152210367f6503ca;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_key_block;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_da3dae280158f5ea10725d61f2ba5074;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_key_source_address;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_key_key_file;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_key_key_password;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_key_cert_file;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_key_cert_reqs;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_key_ca_certs;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_91593c038aaffbc1977f0dcf43037004;
tmp_ass_subscribed_13 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_key_ca_cert_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = mod_consts.const_str_digest_b87aaf58fb08e1cbc8779257850ebdcc;
tmp_ass_subscribed_14 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_key_ssl_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a;
tmp_ass_subscribed_15 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_key_ssl_minimum_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_digest_e371809ae76adcfd2fc09e30dfc55b5a;
tmp_ass_subscribed_16 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_key_ssl_maximum_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_ass_subvalue_17 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_17 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_key_ca_cert_dir;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = mod_consts.const_str_digest_4d3629ce4523e04c83dfc5003af0f6e1;
tmp_ass_subscribed_18 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_key_ssl_context;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
CHECK_OBJECT(tmp_ass_subscribed_18);
Py_DECREF(tmp_ass_subscribed_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_ass_subvalue_19 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_19 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_key_maxsize;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520;
tmp_ass_subscribed_20 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_key_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_ass_subvalue_21 = mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00;
tmp_ass_subscribed_21 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_key__proxy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_ass_subvalue_22 = mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520;
tmp_ass_subscribed_22 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_22 = mod_consts.const_str_plain_key__proxy_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
CHECK_OBJECT(tmp_ass_subscribed_22);
Py_DECREF(tmp_ass_subscribed_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_ass_subvalue_23 = mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b;
tmp_ass_subscribed_23 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_key__proxy_config;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_ass_subvalue_24 = mod_consts.const_str_digest_c6714ac067c433093ca51e26005b778f;
tmp_ass_subscribed_24 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_24 = mod_consts.const_str_plain_key_socket_options;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_ass_subvalue_25 = mod_consts.const_str_digest_08dd0e77d89c6d14af2ae8c3ba3d4520;
tmp_ass_subscribed_25 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_25 = mod_consts.const_str_plain_key__socks_options;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_26;
PyObject *tmp_ass_subscribed_26;
PyObject *tmp_ass_subscript_26;
tmp_ass_subvalue_26 = mod_consts.const_str_digest_e330e1f63cfecfca1e6ba67db776922b;
tmp_ass_subscribed_26 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_26 = mod_consts.const_str_plain_key_assert_hostname;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
CHECK_OBJECT(tmp_ass_subscribed_26);
Py_DECREF(tmp_ass_subscribed_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_27;
PyObject *tmp_ass_subscribed_27;
PyObject *tmp_ass_subscript_27;
tmp_ass_subvalue_27 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_27 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_27 = mod_consts.const_str_plain_key_assert_fingerprint;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
CHECK_OBJECT(tmp_ass_subscribed_27);
Py_DECREF(tmp_ass_subscribed_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_28;
PyObject *tmp_ass_subscribed_28;
PyObject *tmp_ass_subscript_28;
tmp_ass_subvalue_28 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_28 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_28 = mod_consts.const_str_plain_key_server_hostname;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
CHECK_OBJECT(tmp_ass_subscribed_28);
Py_DECREF(tmp_ass_subscribed_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_29;
PyObject *tmp_ass_subscribed_29;
PyObject *tmp_ass_subscript_29;
tmp_ass_subvalue_29 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_29 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_29 = mod_consts.const_str_plain_key_blocksize;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
CHECK_OBJECT(tmp_ass_subscribed_29);
Py_DECREF(tmp_ass_subscribed_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$poolmanager$$$class__1_PoolKey_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__1_PoolKey_56, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain_PoolKey;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_urllib3$poolmanager$$$class__1_PoolKey_56;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_44 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_urllib3$poolmanager$$$class__1_PoolKey_56);
locals_urllib3$poolmanager$$$class__1_PoolKey_56 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$poolmanager$$$class__1_PoolKey_56);
locals_urllib3$poolmanager$$$class__1_PoolKey_56 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 56;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolKey, tmp_assign_source_44);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_33292b837b24009f29a7e089bd91e09a);

tmp_assign_source_46 = MAKE_FUNCTION_urllib3$poolmanager$$$function__1__default_key_normalizer(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain__default_key_normalizer, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_dict_key_1 = mod_consts.const_str_plain_http;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_2 == NULL));
tmp_args_element_value_1 = module_var_accessor_urllib3$poolmanager$_default_key_normalizer(tstate);
assert(!(tmp_args_element_value_1 == NULL));
tmp_args_element_value_2 = module_var_accessor_urllib3$poolmanager$PoolKey(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolKey);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 155;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto frame_exception_exit_1;
}
tmp_assign_source_47 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_https;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_3 = module_var_accessor_urllib3$poolmanager$_default_key_normalizer(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__default_key_normalizer);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 156;

    goto dict_build_exception_1;
}
tmp_args_element_value_4 = module_var_accessor_urllib3$poolmanager$PoolKey(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolKey);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 156;

    goto dict_build_exception_1;
}
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_47);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_key_fn_by_scheme, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_http;
tmp_dict_value_2 = module_var_accessor_urllib3$poolmanager$HTTPConnectionPool(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPConnectionPool);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto frame_exception_exit_1;
}
tmp_assign_source_48 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_48, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_https;
tmp_dict_value_2 = module_var_accessor_urllib3$poolmanager$HTTPSConnectionPool(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPSConnectionPool);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_48, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_48);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_pool_classes_by_scheme, tmp_assign_source_48);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_urllib3$poolmanager$RequestMethods(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestMethods);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_PoolManager;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 162;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_17, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_8;
}
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 162;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 162;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_54;
}
branch_end_4:;
{
PyObject *tmp_assign_source_55;
outline_1_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_urllib3$poolmanager$$$class__2_PoolManager_162 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_5827159d0548822ba1ce39a1191c382b;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_PoolManager;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_162;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3 = MAKE_CLASS_FRAME(tstate, code_objects_42fa760f4cb66f529e3a8bf3757e13c4, module_urllib3$poolmanager, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3, locals_urllib3$poolmanager$$$class__2_PoolManager_162);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_proxy, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_30;
PyObject *tmp_ass_subscribed_30;
PyObject *tmp_ass_subscript_30;
tmp_ass_subvalue_30 = mod_consts.const_str_digest_991b0e883fb0ad3756198bb63bcdae00;
tmp_ass_subscribed_30 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 196;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_30 = mod_consts.const_str_plain_proxy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
CHECK_OBJECT(tmp_ass_subscribed_30);
Py_DECREF(tmp_ass_subscribed_30);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_proxy_config, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_31;
PyObject *tmp_ass_subscribed_31;
PyObject *tmp_ass_subscript_31;
tmp_ass_subvalue_31 = mod_consts.const_str_digest_5c18c65c04645af207701740f137e33b;
tmp_ass_subscribed_31 = PyObject_GetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_31 = mod_consts.const_str_plain_proxy_config;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
CHECK_OBJECT(tmp_ass_subscribed_31);
Py_DECREF(tmp_ass_subscribed_31);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_int_pos_10_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ebdb4b45ef007dbd0dce855e88ca7a21);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__2___init__(tstate, tmp_defaults_1, tmp_annotations_2, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__3___enter__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_01669e220d2c4b01b73594e81ac1a026);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__4___exit__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_5;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e12424d1c12318755765b15c967e6dd3);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__5__new_pool(tstate, tmp_defaults_2, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain__new_pool, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__6_clear(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_clear, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_7;
tmp_defaults_3 = mod_consts.const_tuple_none_str_plain_http_none_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__7_connection_from_host(tstate, tmp_defaults_3, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_connection_from_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6f2f0f0d8491eb885cf53868f006d8e0);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__8_connection_from_context(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_connection_from_context, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_89e1b2fad9d08ccfb3a1ed9ec476cdfe);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__9_connection_from_pool_key(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_connection_from_pool_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_10;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_b303e5522e44734c4d6e28598f034257);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__10_connection_from_url(tstate, tmp_defaults_4, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_connection_from_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_11b6b7625382e90ef15aea2e305c68b8);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__11__merge_pool_kwargs(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain__merge_pool_kwargs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6a349da13af6493fb34c5d93bda84c27);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__12__proxy_requires_url_absolute_form(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain__proxy_requires_url_absolute_form, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_13;
tmp_defaults_5 = mod_consts.const_tuple_true_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__13_urlopen(tstate, tmp_defaults_5, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain_urlopen, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$poolmanager$$$class__2_PoolManager_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_10;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_4f9dc447e301976538e99c98af24fcee_tuple;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__2_PoolManager_162, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
branch_no_6:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_18;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_18 = mod_consts.const_str_plain_PoolManager;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_urllib3$poolmanager$$$class__2_PoolManager_162;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_2, const_str_plain___classcell__, (PyObject *)outline_1_var___class__);
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_18, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_10;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_1_var___class__);
    PyCell_SET((PyObject *)outline_1_var___class__, tmp_assign_source_56);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_1_var___class__));
tmp_assign_source_55 = PyCell_GET((PyObject *)outline_1_var___class__);
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_urllib3$poolmanager$$$class__2_PoolManager_162);
locals_urllib3$poolmanager$$$class__2_PoolManager_162 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$poolmanager$$$class__2_PoolManager_162);
locals_urllib3$poolmanager$$$class__2_PoolManager_162 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_1_var___class__);
assert(PyCell_Check((PyObject *)outline_1_var___class__));
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 162;
goto try_except_handler_8;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_PoolManager, tmp_assign_source_55);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_urllib3$poolmanager$PoolManager(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PoolManager);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_ProxyManager;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 506;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_19, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_11;
}
frame_frame_urllib3$poolmanager->m_frame.f_lineno = 506;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 506;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_62;
}
branch_end_7:;
{
PyObject *tmp_assign_source_63;
outline_2_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_urllib3$poolmanager$$$class__3_ProxyManager_506 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_2b538996d6d0575adf3afba9f3fff7ed;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_ProxyManager;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_506;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4 = MAKE_CLASS_FRAME(tstate, code_objects_30de9a4264608cb131fb45792ef62ca6, module_urllib3$poolmanager, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4, locals_urllib3$poolmanager$$$class__3_ProxyManager_506);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4);
assert(Py_REFCNT(frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4) == 2);

// Framed code:
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_14;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_defaults_6 = mod_consts.const_tuple_int_pos_10_none_none_none_false_none_none_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_4ad6bc5222ff84c7afd41de4db585b18);
Py_INCREF(tmp_defaults_6);
tmp_closure_2[0] = (struct Nuitka_CellObject *)outline_2_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__14___init__(tstate, tmp_defaults_6, tmp_annotations_14, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_15;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_defaults_7 = mod_consts.const_tuple_none_str_plain_http_none_tuple;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_c0d1044c08d9ebea04e40b893d8cc0c4);
Py_INCREF(tmp_defaults_7);
tmp_closure_3[0] = (struct Nuitka_CellObject *)outline_2_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__15_connection_from_host(tstate, tmp_defaults_7, tmp_annotations_15, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, mod_consts.const_str_plain_connection_from_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 604;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_16;
tmp_defaults_8 = mod_consts.const_tuple_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_ccec3d81d2b524ac778d43477f4d7c9b);
Py_INCREF(tmp_defaults_8);

tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__16__set_proxy_headers(tstate, tmp_defaults_8, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, mod_consts.const_str_plain__set_proxy_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_17;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_defaults_9 = mod_consts.const_tuple_true_tuple;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_af966b76a25811eb93841d688a6c6e33);
Py_INCREF(tmp_defaults_9);
tmp_closure_4[0] = (struct Nuitka_CellObject *)outline_2_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function__17_urlopen(tstate, tmp_defaults_9, tmp_annotations_17, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, mod_consts.const_str_plain_urlopen, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$poolmanager$$$class__3_ProxyManager_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_da394afa18ec8c1083d658eef24f2300_tuple;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_urllib3$poolmanager$$$class__3_ProxyManager_506, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_20;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_20 = mod_consts.const_str_plain_ProxyManager;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_urllib3$poolmanager$$$class__3_ProxyManager_506;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_3, const_str_plain___classcell__, (PyObject *)outline_2_var___class__);
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_20, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;

    goto try_except_handler_13;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_2_var___class__);
    PyCell_SET((PyObject *)outline_2_var___class__, tmp_assign_source_64);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_2_var___class__));
tmp_assign_source_63 = PyCell_GET((PyObject *)outline_2_var___class__);
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_urllib3$poolmanager$$$class__3_ProxyManager_506);
locals_urllib3$poolmanager$$$class__3_ProxyManager_506 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$poolmanager$$$class__3_ProxyManager_506);
locals_urllib3$poolmanager$$$class__3_ProxyManager_506 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_2_var___class__);
assert(PyCell_Check((PyObject *)outline_2_var___class__));
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 506;
goto try_except_handler_11;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyManager, tmp_assign_source_63);
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$poolmanager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$poolmanager);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_a1bc570ac84b18cc31a134a36f4366cc);

tmp_assign_source_65 = MAKE_FUNCTION_urllib3$poolmanager$$$function__18_proxy_from_url(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)mod_consts.const_str_plain_proxy_from_url, tmp_assign_source_65);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$poolmanager", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.poolmanager" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$poolmanager);
    return module_urllib3$poolmanager;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$poolmanager", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
