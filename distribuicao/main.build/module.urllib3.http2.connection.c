/* Generated code for Python module 'urllib3$http2$connection'
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



/* The "module_urllib3$http2$connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$http2$connection;
PyDictObject *moduledict_urllib3$http2$connection;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_RE_IS_LEGAL_HEADER_NAME;
PyObject *const_str_plain_match;
PyObject *const_str_digest_996b5a61f6c6c11c1d46923c288d6086;
PyObject *const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE;
PyObject *const_str_plain_search;
PyObject *const_str_digest_eb7c840c12d40bda3b644dcfc806b890;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_RLock;
PyObject *const_str_plain_lock;
PyObject *const_str_plain__obj;
PyObject *const_str_plain_acquire;
PyObject *const_str_plain_release;
PyObject *const_str_plain__new_h2_conn;
PyObject *const_str_plain__h2_conn;
PyObject *const_str_plain__h2_stream;
PyObject *const_str_plain__headers;
PyObject *const_str_plain_proxy;
PyObject *const_str_plain_proxy_config;
PyObject *const_str_digest_209e33f6332c76cf7e724642f7706569;
PyObject *const_str_plain__tunnel_host;
PyObject *const_str_digest_7b862fff89a2234e0ee774e89273fde5;
PyObject *const_str_plain_h2;
PyObject *const_str_plain_config;
PyObject *const_str_plain_H2Configuration;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_client_side_tuple;
PyObject *const_str_plain__LockedObject;
PyObject *const_str_plain_connection;
PyObject *const_str_plain_H2Connection;
PyObject *const_tuple_str_plain_config_tuple;
PyObject *const_str_plain_connect;
PyObject *const_str_plain_initiate_connection;
PyObject *const_str_plain_data_to_send;
PyObject *const_str_plain_sock;
PyObject *const_str_plain_sendall;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_skip_host;
PyObject *const_str_digest_0ca29aeb02ab16c788471bd3d050b728;
PyObject *const_str_plain_skip_accept_encoding;
PyObject *const_str_digest_53a4f33dfd735f355703c5618e5795e4;
PyObject *const_str_plain__request_url;
PyObject *const_str_plain__validate_path;
PyObject *const_str_chr_58;
PyObject *const_str_plain_host;
PyObject *const_str_chr_91;
PyObject *const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9;
PyObject *const_str_plain_port;
PyObject *const_int_pos_443;
PyObject *const_str_plain_append;
PyObject *const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple;
PyObject *const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7;
PyObject *const_str_plain_encode;
PyObject *const_bytes_digest_7f56adb060216e99431851fcc5788e4c;
PyObject *const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a;
PyObject *const_str_plain_get_next_available_stream_id;
PyObject *const_str_digest_7c35d22451d824fb196d2c97c2d0b169;
PyObject *const_str_plain__is_legal_header_name;
PyObject *const_str_digest_11708c38de86c8aeee492f824073aecb;
PyObject *const_str_plain__is_illegal_header_value;
PyObject *const_str_digest_bc458b7ce067b786cebc25ae29bef776;
PyObject *const_str_plain_self;
PyObject *const_str_plain_header;
PyObject *const_str_plain_ConnectionError;
PyObject *const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple;
PyObject *const_str_plain_send_headers;
PyObject *const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_blocksize;
PyObject *const_str_plain_conn;
PyObject *const_str_plain_send_data;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_end_stream_tuple;
PyObject *const_str_plain_end_stream;
PyObject *const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3;
PyObject *const_str_digest_6706827a7b738ca8971dca58536df31b;
PyObject *const_str_digest_86ee5b86810afd5f59f2e14ef32e289e;
PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
PyObject *const_str_plain_recv;
PyObject *const_tuple_int_pos_65535_tuple;
PyObject *const_str_plain_receive_data;
PyObject *const_str_plain_events;
PyObject *const_str_plain_ResponseReceived;
PyObject *const_str_plain_HTTPHeaderDict;
PyObject *const_str_plain_headers;
PyObject *const_bytes_digest_ce91c0b974913457333acd081707a12f;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_add;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_DataReceived;
PyObject *const_str_plain_acknowledge_received_data;
PyObject *const_str_plain_flow_controlled_length;
PyObject *const_str_plain_stream_id;
PyObject *const_str_plain_StreamEnded;
PyObject *const_str_plain_status;
PyObject *const_str_plain_HTTP2Response;
PyObject *const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple;
PyObject *const_str_plain_settimeout;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_putrequest;
PyObject *const_str_plain_items;
PyObject *const_str_digest_80cf594c6b193676cb3f905f65b5d391;
PyObject *const_str_plain_chunked;
PyObject *const_str_plain_putheader;
PyObject *const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21;
PyObject *const_str_plain__get_default_user_agent;
PyObject *const_str_plain_endheaders;
PyObject *const_tuple_str_plain_message_body_tuple;
PyObject *const_str_digest_cbb14e876661f5e4f48e727f3d0116de;
PyObject *const_str_plain_close_connection;
PyObject *const_int_pos_20;
PyObject *const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af;
PyObject *const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple;
PyObject *const_str_plain__data;
PyObject *const_str_plain_length_remaining;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_re;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_d84daf68eafc5ed9f96e65f0c9394372;
PyObject *const_str_digest_eae031afba0c67e4c763d3f2d23e316b;
PyObject *const_str_digest_60d39b746eebe83fae494903472878fd;
PyObject *const_str_plain__base_connection;
PyObject *const_tuple_str_plain__TYPE_BODY_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain__TYPE_BODY;
PyObject *const_str_plain__collections;
PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
PyObject *const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple;
PyObject *const_str_plain_HTTPSConnection;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_ConnectionError_tuple;
PyObject *const_str_plain_response;
PyObject *const_tuple_str_plain_BaseHTTPResponse_tuple;
PyObject *const_str_plain_BaseHTTPResponse;
PyObject *const_str_plain_orig_HTTPSConnection;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple;
PyObject *const_str_plain_log;
PyObject *const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple;
PyObject *const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple;
PyObject *const_dict_ee2bb2b4e4f182df0731f0b239ca9a39;
PyObject *const_dict_c3f2efe9d170e2d4600264f2e5ae3366;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_e2e958ff62375e4aab890f3684b1259f;
PyObject *const_str_digest_27a0563cfee0e83740935d0e51a1a0d6;
PyObject *const_int_pos_54;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_plain_lock_str_plain__obj_tuple;
PyObject *const_str_plain___slots__;
PyObject *const_dict_fe3d802f75571539e16e2fb2cf403ea6;
PyObject *const_str_digest_53a8deef381cd8e4ec057cec786f717c;
PyObject *const_dict_bffb516e78b31ac765febcae6d212486;
PyObject *const_str_digest_e321a928a532bd82b7e077f98e9bd875;
PyObject *const_dict_0c57385771e9ecbd1c188978899ec6f1;
PyObject *const_str_digest_017796dba33a03d5fe0ab5c7577b77ad;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_HTTP2Connection;
PyObject *const_int_pos_85;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_f0ad4ff434f44a6c7ea6f379591808c7;
PyObject *const_str_digest_e798b18eefb80a8f7c2290ef82e59c46;
PyObject *const_dict_b4e5cef57644dcb46d21bbf73e9babea;
PyObject *const_str_digest_e79cad324e95279f9f62d7e253adb41e;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84;
PyObject *const_dict_146904ef1a50b82831229f398f9f8771;
PyObject *const_str_digest_57ec9282d0cea5d1a2a98cace15f4430;
PyObject *const_dict_a7f37374c00f8c3bbbc7f1f857084e0b;
PyObject *const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495;
PyObject *const_dict_8846d4020e25f1fff18b985bbebf8382;
PyObject *const_str_digest_786d50199aa6465028fed4ed252da654;
PyObject *const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c;
PyObject *const_str_digest_528759a6025f0e766b28058360b71c38;
PyObject *const_tuple_none_none_str_plain_http_tuple;
PyObject *const_dict_26771c6b1d5157c19ce26d2c7cbb6951;
PyObject *const_str_plain_set_tunnel;
PyObject *const_str_digest_d4399bb262796912bb8d4a67a22225fe;
PyObject *const_dict_10acda1c52d42f9a090af63539784e13;
PyObject *const_str_plain_getresponse;
PyObject *const_str_digest_ad3b5bf62447b3623b376fbd2716abac;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7;
PyObject *const_dict_8ebd2091a822625cc07174f44c3aaf83;
PyObject *const_str_plain_request;
PyObject *const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8;
PyObject *const_str_digest_4706012f584220baa325ce20b455440e;
PyObject *const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple;
PyObject *const_int_pos_324;
PyObject *const_dict_0add41c386874a2866d7b64429a57c09;
PyObject *const_str_digest_d08108e016aad9450af2e1c4c62352aa;
PyObject *const_str_plain_property;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_6ac3acf0f0feded13c7467091d28e6a8;
PyObject *const_str_plain_get_redirect_location;
PyObject *const_str_digest_4a4e943f3a1eecf66078de8a5690a478;
PyObject *const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec;
PyObject *const_tuple_str_plain__data_str_plain_length_remaining_tuple;
PyObject *const_str_digest_f65a55143937fe8d1ab9f05ffe011e75;
PyObject *const_str_digest_558f026aba325f6557fe59b35edf545b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
PyObject *const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple;
PyObject *const_tuple_7d7fed68f7c2704627026b6254c07862_tuple;
PyObject *const_tuple_str_plain_self_str_plain_obj_tuple;
PyObject *const_tuple_str_plain_value_tuple;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_config_tuple;
PyObject *const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple;
PyObject *const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple;
PyObject *const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple;
PyObject *const_tuple_36b271231592f93fe298f49a8edc5931_tuple;
PyObject *const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple;
PyObject *const_tuple_cc67475e148e8868da3c41b65fd46119_tuple;
PyObject *const_tuple_85949352243862f27d77587db66f883a_tuple;
PyObject *const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple;
PyObject *const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[227];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.http2.connection"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 227) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 227 values, got %d\n",
                    UN_TRANSLATE("urllib3.http2.connection"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME", mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086", mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE", mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_search", mod_consts.const_str_plain_search);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890", mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLock", mod_consts.const_str_plain_RLock);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_RLock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lock", mod_consts.const_str_plain_lock);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__obj", mod_consts.const_str_plain__obj);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__obj);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_acquire", mod_consts.const_str_plain_acquire);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_acquire);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_release", mod_consts.const_str_plain_release);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new_h2_conn", mod_consts.const_str_plain__new_h2_conn);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__new_h2_conn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__h2_conn", mod_consts.const_str_plain__h2_conn);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__h2_conn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__h2_stream", mod_consts.const_str_plain__h2_stream);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__h2_stream);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__headers", mod_consts.const_str_plain__headers);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy", mod_consts.const_str_plain_proxy);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_config", mod_consts.const_str_plain_proxy_config);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_config);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569", mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__tunnel_host", mod_consts.const_str_plain__tunnel_host);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__tunnel_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5", mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_h2", mod_consts.const_str_plain_h2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_h2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_config", mod_consts.const_str_plain_config);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_H2Configuration", mod_consts.const_str_plain_H2Configuration);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_H2Configuration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_client_side_tuple", mod_consts.const_tuple_str_plain_client_side_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_side_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LockedObject", mod_consts.const_str_plain__LockedObject);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__LockedObject);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_H2Connection", mod_consts.const_str_plain_H2Connection);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_H2Connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_config_tuple", mod_consts.const_tuple_str_plain_config_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_initiate_connection", mod_consts.const_str_plain_initiate_connection);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_initiate_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data_to_send", mod_consts.const_str_plain_data_to_send);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_to_send);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sock", mod_consts.const_str_plain_sock);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_sock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sendall", mod_consts.const_str_plain_sendall);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_sendall);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_skip_host", mod_consts.const_str_plain_skip_host);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_skip_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728", mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_skip_accept_encoding", mod_consts.const_str_plain_skip_accept_encoding);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_skip_accept_encoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4", mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__request_url", mod_consts.const_str_plain__request_url);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__request_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_path", mod_consts.const_str_plain__validate_path);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_path);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_91", mod_consts.const_str_chr_91);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9", mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_443", mod_consts.const_int_pos_443);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_443);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple", mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7", mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c", mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a", mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_next_available_stream_id", mod_consts.const_str_plain_get_next_available_stream_id);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_next_available_stream_id);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169", mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_legal_header_name", mod_consts.const_str_plain__is_legal_header_name);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_legal_header_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb", mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_illegal_header_value", mod_consts.const_str_plain__is_illegal_header_value);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_illegal_header_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776", mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_header", mod_consts.const_str_plain_header);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionError", mod_consts.const_str_plain_ConnectionError);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple", mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_send_headers", mod_consts.const_str_plain_send_headers);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple", mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blocksize", mod_consts.const_str_plain_blocksize);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_conn", mod_consts.const_str_plain_conn);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_conn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_send_data", mod_consts.const_str_plain_send_data);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_end_stream_tuple", mod_consts.const_tuple_str_plain_end_stream_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_stream_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_end_stream", mod_consts.const_str_plain_end_stream);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_end_stream);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3", mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b", mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e", mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e", mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recv", mod_consts.const_str_plain_recv);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_recv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_65535_tuple", mod_consts.const_tuple_int_pos_65535_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_65535_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_receive_data", mod_consts.const_str_plain_receive_data);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_events", mod_consts.const_str_plain_events);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResponseReceived", mod_consts.const_str_plain_ResponseReceived);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReceived);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f", mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DataReceived", mod_consts.const_str_plain_DataReceived);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataReceived);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_acknowledge_received_data", mod_consts.const_str_plain_acknowledge_received_data);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_acknowledge_received_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flow_controlled_length", mod_consts.const_str_plain_flow_controlled_length);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_flow_controlled_length);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stream_id", mod_consts.const_str_plain_stream_id);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_id);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamEnded", mod_consts.const_str_plain_StreamEnded);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamEnded);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status", mod_consts.const_str_plain_status);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTP2Response", mod_consts.const_str_plain_HTTP2Response);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple", mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_settimeout", mod_consts.const_str_plain_settimeout);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_settimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timeout", mod_consts.const_str_plain_timeout);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putrequest", mod_consts.const_str_plain_putrequest);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_putrequest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391", mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunked", mod_consts.const_str_plain_chunked);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunked);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putheader", mod_consts.const_str_plain_putheader);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_putheader);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21", mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_default_user_agent", mod_consts.const_str_plain__get_default_user_agent);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_default_user_agent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_endheaders", mod_consts.const_str_plain_endheaders);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_endheaders);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_message_body_tuple", mod_consts.const_tuple_str_plain_message_body_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_body_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de", mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_close_connection", mod_consts.const_str_plain_close_connection);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af", mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple", mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__data", mod_consts.const_str_plain__data);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_length_remaining", mod_consts.const_str_plain_length_remaining);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_length_remaining);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372", mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b", mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd", mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base_connection", mod_consts.const_str_plain__base_connection);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_BODY_tuple", mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY", mod_consts.const_str_plain__TYPE_BODY);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__collections);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple", mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnection", mod_consts.const_str_plain_HTTPSConnection);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ConnectionError_tuple", mod_consts.const_tuple_str_plain_ConnectionError_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectionError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_HTTPSConnection", mod_consts.const_str_plain_orig_HTTPSConnection);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_HTTPSConnection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TypeVar", mod_consts.const_str_plain_TypeVar);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_T_tuple", mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T", mod_consts.const_str_plain_T);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple", mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple", mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple", mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39", mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366", mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Generic", mod_consts.const_str_plain_Generic);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f", mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6", mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_54", mod_consts.const_int_pos_54);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_54);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple", mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___slots__", mod_consts.const_str_plain___slots__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6", mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c", mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bffb516e78b31ac765febcae6d212486", mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875", mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1", mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad", mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTP2Connection", mod_consts.const_str_plain_HTTP2Connection);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_85);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7", mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46", mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea", mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e", mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84", mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_146904ef1a50b82831229f398f9f8771", mod_consts.const_dict_146904ef1a50b82831229f398f9f8771);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_146904ef1a50b82831229f398f9f8771);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430", mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b", mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495", mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382", mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654", mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c", mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38", mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_str_plain_http_tuple", mod_consts.const_tuple_none_none_str_plain_http_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_str_plain_http_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951", mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_tunnel", mod_consts.const_str_plain_set_tunnel);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_tunnel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe", mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_10acda1c52d42f9a090af63539784e13", mod_consts.const_dict_10acda1c52d42f9a090af63539784e13);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_10acda1c52d42f9a090af63539784e13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getresponse", mod_consts.const_str_plain_getresponse);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_getresponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac", mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7", mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83", mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8", mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4706012f584220baa325ce20b455440e", mod_consts.const_str_digest_4706012f584220baa325ce20b455440e);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_4706012f584220baa325ce20b455440e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple", mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_324);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0add41c386874a2866d7b64429a57c09", mod_consts.const_dict_0add41c386874a2866d7b64429a57c09);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_0add41c386874a2866d7b64429a57c09);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa", mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8", mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_redirect_location", mod_consts.const_str_plain_get_redirect_location);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_redirect_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478", mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec", mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple", mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75", mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b", mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple", mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple", mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple", mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple", mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_value_tuple", mod_consts.const_tuple_str_plain_value_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_name_tuple", mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_config_tuple", mod_consts.const_tuple_str_plain_self_str_plain_config_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_config_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple", mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple", mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple", mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple", mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple", mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple", mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple", mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple", mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple", mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple);
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
void checkModuleConstants_urllib3$http2$connection(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME", mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME) && "mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_match) && "mod_consts.const_str_plain_match");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086", mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086) && "mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE", mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE) && "mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_search", mod_consts.const_str_plain_search);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_search) && "mod_consts.const_str_plain_search");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890", mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890) && "mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading) && "mod_consts.const_str_plain_threading");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLock", mod_consts.const_str_plain_RLock);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_RLock) && "mod_consts.const_str_plain_RLock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lock", mod_consts.const_str_plain_lock);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_lock) && "mod_consts.const_str_plain_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__obj", mod_consts.const_str_plain__obj);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__obj) && "mod_consts.const_str_plain__obj");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_acquire", mod_consts.const_str_plain_acquire);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_acquire) && "mod_consts.const_str_plain_acquire");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_release", mod_consts.const_str_plain_release);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_release) && "mod_consts.const_str_plain_release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new_h2_conn", mod_consts.const_str_plain__new_h2_conn);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__new_h2_conn) && "mod_consts.const_str_plain__new_h2_conn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__h2_conn", mod_consts.const_str_plain__h2_conn);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__h2_conn) && "mod_consts.const_str_plain__h2_conn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__h2_stream", mod_consts.const_str_plain__h2_stream);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__h2_stream) && "mod_consts.const_str_plain__h2_stream");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__headers", mod_consts.const_str_plain__headers);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__headers) && "mod_consts.const_str_plain__headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy", mod_consts.const_str_plain_proxy);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy) && "mod_consts.const_str_plain_proxy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_proxy_config", mod_consts.const_str_plain_proxy_config);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_config) && "mod_consts.const_str_plain_proxy_config");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569", mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569) && "mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__tunnel_host", mod_consts.const_str_plain__tunnel_host);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__tunnel_host) && "mod_consts.const_str_plain__tunnel_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5", mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5) && "mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_h2", mod_consts.const_str_plain_h2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_h2) && "mod_consts.const_str_plain_h2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_config", mod_consts.const_str_plain_config);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_config) && "mod_consts.const_str_plain_config");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_H2Configuration", mod_consts.const_str_plain_H2Configuration);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_H2Configuration) && "mod_consts.const_str_plain_H2Configuration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_client_side_tuple", mod_consts.const_tuple_str_plain_client_side_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_side_tuple) && "mod_consts.const_tuple_str_plain_client_side_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LockedObject", mod_consts.const_str_plain__LockedObject);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__LockedObject) && "mod_consts.const_str_plain__LockedObject");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection) && "mod_consts.const_str_plain_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_H2Connection", mod_consts.const_str_plain_H2Connection);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_H2Connection) && "mod_consts.const_str_plain_H2Connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_config_tuple", mod_consts.const_tuple_str_plain_config_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_tuple) && "mod_consts.const_tuple_str_plain_config_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect) && "mod_consts.const_str_plain_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_initiate_connection", mod_consts.const_str_plain_initiate_connection);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_initiate_connection) && "mod_consts.const_str_plain_initiate_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data_to_send", mod_consts.const_str_plain_data_to_send);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_to_send) && "mod_consts.const_str_plain_data_to_send");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sock", mod_consts.const_str_plain_sock);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_sock) && "mod_consts.const_str_plain_sock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sendall", mod_consts.const_str_plain_sendall);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_sendall) && "mod_consts.const_str_plain_sendall");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_skip_host", mod_consts.const_str_plain_skip_host);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_skip_host) && "mod_consts.const_str_plain_skip_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728", mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728) && "mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_skip_accept_encoding", mod_consts.const_str_plain_skip_accept_encoding);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_skip_accept_encoding) && "mod_consts.const_str_plain_skip_accept_encoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4", mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4) && "mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__request_url", mod_consts.const_str_plain__request_url);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__request_url) && "mod_consts.const_str_plain__request_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_path", mod_consts.const_str_plain__validate_path);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_path) && "mod_consts.const_str_plain__validate_path");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_chr_58) && "mod_consts.const_str_chr_58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_host) && "mod_consts.const_str_plain_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_91", mod_consts.const_str_chr_91);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_chr_91) && "mod_consts.const_str_chr_91");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9", mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9) && "mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_port) && "mod_consts.const_str_plain_port");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_443", mod_consts.const_int_pos_443);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_443) && "mod_consts.const_int_pos_443");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple", mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple) && "mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7", mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7) && "mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c", mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c) && "mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a", mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a) && "mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_next_available_stream_id", mod_consts.const_str_plain_get_next_available_stream_id);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_next_available_stream_id) && "mod_consts.const_str_plain_get_next_available_stream_id");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169", mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169) && "mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_legal_header_name", mod_consts.const_str_plain__is_legal_header_name);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_legal_header_name) && "mod_consts.const_str_plain__is_legal_header_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb", mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb) && "mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_illegal_header_value", mod_consts.const_str_plain__is_illegal_header_value);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_illegal_header_value) && "mod_consts.const_str_plain__is_illegal_header_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776", mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776) && "mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_header", mod_consts.const_str_plain_header);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_header) && "mod_consts.const_str_plain_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionError", mod_consts.const_str_plain_ConnectionError);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError) && "mod_consts.const_str_plain_ConnectionError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple", mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple) && "mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_send_headers", mod_consts.const_str_plain_send_headers);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_headers) && "mod_consts.const_str_plain_send_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple", mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple) && "mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blocksize", mod_consts.const_str_plain_blocksize);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize) && "mod_consts.const_str_plain_blocksize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_conn", mod_consts.const_str_plain_conn);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_conn) && "mod_consts.const_str_plain_conn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_send_data", mod_consts.const_str_plain_send_data);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_data) && "mod_consts.const_str_plain_send_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_end_stream_tuple", mod_consts.const_tuple_str_plain_end_stream_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_stream_tuple) && "mod_consts.const_tuple_str_plain_end_stream_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_end_stream", mod_consts.const_str_plain_end_stream);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_end_stream) && "mod_consts.const_str_plain_end_stream");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3", mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3) && "mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b", mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b) && "mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e", mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e) && "mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e", mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e) && "mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recv", mod_consts.const_str_plain_recv);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_recv) && "mod_consts.const_str_plain_recv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_65535_tuple", mod_consts.const_tuple_int_pos_65535_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_65535_tuple) && "mod_consts.const_tuple_int_pos_65535_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_receive_data", mod_consts.const_str_plain_receive_data);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_data) && "mod_consts.const_str_plain_receive_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_events", mod_consts.const_str_plain_events);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_events) && "mod_consts.const_str_plain_events");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResponseReceived", mod_consts.const_str_plain_ResponseReceived);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReceived) && "mod_consts.const_str_plain_ResponseReceived");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict) && "mod_consts.const_str_plain_HTTPHeaderDict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers) && "mod_consts.const_str_plain_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f", mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f) && "mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DataReceived", mod_consts.const_str_plain_DataReceived);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataReceived) && "mod_consts.const_str_plain_DataReceived");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_acknowledge_received_data", mod_consts.const_str_plain_acknowledge_received_data);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_acknowledge_received_data) && "mod_consts.const_str_plain_acknowledge_received_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flow_controlled_length", mod_consts.const_str_plain_flow_controlled_length);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_flow_controlled_length) && "mod_consts.const_str_plain_flow_controlled_length");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stream_id", mod_consts.const_str_plain_stream_id);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_id) && "mod_consts.const_str_plain_stream_id");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamEnded", mod_consts.const_str_plain_StreamEnded);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamEnded) && "mod_consts.const_str_plain_StreamEnded");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status", mod_consts.const_str_plain_status);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_status) && "mod_consts.const_str_plain_status");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTP2Response", mod_consts.const_str_plain_HTTP2Response);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Response) && "mod_consts.const_str_plain_HTTP2Response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple", mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple) && "mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_settimeout", mod_consts.const_str_plain_settimeout);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_settimeout) && "mod_consts.const_str_plain_settimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timeout", mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout) && "mod_consts.const_str_plain_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putrequest", mod_consts.const_str_plain_putrequest);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_putrequest) && "mod_consts.const_str_plain_putrequest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391", mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391) && "mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunked", mod_consts.const_str_plain_chunked);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunked) && "mod_consts.const_str_plain_chunked");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putheader", mod_consts.const_str_plain_putheader);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_putheader) && "mod_consts.const_str_plain_putheader");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21", mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21) && "mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_default_user_agent", mod_consts.const_str_plain__get_default_user_agent);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_default_user_agent) && "mod_consts.const_str_plain__get_default_user_agent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_endheaders", mod_consts.const_str_plain_endheaders);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_endheaders) && "mod_consts.const_str_plain_endheaders");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_message_body_tuple", mod_consts.const_tuple_str_plain_message_body_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_body_tuple) && "mod_consts.const_tuple_str_plain_message_body_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de", mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de) && "mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_close_connection", mod_consts.const_str_plain_close_connection);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_connection) && "mod_consts.const_str_plain_close_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af", mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af) && "mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple", mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple) && "mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__data", mod_consts.const_str_plain__data);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__data) && "mod_consts.const_str_plain__data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_length_remaining", mod_consts.const_str_plain_length_remaining);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_length_remaining) && "mod_consts.const_str_plain_length_remaining");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372", mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372) && "mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b", mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b) && "mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd", mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd) && "mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base_connection", mod_consts.const_str_plain__base_connection);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_connection) && "mod_consts.const_str_plain__base_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_BODY_tuple", mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_BODY_tuple) && "mod_consts.const_tuple_str_plain__TYPE_BODY_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY", mod_consts.const_str_plain__TYPE_BODY);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY) && "mod_consts.const_str_plain__TYPE_BODY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__collections) && "mod_consts.const_str_plain__collections");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple) && "mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple", mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple) && "mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnection", mod_consts.const_str_plain_HTTPSConnection);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnection) && "mod_consts.const_str_plain_HTTPSConnection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ConnectionError_tuple", mod_consts.const_tuple_str_plain_ConnectionError_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectionError_tuple) && "mod_consts.const_tuple_str_plain_ConnectionError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_response) && "mod_consts.const_str_plain_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple) && "mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse) && "mod_consts.const_str_plain_BaseHTTPResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_HTTPSConnection", mod_consts.const_str_plain_orig_HTTPSConnection);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_HTTPSConnection) && "mod_consts.const_str_plain_orig_HTTPSConnection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TypeVar", mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar) && "mod_consts.const_str_plain_TypeVar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_T_tuple", mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple) && "mod_consts.const_tuple_str_plain_T_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T", mod_consts.const_str_plain_T);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_T) && "mod_consts.const_str_plain_T");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple", mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple) && "mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_log) && "mod_consts.const_str_plain_log");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple", mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple) && "mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple", mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple) && "mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39", mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39) && "mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366", mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366) && "mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Generic", mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic) && "mod_consts.const_str_plain_Generic");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f", mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f) && "mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6", mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6) && "mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_54", mod_consts.const_int_pos_54);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_54) && "mod_consts.const_int_pos_54");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple", mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple) && "mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___slots__", mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__) && "mod_consts.const_str_plain___slots__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6", mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6) && "mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c", mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c) && "mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bffb516e78b31ac765febcae6d212486", mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_bffb516e78b31ac765febcae6d212486) && "mod_consts.const_dict_bffb516e78b31ac765febcae6d212486");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875", mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875) && "mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1", mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1) && "mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad", mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad) && "mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTP2Connection", mod_consts.const_str_plain_HTTP2Connection);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Connection) && "mod_consts.const_str_plain_HTTP2Connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_85) && "mod_consts.const_int_pos_85");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7", mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7) && "mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46", mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46) && "mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea", mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea) && "mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e", mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e) && "mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84", mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84) && "mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_146904ef1a50b82831229f398f9f8771", mod_consts.const_dict_146904ef1a50b82831229f398f9f8771);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_146904ef1a50b82831229f398f9f8771) && "mod_consts.const_dict_146904ef1a50b82831229f398f9f8771");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430", mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430) && "mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b", mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b) && "mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495", mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495) && "mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382", mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382) && "mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654", mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654) && "mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c", mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c) && "mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38", mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38) && "mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_str_plain_http_tuple", mod_consts.const_tuple_none_none_str_plain_http_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_str_plain_http_tuple) && "mod_consts.const_tuple_none_none_str_plain_http_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951", mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951) && "mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_tunnel", mod_consts.const_str_plain_set_tunnel);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_tunnel) && "mod_consts.const_str_plain_set_tunnel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe", mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe) && "mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_10acda1c52d42f9a090af63539784e13", mod_consts.const_dict_10acda1c52d42f9a090af63539784e13);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_10acda1c52d42f9a090af63539784e13) && "mod_consts.const_dict_10acda1c52d42f9a090af63539784e13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getresponse", mod_consts.const_str_plain_getresponse);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_getresponse) && "mod_consts.const_str_plain_getresponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac", mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac) && "mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7", mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7) && "mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83", mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83) && "mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8", mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8) && "mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4706012f584220baa325ce20b455440e", mod_consts.const_str_digest_4706012f584220baa325ce20b455440e);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_4706012f584220baa325ce20b455440e) && "mod_consts.const_str_digest_4706012f584220baa325ce20b455440e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple", mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple) && "mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_324) && "mod_consts.const_int_pos_324");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0add41c386874a2866d7b64429a57c09", mod_consts.const_dict_0add41c386874a2866d7b64429a57c09);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_0add41c386874a2866d7b64429a57c09) && "mod_consts.const_dict_0add41c386874a2866d7b64429a57c09");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa", mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa) && "mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_property) && "mod_consts.const_str_plain_property");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053) && "mod_consts.const_dict_2366cb3246e451cebe4ed21878030053");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8", mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8) && "mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_redirect_location", mod_consts.const_str_plain_get_redirect_location);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_redirect_location) && "mod_consts.const_str_plain_get_redirect_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478", mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478) && "mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec", mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec) && "mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple", mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple) && "mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75", mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75) && "mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b", mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b) && "mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple", mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple) && "mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple", mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple) && "mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple", mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple) && "mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple", mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_value_tuple", mod_consts.const_tuple_str_plain_value_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_value_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_name_tuple", mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple) && "mod_consts.const_tuple_str_plain_name_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_config_tuple", mod_consts.const_tuple_str_plain_self_str_plain_config_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_config_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_config_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple", mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple) && "mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple", mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple) && "mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple", mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple) && "mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple", mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple) && "mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple", mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple) && "mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple", mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple) && "mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple", mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple) && "mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple", mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple) && "mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple", mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple) && "mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_urllib3$http2$connection$BaseHTTPResponse(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseHTTPResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseHTTPResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseHTTPResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseHTTPResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$ConnectionError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$HTTP2Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTP2Response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTP2Response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTP2Response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTP2Response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Response);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$HTTPHeaderDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$HTTPSConnection(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPSConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPSConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPSConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPSConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnection);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$RE_IS_ILLEGAL_HEADER_VALUE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$RE_IS_LEGAL_HEADER_NAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$T(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$_LockedObject(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__LockedObject);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LockedObject);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LockedObject, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LockedObject);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LockedObject, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__LockedObject);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__LockedObject);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LockedObject);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$_get_default_user_agent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_user_agent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_default_user_agent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_default_user_agent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_default_user_agent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_default_user_agent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_user_agent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_user_agent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_user_agent);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$_is_illegal_header_value(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_illegal_header_value);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_illegal_header_value);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_illegal_header_value, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_illegal_header_value);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_illegal_header_value, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_illegal_header_value);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_illegal_header_value);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_illegal_header_value);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$_is_legal_header_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_legal_header_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_legal_header_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_legal_header_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_legal_header_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_legal_header_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_legal_header_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_legal_header_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_legal_header_name);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$h2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_h2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_h2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_h2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_h2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_h2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_h2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_h2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_h2);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$connection$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_23ef9b3d408e95ac9a02a90247b9bc24;
static PyCodeObject *code_objects_0ab9858b10e6df51fe0a4648f0184d91;
static PyCodeObject *code_objects_bed8a066d180d596de8bb09cdea4cec1;
static PyCodeObject *code_objects_042c2f5aaa3c3d73f71055847581cabe;
static PyCodeObject *code_objects_c5e78ca646b91fa69c4234db68ab7233;
static PyCodeObject *code_objects_a69b0d8f3930fa12f453ffcdba8cd1a1;
static PyCodeObject *code_objects_bb7ece53177a5b8f306800887bf1381c;
static PyCodeObject *code_objects_7546ad7829339c2aaa36bd64acf57e4e;
static PyCodeObject *code_objects_ca06c6ef9a03fa22f004df3a0a0ca548;
static PyCodeObject *code_objects_c52f708b5d4ab59d43b98104ee7b6800;
static PyCodeObject *code_objects_9733b6e8c36889051b5ce72ff35ad522;
static PyCodeObject *code_objects_ee73520ec429f27a0626d75bc1b68916;
static PyCodeObject *code_objects_08a4c71e97949a97c9ee50977ea8bef7;
static PyCodeObject *code_objects_e86a15ffba4239c925c817f6f85358e7;
static PyCodeObject *code_objects_b6c315f412fe426844f998ff87bbec02;
static PyCodeObject *code_objects_0b5f6e2cc79d88eabfd9cb5ea2015cd1;
static PyCodeObject *code_objects_fadd824b4b989a30eb740b239aebc729;
static PyCodeObject *code_objects_7d740ed907932ac5fd9c1a012a107542;
static PyCodeObject *code_objects_9815747cef2b82c681800cf1137b1a36;
static PyCodeObject *code_objects_237dc936a3febafbd476a35ce5d5bcf8;
static PyCodeObject *code_objects_9bc67e29101d288404169379e8edb983;
static PyCodeObject *code_objects_dc6b61bc32c5596f2ff66d2c3c33e326;
static PyCodeObject *code_objects_d0051067926fa52b43009697e0690e7b;
static PyCodeObject *code_objects_3f1543955f09d9f50721a86e49046159;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f65a55143937fe8d1ab9f05ffe011e75); CHECK_OBJECT(module_filename_obj);
code_objects_23ef9b3d408e95ac9a02a90247b9bc24 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b, mod_consts.const_str_digest_558f026aba325f6557fe59b35edf545b, NULL, NULL, 0, 0, 0);
code_objects_0ab9858b10e6df51fe0a4648f0184d91 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTP2Connection, mod_consts.const_str_plain_HTTP2Connection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bed8a066d180d596de8bb09cdea4cec1 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTP2Response, mod_consts.const_str_plain_HTTP2Response, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_042c2f5aaa3c3d73f71055847581cabe = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__LockedObject, mod_consts.const_str_plain__LockedObject, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c5e78ca646b91fa69c4234db68ab7233 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a69b0d8f3930fa12f453ffcdba8cd1a1 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, NULL, 4, 0, 0);
code_objects_bb7ece53177a5b8f306800887bf1381c = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46, mod_consts.const_tuple_440efe807b67b12d1a5c5d45c67308d5_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_7546ad7829339c2aaa36bd64acf57e4e = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa, mod_consts.const_tuple_7d7fed68f7c2704627026b6254c07862_tuple, mod_consts.const_tuple_str_plain___class___tuple, 6, 0, 0);
code_objects_ca06c6ef9a03fa22f004df3a0a0ca548 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c, mod_consts.const_tuple_str_plain_self_str_plain_obj_tuple, NULL, 2, 0, 0);
code_objects_c52f708b5d4ab59d43b98104ee7b6800 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_illegal_header_value, mod_consts.const_str_plain__is_illegal_header_value, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_9733b6e8c36889051b5ce72ff35ad522 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_legal_header_name, mod_consts.const_str_plain__is_legal_header_name, mod_consts.const_tuple_str_plain_name_tuple, NULL, 1, 0, 0);
code_objects_ee73520ec429f27a0626d75bc1b68916 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__new_h2_conn, mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e, mod_consts.const_tuple_str_plain_self_str_plain_config_tuple, NULL, 1, 0, 0);
code_objects_08a4c71e97949a97c9ee50977ea8bef7 = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_4706012f584220baa325ce20b455440e, mod_consts.const_tuple_6f982a9ecd4d3347803f02392cfd873c_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_e86a15ffba4239c925c817f6f85358e7 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b6c315f412fe426844f998ff87bbec02 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connect, mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84, mod_consts.const_tuple_c7d50fdf8b683d78acac19488ce1f1f0_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_0b5f6e2cc79d88eabfd9cb5ea2015cd1 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_data, mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fadd824b4b989a30eb740b239aebc729 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_endheaders, mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654, mod_consts.const_tuple_4aa95b070b763e8f412eb0fef45230f2_tuple, NULL, 2, 0, 0);
code_objects_7d740ed907932ac5fd9c1a012a107542 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_redirect_location, mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9815747cef2b82c681800cf1137b1a36 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getresponse, mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac, mod_consts.const_tuple_36b271231592f93fe298f49a8edc5931_tuple, NULL, 1, 0, 0);
code_objects_237dc936a3febafbd476a35ce5d5bcf8 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_putheader, mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495, mod_consts.const_tuple_ac98f8319141708b746414ee3dee7e0c_tuple, NULL, 2, 0, 0);
code_objects_9bc67e29101d288404169379e8edb983 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_putrequest, mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430, mod_consts.const_tuple_cc67475e148e8868da3c41b65fd46119_tuple, NULL, 3, 0, 0);
code_objects_dc6b61bc32c5596f2ff66d2c3c33e326 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8, mod_consts.const_tuple_85949352243862f27d77587db66f883a_tuple, NULL, 5, 3, 0);
code_objects_d0051067926fa52b43009697e0690e7b = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_send, mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38, mod_consts.const_tuple_13ec056e1fcdd4c8c591fd4ee145c2c6_tuple, NULL, 2, 0, 0);
code_objects_3f1543955f09d9f50721a86e49046159 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_tunnel, mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe, mod_consts.const_tuple_3bda0db776f3e7dc521dc981f327aa77_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__10_putheader(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__11_endheaders(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__12_send(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__13_set_tunnel(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__14_getresponse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__15_request(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__16_close(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__17___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__18_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__19_get_redirect_location(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__1__is_legal_header_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__20_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__2__is_illegal_header_value(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__4___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__5___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__7__new_h2_conn(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__8_connect(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__9_putrequest(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$http2$connection$$$function__1__is_legal_header_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name = MAKE_FUNCTION_FRAME(tstate, code_objects_9733b6e8c36889051b5ce72ff35ad522, module_urllib3$http2$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name = cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_urllib3$http2$connection$RE_IS_LEGAL_HEADER_NAME(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name->m_frame.f_lineno = 41;
tmp_value_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name,
    type_description_1,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name == cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name);
    cache_frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__1__is_legal_header_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__2__is_illegal_header_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value = MAKE_FUNCTION_FRAME(tstate, code_objects_c52f708b5d4ab59d43b98104ee7b6800, module_urllib3$http2$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value = cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_urllib3$http2$connection$RE_IS_ILLEGAL_HEADER_VALUE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value->m_frame.f_lineno = 51;
tmp_value_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_search, tmp_args_element_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value == cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value);
    cache_frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__2__is_illegal_header_value);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_obj = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ca06c6ef9a03fa22f004df3a0a0ca548, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__3___init__->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__3___init__ = cache_frame_frame_urllib3$http2$connection$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__3___init__);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_1 = module_var_accessor_urllib3$http2$connection$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__3___init__->m_frame.f_lineno = 69;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_RLock);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_lock, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_obj);
tmp_ass_attr_value_2 = par_obj;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__obj, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__3___init__,
    type_description_1,
    par_self,
    par_obj
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__3___init__ == cache_frame_frame_urllib3$http2$connection$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__3___init__);
    cache_frame_frame_urllib3$http2$connection$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__3___init__);

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
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__4___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__4___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__4___enter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__4___enter__)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__4___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__4___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__4___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c5e78ca646b91fa69c4234db68ab7233, module_urllib3$http2$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__4___enter__->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__4___enter__ = cache_frame_frame_urllib3$http2$connection$$$function__4___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__4___enter__);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__4___enter__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lock);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__4___enter__->m_frame.f_lineno = 73;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_acquire);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__obj);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__4___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__4___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__4___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__4___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__4___enter__ == cache_frame_frame_urllib3$http2$connection$$$function__4___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__4___enter__);
    cache_frame_frame_urllib3$http2$connection$$$function__4___enter__ = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__4___enter__);

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


static PyObject *impl_urllib3$http2$connection$$$function__5___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_val = python_pars[2];
PyObject *par_exc_tb = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__5___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__5___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__5___exit__)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__5___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__5___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__5___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a69b0d8f3930fa12f453ffcdba8cd1a1, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__5___exit__->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__5___exit__ = cache_frame_frame_urllib3$http2$connection$$$function__5___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__5___exit__);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__5___exit__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lock);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__5___exit__->m_frame.f_lineno = 82;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_release);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__5___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__5___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__5___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__5___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_val,
    par_exc_tb
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__5___exit__ == cache_frame_frame_urllib3$http2$connection$$$function__5___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__5___exit__);
    cache_frame_frame_urllib3$http2$connection$$$function__5___exit__ = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__5___exit__);

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


static PyObject *impl_urllib3$http2$connection$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *par_port = python_pars[2];
PyObject *par_kwargs = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bb7ece53177a5b8f306800887bf1381c, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__6___init__->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__6___init__ = cache_frame_frame_urllib3$http2$connection$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__6___init__);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_urllib3$http2$connection$$$function__6___init__->m_frame.f_lineno = 89;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__new_h2_conn);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__h2_conn, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__h2_stream, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__headers, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_2;
PyObject *tmp_dict_arg_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_proxy;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_key_value_2 = mod_consts.const_str_plain_proxy_config;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_2 = par_kwargs;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
assert(!(tmp_res == -1));
tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_209e33f6332c76cf7e724642f7706569;
frame_frame_urllib3$http2$connection$$$function__6___init__->m_frame.f_lineno = 94;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 94;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_urllib3$http2$connection, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_tuple_element_1 = par_host;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_port);
tmp_tuple_element_1 = par_port;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__tunnel_host);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_7b862fff89a2234e0ee774e89273fde5;
frame_frame_urllib3$http2$connection$$$function__6___init__->m_frame.f_lineno = 99;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooc";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__6___init__,
    type_description_1,
    par_self,
    par_host,
    par_port,
    par_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__6___init__ == cache_frame_frame_urllib3$http2$connection$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__6___init__);
    cache_frame_frame_urllib3$http2$connection$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__6___init__);

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
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__7__new_h2_conn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_config = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn = MAKE_FUNCTION_FRAME(tstate, code_objects_ee73520ec429f27a0626d75bc1b68916, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn = cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_urllib3$http2$connection$h2(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h2);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_config);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_H2Configuration);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn->m_frame.f_lineno = 102;
tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_client_side_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_config;
    var_config = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_2 = module_var_accessor_urllib3$http2$connection$_LockedObject(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LockedObject);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_urllib3$http2$connection$h2(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h2);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_connection);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_H2Connection);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_config);
tmp_kw_call_value_0_1 = var_config;
frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn->m_frame.f_lineno = 103;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_config_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn->m_frame.f_lineno = 103;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn,
    type_description_1,
    par_self,
    var_config
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn == cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn);
    cache_frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__7__new_h2_conn);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_config);
CHECK_OBJECT(var_config);
Py_DECREF(var_config);
var_config = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_config);
var_config = NULL;
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


static PyObject *impl_urllib3$http2$connection$$$function__8_connect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_conn = NULL;
PyObject *var_data_to_send = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__8_connect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__8_connect = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__8_connect)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__8_connect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__8_connect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__8_connect = MAKE_FUNCTION_FRAME(tstate, code_objects_b6c315f412fe426844f998ff87bbec02, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__8_connect->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__8_connect = cache_frame_frame_urllib3$http2$connection$$$function__8_connect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__8_connect);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__8_connect) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_urllib3$http2$connection, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 106;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_connect);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__h2_conn);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
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
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 107;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_5;
    Py_INCREF(var_conn);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_conn);
tmp_called_instance_2 = var_conn;
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 108;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_initiate_connection);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_conn);
tmp_called_instance_3 = var_conn;
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 109;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooc";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_7 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_data_to_send;
    var_data_to_send = tmp_assign_source_7;
    Py_INCREF(var_data_to_send);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 109;
type_description_1 = "oooc";
    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sock);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooc";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_1 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 110;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_sendall, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__8_connect, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__8_connect, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
    goto try_except_handler_6;
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
    exception_lineno = 107;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooc";
goto try_except_handler_6;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 107;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooc";
goto try_except_handler_6;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 107;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 107;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame.f_lineno = 107;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__8_connect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__8_connect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__8_connect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__8_connect,
    type_description_1,
    par_self,
    var_conn,
    var_data_to_send,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__8_connect == cache_frame_frame_urllib3$http2$connection$$$function__8_connect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__8_connect);
    cache_frame_frame_urllib3$http2$connection$$$function__8_connect = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__8_connect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
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


static PyObject *impl_urllib3$http2$connection$$$function__9_putrequest(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *var_authority = NULL;
PyObject *var_conn = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__9_putrequest;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest = MAKE_FUNCTION_FRAME(tstate, code_objects_9bc67e29101d288404169379e8edb983, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__9_putrequest = cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__9_putrequest);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__9_putrequest) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
tmp_key_value_1 = mod_consts.const_str_plain_skip_host;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0ca29aeb02ab16c788471bd3d050b728;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 123;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_2;
PyObject *tmp_dict_arg_value_2;
tmp_key_value_2 = mod_consts.const_str_plain_skip_accept_encoding;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_2 = par_kwargs;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_53a4f33dfd735f355703c5618e5795e4;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 125;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 125;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_ass_attr_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_url);
tmp_or_left_value_1 = par_url;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = const_str_slash;
tmp_ass_attr_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_ass_attr_value_1 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__request_url, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 128;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__validate_path, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_chr_58;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_host);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_91;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_host);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_d687f9515f56bcb616b9b6f8148b9cf9;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_port);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 131;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = mod_consts.const_int_pos_443;
Py_INCREF(tmp_or_right_value_2);
tmp_format_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_format_value_2 = tmp_or_left_value_2;
or_end_2:;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
    PyObject *old = var_authority;
    var_authority = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_3;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_host);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_port);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 133;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = mod_consts.const_int_pos_443;
Py_INCREF(tmp_or_right_value_3);
tmp_format_value_4 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_format_value_4 = tmp_or_left_value_3;
or_end_3:;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_authority;
    var_authority = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__headers);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 135;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_tuple_298c6995f670895d259f236000ae4960_tuple_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__headers);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_bytes_digest_3d3e6fb17d391831913c3230cb4179b7;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_method);
tmp_expression_value_10 = par_method;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_encode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 136;
tmp_tuple_element_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 136;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__headers);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_bytes_digest_7f56adb060216e99431851fcc5788e4c;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_authority);
tmp_expression_value_13 = var_authority;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_encode);
assert(!(tmp_called_value_5 == NULL));
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 137;
tmp_tuple_element_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 137;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__headers);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = mod_consts.const_bytes_digest_c370a85f0bb1bba8de5d6b2683ebfb5a;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(par_url);
tmp_expression_value_16 = par_url;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_encode);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto tuple_build_exception_5;
}
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 138;
tmp_tuple_element_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 138;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__h2_conn);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_18 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_18, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_19 = tmp_with_1__source;
tmp_called_value_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_19, const_str_plain___enter__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 140;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_7 = tmp_with_1__enter;
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_7;
    Py_INCREF(var_conn);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(var_conn);
tmp_called_instance_2 = var_conn;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 141;
tmp_ass_attr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_next_available_stream_id);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__h2_stream, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__9_putrequest, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__9_putrequest, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 140;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_end_4:;
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
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 140;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_11 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame.f_lineno = 140;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_7:;
goto try_end_4;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__9_putrequest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__9_putrequest->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__9_putrequest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__9_putrequest,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_kwargs,
    var_authority,
    var_conn
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__9_putrequest == cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest);
    cache_frame_frame_urllib3$http2$connection$$$function__9_putrequest = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__9_putrequest);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_authority);
CHECK_OBJECT(var_authority);
Py_DECREF(var_authority);
var_authority = NULL;
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_authority);
var_authority = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__10_putheader(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_header = python_pars[1];
PyObject *par_values = python_pars[2];
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__10_putheader;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__10_putheader = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__10_putheader)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__10_putheader);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__10_putheader == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__10_putheader = MAKE_FUNCTION_FRAME(tstate, code_objects_237dc936a3febafbd476a35ce5d5bcf8, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__10_putheader->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__10_putheader = cache_frame_frame_urllib3$http2$connection$$$function__10_putheader;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__10_putheader);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__10_putheader) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_header);
tmp_isinstance_inst_1 = par_header;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_header);
tmp_expression_value_1 = par_header;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 145;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_header);
tmp_assign_source_1 = par_header;
Py_INCREF(tmp_assign_source_1);
condexpr_end_1:;
{
    PyObject *old = par_header;
    assert(old != NULL);
    par_header = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_header);
tmp_expression_value_2 = par_header;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 146;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_header;
    assert(old != NULL);
    par_header = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_urllib3$http2$connection$_is_legal_header_name(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_legal_header_name);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_header);
tmp_args_element_value_1 = par_header;
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 147;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_11708c38de86c8aeee492f824073aecb;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_header);
tmp_unicode_arg_1 = par_header;
tmp_format_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
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
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 148;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_values);
tmp_iter_arg_1 = par_values;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
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
type_description_1 = "oooo";
exception_lineno = 150;
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
    PyObject *old = var_value;
    var_value = tmp_assign_source_5;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_value);
tmp_isinstance_inst_2 = var_value;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_value);
tmp_expression_value_3 = var_value;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 151;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_value);
tmp_assign_source_6 = var_value;
Py_INCREF(tmp_assign_source_6);
condexpr_end_2:;
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_value_5 = module_var_accessor_urllib3$http2$connection$_is_illegal_header_value(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_illegal_header_value);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_2 = var_value;
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 152;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 152;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_bc458b7ce067b786cebc25ae29bef776;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_unicode_arg_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_value);
tmp_unicode_arg_2 = var_value;
tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 153;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 153;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto try_except_handler_2;
}
branch_no_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__headers);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_header == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_tuple_element_3 = par_header;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_value);
tmp_tuple_element_3 = var_value;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_3);
frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame.f_lineno = 154;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__10_putheader, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__10_putheader->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__10_putheader, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__10_putheader,
    type_description_1,
    par_self,
    par_header,
    par_values,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__10_putheader == cache_frame_frame_urllib3$http2$connection$$$function__10_putheader) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__10_putheader);
    cache_frame_frame_urllib3$http2$connection$$$function__10_putheader = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__10_putheader);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_header);
par_header = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_header);
par_header = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_values);
Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__11_endheaders(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message_body = python_pars[1];
PyObject *var_conn = NULL;
PyObject *var_data_to_send = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__11_endheaders;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders = MAKE_FUNCTION_FRAME(tstate, code_objects_fadd824b4b989a30eb740b239aebc729, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__11_endheaders = cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__11_endheaders);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__11_endheaders) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__h2_stream);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$http2$connection$ConnectionError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 158;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__h2_conn);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
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


exception_lineno = 160;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 160;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_5;
    Py_INCREF(var_conn);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_conn);
tmp_expression_value_5 = var_conn;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_send_headers);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__h2_stream);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 162;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__headers);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 163;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_message_body);
tmp_cmp_expr_left_2 = par_message_body;
tmp_cmp_expr_right_2 = Py_None;
tmp_kw_call_value_2_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 161;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_stream_id_str_plain_headers_str_plain_end_stream_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_conn);
tmp_called_instance_1 = var_conn;
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 166;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_7 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_data_to_send;
    var_data_to_send = tmp_assign_source_7;
    Py_INCREF(var_data_to_send);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 166;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_sock);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_1 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 167;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sendall, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__11_endheaders, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__11_endheaders, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_4;
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
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto try_except_handler_6;
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
    exception_lineno = 160;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_6;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 160;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_6;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 160;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 160;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame.f_lineno = 160;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__headers, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__11_endheaders, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__11_endheaders->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__11_endheaders, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__11_endheaders,
    type_description_1,
    par_self,
    par_message_body,
    var_conn,
    var_data_to_send
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__11_endheaders == cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders);
    cache_frame_frame_urllib3$http2$connection$$$function__11_endheaders = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__11_endheaders);

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
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
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
CHECK_OBJECT(par_message_body);
Py_DECREF(par_message_body);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message_body);
Py_DECREF(par_message_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__12_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_conn = NULL;
PyObject *var_data_to_send = NULL;
PyObject *var_chunk = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_assignment_expr_2__value = NULL;
PyObject *tmp_assignment_expr_3__value = NULL;
PyObject *tmp_assignment_expr_4__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__12_send;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__12_send = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__12_send)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__12_send);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__12_send == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__12_send = MAKE_FUNCTION_FRAME(tstate, code_objects_d0051067926fa52b43009697e0690e7b, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__12_send->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__12_send = cache_frame_frame_urllib3$http2$connection$$$function__12_send;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__12_send);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__12_send) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__h2_stream);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$http2$connection$ConnectionError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 176;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_875f9a6f6e3d5a72727577886e503dd3_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__h2_conn);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
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


exception_lineno = 178;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 178;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_5;
    Py_INCREF(var_conn);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_conn);
tmp_called_instance_1 = var_conn;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 179;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_7 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_data_to_send;
    var_data_to_send = tmp_assign_source_7;
    Py_INCREF(var_data_to_send);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 179;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_sock);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_1 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 180;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sendall, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_data);
tmp_expression_value_6 = par_data;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, const_str_plain_read);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
loop_start_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
if (par_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_7 = par_data;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_read);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_8 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_blocksize);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 184;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 184;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_chunk);
tmp_operand_value_1 = var_chunk;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_1;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_chunk);
tmp_isinstance_inst_1 = var_chunk;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_chunk);
tmp_expression_value_9 = var_chunk;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 188;
tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_chunk;
    assert(old != NULL);
    var_chunk = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_arg_value_1_1;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_10 = var_conn;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_send_data);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_11 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__h2_stream);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 189;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_chunk);
tmp_kw_call_arg_value_1_1 = var_chunk;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 189;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_5,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_end_stream_tuple
    );
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_3;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}

tmp_called_instance_3 = var_conn;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 190;
tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_assignment_expr_2__value;
    tmp_assignment_expr_2__value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_assign_source_11 = tmp_assignment_expr_2__value;
{
    PyObject *old = var_data_to_send;
    var_data_to_send = tmp_assign_source_11;
    Py_INCREF(var_data_to_send);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_outline_return_value_2 = tmp_assignment_expr_2__value;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_assignment_expr_2__value);
CHECK_OBJECT(tmp_assignment_expr_2__value);
Py_DECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 190;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_12 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_sock);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_3 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 191;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_sendall, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_14;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_13 = var_conn;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_end_stream);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_14 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__h2_stream);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 192;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_2 = par_data;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_data);
tmp_expression_value_15 = par_data;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_encode);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 196;
tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_data;
    assert(old != NULL);
    par_data = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_7:;
// Tried code:
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_3 = par_data;
tmp_isinstance_cls_3 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto try_except_handler_7;
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
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_1_2;
CHECK_OBJECT(var_conn);
tmp_expression_value_16 = var_conn;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_send_data);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__h2_stream);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 200;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_1_2 = par_data;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 200;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_8,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_end_stream_tuple
    );
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_outline_return_value_3;
int tmp_truth_name_3;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_conn);
tmp_called_instance_5 = var_conn;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 201;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_assignment_expr_3__value;
    tmp_assignment_expr_3__value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_assignment_expr_3__value);
tmp_assign_source_14 = tmp_assignment_expr_3__value;
{
    PyObject *old = var_data_to_send;
    assert(old != NULL);
    var_data_to_send = tmp_assign_source_14;
    Py_INCREF(var_data_to_send);
    Py_DECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_3__value);
tmp_outline_return_value_3 = tmp_assignment_expr_3__value;
Py_INCREF(tmp_outline_return_value_3);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_assignment_expr_3__value);
CHECK_OBJECT(tmp_assignment_expr_3__value);
Py_DECREF(tmp_assignment_expr_3__value);
tmp_assignment_expr_3__value = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_3);

exception_lineno = 201;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_sock);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_5 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 202;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_sendall, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_data);
tmp_iter_arg_1 = par_data;
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 204;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_17 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_17;
    Py_INCREF(var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_7;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_arg_value_1_3;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}

tmp_expression_value_19 = var_conn;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_send_data);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}

tmp_expression_value_20 = par_self;
tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__h2_stream);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_chunk);
tmp_kw_call_arg_value_1_3 = var_chunk;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 205;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_9,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_end_stream_tuple
    );
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_outline_return_value_4;
int tmp_truth_name_4;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_7;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}

tmp_called_instance_7 = var_conn;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 206;
tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_assignment_expr_4__value;
    tmp_assignment_expr_4__value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_assignment_expr_4__value);
tmp_assign_source_19 = tmp_assignment_expr_4__value;
{
    PyObject *old = var_data_to_send;
    var_data_to_send = tmp_assign_source_19;
    Py_INCREF(var_data_to_send);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_4__value);
tmp_outline_return_value_4 = tmp_assignment_expr_4__value;
Py_INCREF(tmp_outline_return_value_4);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_assignment_expr_4__value);
CHECK_OBJECT(tmp_assignment_expr_4__value);
Py_DECREF(tmp_assignment_expr_4__value);
tmp_assignment_expr_4__value = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_4__value);
tmp_assignment_expr_4__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_4);

exception_lineno = 206;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_instance_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}

tmp_expression_value_21 = par_self;
tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_sock);
if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_6 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 207;
tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_sendall, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooo";
    goto try_except_handler_9;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_7;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_23;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}

tmp_expression_value_22 = var_conn;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_end_stream);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}

tmp_expression_value_23 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__h2_stream);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 208;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 208;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_end_8:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__12_send, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__12_send, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_type_arg_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_1d2c3c4d97d2de7948bb74022653f1d3;
CHECK_OBJECT(par_data);
tmp_type_arg_1 = par_data;
tmp_mod_expr_right_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_mod_expr_right_1 == NULL));
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooo";
    goto try_except_handler_11;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 210;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 210;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_11;
}
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 198;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__12_send->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_11;
branch_end_11:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_4;
// End of try:
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__12_send, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__12_send, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_20;
}
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_11 = tmp_with_1__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto try_except_handler_12;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto try_except_handler_12;
}
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 178;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__12_send->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_12;
branch_no_13:;
goto branch_end_12;
branch_no_12:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 178;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__12_send->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_12;
branch_end_12:;
goto try_end_4;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_3;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_10;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_12 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 178;
tmp_call_result_10 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_14;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_14 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_11;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_13 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 178;
tmp_call_result_11 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_10);

exception_lineno = 178;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_14:;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_2;
// End of try:
try_end_5:;
{
bool tmp_condition_result_15;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_15 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_12;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_14 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__12_send->m_frame.f_lineno = 178;
tmp_call_result_12 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
branch_no_15:;
goto try_end_6;
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
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__12_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__12_send->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__12_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__12_send,
    type_description_1,
    par_self,
    par_data,
    var_conn,
    var_data_to_send,
    var_chunk
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__12_send == cache_frame_frame_urllib3$http2$connection$$$function__12_send) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__12_send);
    cache_frame_frame_urllib3$http2$connection$$$function__12_send = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__12_send);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

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


static PyObject *impl_urllib3$http2$connection$$$function__13_set_tunnel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *par_port = python_pars[2];
PyObject *par_headers = python_pars[3];
PyObject *par_scheme = python_pars[4];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__13_set_tunnel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel = MAKE_FUNCTION_FRAME(tstate, code_objects_3f1543955f09d9f50721a86e49046159, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__13_set_tunnel = cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__13_set_tunnel);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__13_set_tunnel) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_86ee5b86810afd5f59f2e14ef32e289e;
frame_frame_urllib3$http2$connection$$$function__13_set_tunnel->m_frame.f_lineno = 222;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__13_set_tunnel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__13_set_tunnel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__13_set_tunnel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__13_set_tunnel,
    type_description_1,
    par_self,
    par_host,
    par_port,
    par_headers,
    par_scheme
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__13_set_tunnel == cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel);
    cache_frame_frame_urllib3$http2$connection$$$function__13_set_tunnel = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__13_set_tunnel);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_urllib3$http2$connection$$$function__14_getresponse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_status = NULL;
PyObject *var_data = NULL;
PyObject *var_conn = NULL;
PyObject *var_end_stream = NULL;
PyObject *var_received_data = NULL;
PyObject *var_events = NULL;
PyObject *var_event = NULL;
PyObject *var_headers = NULL;
PyObject *var_header = NULL;
PyObject *var_value = NULL;
PyObject *var_data_to_send = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_assignment_expr_2__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__14_getresponse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_status;
    var_status = tmp_assign_source_1;
    Py_INCREF(var_status);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = BYTEARRAY_COPY(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse = MAKE_FUNCTION_FRAME(tstate, code_objects_9815747cef2b82c681800cf1137b1a36, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__14_getresponse = cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__14_getresponse);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__14_getresponse) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__h2_conn);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 231;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_7 = tmp_with_1__enter;
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_7;
    Py_INCREF(var_conn);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
{
    PyObject *old = var_end_stream;
    var_end_stream = tmp_assign_source_8;
    Py_INCREF(var_end_stream);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
if (var_end_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_end_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_operand_value_2 = var_end_stream;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sock);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 235;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_recv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_65535_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_10 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_received_data;
    var_received_data = tmp_assign_source_10;
    Py_INCREF(var_received_data);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 235;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_2 = var_conn;
CHECK_OBJECT(var_received_data);
tmp_args_element_value_1 = var_received_data;
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 236;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_receive_data, tmp_args_element_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_events;
    var_events = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_events);
tmp_iter_arg_1 = var_events;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 237;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_14 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_event;
    var_event = tmp_assign_source_14;
    Py_INCREF(var_event);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_event);
tmp_isinstance_inst_1 = var_event;
tmp_expression_value_6 = module_var_accessor_urllib3$http2$connection$h2(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h2);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_events);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ResponseReceived);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_urllib3$http2$connection$HTTPHeaderDict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPHeaderDict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 239;
tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_headers;
    var_headers = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_event);
tmp_expression_value_7 = var_event;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_headers);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 240;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;
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



exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_8;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
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

goto try_except_handler_7;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_21;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_22;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_header);
tmp_cmp_expr_left_1 = var_header;
tmp_cmp_expr_right_1 = mod_consts.const_bytes_digest_ce91c0b974913457333acd081707a12f;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_value);
tmp_expression_value_8 = var_value;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 242;
tmp_int_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_23 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_status;
    var_status = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
if (var_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_9 = var_headers;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_add);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_header);
tmp_expression_value_10 = var_header;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_decode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 245;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 245;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 245;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_value);
tmp_expression_value_11 = var_value;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_decode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 245;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 245;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 245;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 244;
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


exception_lineno = 244;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_6;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_event);
tmp_isinstance_inst_2 = var_event;
tmp_expression_value_13 = module_var_accessor_urllib3$http2$connection$h2(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h2);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_events);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DataReceived);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_14;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}

tmp_iadd_expr_left_1 = var_data;
CHECK_OBJECT(var_event);
tmp_expression_value_14 = var_event;
tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_data);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_24 = tmp_iadd_expr_left_1;
var_data = tmp_assign_source_24;

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_17;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_15 = var_conn;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_acknowledge_received_data);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_event);
tmp_expression_value_16 = var_event;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_flow_controlled_length);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 251;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_event);
tmp_expression_value_17 = var_event;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_stream_id);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 251;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 250;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_event);
tmp_isinstance_inst_3 = var_event;
tmp_expression_value_19 = module_var_accessor_urllib3$http2$connection$h2(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h2);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_events);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_StreamEnded);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = Py_True;
{
    PyObject *old = var_end_stream;
    var_end_stream = tmp_assign_source_25;
    Py_INCREF(var_end_stream);
    Py_XDECREF(old);
}

}
branch_no_6:;
branch_end_5:;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_4;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_2:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_instance_3;
if (var_conn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "oooooooooooo";
    goto try_except_handler_10;
}

tmp_called_instance_3 = var_conn;
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 257;
tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_assignment_expr_2__value;
    tmp_assignment_expr_2__value = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_assign_source_27 = tmp_assignment_expr_2__value;
{
    PyObject *old = var_data_to_send;
    var_data_to_send = tmp_assign_source_27;
    Py_INCREF(var_data_to_send);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_outline_return_value_2 = tmp_assignment_expr_2__value;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_assignment_expr_2__value);
CHECK_OBJECT(tmp_assignment_expr_2__value);
Py_DECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 257;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_20 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_sock);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data_to_send);
tmp_args_element_value_6 = var_data_to_send;
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 258;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_sendall, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__14_getresponse, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__14_getresponse, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_28;
tmp_assign_source_28 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_28;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 231;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_11;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 231;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_11;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 231;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_11;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 231;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_9);

exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_10:;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 231;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_status == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_status);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = var_status;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_1;
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 260;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_12:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_bytes_arg_1;
tmp_called_value_11 = module_var_accessor_urllib3$http2$connection$HTTP2Response(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTP2Response);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (var_status == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_status);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = var_status;
if (var_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = var_headers;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__request_url);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (var_data == NULL) {
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_bytes_arg_1 = var_data;
tmp_kw_call_value_3_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 265;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame.f_lineno = 261;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_b9d50ac36cc15ba79011d6212e160de4_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__14_getresponse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__14_getresponse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__14_getresponse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__14_getresponse,
    type_description_1,
    par_self,
    var_status,
    var_data,
    var_conn,
    var_end_stream,
    var_received_data,
    var_events,
    var_event,
    var_headers,
    var_header,
    var_value,
    var_data_to_send
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__14_getresponse == cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse);
    cache_frame_frame_urllib3$http2$connection$$$function__14_getresponse = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__14_getresponse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_status);
var_status = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_end_stream);
var_end_stream = NULL;
Py_XDECREF(var_received_data);
var_received_data = NULL;
Py_XDECREF(var_events);
var_events = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_status);
var_status = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_end_stream);
var_end_stream = NULL;
Py_XDECREF(var_received_data);
var_received_data = NULL;
Py_XDECREF(var_events);
var_events = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_data_to_send);
var_data_to_send = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

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


static PyObject *impl_urllib3$http2$connection$$$function__15_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_body = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_preload_content = python_pars[5];
PyObject *par_decode_content = python_pars[6];
PyObject *par_enforce_content_length = python_pars[7];
PyObject *par_kwargs = python_pars[8];
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__15_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__15_request = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__15_request)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__15_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__15_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__15_request = MAKE_FUNCTION_FRAME(tstate, code_objects_dc6b61bc32c5596f2ff66d2c3c33e326, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__15_request->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__15_request = cache_frame_frame_urllib3$http2$connection$$$function__15_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__15_request);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__15_request) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sock);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sock);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_settimeout);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_timeout);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 287;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 287;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_method);
tmp_args_element_value_2 = par_method;
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 289;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_putrequest,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(par_headers);
tmp_or_left_value_1 = par_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_headers);
tmp_expression_value_5 = par_headers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 292;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooo";
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
type_description_1 = "ooooooooooo";
exception_lineno = 292;
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


exception_lineno = 292;
type_description_1 = "ooooooooooo";
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



exception_lineno = 292;
type_description_1 = "ooooooooooo";
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



exception_lineno = 292;
type_description_1 = "ooooooooooo";
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



exception_lineno = 292;
type_description_1 = "ooooooooooo";
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
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_k);
tmp_expression_value_6 = var_k;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 293;
tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_80cf594c6b193676cb3f905f65b5d391;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_v);
tmp_cmp_expr_left_3 = var_v;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_chunked;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
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
goto loop_start_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_k);
tmp_args_element_value_4 = var_k;
CHECK_OBJECT(var_v);
tmp_args_element_value_5 = var_v;
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 296;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_putheader,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooo";
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
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_7;
tmp_cmp_expr_left_4 = mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_self;
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__headers);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 299;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_putheader);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_bytes_digest_8677f07d0b41ad79caed6b953cbeec21;
tmp_called_value_5 = module_var_accessor_urllib3$http2$connection$_get_default_user_agent(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_default_user_agent);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 299;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 299;
tmp_args_element_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 299;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_body);
tmp_truth_name_1 = CHECK_IF_TRUE(par_body);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_5;
PyObject *tmp_kw_call_value_0_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 302;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_endheaders);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_body);
tmp_kw_call_value_0_1 = par_body;
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 302;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_message_body_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_8;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_body);
tmp_args_element_value_8 = par_body;
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 303;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, const_str_plain_send, tmp_args_element_value_8);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_7;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 305;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = par_self;
frame_frame_urllib3$http2$connection$$$function__15_request->m_frame.f_lineno = 305;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_endheaders);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__15_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__15_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__15_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__15_request,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_body,
    par_headers,
    par_preload_content,
    par_decode_content,
    par_enforce_content_length,
    par_kwargs,
    var_k,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__15_request == cache_frame_frame_urllib3$http2$connection$$$function__15_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__15_request);
    cache_frame_frame_urllib3$http2$connection$$$function__15_request = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__15_request);

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
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_headers);
par_headers = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_preload_content);
Py_DECREF(par_preload_content);
CHECK_OBJECT(par_decode_content);
Py_DECREF(par_decode_content);
CHECK_OBJECT(par_enforce_content_length);
Py_DECREF(par_enforce_content_length);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
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
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_preload_content);
Py_DECREF(par_preload_content);
CHECK_OBJECT(par_decode_content);
Py_DECREF(par_decode_content);
CHECK_OBJECT(par_enforce_content_length);
Py_DECREF(par_enforce_content_length);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__16_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_conn = NULL;
PyObject *var_data = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__16_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__16_close = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__16_close)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__16_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__16_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__16_close = MAKE_FUNCTION_FRAME(tstate, code_objects_08a4c71e97949a97c9ee50977ea8bef7, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__16_close->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__16_close = cache_frame_frame_urllib3$http2$connection$$$function__16_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__16_close);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__16_close) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__h2_conn);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
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
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 308;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_conn;
    var_conn = tmp_assign_source_5;
    Py_INCREF(var_conn);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_conn);
tmp_called_instance_1 = var_conn;
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 310;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_close_connection);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooc";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_conn);
tmp_called_instance_2 = var_conn;
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 311;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_data_to_send);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooc";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_7 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_7;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 311;
type_description_1 = "oooc";
    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sock);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooc";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_data);
tmp_args_element_value_1 = var_data;
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 312;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_sendall, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooc";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__16_close, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__16_close, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
    exception_lineno = 309;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__16_close->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooc";
goto try_except_handler_7;
branch_no_2:;
goto try_end_2;
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

goto try_except_handler_4;
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
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__16_close, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__16_close, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
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
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
    goto try_except_handler_8;
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
    exception_lineno = 308;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__16_close->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooc";
goto try_except_handler_8;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 308;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$http2$connection$$$function__16_close->m_frame)) {
        frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooc";
goto try_except_handler_8;
branch_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 308;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_6);

exception_lineno = 308;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_5:;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 308;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 317;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain__new_h2_conn);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__h2_conn, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__h2_stream, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__headers, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_5;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_5 = BUILTIN_SUPER0(tstate, moduledict_urllib3$http2$connection, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection$$$function__16_close->m_frame.f_lineno = 321;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__16_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__16_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__16_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__16_close,
    type_description_1,
    par_self,
    var_conn,
    var_data,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__16_close == cache_frame_frame_urllib3$http2$connection$$$function__16_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__16_close);
    cache_frame_frame_urllib3$http2$connection$$$function__16_close = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__16_close);

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
CHECK_OBJECT(var_conn);
CHECK_OBJECT(var_conn);
Py_DECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_conn);
var_conn = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_urllib3$http2$connection$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_status = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_request_url = python_pars[3];
PyObject *par_data = python_pars[4];
PyObject *par_decode_content = python_pars[5];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7546ad7829339c2aaa36bd64acf57e4e, module_urllib3$http2$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__17___init__->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__17___init__ = cache_frame_frame_urllib3$http2$connection$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__17___init__);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_urllib3$http2$connection, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_status);
tmp_kw_call_value_0_1 = par_status;
CHECK_OBJECT(par_headers);
tmp_kw_call_value_1_1 = par_headers;
tmp_kw_call_value_2_1 = mod_consts.const_int_pos_20;
tmp_kw_call_value_3_1 = mod_consts.const_str_digest_673cb6334f24bcbdf09ca5a78ea1b1af;
tmp_kw_call_value_4_1 = Py_None;
CHECK_OBJECT(par_decode_content);
tmp_kw_call_value_5_1 = par_decode_content;
CHECK_OBJECT(par_request_url);
tmp_kw_call_value_6_1 = par_request_url;
frame_frame_urllib3$http2$connection$$$function__17___init__->m_frame.f_lineno = 334;
{
    PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_2af7b4435c7ec8b93de3001966b45b50_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_data);
tmp_ass_attr_value_1 = par_data;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__data, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_length_remaining, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__17___init__,
    type_description_1,
    par_self,
    par_status,
    par_headers,
    par_request_url,
    par_data,
    par_decode_content,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__17___init__ == cache_frame_frame_urllib3$http2$connection$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__17___init__);
    cache_frame_frame_urllib3$http2$connection$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__17___init__);

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
CHECK_OBJECT(par_status);
Py_DECREF(par_status);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_request_url);
Py_DECREF(par_request_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_decode_content);
Py_DECREF(par_decode_content);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_status);
Py_DECREF(par_status);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_request_url);
Py_DECREF(par_request_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_decode_content);
Py_DECREF(par_decode_content);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$http2$connection$$$function__18_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$function__18_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$connection$$$function__18_data = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$http2$connection$$$function__18_data)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$connection$$$function__18_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$connection$$$function__18_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$connection$$$function__18_data = MAKE_FUNCTION_FRAME(tstate, code_objects_0b5f6e2cc79d88eabfd9cb5ea2015cd1, module_urllib3$http2$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$connection$$$function__18_data->m_type_description == NULL);
frame_frame_urllib3$http2$connection$$$function__18_data = cache_frame_frame_urllib3$http2$connection$$$function__18_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$function__18_data);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$function__18_data) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__data);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$function__18_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$function__18_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$function__18_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$function__18_data,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$connection$$$function__18_data == cache_frame_frame_urllib3$http2$connection$$$function__18_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$connection$$$function__18_data);
    cache_frame_frame_urllib3$http2$connection$$$function__18_data = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$connection$$$function__18_data);

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



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__10_putheader(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__10_putheader,
        mod_consts.const_str_plain_putheader,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c7286adf32cc7b2bf1dc541fee7f9495,
#endif
        code_objects_237dc936a3febafbd476a35ce5d5bcf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__11_endheaders(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__11_endheaders,
        mod_consts.const_str_plain_endheaders,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_786d50199aa6465028fed4ed252da654,
#endif
        code_objects_fadd824b4b989a30eb740b239aebc729,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__12_send(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__12_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_528759a6025f0e766b28058360b71c38,
#endif
        code_objects_d0051067926fa52b43009697e0690e7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        mod_consts.const_str_digest_6706827a7b738ca8971dca58536df31b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__13_set_tunnel(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__13_set_tunnel,
        mod_consts.const_str_plain_set_tunnel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4399bb262796912bb8d4a67a22225fe,
#endif
        code_objects_3f1543955f09d9f50721a86e49046159,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__14_getresponse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__14_getresponse,
        mod_consts.const_str_plain_getresponse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad3b5bf62447b3623b376fbd2716abac,
#endif
        code_objects_9815747cef2b82c681800cf1137b1a36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__15_request(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__15_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3553f2606aa4f1fba9c9e2b70479bbf8,
#endif
        code_objects_dc6b61bc32c5596f2ff66d2c3c33e326,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_urllib3$http2$connection,
        mod_consts.const_str_digest_cbb14e876661f5e4f48e727f3d0116de,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__16_close(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__16_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4706012f584220baa325ce20b455440e,
#endif
        code_objects_08a4c71e97949a97c9ee50977ea8bef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__17___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d08108e016aad9450af2e1c4c62352aa,
#endif
        code_objects_7546ad7829339c2aaa36bd64acf57e4e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__18_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__18_data,
        mod_consts.const_str_plain_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6ac3acf0f0feded13c7467091d28e6a8,
#endif
        code_objects_0b5f6e2cc79d88eabfd9cb5ea2015cd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__19_get_redirect_location(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_redirect_location,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a4e943f3a1eecf66078de8a5690a478,
#endif
        code_objects_7d740ed907932ac5fd9c1a012a107542,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__1__is_legal_header_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__1__is_legal_header_name,
        mod_consts.const_str_plain__is_legal_header_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9733b6e8c36889051b5ce72ff35ad522,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        mod_consts.const_str_digest_996b5a61f6c6c11c1d46923c288d6086,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__20_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c644d5f63b7f11849ab78a8a56efe2ec,
#endif
        code_objects_e86a15ffba4239c925c817f6f85358e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__2__is_illegal_header_value(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__2__is_illegal_header_value,
        mod_consts.const_str_plain__is_illegal_header_value,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c52f708b5d4ab59d43b98104ee7b6800,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        mod_consts.const_str_digest_eb7c840c12d40bda3b644dcfc806b890,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53a8deef381cd8e4ec057cec786f717c,
#endif
        code_objects_ca06c6ef9a03fa22f004df3a0a0ca548,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__4___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__4___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e321a928a532bd82b7e077f98e9bd875,
#endif
        code_objects_c5e78ca646b91fa69c4234db68ab7233,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__5___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__5___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_017796dba33a03d5fe0ab5c7577b77ad,
#endif
        code_objects_a69b0d8f3930fa12f453ffcdba8cd1a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e798b18eefb80a8f7c2290ef82e59c46,
#endif
        code_objects_bb7ece53177a5b8f306800887bf1381c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__7__new_h2_conn(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__7__new_h2_conn,
        mod_consts.const_str_plain__new_h2_conn,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e79cad324e95279f9f62d7e253adb41e,
#endif
        code_objects_ee73520ec429f27a0626d75bc1b68916,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__8_connect(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__8_connect,
        mod_consts.const_str_plain_connect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_319cd178fd17e6d9fa8c5b88a7509a84,
#endif
        code_objects_b6c315f412fe426844f998ff87bbec02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$connection$$$function__9_putrequest(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$connection$$$function__9_putrequest,
        mod_consts.const_str_plain_putrequest,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_57ec9282d0cea5d1a2a98cace15f4430,
#endif
        code_objects_9bc67e29101d288404169379e8edb983,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2$connection,
        mod_consts.const_str_digest_7c35d22451d824fb196d2c97c2d0b169,
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

static function_impl_code const function_table_urllib3$http2$connection[] = {
impl_urllib3$http2$connection$$$function__1__is_legal_header_name,
impl_urllib3$http2$connection$$$function__2__is_illegal_header_value,
impl_urllib3$http2$connection$$$function__3___init__,
impl_urllib3$http2$connection$$$function__4___enter__,
impl_urllib3$http2$connection$$$function__5___exit__,
impl_urllib3$http2$connection$$$function__6___init__,
impl_urllib3$http2$connection$$$function__7__new_h2_conn,
impl_urllib3$http2$connection$$$function__8_connect,
impl_urllib3$http2$connection$$$function__9_putrequest,
impl_urllib3$http2$connection$$$function__10_putheader,
impl_urllib3$http2$connection$$$function__11_endheaders,
impl_urllib3$http2$connection$$$function__12_send,
impl_urllib3$http2$connection$$$function__13_set_tunnel,
impl_urllib3$http2$connection$$$function__14_getresponse,
impl_urllib3$http2$connection$$$function__15_request,
impl_urllib3$http2$connection$$$function__16_close,
impl_urllib3$http2$connection$$$function__17___init__,
impl_urllib3$http2$connection$$$function__18_data,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$http2$connection);
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
        module_urllib3$http2$connection,
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
        function_table_urllib3$http2$connection,
        sizeof(function_table_urllib3$http2$connection) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.http2.connection";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$http2$connection(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$http2$connection");

    // Store the module for future use.
    module_urllib3$http2$connection = module;

    moduledict_urllib3$http2$connection = MODULE_DICT(module_urllib3$http2$connection);

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
        PRINT_STRING("urllib3$http2$connection: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$http2$connection: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$http2$connection: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.http2.connection" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$http2$connection\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$http2$connection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$http2$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$http2$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$http2$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$http2$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$http2$connection);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$http2$connection);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_urllib3$http2$connection$$$class__1__LockedObject_54 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_urllib3$http2$connection$$$class__3_HTTP2Response_324 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$http2$connection = MAKE_MODULE_FRAME(code_objects_23ef9b3d408e95ac9a02a90247b9bc24, module_urllib3$http2$connection);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$http2$connection$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$http2$connection$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_d84daf68eafc5ed9f96e65f0c9394372;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 9;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_h2, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_eae031afba0c67e4c763d3f2d23e316b;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 10;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_h2, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 11;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_h2, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__base_connection;
tmp_globals_arg_value_7 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__TYPE_BODY_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 13;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$http2$connection,
        mod_consts.const_str_plain__TYPE_BODY,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__TYPE_BODY);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_BODY, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__collections;
tmp_globals_arg_value_8 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 14;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$http2$connection,
        mod_consts.const_str_plain_HTTPHeaderDict,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_HTTPHeaderDict);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_connection;
tmp_globals_arg_value_9 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_HTTPSConnection_str_plain__get_default_user_agent_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 15;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$http2$connection,
        mod_consts.const_str_plain_HTTPSConnection,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HTTPSConnection);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPSConnection, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$http2$connection,
        mod_consts.const_str_plain__get_default_user_agent,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__get_default_user_agent);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_user_agent, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_10 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_ConnectionError_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 16;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3$http2$connection,
        mod_consts.const_str_plain_ConnectionError,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ConnectionError);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_response;
tmp_globals_arg_value_11 = (PyObject *)moduledict_urllib3$http2$connection;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 17;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_urllib3$http2$connection,
        mod_consts.const_str_plain_BaseHTTPResponse,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BaseHTTPResponse);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = module_var_accessor_urllib3$http2$connection$HTTPSConnection(tstate);
if (unlikely(tmp_assign_source_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPSConnection);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 21;
tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TypeVar,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_T_tuple, 0)
);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_urllib3$http2$connection$logging(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 23;
tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e2e958ff62375e4aab890f3684b1259f_tuple, 0)
);

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_urllib3$http2$connection$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 25;
tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_3655e2cf144cd890d7cfce551d3fe838_tuple, 0)
);

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_LEGAL_HEADER_NAME, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_urllib3$http2$connection$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 26;
tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_05982d775e0cc042c42f68d677d79574_tuple, 0)
);

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_IS_ILLEGAL_HEADER_VALUE, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ee2bb2b4e4f182df0731f0b239ca9a39);

tmp_assign_source_26 = MAKE_FUNCTION_urllib3$http2$connection$$$function__1__is_legal_header_name(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_legal_header_name, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c3f2efe9d170e2d4600264f2e5ae3366);

tmp_assign_source_27 = MAKE_FUNCTION_urllib3$http2$connection$$$function__2__is_illegal_header_value(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__is_illegal_header_value, tmp_assign_source_27);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_subscript_value_1 = module_var_accessor_urllib3$http2$connection$T(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_1);

exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_1);
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


exception_lineno = 54;

    goto try_except_handler_2;
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
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
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


exception_lineno = 54;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__LockedObject;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 54;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
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
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 54;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 54;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
branch_end_1:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$http2$connection$$$class__1__LockedObject_54 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_27a0563cfee0e83740935d0e51a1a0d6;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain__LockedObject;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_54;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2 = MAKE_CLASS_FRAME(tstate, code_objects_042c2f5aaa3c3d73f71055847581cabe, module_urllib3$http2$connection, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2, locals_urllib3$http2$connection$$$class__1__LockedObject_54);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_fe3d802f75571539e16e2fb2cf403ea6);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__3___init__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__4___enter__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0c57385771e9ecbd1c188978899ec6f1);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__5___exit__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$http2$connection$$$class__1__LockedObject_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_lock_str_plain__obj_tuple;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
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


exception_lineno = 54;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__1__LockedObject_54, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_13;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_13 = mod_consts.const_str_plain__LockedObject;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_urllib3$http2$connection$$$class__1__LockedObject_54;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_13, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
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
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_urllib3$http2$connection$$$class__1__LockedObject_54);
locals_urllib3$http2$connection$$$class__1__LockedObject_54 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$http2$connection$$$class__1__LockedObject_54);
locals_urllib3$http2$connection$$$class__1__LockedObject_54 = NULL;
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
exception_lineno = 54;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__LockedObject, tmp_assign_source_34);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_urllib3$http2$connection$HTTPSConnection(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPSConnection);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_4);
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


exception_lineno = 85;

    goto try_except_handler_5;
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
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
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


exception_lineno = 85;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_HTTP2Connection;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 85;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_14, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 85;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
branch_end_4:;
{
PyObject *tmp_assign_source_42;
outline_1_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTP2Connection;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_85;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_7;
}
frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3 = MAKE_CLASS_FRAME(tstate, code_objects_0ab9858b10e6df51fe0a4648f0184d91, module_urllib3$http2$connection, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3, locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_6;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_f0ad4ff434f44a6c7ea6f379591808c7);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__6___init__(tstate, tmp_defaults_1, tmp_annotations_6, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_b4e5cef57644dcb46d21bbf73e9babea);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__7__new_h2_conn(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain__new_h2_conn, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_2[0] = (struct Nuitka_CellObject *)outline_1_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__8_connect(tstate, tmp_annotations_8, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_connect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_146904ef1a50b82831229f398f9f8771);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__9_putrequest(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_putrequest, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_a7f37374c00f8c3bbbc7f1f857084e0b);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__10_putheader(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_putheader, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_11;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_8846d4020e25f1fff18b985bbebf8382);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__11_endheaders(tstate, tmp_defaults_2, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_endheaders, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_48cc0a9bcb6dac71fecaa882a2f18a9c);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__12_send(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_13;
tmp_defaults_3 = mod_consts.const_tuple_none_none_str_plain_http_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_26771c6b1d5157c19ce26d2c7cbb6951);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__13_set_tunnel(tstate, tmp_defaults_3, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_set_tunnel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_10acda1c52d42f9a090af63539784e13);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__14_getresponse(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_getresponse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_15;
tmp_defaults_4 = mod_consts.const_tuple_none_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_e7c13f40f8a7dcee2e5f4daa5c1d15b7);
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_8ebd2091a822625cc07174f44c3aaf83);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__15_request(tstate, tmp_defaults_4, tmp_kw_defaults_1, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_16;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_3[0] = (struct Nuitka_CellObject *)outline_1_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__16_close(tstate, tmp_annotations_16, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$http2$connection$$$class__2_HTTP2Connection_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_6417629f3c2409f77d5b8965b151ae04_tuple;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_7;
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


exception_lineno = 85;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_15;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_15 = mod_consts.const_str_plain_HTTP2Connection;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_2, const_str_plain___classcell__, (PyObject *)outline_1_var___class__);
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_15, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_7;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_1_var___class__);
    PyCell_SET((PyObject *)outline_1_var___class__, tmp_assign_source_43);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_1_var___class__));
tmp_assign_source_42 = PyCell_GET((PyObject *)outline_1_var___class__);
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85);
locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85);
locals_urllib3$http2$connection$$$class__2_HTTP2Connection_85 = NULL;
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
assert(PyCell_Check((PyObject *)outline_1_var___class__));
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
exception_lineno = 85;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Connection, tmp_assign_source_42);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_urllib3$http2$connection$BaseHTTPResponse(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseHTTPResponse);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;

    goto try_except_handler_8;
}
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_7);
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


exception_lineno = 324;

    goto try_except_handler_8;
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
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_4, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
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


exception_lineno = 324;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_HTTP2Response;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 324;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
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
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_16, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_8;
}
frame_frame_urllib3$http2$connection->m_frame.f_lineno = 324;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 324;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_49;
}
branch_end_7:;
{
PyObject *tmp_assign_source_50;
outline_2_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_urllib3$http2$connection$$$class__3_HTTP2Response_324 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e2e958ff62375e4aab890f3684b1259f;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTP2Response;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_324;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_10;
}
frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4 = MAKE_CLASS_FRAME(tstate, code_objects_bed8a066d180d596de8bb09cdea4cec1, module_urllib3$http2$connection, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4, locals_urllib3$http2$connection$$$class__3_HTTP2Response_324);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4);
assert(Py_REFCNT(frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4) == 2);

// Framed code:
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_17;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_defaults_5 = mod_consts.const_tuple_false_tuple;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0add41c386874a2866d7b64429a57c09);
Py_INCREF(tmp_defaults_5);
tmp_closure_4[0] = (struct Nuitka_CellObject *)outline_2_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__17___init__(tstate, tmp_defaults_5, tmp_annotations_17, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_18;
tmp_called_value_4 = PyObject_GetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_args_element_value_1 = MAKE_FUNCTION_urllib3$http2$connection$$$function__18_data(tstate, tmp_annotations_18);

frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4->m_frame.f_lineno = 348;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, mod_consts.const_str_plain_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__19_get_redirect_location(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, mod_consts.const_str_plain_get_redirect_location, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$http2$connection$$$function__20_close(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$http2$connection$$$class__3_HTTP2Response_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__data_str_plain_length_remaining_tuple;
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_10;
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


exception_lineno = 324;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_17;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_17 = mod_consts.const_str_plain_HTTP2Response;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_urllib3$http2$connection$$$class__3_HTTP2Response_324;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_3, const_str_plain___classcell__, (PyObject *)outline_2_var___class__);
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_17, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_10;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_2_var___class__);
    PyCell_SET((PyObject *)outline_2_var___class__, tmp_assign_source_51);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_2_var___class__));
tmp_assign_source_50 = PyCell_GET((PyObject *)outline_2_var___class__);
Py_INCREF(tmp_assign_source_50);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324);
locals_urllib3$http2$connection$$$class__3_HTTP2Response_324 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$http2$connection$$$class__3_HTTP2Response_324);
locals_urllib3$http2$connection$$$class__3_HTTP2Response_324 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
assert(PyCell_Check((PyObject *)outline_2_var___class__));
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 324;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTP2Response, tmp_assign_source_50);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$http2$connection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$http2$connection", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.http2.connection" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$http2$connection);
    return module_urllib3$http2$connection;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2$connection, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$http2$connection", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
