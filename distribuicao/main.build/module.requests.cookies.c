/* Generated code for Python module 'requests$cookies'
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



/* The "module_requests$cookies" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$cookies;
PyDictObject *moduledict_requests$cookies;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__is_prepared;
PyObject *const_str_plain__r;
PyObject *const_str_plain__new_headers;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_url;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_netloc;
PyObject *const_str_plain_get_host;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_plain_Host_tuple;
PyObject *const_str_plain_to_native_string;
PyObject *const_str_plain_Host;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_tuple_str_plain_encoding_tuple;
PyObject *const_str_plain_urlunparse;
PyObject *const_str_plain_params;
PyObject *const_str_plain_query;
PyObject *const_str_plain_fragment;
PyObject *const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
PyObject *const_str_digest_fd94370718eabfe17e896a713946f08f;
PyObject *const_str_plain_is_unverifiable;
PyObject *const_str_plain_get_origin_req_host;
PyObject *const_str_plain__headers;
PyObject *const_str_digest_f2f221b0207cd1d787c3e7965c72fbff;
PyObject *const_str_plain_getheaders;
PyObject *const_str_plain__original_response;
PyObject *const_str_plain_MockRequest;
PyObject *const_str_plain_MockResponse;
PyObject *const_str_plain_msg;
PyObject *const_str_plain_extract_cookies;
PyObject *const_str_digest_c143aa7a475302a8dcfd213f32ce331d;
PyObject *const_str_plain_add_cookie_header;
PyObject *const_str_plain_get_new_headers;
PyObject *const_tuple_str_plain_Cookie_tuple;
PyObject *const_str_digest_910dd7d30955ceb16de01d6ef96d3e95;
PyObject *const_str_plain_domain;
PyObject *const_str_plain_clearables;
PyObject *const_str_plain_cookiejar;
PyObject *const_str_plain_clear;
PyObject *const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd;
PyObject *const_str_plain__find_no_duplicates;
PyObject *const_str_digest_741e4a7055b20857d935a0f7ed1c4abe;
PyObject *const_str_plain_remove_cookie_by_name;
PyObject *const_tuple_str_plain_domain_str_plain_path_tuple;
PyObject *const_str_plain_Morsel;
PyObject *const_str_plain_morsel_to_cookie;
PyObject *const_str_plain_create_cookie;
PyObject *const_str_plain_set_cookie;
PyObject *const_str_digest_573342b2a8e1af18fbe63f15ee63f11b;
PyObject *const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6;
PyObject *const_str_plain_self;
PyObject *const_str_plain_iterkeys;
PyObject *const_str_digest_9559440875cf716ec7a8bef311cbaefe;
PyObject *const_str_digest_7fad1f4acdf828076344bcbd2f3093fc;
PyObject *const_str_digest_8282cde113cd2232a516d421ec587b65;
PyObject *const_str_plain_value;
PyObject *const_str_plain_itervalues;
PyObject *const_str_digest_0a2127aa931e582083c667383d216ebd;
PyObject *const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876;
PyObject *const_str_digest_94ebad60c38a4f103db32744a5bab84d;
PyObject *const_str_plain_iteritems;
PyObject *const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d;
PyObject *const_str_digest_b04a12651fd966784023636e22761d12;
PyObject *const_str_plain_domains;
PyObject *const_str_digest_5266e491bdb204b2a45e0a788e9bac94;
PyObject *const_str_plain_paths;
PyObject *const_str_digest_58821042b0e0d98cc3b40076b38affdd;
PyObject *const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba;
PyObject *const_str_plain_dictionary;
PyObject *const_str_digest_d3a4a40c67458b1207db4bc7ab20d310;
PyObject *const_str_digest_73dc65e0aab1db8049cab59519772846;
PyObject *const_str_plain___contains__;
PyObject *const_str_plain_CookieConflictError;
PyObject *const_str_digest_08b25300475453472c10345ee7168b50;
PyObject *const_str_plain_set;
PyObject *const_str_digest_bb11d917f97bb6215fd11706382927d9;
PyObject *const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_chr_34_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple;
PyObject *const_str_plain_cookielib;
PyObject *const_str_plain_CookieJar;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_update;
PyObject *const_str_digest_5c9dad01a3c84d4b998a25c6f245d693;
PyObject *const_str_digest_a51c3332eb43a2659e562411ddf039ee;
PyObject *const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68;
PyObject *const_str_digest_ead58bf535d8bb1db2e1cb769a68561b;
PyObject *const_str_digest_2aa7f18650b70bafed61b449ab43cbad;
PyObject *const_str_plain_toReturn;
PyObject *const_str_digest_c89c12ffe497212a663befb94354aee1;
PyObject *const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain__cookies_lock_tuple;
PyObject *const_str_digest_59021ee0ac4a578b9169d1a96b78e1da;
PyObject *const_str_plain__cookies_lock;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_RLock;
PyObject *const_str_plain_RequestsCookieJar;
PyObject *const_str_plain_set_policy;
PyObject *const_str_plain_get_policy;
PyObject *const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee;
PyObject *const_str_plain__policy;
PyObject *const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa;
PyObject *const_str_plain_new_jar;
PyObject *const_str_plain_version;
PyObject *const_str_plain_port;
PyObject *const_str_plain_secure;
PyObject *const_str_plain_expires;
PyObject *const_str_plain_discard;
PyObject *const_str_plain_comment;
PyObject *const_str_plain_comment_url;
PyObject *const_str_plain_rest;
PyObject *const_dict_a5e68083723d45b7dd5e500852a4245b;
PyObject *const_str_plain_rfc2109;
PyObject *const_str_digest_301265073c49281b942ec09db3deaafb;
PyObject *const_str_plain_port_specified;
PyObject *const_str_plain_domain_specified;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_domain_initial_dot;
PyObject *const_str_plain_path_specified;
PyObject *const_str_plain_Cookie;
PyObject *const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f;
PyObject *const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
PyObject *const_str_plain_time;
PyObject *const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5;
PyObject *const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5;
PyObject *const_str_plain_calendar;
PyObject *const_str_plain_timegm;
PyObject *const_str_plain_strptime;
PyObject *const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
PyObject *const_str_plain_key;
PyObject *const_str_plain_HttpOnly;
PyObject *const_str_plain_httponly;
PyObject *const_tuple_4b6687c362447cc51b6724fb278a295e_tuple;
PyObject *const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d;
PyObject *const_str_digest_85e0ea626320458ddd4363cffbfdc559;
PyObject *const_str_digest_80fe00ea301d02293abaf9dea17cddac;
PyObject *const_str_plain_cookiejar_from_dict;
PyObject *const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple;
PyObject *const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b;
PyObject *const_str_digest_cac90769ee627c252065660cb8b178e8;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_MutableMapping;
PyObject *const_str_digest_41c64468a0c9e92d8eea5f7e817937e8;
PyObject *const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple;
PyObject *const_str_plain_CookiePolicy;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_overload;
PyObject *const_str_plain__internal_utils;
PyObject *const_tuple_str_plain_to_native_string_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_is_prepared_tuple;
PyObject *const_str_plain_is_prepared;
PyObject *const_str_plain_compat;
PyObject *const_tuple_7616210072f96f3543d3039901095cd8_tuple;
PyObject *const_str_digest_12188133309ffc390643b7a732954d08;
PyObject *const_str_digest_6f341fcd71e0573a5357b25e930d7a3d;
PyObject *const_int_pos_31;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_str;
PyObject *const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9;
PyObject *const_str_digest_445933e6a124a5d41f1f32e33f377bc9;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain_get_type;
PyObject *const_str_digest_28c35b2d382d530cb9f8e567735ee113;
PyObject *const_str_digest_e43e9402062b1dc16610d92a6e06da93;
PyObject *const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0;
PyObject *const_str_plain_get_full_url;
PyObject *const_str_digest_b30191bdb52236874918a4b5c3c5db8b;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_58322b83779ad7d89ba5c63e2fe2855c;
PyObject *const_dict_c32046162d4d28465fa536447b566c4c;
PyObject *const_str_plain_has_header;
PyObject *const_str_digest_2a2d5b06d38da952ad812a68992fbb10;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_c674706473f99c12eade7a2867b9b2cf;
PyObject *const_str_plain_get_header;
PyObject *const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6;
PyObject *const_dict_f758cd6d04d5f0475ac1a6a79a9da949;
PyObject *const_str_plain_add_header;
PyObject *const_str_digest_b19ae27d1753e06c28990a42518b1f44;
PyObject *const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0;
PyObject *const_str_plain_add_unredirected_header;
PyObject *const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69;
PyObject *const_dict_67019800ae9d79763d7dc009d4a85798;
PyObject *const_str_digest_44db063164c966fa5386728c86c1a06f;
PyObject *const_str_plain_unverifiable;
PyObject *const_str_digest_edb2a15c85f24da38984c0b5356f21c0;
PyObject *const_str_plain_origin_req_host;
PyObject *const_str_digest_1ffe275872914b64c240c8cb178005ea;
PyObject *const_str_plain_host;
PyObject *const_str_digest_59f19da226d4479328efe53726a2e397;
PyObject *const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_9fe804301723bc424e67537337fb4581;
PyObject *const_int_pos_114;
PyObject *const_dict_8511dcd117a39a2df848b33d7f938f3b;
PyObject *const_str_digest_ea904bab707be16235fbd17c19767f9f;
PyObject *const_dict_649327bbc9f137cd11fab40cb48175a1;
PyObject *const_str_plain_info;
PyObject *const_str_digest_0d84ffc2aed365c467af25f17254de9e;
PyObject *const_dict_2135d94ca27eb9b9337533c7d9716438;
PyObject *const_str_digest_2041229f0580a80f49d71dc1aca7539f;
PyObject *const_tuple_str_plain__headers_tuple;
PyObject *const_dict_f8b6527bac3d3f26d8407346b2814cff;
PyObject *const_str_plain_extract_cookies_to_jar;
PyObject *const_dict_60d2a9c340414f0e972e96c8af3ae900;
PyObject *const_str_plain_get_cookie_header;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_494cccdf64c6d10627801b0860651653;
PyObject *const_tuple_type_RuntimeError_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
PyObject *const_int_pos_185;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple;
PyObject *const_str_digest_bd70455b3ff03a7986678c37b248a150;
PyObject *const_int_pos_191;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_dict_30550bef5f652e2dd2418f2fb31e2c00;
PyObject *const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0;
PyObject *const_dict_733dcff41cd6403d84be373429104b32;
PyObject *const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a;
PyObject *const_dict_b2f586a573796cb806fcf3b5316538bd;
PyObject *const_dict_0fc05ed22f6723891cdf750312b81bd3;
PyObject *const_str_digest_572b1e9f5dc0656103cb358a7cbea16a;
PyObject *const_dict_053cd4471201b1a55a1641fece638f90;
PyObject *const_dict_b31c9b60dfb0407841f8698daf037115;
PyObject *const_str_plain_values;
PyObject *const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7;
PyObject *const_dict_dedeca1d9bce94d314b4bcf1a275af36;
PyObject *const_dict_b42957650b15a590a05c7f7dfa9c058c;
PyObject *const_str_plain_items;
PyObject *const_str_digest_ad2094029011821e111452c0603108d0;
PyObject *const_str_plain_list_domains;
PyObject *const_str_digest_4f8d8ada6928f5a67aefe24138a8c253;
PyObject *const_str_plain_list_paths;
PyObject *const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3;
PyObject *const_str_plain_multiple_domains;
PyObject *const_str_digest_2fb13ce01af8e322e1090db877e250bd;
PyObject *const_dict_97d4b62e76506025ba3d728f11024c30;
PyObject *const_str_plain_get_dict;
PyObject *const_str_digest_aba783cd55ce183297e8f8d9ff1dc698;
PyObject *const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b;
PyObject *const_str_digest_c449d42f81ab297b14c2fe22811dbeeb;
PyObject *const_dict_e73b69cd4c8d678c89b1a9ec369c751f;
PyObject *const_str_digest_5427312272820286dba5b26f263d4c79;
PyObject *const_dict_0e6452fe6e9e9e169b22f18711c403cf;
PyObject *const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3;
PyObject *const_dict_082faeeaff90e29940bf1072f606f4be;
PyObject *const_str_plain___setitem__;
PyObject *const_str_digest_0d043b9a6c2c506833bb59840ef22ffd;
PyObject *const_dict_b4dbf171e32ba52d1e21954b404db78a;
PyObject *const_str_plain___delitem__;
PyObject *const_str_digest_fb0e88f14b774d1e98d525584951eabc;
PyObject *const_dict_8e90f6cbe2927fb665830fed365ef4b1;
PyObject *const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6;
PyObject *const_dict_ef0b4e29f4f64606967755e3954319b8;
PyObject *const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e;
PyObject *const_dict_5779279406cadb1ae1d4f46af49448e4;
PyObject *const_str_plain__find;
PyObject *const_str_digest_9bc80f2115d22815a80849e3086128b4;
PyObject *const_dict_fadb3adb75567dd85c2d019fb52af6c7;
PyObject *const_str_digest_b270aaa39204bf1a293395efb6982c3e;
PyObject *const_dict_af2da645b2beec145f6a64ea5e580bd4;
PyObject *const_str_plain___getstate__;
PyObject *const_str_digest_2fd659d0d93422f0a9d09e643f3b5831;
PyObject *const_dict_12cfbb9989eb821739003d09dbc8bf2a;
PyObject *const_str_plain___setstate__;
PyObject *const_str_digest_0cf04dad003066735b1fdc1881f334a1;
PyObject *const_dict_924e792aa6746308f911f548d146050a;
PyObject *const_str_digest_ccf021f29934e59f3e942390d0f913c3;
PyObject *const_dict_e809cfa0ee4012f2563d8d9f3ba675bb;
PyObject *const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5;
PyObject *const_dict_17f0b5053a0bc21d36a4b0f15b882833;
PyObject *const_str_plain__copy_cookie_jar;
PyObject *const_dict_0762a3fb08b25beefe5679b84ce3d1b1;
PyObject *const_dict_c43a26bff3ccf68c1ccfed0a75963144;
PyObject *const_tuple_str_plain__CookieJarT_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain__CookieJarT;
PyObject *const_tuple_none_true_tuple;
PyObject *const_dict_97053106dd5aa5a1671c8e0a902a4a98;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_f487d40347bccb653368ed7c20bf5f89;
PyObject *const_dict_ba9df4cf85d686b47dcf2aa5594ef21f;
PyObject *const_dict_7f1cc7f5e32e8445dd6b5563aac497b4;
PyObject *const_str_plain_merge_cookies;
PyObject *const_str_digest_019c0800875ec82d0b2ac07098d3dade;
PyObject *const_str_digest_c9dd2760a1399f089d616717f6e41ae2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
PyObject *const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple;
PyObject *const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple;
PyObject *const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple;
PyObject *const_tuple_129c69a03487826b088c2e98299f1ab3_tuple;
PyObject *const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple;
PyObject *const_tuple_str_plain_self_str_plain_new_cj_tuple;
PyObject *const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple;
PyObject *const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple;
PyObject *const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple;
PyObject *const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple;
PyObject *const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cookie_tuple;
PyObject *const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple;
PyObject *const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple;
PyObject *const_tuple_197715a25a75c90b290e7a9e934c908c_tuple;
PyObject *const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple;
PyObject *const_tuple_ca917a44106411b262150e155c627a6c_tuple;
PyObject *const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple;
PyObject *const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple;
PyObject *const_tuple_0a21cfa0564c2ba78573baca86543185_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[335];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.cookies"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 335) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 335 values, got %d\n",
                    UN_TRANSLATE("requests.cookies"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_prepared", mod_consts.const_str_plain__is_prepared);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_prepared);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__r", mod_consts.const_str_plain__r);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new_headers", mod_consts.const_str_plain__new_headers);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__new_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlparse", mod_consts.const_str_plain_urlparse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scheme", mod_consts.const_str_plain_scheme);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_netloc", mod_consts.const_str_plain_netloc);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_host", mod_consts.const_str_plain_get_host);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Host_tuple", mod_consts.const_tuple_str_plain_Host_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Host_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_native_string", mod_consts.const_str_plain_to_native_string);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Host", mod_consts.const_str_plain_Host);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlunparse", mod_consts.const_str_plain_urlunparse);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_params", mod_consts.const_str_plain_params);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_query", mod_consts.const_str_plain_query);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fragment", mod_consts.const_str_plain_fragment);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_fragment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d", mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f", mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_unverifiable", mod_consts.const_str_plain_is_unverifiable);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_unverifiable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_origin_req_host", mod_consts.const_str_plain_get_origin_req_host);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin_req_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__headers", mod_consts.const_str_plain__headers);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff", mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getheaders", mod_consts.const_str_plain_getheaders);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_getheaders);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__original_response", mod_consts.const_str_plain__original_response);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__original_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MockRequest", mod_consts.const_str_plain_MockRequest);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockRequest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MockResponse", mod_consts.const_str_plain_MockResponse);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_msg", mod_consts.const_str_plain_msg);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_msg);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_cookies", mod_consts.const_str_plain_extract_cookies);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d", mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_cookie_header", mod_consts.const_str_plain_add_cookie_header);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_cookie_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_new_headers", mod_consts.const_str_plain_get_new_headers);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_new_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Cookie_tuple", mod_consts.const_tuple_str_plain_Cookie_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cookie_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95", mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domain", mod_consts.const_str_plain_domain);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clearables", mod_consts.const_str_plain_clearables);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_clearables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookiejar", mod_consts.const_str_plain_cookiejar);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clear", mod_consts.const_str_plain_clear);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd", mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__find_no_duplicates", mod_consts.const_str_plain__find_no_duplicates);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__find_no_duplicates);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe", mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_cookie_by_name", mod_consts.const_str_plain_remove_cookie_by_name);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_cookie_by_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple", mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Morsel", mod_consts.const_str_plain_Morsel);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_Morsel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_morsel_to_cookie", mod_consts.const_str_plain_morsel_to_cookie);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_morsel_to_cookie);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_cookie", mod_consts.const_str_plain_create_cookie);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_cookie);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_cookie", mod_consts.const_str_plain_set_cookie);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_cookie);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b", mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6", mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iterkeys", mod_consts.const_str_plain_iterkeys);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterkeys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe", mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc", mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65", mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itervalues", mod_consts.const_str_plain_itervalues);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_itervalues);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd", mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876", mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d", mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iteritems", mod_consts.const_str_plain_iteritems);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_iteritems);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d", mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b04a12651fd966784023636e22761d12", mod_consts.const_str_digest_b04a12651fd966784023636e22761d12);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_b04a12651fd966784023636e22761d12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domains", mod_consts.const_str_plain_domains);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_domains);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94", mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_paths", mod_consts.const_str_plain_paths);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_paths);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd", mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba", mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dictionary", mod_consts.const_str_plain_dictionary);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_dictionary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310", mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846", mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___contains__", mod_consts.const_str_plain___contains__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___contains__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookieConflictError", mod_consts.const_str_plain_CookieConflictError);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieConflictError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_08b25300475453472c10345ee7168b50", mod_consts.const_str_digest_08b25300475453472c10345ee7168b50);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_08b25300475453472c10345ee7168b50);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set", mod_consts.const_str_plain_set);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9", mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355", mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_34_tuple", mod_consts.const_tuple_str_chr_34_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_34_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_endswith", mod_consts.const_str_plain_endswith);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple", mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookielib", mod_consts.const_str_plain_cookielib);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookielib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookieJar", mod_consts.const_str_plain_CookieJar);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693", mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee", mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68", mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b", mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad", mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_toReturn", mod_consts.const_str_plain_toReturn);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_toReturn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1", mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c", mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__cookies_lock_tuple", mod_consts.const_tuple_str_plain__cookies_lock_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cookies_lock_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da", mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__cookies_lock", mod_consts.const_str_plain__cookies_lock);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__cookies_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLock", mod_consts.const_str_plain_RLock);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_RLock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsCookieJar", mod_consts.const_str_plain_RequestsCookieJar);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsCookieJar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_policy", mod_consts.const_str_plain_set_policy);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_policy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_policy", mod_consts.const_str_plain_get_policy);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_policy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee", mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__policy", mod_consts.const_str_plain__policy);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__policy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa", mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new_jar", mod_consts.const_str_plain_new_jar);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_jar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secure", mod_consts.const_str_plain_secure);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_secure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_expires", mod_consts.const_str_plain_expires);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_expires);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_discard", mod_consts.const_str_plain_discard);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_discard);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_comment", mod_consts.const_str_plain_comment);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_comment_url", mod_consts.const_str_plain_comment_url);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rest", mod_consts.const_str_plain_rest);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_rest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b", mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rfc2109", mod_consts.const_str_plain_rfc2109);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfc2109);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb", mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port_specified", mod_consts.const_str_plain_port_specified);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_port_specified);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domain_specified", mod_consts.const_str_plain_domain_specified);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain_specified);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domain_initial_dot", mod_consts.const_str_plain_domain_initial_dot);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain_initial_dot);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_path_specified", mod_consts.const_str_plain_path_specified);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_path_specified);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cookie", mod_consts.const_str_plain_Cookie);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cookie);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f", mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d", mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5", mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5", mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_calendar", mod_consts.const_str_plain_calendar);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_calendar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timegm", mod_consts.const_str_plain_timegm);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_timegm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strptime", mod_consts.const_str_plain_strptime);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_strptime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d", mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key", mod_consts.const_str_plain_key);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HttpOnly", mod_consts.const_str_plain_HttpOnly);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_HttpOnly);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_httponly", mod_consts.const_str_plain_httponly);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_httponly);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple", mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d", mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559", mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac", mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookiejar_from_dict", mod_consts.const_str_plain_cookiejar_from_dict);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar_from_dict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple", mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b", mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8", mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple", mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MutableMapping", mod_consts.const_str_plain_MutableMapping);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8", mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple", mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookiePolicy", mod_consts.const_str_plain_CookiePolicy);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookiePolicy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TypeVar", mod_consts.const_str_plain_TypeVar);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__internal_utils", mod_consts.const_str_plain__internal_utils);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_native_string_tuple", mod_consts.const_tuple_str_plain_to_native_string_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_native_string_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__types", mod_consts.const_str_plain__types);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_is_prepared_tuple", mod_consts.const_tuple_str_plain_is_prepared_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_prepared_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_prepared", mod_consts.const_str_plain_is_prepared);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_prepared);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple", mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12188133309ffc390643b7a732954d08", mod_consts.const_str_digest_12188133309ffc390643b7a732954d08);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_12188133309ffc390643b7a732954d08);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d", mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9", mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9", mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_type", mod_consts.const_str_plain_get_type);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_type);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113", mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93", mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0", mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_full_url", mod_consts.const_str_plain_get_full_url);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_full_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b", mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c", mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c32046162d4d28465fa536447b566c4c", mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_header", mod_consts.const_str_plain_has_header);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10", mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf", mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_header", mod_consts.const_str_plain_get_header);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6", mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949", mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_header", mod_consts.const_str_plain_add_header);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44", mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0", mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_unredirected_header", mod_consts.const_str_plain_add_unredirected_header);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_unredirected_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69", mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798", mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f", mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unverifiable", mod_consts.const_str_plain_unverifiable);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_unverifiable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0", mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin_req_host", mod_consts.const_str_plain_origin_req_host);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin_req_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea", mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397", mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple", mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581", mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_int_pos_114);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b", mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f", mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1", mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e", mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438", mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f", mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__headers_tuple", mod_consts.const_tuple_str_plain__headers_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__headers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff", mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_cookies_to_jar", mod_consts.const_str_plain_extract_cookies_to_jar);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900", mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_cookie_header", mod_consts.const_str_plain_get_cookie_header);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cookie_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_494cccdf64c6d10627801b0860651653", mod_consts.const_dict_494cccdf64c6d10627801b0860651653);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_494cccdf64c6d10627801b0860651653);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_RuntimeError_tuple", mod_consts.const_tuple_type_RuntimeError_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d", mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_185", mod_consts.const_int_pos_185);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_int_pos_185);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple", mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150", mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_191", mod_consts.const_int_pos_191);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_int_pos_191);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00", mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0", mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_733dcff41cd6403d84be373429104b32", mod_consts.const_dict_733dcff41cd6403d84be373429104b32);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_dict_733dcff41cd6403d84be373429104b32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a", mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd", mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3", mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a", mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_053cd4471201b1a55a1641fece638f90", mod_consts.const_dict_053cd4471201b1a55a1641fece638f90);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_dict_053cd4471201b1a55a1641fece638f90);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115", mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_values", mod_consts.const_str_plain_values);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7", mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36", mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c", mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad2094029011821e111452c0603108d0", mod_consts.const_str_digest_ad2094029011821e111452c0603108d0);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad2094029011821e111452c0603108d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_list_domains", mod_consts.const_str_plain_list_domains);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_domains);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253", mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_list_paths", mod_consts.const_str_plain_list_paths);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_paths);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3", mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_multiple_domains", mod_consts.const_str_plain_multiple_domains);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_domains);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd", mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30", mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_dict", mod_consts.const_str_plain_get_dict);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_dict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698", mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b", mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb", mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f", mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79", mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf", mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3", mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be", mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___setitem__", mod_consts.const_str_plain___setitem__);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_plain___setitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd", mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a", mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___delitem__", mod_consts.const_str_plain___delitem__);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_plain___delitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc", mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1", mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6", mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8", mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e", mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4", mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__find", mod_consts.const_str_plain__find);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_plain__find);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4", mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7", mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e", mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4", mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getstate__", mod_consts.const_str_plain___getstate__);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831", mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a", mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___setstate__", mod_consts.const_str_plain___setstate__);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1", mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_924e792aa6746308f911f548d146050a", mod_consts.const_dict_924e792aa6746308f911f548d146050a);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_dict_924e792aa6746308f911f548d146050a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3", mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb", mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5", mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833", mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__copy_cookie_jar", mod_consts.const_str_plain__copy_cookie_jar);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_str_plain__copy_cookie_jar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1", mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144", mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__CookieJarT_tuple", mod_consts.const_tuple_str_plain__CookieJarT_tuple);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__CookieJarT_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_bound_tuple", mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CookieJarT", mod_consts.const_str_plain__CookieJarT);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_str_plain__CookieJarT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_true_tuple", mod_consts.const_tuple_none_true_tuple);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98", mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89", mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f", mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4", mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_merge_cookies", mod_consts.const_str_plain_merge_cookies);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_str_plain_merge_cookies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade", mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2", mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_state_tuple", mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_request_tuple", mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple", mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple", mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple", mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple", mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple", mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple);
mod_consts_hash[315] = DEEP_HASH(tstate, mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple", mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple);
mod_consts_hash[316] = DEEP_HASH(tstate, mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple", mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple);
mod_consts_hash[317] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple", mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple);
mod_consts_hash[318] = DEEP_HASH(tstate, mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple", mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple);
mod_consts_hash[319] = DEEP_HASH(tstate, mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple", mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple);
mod_consts_hash[320] = DEEP_HASH(tstate, mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple", mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple);
mod_consts_hash[321] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple", mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple);
mod_consts_hash[322] = DEEP_HASH(tstate, mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple", mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple);
mod_consts_hash[323] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
mod_consts_hash[324] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[325] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple", mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple);
mod_consts_hash[326] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple", mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple);
mod_consts_hash[327] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple", mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple);
mod_consts_hash[328] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple", mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple);
mod_consts_hash[329] = DEEP_HASH(tstate, mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple", mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple);
mod_consts_hash[330] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple", mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple);
mod_consts_hash[331] = DEEP_HASH(tstate, mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple", mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple);
mod_consts_hash[332] = DEEP_HASH(tstate, mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple", mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple);
mod_consts_hash[333] = DEEP_HASH(tstate, mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple", mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple);
mod_consts_hash[334] = DEEP_HASH(tstate, mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple);
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
void checkModuleConstants_requests$cookies(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_prepared", mod_consts.const_str_plain__is_prepared);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_prepared) && "mod_consts.const_str_plain__is_prepared");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__r", mod_consts.const_str_plain__r);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__r) && "mod_consts.const_str_plain__r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new_headers", mod_consts.const_str_plain__new_headers);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__new_headers) && "mod_consts.const_str_plain__new_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlparse", mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse) && "mod_consts.const_str_plain_urlparse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_url) && "mod_consts.const_str_plain_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scheme", mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme) && "mod_consts.const_str_plain_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_netloc", mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc) && "mod_consts.const_str_plain_netloc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_host", mod_consts.const_str_plain_get_host);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_host) && "mod_consts.const_str_plain_get_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers) && "mod_consts.const_str_plain_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Host_tuple", mod_consts.const_tuple_str_plain_Host_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Host_tuple) && "mod_consts.const_tuple_str_plain_Host_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_native_string", mod_consts.const_str_plain_to_native_string);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string) && "mod_consts.const_str_plain_to_native_string");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Host", mod_consts.const_str_plain_Host);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Host) && "mod_consts.const_str_plain_Host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple) && "mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple) && "mod_consts.const_tuple_str_plain_encoding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlunparse", mod_consts.const_str_plain_urlunparse);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse) && "mod_consts.const_str_plain_urlunparse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_params", mod_consts.const_str_plain_params);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_params) && "mod_consts.const_str_plain_params");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_query", mod_consts.const_str_plain_query);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_query) && "mod_consts.const_str_plain_query");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fragment", mod_consts.const_str_plain_fragment);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_fragment) && "mod_consts.const_str_plain_fragment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d", mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d) && "mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f", mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f) && "mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_unverifiable", mod_consts.const_str_plain_is_unverifiable);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_unverifiable) && "mod_consts.const_str_plain_is_unverifiable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_origin_req_host", mod_consts.const_str_plain_get_origin_req_host);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin_req_host) && "mod_consts.const_str_plain_get_origin_req_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__headers", mod_consts.const_str_plain__headers);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__headers) && "mod_consts.const_str_plain__headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff", mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff) && "mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getheaders", mod_consts.const_str_plain_getheaders);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_getheaders) && "mod_consts.const_str_plain_getheaders");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__original_response", mod_consts.const_str_plain__original_response);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__original_response) && "mod_consts.const_str_plain__original_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MockRequest", mod_consts.const_str_plain_MockRequest);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockRequest) && "mod_consts.const_str_plain_MockRequest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MockResponse", mod_consts.const_str_plain_MockResponse);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockResponse) && "mod_consts.const_str_plain_MockResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_msg", mod_consts.const_str_plain_msg);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_msg) && "mod_consts.const_str_plain_msg");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_cookies", mod_consts.const_str_plain_extract_cookies);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies) && "mod_consts.const_str_plain_extract_cookies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d", mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d) && "mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_cookie_header", mod_consts.const_str_plain_add_cookie_header);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_cookie_header) && "mod_consts.const_str_plain_add_cookie_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_new_headers", mod_consts.const_str_plain_get_new_headers);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_new_headers) && "mod_consts.const_str_plain_get_new_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Cookie_tuple", mod_consts.const_tuple_str_plain_Cookie_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cookie_tuple) && "mod_consts.const_tuple_str_plain_Cookie_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95", mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95) && "mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domain", mod_consts.const_str_plain_domain);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain) && "mod_consts.const_str_plain_domain");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clearables", mod_consts.const_str_plain_clearables);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_clearables) && "mod_consts.const_str_plain_clearables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookiejar", mod_consts.const_str_plain_cookiejar);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar) && "mod_consts.const_str_plain_cookiejar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clear", mod_consts.const_str_plain_clear);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear) && "mod_consts.const_str_plain_clear");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd", mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd) && "mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__find_no_duplicates", mod_consts.const_str_plain__find_no_duplicates);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__find_no_duplicates) && "mod_consts.const_str_plain__find_no_duplicates");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe", mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe) && "mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_cookie_by_name", mod_consts.const_str_plain_remove_cookie_by_name);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_cookie_by_name) && "mod_consts.const_str_plain_remove_cookie_by_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple", mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple) && "mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Morsel", mod_consts.const_str_plain_Morsel);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_Morsel) && "mod_consts.const_str_plain_Morsel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_morsel_to_cookie", mod_consts.const_str_plain_morsel_to_cookie);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_morsel_to_cookie) && "mod_consts.const_str_plain_morsel_to_cookie");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_cookie", mod_consts.const_str_plain_create_cookie);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_cookie) && "mod_consts.const_str_plain_create_cookie");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_cookie", mod_consts.const_str_plain_set_cookie);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_cookie) && "mod_consts.const_str_plain_set_cookie");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b", mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b) && "mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6", mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6) && "mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iterkeys", mod_consts.const_str_plain_iterkeys);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterkeys) && "mod_consts.const_str_plain_iterkeys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe", mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe) && "mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc", mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc) && "mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65", mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65) && "mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itervalues", mod_consts.const_str_plain_itervalues);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_itervalues) && "mod_consts.const_str_plain_itervalues");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd", mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd) && "mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876", mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876) && "mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d", mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d) && "mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iteritems", mod_consts.const_str_plain_iteritems);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_iteritems) && "mod_consts.const_str_plain_iteritems");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d", mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d) && "mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b04a12651fd966784023636e22761d12", mod_consts.const_str_digest_b04a12651fd966784023636e22761d12);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_b04a12651fd966784023636e22761d12) && "mod_consts.const_str_digest_b04a12651fd966784023636e22761d12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domains", mod_consts.const_str_plain_domains);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_domains) && "mod_consts.const_str_plain_domains");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94", mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94) && "mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_paths", mod_consts.const_str_plain_paths);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_paths) && "mod_consts.const_str_plain_paths");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd", mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd) && "mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba", mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba) && "mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dictionary", mod_consts.const_str_plain_dictionary);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_dictionary) && "mod_consts.const_str_plain_dictionary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310", mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310) && "mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846", mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846) && "mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___contains__", mod_consts.const_str_plain___contains__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___contains__) && "mod_consts.const_str_plain___contains__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookieConflictError", mod_consts.const_str_plain_CookieConflictError);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieConflictError) && "mod_consts.const_str_plain_CookieConflictError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_08b25300475453472c10345ee7168b50", mod_consts.const_str_digest_08b25300475453472c10345ee7168b50);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_08b25300475453472c10345ee7168b50) && "mod_consts.const_str_digest_08b25300475453472c10345ee7168b50");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set", mod_consts.const_str_plain_set);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_set) && "mod_consts.const_str_plain_set");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9", mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9) && "mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355", mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355) && "mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_34_tuple", mod_consts.const_tuple_str_chr_34_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_34_tuple) && "mod_consts.const_tuple_str_chr_34_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_endswith", mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith) && "mod_consts.const_str_plain_endswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace) && "mod_consts.const_str_plain_replace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple", mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple) && "mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookielib", mod_consts.const_str_plain_cookielib);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookielib) && "mod_consts.const_str_plain_cookielib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookieJar", mod_consts.const_str_plain_CookieJar);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar) && "mod_consts.const_str_plain_CookieJar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_update) && "mod_consts.const_str_plain_update");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693", mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693) && "mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee", mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee) && "mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68", mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68) && "mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b", mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b) && "mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad", mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad) && "mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_toReturn", mod_consts.const_str_plain_toReturn);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_toReturn) && "mod_consts.const_str_plain_toReturn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1", mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1) && "mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c", mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c) && "mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop) && "mod_consts.const_str_plain_pop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__cookies_lock_tuple", mod_consts.const_tuple_str_plain__cookies_lock_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cookies_lock_tuple) && "mod_consts.const_tuple_str_plain__cookies_lock_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da", mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da) && "mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__cookies_lock", mod_consts.const_str_plain__cookies_lock);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__cookies_lock) && "mod_consts.const_str_plain__cookies_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading) && "mod_consts.const_str_plain_threading");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLock", mod_consts.const_str_plain_RLock);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_RLock) && "mod_consts.const_str_plain_RLock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsCookieJar", mod_consts.const_str_plain_RequestsCookieJar);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsCookieJar) && "mod_consts.const_str_plain_RequestsCookieJar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_policy", mod_consts.const_str_plain_set_policy);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_policy) && "mod_consts.const_str_plain_set_policy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_policy", mod_consts.const_str_plain_get_policy);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_policy) && "mod_consts.const_str_plain_get_policy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee", mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee) && "mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__policy", mod_consts.const_str_plain__policy);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__policy) && "mod_consts.const_str_plain__policy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa", mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa) && "mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new_jar", mod_consts.const_str_plain_new_jar);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_jar) && "mod_consts.const_str_plain_new_jar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_version) && "mod_consts.const_str_plain_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_port) && "mod_consts.const_str_plain_port");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secure", mod_consts.const_str_plain_secure);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_secure) && "mod_consts.const_str_plain_secure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_expires", mod_consts.const_str_plain_expires);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_expires) && "mod_consts.const_str_plain_expires");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_discard", mod_consts.const_str_plain_discard);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_discard) && "mod_consts.const_str_plain_discard");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_comment", mod_consts.const_str_plain_comment);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment) && "mod_consts.const_str_plain_comment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_comment_url", mod_consts.const_str_plain_comment_url);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment_url) && "mod_consts.const_str_plain_comment_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rest", mod_consts.const_str_plain_rest);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_rest) && "mod_consts.const_str_plain_rest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b", mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b) && "mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rfc2109", mod_consts.const_str_plain_rfc2109);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfc2109) && "mod_consts.const_str_plain_rfc2109");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb", mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb) && "mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port_specified", mod_consts.const_str_plain_port_specified);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_port_specified) && "mod_consts.const_str_plain_port_specified");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domain_specified", mod_consts.const_str_plain_domain_specified);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain_specified) && "mod_consts.const_str_plain_domain_specified");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple) && "mod_consts.const_tuple_str_dot_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_domain_initial_dot", mod_consts.const_str_plain_domain_initial_dot);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain_initial_dot) && "mod_consts.const_str_plain_domain_initial_dot");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_path_specified", mod_consts.const_str_plain_path_specified);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_path_specified) && "mod_consts.const_str_plain_path_specified");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cookie", mod_consts.const_str_plain_Cookie);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cookie) && "mod_consts.const_str_plain_Cookie");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f", mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f) && "mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d", mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d) && "mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5", mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5) && "mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5", mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5) && "mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_calendar", mod_consts.const_str_plain_calendar);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_calendar) && "mod_consts.const_str_plain_calendar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timegm", mod_consts.const_str_plain_timegm);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_timegm) && "mod_consts.const_str_plain_timegm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strptime", mod_consts.const_str_plain_strptime);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_strptime) && "mod_consts.const_str_plain_strptime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d", mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d) && "mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key", mod_consts.const_str_plain_key);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_key) && "mod_consts.const_str_plain_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HttpOnly", mod_consts.const_str_plain_HttpOnly);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_HttpOnly) && "mod_consts.const_str_plain_HttpOnly");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_httponly", mod_consts.const_str_plain_httponly);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_httponly) && "mod_consts.const_str_plain_httponly");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple", mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple) && "mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d", mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d) && "mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559", mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559) && "mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac", mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac) && "mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookiejar_from_dict", mod_consts.const_str_plain_cookiejar_from_dict);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar_from_dict) && "mod_consts.const_str_plain_cookiejar_from_dict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple", mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple) && "mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b", mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b) && "mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8", mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8) && "mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e) && "mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple", mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple) && "mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator) && "mod_consts.const_str_plain_Iterator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MutableMapping", mod_consts.const_str_plain_MutableMapping);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping) && "mod_consts.const_str_plain_MutableMapping");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8", mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8) && "mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple", mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple) && "mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookiePolicy", mod_consts.const_str_plain_CookiePolicy);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookiePolicy) && "mod_consts.const_str_plain_CookiePolicy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TypeVar", mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar) && "mod_consts.const_str_plain_TypeVar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload) && "mod_consts.const_str_plain_overload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__internal_utils", mod_consts.const_str_plain__internal_utils);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal_utils) && "mod_consts.const_str_plain__internal_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_native_string_tuple", mod_consts.const_tuple_str_plain_to_native_string_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_native_string_tuple) && "mod_consts.const_tuple_str_plain_to_native_string_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__types", mod_consts.const_str_plain__types);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain__types) && "mod_consts.const_str_plain__types");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_is_prepared_tuple", mod_consts.const_tuple_str_plain_is_prepared_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_prepared_tuple) && "mod_consts.const_tuple_str_plain_is_prepared_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_prepared", mod_consts.const_str_plain_is_prepared);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_prepared) && "mod_consts.const_str_plain_is_prepared");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat) && "mod_consts.const_str_plain_compat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple", mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple) && "mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12188133309ffc390643b7a732954d08", mod_consts.const_str_digest_12188133309ffc390643b7a732954d08);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_12188133309ffc390643b7a732954d08) && "mod_consts.const_str_digest_12188133309ffc390643b7a732954d08");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d", mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d) && "mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_31) && "mod_consts.const_int_pos_31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_str) && "mod_consts.const_str_plain_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9", mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9) && "mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9", mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9) && "mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_type", mod_consts.const_str_plain_get_type);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_type) && "mod_consts.const_str_plain_get_type");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113", mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113) && "mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93", mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93) && "mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0", mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0) && "mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_full_url", mod_consts.const_str_plain_get_full_url);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_full_url) && "mod_consts.const_str_plain_get_full_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b", mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b) && "mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6) && "mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c", mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c) && "mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c32046162d4d28465fa536447b566c4c", mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_c32046162d4d28465fa536447b566c4c) && "mod_consts.const_dict_c32046162d4d28465fa536447b566c4c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_header", mod_consts.const_str_plain_has_header);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_header) && "mod_consts.const_str_plain_has_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10", mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10) && "mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf", mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf) && "mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_header", mod_consts.const_str_plain_get_header);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_header) && "mod_consts.const_str_plain_get_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6", mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6) && "mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949", mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949) && "mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_header", mod_consts.const_str_plain_add_header);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_header) && "mod_consts.const_str_plain_add_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44", mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44) && "mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0", mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0) && "mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_unredirected_header", mod_consts.const_str_plain_add_unredirected_header);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_unredirected_header) && "mod_consts.const_str_plain_add_unredirected_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69", mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69) && "mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798", mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798) && "mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f", mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f) && "mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unverifiable", mod_consts.const_str_plain_unverifiable);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_unverifiable) && "mod_consts.const_str_plain_unverifiable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0", mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0) && "mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin_req_host", mod_consts.const_str_plain_origin_req_host);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin_req_host) && "mod_consts.const_str_plain_origin_req_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea", mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea) && "mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_host) && "mod_consts.const_str_plain_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397", mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397) && "mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple", mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple) && "mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581", mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581) && "mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_int_pos_114) && "mod_consts.const_int_pos_114");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b", mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b) && "mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f", mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f) && "mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1", mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1) && "mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e", mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e) && "mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438", mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438) && "mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f", mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f) && "mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__headers_tuple", mod_consts.const_tuple_str_plain__headers_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__headers_tuple) && "mod_consts.const_tuple_str_plain__headers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff", mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff) && "mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_cookies_to_jar", mod_consts.const_str_plain_extract_cookies_to_jar);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar) && "mod_consts.const_str_plain_extract_cookies_to_jar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900", mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900) && "mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_cookie_header", mod_consts.const_str_plain_get_cookie_header);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cookie_header) && "mod_consts.const_str_plain_get_cookie_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_494cccdf64c6d10627801b0860651653", mod_consts.const_dict_494cccdf64c6d10627801b0860651653);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_494cccdf64c6d10627801b0860651653) && "mod_consts.const_dict_494cccdf64c6d10627801b0860651653");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_RuntimeError_tuple", mod_consts.const_tuple_type_RuntimeError_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple) && "mod_consts.const_tuple_type_RuntimeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d", mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d) && "mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_185", mod_consts.const_int_pos_185);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_int_pos_185) && "mod_consts.const_int_pos_185");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple", mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple) && "mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150", mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150) && "mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_191", mod_consts.const_int_pos_191);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_int_pos_191) && "mod_consts.const_int_pos_191");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00", mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00) && "mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0", mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0) && "mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_733dcff41cd6403d84be373429104b32", mod_consts.const_dict_733dcff41cd6403d84be373429104b32);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_dict_733dcff41cd6403d84be373429104b32) && "mod_consts.const_dict_733dcff41cd6403d84be373429104b32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a", mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a) && "mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd", mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd) && "mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3", mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3) && "mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a", mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a) && "mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_053cd4471201b1a55a1641fece638f90", mod_consts.const_dict_053cd4471201b1a55a1641fece638f90);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_dict_053cd4471201b1a55a1641fece638f90) && "mod_consts.const_dict_053cd4471201b1a55a1641fece638f90");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115", mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115) && "mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_values", mod_consts.const_str_plain_values);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_values) && "mod_consts.const_str_plain_values");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7", mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7) && "mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36", mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36) && "mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c", mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c) && "mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad2094029011821e111452c0603108d0", mod_consts.const_str_digest_ad2094029011821e111452c0603108d0);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad2094029011821e111452c0603108d0) && "mod_consts.const_str_digest_ad2094029011821e111452c0603108d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_list_domains", mod_consts.const_str_plain_list_domains);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_domains) && "mod_consts.const_str_plain_list_domains");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253", mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253) && "mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_list_paths", mod_consts.const_str_plain_list_paths);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_paths) && "mod_consts.const_str_plain_list_paths");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3", mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3) && "mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_multiple_domains", mod_consts.const_str_plain_multiple_domains);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_domains) && "mod_consts.const_str_plain_multiple_domains");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd", mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd) && "mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30", mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30) && "mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_dict", mod_consts.const_str_plain_get_dict);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_dict) && "mod_consts.const_str_plain_get_dict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698", mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698) && "mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b", mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b) && "mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb", mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb) && "mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f", mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f) && "mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79", mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79) && "mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf", mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf) && "mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3", mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3) && "mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be", mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be) && "mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___setitem__", mod_consts.const_str_plain___setitem__);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_plain___setitem__) && "mod_consts.const_str_plain___setitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd", mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd) && "mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a", mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a) && "mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___delitem__", mod_consts.const_str_plain___delitem__);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_plain___delitem__) && "mod_consts.const_str_plain___delitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc", mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc) && "mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1", mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1) && "mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6", mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6) && "mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8", mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8) && "mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e", mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e) && "mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4", mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4) && "mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__find", mod_consts.const_str_plain__find);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_plain__find) && "mod_consts.const_str_plain__find");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4", mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4) && "mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7", mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7) && "mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e", mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e) && "mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4", mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4) && "mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getstate__", mod_consts.const_str_plain___getstate__);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__) && "mod_consts.const_str_plain___getstate__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831", mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831) && "mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a", mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a) && "mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___setstate__", mod_consts.const_str_plain___setstate__);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__) && "mod_consts.const_str_plain___setstate__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1", mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1) && "mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_924e792aa6746308f911f548d146050a", mod_consts.const_dict_924e792aa6746308f911f548d146050a);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_dict_924e792aa6746308f911f548d146050a) && "mod_consts.const_dict_924e792aa6746308f911f548d146050a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3", mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3) && "mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb", mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb) && "mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5", mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5) && "mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833", mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833) && "mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__copy_cookie_jar", mod_consts.const_str_plain__copy_cookie_jar);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_str_plain__copy_cookie_jar) && "mod_consts.const_str_plain__copy_cookie_jar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1", mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1) && "mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144", mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144) && "mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__CookieJarT_tuple", mod_consts.const_tuple_str_plain__CookieJarT_tuple);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__CookieJarT_tuple) && "mod_consts.const_tuple_str_plain__CookieJarT_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_bound_tuple", mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple) && "mod_consts.const_tuple_str_plain_bound_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CookieJarT", mod_consts.const_str_plain__CookieJarT);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_str_plain__CookieJarT) && "mod_consts.const_str_plain__CookieJarT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_true_tuple", mod_consts.const_tuple_none_true_tuple);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple) && "mod_consts.const_tuple_none_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98", mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98) && "mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89", mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89) && "mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f", mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f) && "mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4", mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4) && "mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_merge_cookies", mod_consts.const_str_plain_merge_cookies);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_str_plain_merge_cookies) && "mod_consts.const_str_plain_merge_cookies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade", mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade) && "mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2", mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2) && "mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_name_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_state_tuple", mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_state_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_request_tuple", mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_request_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple", mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain_self_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple", mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple) && "mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple", mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple) && "mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple", mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple) && "mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple", mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple);
assert(mod_consts_hash[315] == DEEP_HASH(tstate, mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple) && "mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple", mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple);
assert(mod_consts_hash[316] == DEEP_HASH(tstate, mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple) && "mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple", mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple);
assert(mod_consts_hash[317] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple", mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple);
assert(mod_consts_hash[318] == DEEP_HASH(tstate, mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple) && "mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple", mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple);
assert(mod_consts_hash[319] == DEEP_HASH(tstate, mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple) && "mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple", mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple);
assert(mod_consts_hash[320] == DEEP_HASH(tstate, mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple) && "mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple", mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple);
assert(mod_consts_hash[321] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple) && "mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple", mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple);
assert(mod_consts_hash[322] == DEEP_HASH(tstate, mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple) && "mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple", mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple);
assert(mod_consts_hash[323] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
assert(mod_consts_hash[324] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[325] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple", mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple);
assert(mod_consts_hash[326] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple", mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple);
assert(mod_consts_hash[327] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple", mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple);
assert(mod_consts_hash[328] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple", mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple);
assert(mod_consts_hash[329] == DEEP_HASH(tstate, mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple) && "mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple", mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple);
assert(mod_consts_hash[330] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple) && "mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple", mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple);
assert(mod_consts_hash[331] == DEEP_HASH(tstate, mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple) && "mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple", mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple);
assert(mod_consts_hash[332] == DEEP_HASH(tstate, mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple) && "mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple", mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple);
assert(mod_consts_hash[333] == DEEP_HASH(tstate, mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple) && "mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple", mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple);
assert(mod_consts_hash[334] == DEEP_HASH(tstate, mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple) && "mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_requests$cookies$CookieConflictError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieConflictError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieConflictError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieConflictError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieConflictError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$CookieJar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieJar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieJar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieJar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieJar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$MockRequest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockRequest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockRequest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockRequest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockRequest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$MockResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$Morsel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Morsel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Morsel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Morsel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Morsel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$MutableMapping(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableMapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableMapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableMapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableMapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$RequestsCookieJar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsCookieJar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsCookieJar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsCookieJar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsCookieJar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$_is_prepared(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__is_prepared);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_prepared);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_prepared, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_prepared);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_prepared, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__is_prepared);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__is_prepared);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_prepared);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$calendar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calendar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calendar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calendar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calendar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$cookiejar_from_dict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookiejar_from_dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookiejar_from_dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookiejar_from_dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookiejar_from_dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$cookielib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookielib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookielib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookielib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookielib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$create_cookie(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_cookie);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_cookie, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_cookie);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_cookie, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$morsel_to_cookie(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_morsel_to_cookie);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_morsel_to_cookie, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_morsel_to_cookie);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_morsel_to_cookie, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$overload(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$remove_cookie_by_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_remove_cookie_by_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_remove_cookie_by_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_remove_cookie_by_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_remove_cookie_by_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$to_native_string(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_native_string);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_native_string, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_native_string);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_native_string, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$urlunparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlunparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlunparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlunparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlunparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3d8ea9e7ff59ff5215893667902680a7;
static PyCodeObject *code_objects_d77a3db01d75efea1b75e6cfa76bd01d;
static PyCodeObject *code_objects_2622a849aff4876151ef6ae96ffc05ea;
static PyCodeObject *code_objects_5b41db841454f6c7698cd6460ff255b1;
static PyCodeObject *code_objects_9b8732d16e125f67793e18c5c8301251;
static PyCodeObject *code_objects_9da82cd899dea5031fa58246ee57bce4;
static PyCodeObject *code_objects_c933470137cb1798a7c147ac514fd1ae;
static PyCodeObject *code_objects_2f59978b35ab00845099ce2e7a15ad31;
static PyCodeObject *code_objects_0d48673789955c44cb157af5c44d0777;
static PyCodeObject *code_objects_3ab3ef40b96fb799d1f817fb87eb139f;
static PyCodeObject *code_objects_3e02ecb3b055567199ed9454770bd7e8;
static PyCodeObject *code_objects_f75f0f8af9a90f9779e162c06df1cf72;
static PyCodeObject *code_objects_d9dd4d75ca26c36eb54757d7aa286f8e;
static PyCodeObject *code_objects_2231a45a0a27e25f7be128b3af9bfde5;
static PyCodeObject *code_objects_b48967dcf4c3b1e2d4a00e452f827339;
static PyCodeObject *code_objects_f0f9548b9f56e1c7b7190582a49c5543;
static PyCodeObject *code_objects_45a31477fba1f99140699bc7951e7189;
static PyCodeObject *code_objects_cc12abfe149ba69ac5633b340062e9ad;
static PyCodeObject *code_objects_2a100677ddbb5b97528a19c802a998b1;
static PyCodeObject *code_objects_2188f2bda361c106a2f3b1319a80717a;
static PyCodeObject *code_objects_45158d87e63c4da61c2aeda5f1b03892;
static PyCodeObject *code_objects_2d817438bea6b575d7991b1a9d947f35;
static PyCodeObject *code_objects_516ae783eca24e7db519a1a4d97a7269;
static PyCodeObject *code_objects_5939100dd793d0712efde315196dd900;
static PyCodeObject *code_objects_d46a28eb9512288ac97fef4e2f64c66f;
static PyCodeObject *code_objects_862d6aa91d7951c3ab2d8351d5801173;
static PyCodeObject *code_objects_72022412b0f86e2875c0fa8f4e349f20;
static PyCodeObject *code_objects_500bcb7ce636aa53f60b83eee9e332e5;
static PyCodeObject *code_objects_fd14f25ede9fe8e963a1965741af8ba9;
static PyCodeObject *code_objects_daddc2a144670a280497b86ccc29c316;
static PyCodeObject *code_objects_d49da9baf8f974ad0c4722d9eb8a819a;
static PyCodeObject *code_objects_e8a86d75e3541410bc6bf36c837345df;
static PyCodeObject *code_objects_7e281233fd5bed47182c0e330e0ee3b0;
static PyCodeObject *code_objects_9f3f22f7b5c87cacda07ec9455399ff0;
static PyCodeObject *code_objects_0f7ab96607774cbfb8c471fac9d55761;
static PyCodeObject *code_objects_dbdcc3b4f4816cfa5982fd8503376bb0;
static PyCodeObject *code_objects_734d4416384dc622939e0e508b0c6922;
static PyCodeObject *code_objects_3807367e792c0d07ba2a0ee86ac911df;
static PyCodeObject *code_objects_6d1d77730da452d46d5ba1218cf298e8;
static PyCodeObject *code_objects_eaa256edb584fbc4182d7d40afafa610;
static PyCodeObject *code_objects_a7c9ac5ff4b931e471b92033cb952deb;
static PyCodeObject *code_objects_1571c92d4216c818ea5a2c505b4402f6;
static PyCodeObject *code_objects_cb6c8b2f3b6f83391d61c41d82823d54;
static PyCodeObject *code_objects_2ce7781484a36dfbb8c7da496b33c3b2;
static PyCodeObject *code_objects_a35686a6c1bbdf8257b333976c2f9360;
static PyCodeObject *code_objects_ba87b3cd14745f9b70b1b2b78b62a41b;
static PyCodeObject *code_objects_9a14f38810ed38523b29022732d86f0c;
static PyCodeObject *code_objects_04ea596b15cbc15852689638674e1ae0;
static PyCodeObject *code_objects_4280e41b44fda4819d071d5374fa916f;
static PyCodeObject *code_objects_3d6c91321ab42e2c62af655ea3a8d4d5;
static PyCodeObject *code_objects_47622edade0ad71494e846a4ac7e8eef;
static PyCodeObject *code_objects_f752793d7dd1eeb61b824d9c4d361698;
static PyCodeObject *code_objects_5fe287e22d7473f69a7878e9fae78ee3;
static PyCodeObject *code_objects_80fdc7c29bf3ab5a3091eb0b626d60cd;
static PyCodeObject *code_objects_2eda94e7ccd8810cff1dca6868a0f1b5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade); CHECK_OBJECT(module_filename_obj);
code_objects_3d8ea9e7ff59ff5215893667902680a7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2, NULL, NULL, 0, 0, 0);
code_objects_d77a3db01d75efea1b75e6cfa76bd01d = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MockRequest, mod_consts.const_str_plain_MockRequest, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2622a849aff4876151ef6ae96ffc05ea = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RequestsCookieJar, mod_consts.const_str_plain_RequestsCookieJar, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5b41db841454f6c7698cd6460ff255b1 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___contains__, mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_9b8732d16e125f67793e18c5c8301251 = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___delitem__, mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_9da82cd899dea5031fa58246ee57bce4 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_c933470137cb1798a7c147ac514fd1ae = MAKE_CODE_OBJECT(module_filename_obj, 454, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 1, 0, 0);
code_objects_2f59978b35ab00845099ce2e7a15ad31 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_0d48673789955c44cb157af5c44d0777 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple, NULL, 2, 0, 0);
code_objects_3ab3ef40b96fb799d1f817fb87eb139f = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_3e02ecb3b055567199ed9454770bd7e8 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___setitem__, mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_f75f0f8af9a90f9779e162c06df1cf72 = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 2, 0, 0);
code_objects_d9dd4d75ca26c36eb54757d7aa286f8e = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__copy_cookie_jar, mod_consts.const_str_plain__copy_cookie_jar, mod_consts.const_tuple_94a2cdc6f718a6d05fcad3e6975e8619_tuple, NULL, 1, 0, 0);
code_objects_2231a45a0a27e25f7be128b3af9bfde5 = MAKE_CODE_OBJECT(module_filename_obj, 401, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__find, mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4, mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, NULL, 4, 0, 0);
code_objects_b48967dcf4c3b1e2d4a00e452f827339 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__find_no_duplicates, mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e, mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, NULL, 4, 0, 0);
code_objects_f0f9548b9f56e1c7b7190582a49c5543 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add_header, mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple, NULL, 3, 0, 0);
code_objects_45a31477fba1f99140699bc7951e7189 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add_unredirected_header, mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_cc12abfe149ba69ac5633b340062e9ad = MAKE_CODE_OBJECT(module_filename_obj, 564, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple, NULL, 3, 0, 0);
code_objects_2a100677ddbb5b97528a19c802a998b1 = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_tuple_129c69a03487826b088c2e98299f1ab3_tuple, NULL, 3, 0, 0);
code_objects_2188f2bda361c106a2f3b1319a80717a = MAKE_CODE_OBJECT(module_filename_obj, 579, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, NULL, 3, 0, 0);
code_objects_45158d87e63c4da61c2aeda5f1b03892 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3, mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple, NULL, 1, 0, 0);
code_objects_2d817438bea6b575d7991b1a9d947f35 = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_cookie, mod_consts.const_str_plain_create_cookie, mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple, NULL, 2, 0, 0);
code_objects_516ae783eca24e7db519a1a4d97a7269 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extract_cookies_to_jar, mod_consts.const_str_plain_extract_cookies_to_jar, mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, NULL, 3, 0, 0);
code_objects_5939100dd793d0712efde315196dd900 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_get, mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0, mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, NULL, 5, 0, 0);
code_objects_d46a28eb9512288ac97fef4e2f64c66f = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_cookie_header, mod_consts.const_str_plain_get_cookie_header, mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, NULL, 2, 0, 0);
code_objects_862d6aa91d7951c3ab2d8351d5801173 = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_dict, mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698, mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, NULL, 3, 0, 0);
code_objects_72022412b0f86e2875c0fa8f4e349f20 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_full_url, mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b, mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, NULL, 1, 0, 0);
code_objects_500bcb7ce636aa53f60b83eee9e332e5 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_header, mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, NULL, 3, 0, 0);
code_objects_fd14f25ede9fe8e963a1965741af8ba9 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_host, mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_daddc2a144670a280497b86ccc29c316 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_new_headers, mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d49da9baf8f974ad0c4722d9eb8a819a = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_origin_req_host, mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e8a86d75e3541410bc6bf36c837345df = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_policy, mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7e281233fd5bed47182c0e330e0ee3b0 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_type, mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9f3f22f7b5c87cacda07ec9455399ff0 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getheaders, mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_0f7ab96607774cbfb8c471fac9d55761 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has_header, mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_dbdcc3b4f4816cfa5982fd8503376bb0 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_host, mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_734d4416384dc622939e0e508b0c6922 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_info, mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3807367e792c0d07ba2a0ee86ac911df = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_unverifiable, mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6d1d77730da452d46d5ba1218cf298e8 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_ad2094029011821e111452c0603108d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eaa256edb584fbc4182d7d40afafa610 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iteritems, mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_a7c9ac5ff4b931e471b92033cb952deb = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iterkeys, mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_1571c92d4216c818ea5a2c505b4402f6 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_itervalues, mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_cb6c8b2f3b6f83391d61c41d82823d54 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_keys, mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2ce7781484a36dfbb8c7da496b33c3b2 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list_domains, mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_a35686a6c1bbdf8257b333976c2f9360 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_list_paths, mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3, mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_ba87b3cd14745f9b70b1b2b78b62a41b = MAKE_CODE_OBJECT(module_filename_obj, 604, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_merge_cookies, mod_consts.const_str_plain_merge_cookies, mod_consts.const_tuple_197715a25a75c90b290e7a9e934c908c_tuple, NULL, 2, 0, 0);
code_objects_9a14f38810ed38523b29022732d86f0c = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_morsel_to_cookie, mod_consts.const_str_plain_morsel_to_cookie, mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, NULL, 1, 0, 0);
code_objects_04ea596b15cbc15852689638674e1ae0 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_multiple_domains, mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_4280e41b44fda4819d071d5374fa916f = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_origin_req_host, mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3d6c91321ab42e2c62af655ea3a8d4d5 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_remove_cookie_by_name, mod_consts.const_str_plain_remove_cookie_by_name, mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple, NULL, 4, 0, 0);
code_objects_47622edade0ad71494e846a4ac7e8eef = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set, mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a, mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, NULL, 3, 0, 0);
code_objects_f752793d7dd1eeb61b824d9c4d361698 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_cookie, mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6, mod_consts.const_tuple_f26c4cd3b5c5454dfd4be869fd90e00e_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_5fe287e22d7473f69a7878e9fae78ee3 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_unverifiable, mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_80fdc7c29bf3ab5a3091eb0b626d60cd = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e, mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_2eda94e7ccd8810cff1dca6868a0f1b5 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_values, mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__10_add_unredirected_header(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__11_get_new_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__12_unverifiable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__13_origin_req_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__14_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__15___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__16_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__17_getheaders(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__18_extract_cookies_to_jar(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__19_get_cookie_header(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__20_remove_cookie_by_name(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__21_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__22_set(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__23_iterkeys(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__24_keys(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__25_itervalues(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__26_values(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__27_iteritems(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__28_items(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__29_list_domains(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__2_get_type(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__30_list_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__31_multiple_domains(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__32_get_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__33___iter__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__34___contains__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__35___getitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__36___setitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__37___delitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__38_set_cookie(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__39_update(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__3_get_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__40__find(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__41__find_no_duplicates(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__42___getstate__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__43___setstate__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__44_copy(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__45_get_policy(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__46__copy_cookie_jar(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__47_create_cookie(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__48_morsel_to_cookie(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__49_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__4_get_origin_req_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__50_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__51_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__52_merge_cookies(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__5_get_full_url(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__6_is_unverifiable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__7_has_header(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__8_get_header(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__9_add_header(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$cookies$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2f59978b35ab00845099ce2e7a15ad31, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__1___init__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__1___init__ = cache_frame_frame_requests$cookies$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__1___init__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__1___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$_is_prepared(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_prepared);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_requests$cookies$$$function__1___init__->m_frame.f_lineno = 46;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
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
frame_frame_requests$cookies$$$function__1___init__->m_frame.f_lineno = 46;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 46;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_request);
tmp_ass_attr_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__r, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__new_headers, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_called_value_2 = module_var_accessor_requests$cookies$urlparse(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__1___init__->m_frame.f_lineno = 49;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, const_str_plain_type, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__1___init__,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__1___init__ == cache_frame_frame_requests$cookies$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__1___init__);
    cache_frame_frame_requests$cookies$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__1___init__);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__2_get_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__2_get_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__2_get_type = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__2_get_type)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__2_get_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__2_get_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__2_get_type = MAKE_FUNCTION_FRAME(tstate, code_objects_7e281233fd5bed47182c0e330e0ee3b0, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__2_get_type->m_type_description == NULL);
frame_frame_requests$cookies$$$function__2_get_type = cache_frame_frame_requests$cookies$$$function__2_get_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__2_get_type);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__2_get_type) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__2_get_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__2_get_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__2_get_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__2_get_type,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__2_get_type == cache_frame_frame_requests$cookies$$$function__2_get_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__2_get_type);
    cache_frame_frame_requests$cookies$$$function__2_get_type = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__2_get_type);

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


static PyObject *impl_requests$cookies$$$function__3_get_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__3_get_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__3_get_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__3_get_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__3_get_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__3_get_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__3_get_host = MAKE_FUNCTION_FRAME(tstate, code_objects_fd14f25ede9fe8e963a1965741af8ba9, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__3_get_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__3_get_host = cache_frame_frame_requests$cookies$$$function__3_get_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__3_get_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__3_get_host) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_requests$cookies$urlparse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__3_get_host->m_frame.f_lineno = 55;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_netloc);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__3_get_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__3_get_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__3_get_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__3_get_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__3_get_host == cache_frame_frame_requests$cookies$$$function__3_get_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__3_get_host);
    cache_frame_frame_requests$cookies$$$function__3_get_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__3_get_host);

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


static PyObject *impl_requests$cookies$$$function__4_get_origin_req_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__4_get_origin_req_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host = MAKE_FUNCTION_FRAME(tstate, code_objects_d49da9baf8f974ad0c4722d9eb8a819a, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__4_get_origin_req_host = cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__4_get_origin_req_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__4_get_origin_req_host) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__4_get_origin_req_host->m_frame.f_lineno = 58;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_host);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__4_get_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__4_get_origin_req_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__4_get_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__4_get_origin_req_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__4_get_origin_req_host == cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host);
    cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__4_get_origin_req_host);

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


static PyObject *impl_requests$cookies$$$function__5_get_full_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_host = NULL;
PyObject *var_parsed = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__5_get_full_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__5_get_full_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__5_get_full_url)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__5_get_full_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__5_get_full_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__5_get_full_url = MAKE_FUNCTION_FRAME(tstate, code_objects_72022412b0f86e2875c0fa8f4e349f20, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__5_get_full_url->m_type_description == NULL);
frame_frame_requests$cookies$$$function__5_get_full_url = cache_frame_frame_requests$cookies$$$function__5_get_full_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__5_get_full_url);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__5_get_full_url) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 63;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_Host_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
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
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__r);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
tmp_called_value_2 = module_var_accessor_requests$cookies$to_native_string(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_native_string);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__r);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_Host;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 66;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_2,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0),
        mod_consts.const_tuple_str_plain_encoding_tuple
    );
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
tmp_called_value_3 = module_var_accessor_requests$cookies$urlparse(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__r);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 67;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_parsed;
    var_parsed = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_11;
tmp_called_value_4 = module_var_accessor_requests$cookies$urlunparse(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlunparse);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed);
tmp_expression_value_11 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_scheme);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 6);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
CHECK_OBJECT(var_host);
tmp_list_element_1 = var_host;
PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_12 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_path);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_13 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_params);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_14 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_query);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_15 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_fragment);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 69;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__5_get_full_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__5_get_full_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__5_get_full_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__5_get_full_url,
    type_description_1,
    par_self,
    var_host,
    var_parsed
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__5_get_full_url == cache_frame_frame_requests$cookies$$$function__5_get_full_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__5_get_full_url);
    cache_frame_frame_requests$cookies$$$function__5_get_full_url = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__5_get_full_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
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


static PyObject *impl_requests$cookies$$$function__7_has_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__7_has_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__7_has_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__7_has_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__7_has_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__7_has_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__7_has_header = MAKE_FUNCTION_FRAME(tstate, code_objects_0f7ab96607774cbfb8c471fac9d55761, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__7_has_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__7_has_header = cache_frame_frame_requests$cookies$$$function__7_has_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__7_has_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__7_has_header) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__r);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_2 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__new_headers);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__7_has_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__7_has_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__7_has_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__7_has_header,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__7_has_header == cache_frame_frame_requests$cookies$$$function__7_has_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__7_has_header);
    cache_frame_frame_requests$cookies$$$function__7_has_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__7_has_header);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__8_get_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_default = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__8_get_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__8_get_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__8_get_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__8_get_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__8_get_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__8_get_header = MAKE_FUNCTION_FRAME(tstate, code_objects_500bcb7ce636aa53f60b83eee9e332e5, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__8_get_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__8_get_header = cache_frame_frame_requests$cookies$$$function__8_get_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__8_get_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__8_get_header) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__new_headers);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
CHECK_OBJECT(par_default);
tmp_args_element_value_4 = par_default;
frame_frame_requests$cookies$$$function__8_get_header->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__8_get_header->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__8_get_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__8_get_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__8_get_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__8_get_header,
    type_description_1,
    par_self,
    par_name,
    par_default
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__8_get_header == cache_frame_frame_requests$cookies$$$function__8_get_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__8_get_header);
    cache_frame_frame_requests$cookies$$$function__8_get_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__8_get_header);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__9_add_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_val = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__9_add_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__9_add_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__9_add_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__9_add_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__9_add_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__9_add_header = MAKE_FUNCTION_FRAME(tstate, code_objects_f0f9548b9f56e1c7b7190582a49c5543, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__9_add_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__9_add_header = cache_frame_frame_requests$cookies$$$function__9_add_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__9_add_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__9_add_header) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
frame_frame_requests$cookies$$$function__9_add_header->m_frame.f_lineno = 91;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__9_add_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__9_add_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__9_add_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__9_add_header,
    type_description_1,
    par_self,
    par_key,
    par_val
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__9_add_header == cache_frame_frame_requests$cookies$$$function__9_add_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__9_add_header);
    cache_frame_frame_requests$cookies$$$function__9_add_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__9_add_header);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_requests$cookies$$$function__10_add_unredirected_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__10_add_unredirected_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header = MAKE_FUNCTION_FRAME(tstate, code_objects_45a31477fba1f99140699bc7951e7189, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__10_add_unredirected_header = cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__10_add_unredirected_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__10_add_unredirected_header) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_value);
tmp_ass_subvalue_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_ass_subscript_1 = par_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__10_add_unredirected_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__10_add_unredirected_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__10_add_unredirected_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__10_add_unredirected_header,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__10_add_unredirected_header == cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header);
    cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__10_add_unredirected_header);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__11_get_new_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__11_get_new_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__11_get_new_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__11_get_new_headers)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__11_get_new_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__11_get_new_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__11_get_new_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_daddc2a144670a280497b86ccc29c316, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__11_get_new_headers->m_type_description == NULL);
frame_frame_requests$cookies$$$function__11_get_new_headers = cache_frame_frame_requests$cookies$$$function__11_get_new_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__11_get_new_headers);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__11_get_new_headers) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new_headers);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__11_get_new_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__11_get_new_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__11_get_new_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__11_get_new_headers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__11_get_new_headers == cache_frame_frame_requests$cookies$$$function__11_get_new_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__11_get_new_headers);
    cache_frame_frame_requests$cookies$$$function__11_get_new_headers = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__11_get_new_headers);

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


static PyObject *impl_requests$cookies$$$function__12_unverifiable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__12_unverifiable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__12_unverifiable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__12_unverifiable)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__12_unverifiable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__12_unverifiable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__12_unverifiable = MAKE_FUNCTION_FRAME(tstate, code_objects_5fe287e22d7473f69a7878e9fae78ee3, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__12_unverifiable->m_type_description == NULL);
frame_frame_requests$cookies$$$function__12_unverifiable = cache_frame_frame_requests$cookies$$$function__12_unverifiable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__12_unverifiable);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__12_unverifiable) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__12_unverifiable->m_frame.f_lineno = 103;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_unverifiable);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__12_unverifiable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__12_unverifiable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__12_unverifiable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__12_unverifiable,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__12_unverifiable == cache_frame_frame_requests$cookies$$$function__12_unverifiable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__12_unverifiable);
    cache_frame_frame_requests$cookies$$$function__12_unverifiable = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__12_unverifiable);

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


static PyObject *impl_requests$cookies$$$function__13_origin_req_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__13_origin_req_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__13_origin_req_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__13_origin_req_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__13_origin_req_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__13_origin_req_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__13_origin_req_host = MAKE_FUNCTION_FRAME(tstate, code_objects_4280e41b44fda4819d071d5374fa916f, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__13_origin_req_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__13_origin_req_host = cache_frame_frame_requests$cookies$$$function__13_origin_req_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__13_origin_req_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__13_origin_req_host) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__13_origin_req_host->m_frame.f_lineno = 107;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_origin_req_host);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__13_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__13_origin_req_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__13_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__13_origin_req_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__13_origin_req_host == cache_frame_frame_requests$cookies$$$function__13_origin_req_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__13_origin_req_host);
    cache_frame_frame_requests$cookies$$$function__13_origin_req_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__13_origin_req_host);

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


static PyObject *impl_requests$cookies$$$function__14_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__14_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__14_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__14_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__14_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__14_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__14_host = MAKE_FUNCTION_FRAME(tstate, code_objects_dbdcc3b4f4816cfa5982fd8503376bb0, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__14_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__14_host = cache_frame_frame_requests$cookies$$$function__14_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__14_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__14_host) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__14_host->m_frame.f_lineno = 111;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_host);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__14_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__14_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__14_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__14_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__14_host == cache_frame_frame_requests$cookies$$$function__14_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__14_host);
    cache_frame_frame_requests$cookies$$$function__14_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__14_host);

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


static PyObject *impl_requests$cookies$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0d48673789955c44cb157af5c44d0777, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__15___init__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__15___init__ = cache_frame_frame_requests$cookies$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__15___init__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_headers);
tmp_ass_attr_value_1 = par_headers;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__headers, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__15___init__,
    type_description_1,
    par_self,
    par_headers
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__15___init__ == cache_frame_frame_requests$cookies$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__15___init__);
    cache_frame_frame_requests$cookies$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__15___init__);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__16_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__16_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__16_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__16_info)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__16_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__16_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__16_info = MAKE_FUNCTION_FRAME(tstate, code_objects_734d4416384dc622939e0e508b0c6922, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__16_info->m_type_description == NULL);
frame_frame_requests$cookies$$$function__16_info = cache_frame_frame_requests$cookies$$$function__16_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__16_info);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__16_info) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__headers);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__16_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__16_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__16_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__16_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__16_info == cache_frame_frame_requests$cookies$$$function__16_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__16_info);
    cache_frame_frame_requests$cookies$$$function__16_info = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__16_info);

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


static PyObject *impl_requests$cookies$$$function__17_getheaders(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__17_getheaders;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__17_getheaders = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__17_getheaders)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__17_getheaders);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__17_getheaders == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__17_getheaders = MAKE_FUNCTION_FRAME(tstate, code_objects_9f3f22f7b5c87cacda07ec9455399ff0, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__17_getheaders->m_type_description == NULL);
frame_frame_requests$cookies$$$function__17_getheaders = cache_frame_frame_requests$cookies$$$function__17_getheaders;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__17_getheaders);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__17_getheaders) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__headers);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_requests$cookies$$$function__17_getheaders->m_frame.f_lineno = 132;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getheaders, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__17_getheaders, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__17_getheaders->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__17_getheaders, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__17_getheaders,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__17_getheaders == cache_frame_frame_requests$cookies$$$function__17_getheaders) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__17_getheaders);
    cache_frame_frame_requests$cookies$$$function__17_getheaders = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__17_getheaders);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__18_extract_cookies_to_jar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_jar = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_response = python_pars[2];
PyObject *var_req = NULL;
PyObject *var_res = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = MAKE_FUNCTION_FRAME(tstate, code_objects_516ae783eca24e7db519a1a4d97a7269, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_type_description == NULL);
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain__original_response);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_response);
tmp_expression_value_2 = par_response;
tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__original_response);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$MockRequest(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MockRequest);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame.f_lineno = 147;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_req;
    var_req = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = module_var_accessor_requests$cookies$MockResponse(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MockResponse);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_expression_value_4 = par_response;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__original_response);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_msg);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame.f_lineno = 149;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_jar);
tmp_called_instance_1 = par_jar;
CHECK_OBJECT(var_res);
tmp_args_element_value_3 = var_res;
CHECK_OBJECT(var_req);
tmp_args_element_value_4 = var_req;
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_extract_cookies,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar,
    type_description_1,
    par_jar,
    par_request,
    par_response,
    var_req,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar == cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);
    cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);

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
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_res);
var_res = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__19_get_cookie_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_jar = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_r = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__19_get_cookie_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__19_get_cookie_header = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__19_get_cookie_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__19_get_cookie_header = MAKE_FUNCTION_FRAME(tstate, code_objects_d46a28eb9512288ac97fef4e2f64c66f, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__19_get_cookie_header = cache_frame_frame_requests$cookies$$$function__19_get_cookie_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__19_get_cookie_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__19_get_cookie_header) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$MockRequest(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MockRequest);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 159;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_r;
    var_r = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_jar);
tmp_called_instance_1 = par_jar;
CHECK_OBJECT(var_r);
tmp_args_element_value_2 = var_r;
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 160;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add_cookie_header, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_r);
tmp_called_instance_2 = var_r;
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 161;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_new_headers);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 161;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_Cookie_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__19_get_cookie_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__19_get_cookie_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__19_get_cookie_header,
    type_description_1,
    par_jar,
    par_request,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__19_get_cookie_header == cache_frame_frame_requests$cookies$$$function__19_get_cookie_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header);
    cache_frame_frame_requests$cookies$$$function__19_get_cookie_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__19_get_cookie_header);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_r);
CHECK_OBJECT(var_r);
Py_DECREF(var_r);
var_r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_r);
var_r = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__20_remove_cookie_by_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cookiejar = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_domain = python_pars[2];
PyObject *par_path = python_pars[3];
PyObject *var_clearables = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__20_remove_cookie_by_name;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_clearables;
    var_clearables = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = MAKE_FUNCTION_FRAME(tstate, code_objects_3d6c91321ab42e2c62af655ea3a8d4d5, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name->m_type_description == NULL);
frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__20_remove_cookie_by_name) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cookiejar);
tmp_iter_arg_1 = par_cookiejar;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
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
exception_lineno = 172;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_cmp_expr_right_1 = par_name;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_2 = par_domain;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_3 = par_domain;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooo";
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
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_4 = par_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_5 = par_path;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_start_1;
branch_no_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
if (var_clearables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clearables);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_clearables;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_domain);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_item_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cookie);
tmp_expression_value_5 = var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_path);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_cookie);
tmp_expression_value_6 = var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_name);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
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
PyObject *tmp_iter_arg_2;
if (var_clearables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clearables);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_2 = var_clearables;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 181;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooo";
    goto try_except_handler_4;
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
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooooo";
    goto try_except_handler_5;
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
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *old = par_domain;
    par_domain = tmp_assign_source_11;
    Py_INCREF(par_domain);
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
    PyObject *old = par_path;
    par_path = tmp_assign_source_12;
    Py_INCREF(par_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = par_name;
    par_name = tmp_assign_source_13;
    Py_INCREF(par_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 182;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}

tmp_expression_value_7 = par_cookiejar;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_domain);
tmp_args_element_value_1 = par_domain;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
frame_frame_requests$cookies$$$function__20_remove_cookie_by_name->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__20_remove_cookie_by_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__20_remove_cookie_by_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__20_remove_cookie_by_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__20_remove_cookie_by_name,
    type_description_1,
    par_cookiejar,
    par_name,
    par_domain,
    par_path,
    var_clearables,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__20_remove_cookie_by_name == cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);
    cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);

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
Py_XDECREF(par_name);
par_name = NULL;
Py_XDECREF(par_domain);
par_domain = NULL;
Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_clearables);
var_clearables = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_name);
par_name = NULL;
Py_XDECREF(par_domain);
par_domain = NULL;
Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_clearables);
var_clearables = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cookiejar);
Py_DECREF(par_cookiejar);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cookiejar);
Py_DECREF(par_cookiejar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__21_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_default = python_pars[2];
PyObject *par_domain = python_pars[3];
PyObject *par_path = python_pars[4];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__21_get;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__21_get = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__21_get)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__21_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__21_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__21_get = MAKE_FUNCTION_FRAME(tstate, code_objects_5939100dd793d0712efde315196dd900, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__21_get->m_type_description == NULL);
frame_frame_requests$cookies$$$function__21_get = cache_frame_frame_requests$cookies$$$function__21_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__21_get);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__21_get) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_domain);
tmp_args_element_value_2 = par_domain;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_requests$cookies$$$function__21_get->m_frame.f_lineno = 225;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__find_no_duplicates,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__21_get, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__21_get, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
CHECK_OBJECT(par_default);
tmp_return_value = par_default;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 224;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__21_get->m_frame)) {
        frame_frame_requests$cookies$$$function__21_get->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__21_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__21_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__21_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__21_get,
    type_description_1,
    par_self,
    par_name,
    par_default,
    par_domain,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__21_get == cache_frame_frame_requests$cookies$$$function__21_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__21_get);
    cache_frame_frame_requests$cookies$$$function__21_get = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__21_get);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__22_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *var_c = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__22_set;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__22_set = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__22_set)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__22_set);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__22_set == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__22_set = MAKE_FUNCTION_FRAME(tstate, code_objects_47622edade0ad71494e846a4ac7e8eef, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__22_set->m_type_description == NULL);
frame_frame_requests$cookies$$$function__22_set = cache_frame_frame_requests$cookies$$$function__22_set;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__22_set);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__22_set) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_called_value_1 = module_var_accessor_requests$cookies$remove_cookie_by_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_remove_cookie_by_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_name);
tmp_kw_call_arg_value_1_1 = par_name;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_domain;
tmp_kw_call_dict_value_0_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    tmp_kw_call_dict_value_0_1 = Py_None;
    Py_INCREF_IMMORTAL(tmp_kw_call_dict_value_0_1);
}
assert(!(tmp_kw_call_dict_value_0_1 == NULL));
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_2 = par_kwargs;
tmp_key_value_2 = const_str_plain_path;
tmp_kw_call_dict_value_1_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    tmp_kw_call_dict_value_1_1 = Py_None;
    Py_INCREF_IMMORTAL(tmp_kw_call_dict_value_1_1);
}
assert(!(tmp_kw_call_dict_value_1_1 == NULL));
frame_frame_requests$cookies$$$function__22_set->m_frame.f_lineno = 238;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_value);
tmp_isinstance_inst_1 = par_value;
tmp_isinstance_cls_1 = module_var_accessor_requests$cookies$Morsel(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Morsel);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_requests$cookies$morsel_to_cookie(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_morsel_to_cookie);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_requests$cookies$$$function__22_set->m_frame.f_lineno = 244;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_c;
    var_c = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$cookies$create_cookie(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cookie);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_tuple_element_1 = par_name;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_c;
    var_c = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_c);
tmp_args_element_value_2 = var_c;
frame_frame_requests$cookies$$$function__22_set->m_frame.f_lineno = 247;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_cookie, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__22_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__22_set->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__22_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__22_set,
    type_description_1,
    par_self,
    par_name,
    par_value,
    par_kwargs,
    var_c
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__22_set == cache_frame_frame_requests$cookies$$$function__22_set) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__22_set);
    cache_frame_frame_requests$cookies$$$function__22_set = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__22_set);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_c);
tmp_return_value = var_c;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_c);
var_c = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_c);
var_c = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__23_iterkeys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals {
PyObject *var_cookie;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals *generator_heap = (struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cookie = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a7c9ac5ff4b931e471b92033cb952deb, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 256;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_cookie;
    generator_heap->var_cookie = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_2 = generator_heap->var_cookie;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "co";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_cookie
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

Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_context,
        module_requests$cookies,
        mod_consts.const_str_plain_iterkeys,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        code_objects_a7c9ac5ff4b931e471b92033cb952deb,
        closure,
        1,
#if 1
        sizeof(struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals)
#else
        0
#endif
    );
}


static PyObject *impl_requests$cookies$$$function__24_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__24_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__24_keys = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__24_keys)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__24_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__24_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__24_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_cb6c8b2f3b6f83391d61c41d82823d54, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__24_keys->m_type_description == NULL);
frame_frame_requests$cookies$$$function__24_keys = cache_frame_frame_requests$cookies$$$function__24_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__24_keys);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__24_keys) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_iterkeys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__24_keys->m_frame.f_lineno = 265;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__24_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__24_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__24_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__24_keys,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__24_keys == cache_frame_frame_requests$cookies$$$function__24_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__24_keys);
    cache_frame_frame_requests$cookies$$$function__24_keys = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__24_keys);

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


static PyObject *impl_requests$cookies$$$function__25_itervalues(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals {
PyObject *var_cookie;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals *generator_heap = (struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cookie = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1571c92d4216c818ea5a2c505b4402f6, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 273;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_cookie;
    generator_heap->var_cookie = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_2 = generator_heap->var_cookie;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "co";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_cookie
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

Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_context,
        module_requests$cookies,
        mod_consts.const_str_plain_itervalues,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        code_objects_1571c92d4216c818ea5a2c505b4402f6,
        closure,
        1,
#if 1
        sizeof(struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals)
#else
        0
#endif
    );
}


static PyObject *impl_requests$cookies$$$function__26_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__26_values;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__26_values = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__26_values)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__26_values);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__26_values == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__26_values = MAKE_FUNCTION_FRAME(tstate, code_objects_2eda94e7ccd8810cff1dca6868a0f1b5, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__26_values->m_type_description == NULL);
frame_frame_requests$cookies$$$function__26_values = cache_frame_frame_requests$cookies$$$function__26_values;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__26_values);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__26_values) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_itervalues);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__26_values->m_frame.f_lineno = 282;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__26_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__26_values->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__26_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__26_values,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__26_values == cache_frame_frame_requests$cookies$$$function__26_values) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__26_values);
    cache_frame_frame_requests$cookies$$$function__26_values = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__26_values);

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


static PyObject *impl_requests$cookies$$$function__27_iteritems(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals {
PyObject *var_cookie;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals *generator_heap = (struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cookie = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_eaa256edb584fbc4182d7d40afafa610, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 290;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_cookie;
    generator_heap->var_cookie = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_2 = generator_heap->var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_3 = generator_heap->var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "co";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "co";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_cookie
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

Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_context,
        module_requests$cookies,
        mod_consts.const_str_plain_iteritems,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        code_objects_eaa256edb584fbc4182d7d40afafa610,
        closure,
        1,
#if 1
        sizeof(struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals)
#else
        0
#endif
    );
}


static PyObject *impl_requests$cookies$$$function__28_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__28_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__28_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__28_items)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__28_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__28_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__28_items = MAKE_FUNCTION_FRAME(tstate, code_objects_6d1d77730da452d46d5ba1218cf298e8, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__28_items->m_type_description == NULL);
frame_frame_requests$cookies$$$function__28_items = cache_frame_frame_requests$cookies$$$function__28_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__28_items);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__28_items) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_iteritems);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__28_items->m_frame.f_lineno = 300;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__28_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__28_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__28_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__28_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__28_items == cache_frame_frame_requests$cookies$$$function__28_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__28_items);
    cache_frame_frame_requests$cookies$$$function__28_items = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__28_items);

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


static PyObject *impl_requests$cookies$$$function__29_list_domains(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_domains = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__29_list_domains;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__29_list_domains = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_domains;
    var_domains = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__29_list_domains)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__29_list_domains);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__29_list_domains == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__29_list_domains = MAKE_FUNCTION_FRAME(tstate, code_objects_2ce7781484a36dfbb8c7da496b33c3b2, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__29_list_domains->m_type_description == NULL);
frame_frame_requests$cookies$$$function__29_list_domains = cache_frame_frame_requests$cookies$$$function__29_list_domains;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__29_list_domains);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__29_list_domains) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 305;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (var_domains == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_domains;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_2;
if (var_domains == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_domains;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooo";
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
if (var_domains == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_domains;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__29_list_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__29_list_domains->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__29_list_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__29_list_domains,
    type_description_1,
    par_self,
    var_domains,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__29_list_domains == cache_frame_frame_requests$cookies$$$function__29_list_domains) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__29_list_domains);
    cache_frame_frame_requests$cookies$$$function__29_list_domains = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__29_list_domains);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__30_list_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_paths = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__30_list_paths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__30_list_paths = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_paths;
    var_paths = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__30_list_paths)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__30_list_paths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__30_list_paths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__30_list_paths = MAKE_FUNCTION_FRAME(tstate, code_objects_a35686a6c1bbdf8257b333976c2f9360, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__30_list_paths->m_type_description == NULL);
frame_frame_requests$cookies$$$function__30_list_paths = cache_frame_frame_requests$cookies$$$function__30_list_paths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__30_list_paths);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__30_list_paths) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 313;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (var_paths == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 314;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_paths;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_2;
if (var_paths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 315;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_paths;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
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
if (var_paths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_paths;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__30_list_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__30_list_paths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__30_list_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__30_list_paths,
    type_description_1,
    par_self,
    var_paths,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__30_list_paths == cache_frame_frame_requests$cookies$$$function__30_list_paths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__30_list_paths);
    cache_frame_frame_requests$cookies$$$function__30_list_paths = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__30_list_paths);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_paths);
var_paths = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_paths);
var_paths = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__31_multiple_domains(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_domains = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__31_multiple_domains;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__31_multiple_domains = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_domains;
    var_domains = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__31_multiple_domains)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__31_multiple_domains);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__31_multiple_domains == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__31_multiple_domains = MAKE_FUNCTION_FRAME(tstate, code_objects_04ea596b15cbc15852689638674e1ae0, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__31_multiple_domains->m_type_description == NULL);
frame_frame_requests$cookies$$$function__31_multiple_domains = cache_frame_frame_requests$cookies$$$function__31_multiple_domains;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__31_multiple_domains);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__31_multiple_domains) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 325;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
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
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (var_domains == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 326;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_2 = var_domains;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_3;
if (var_domains == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 328;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_domains;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_domain);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__31_multiple_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__31_multiple_domains->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__31_multiple_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__31_multiple_domains,
    type_description_1,
    par_self,
    var_domains,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__31_multiple_domains == cache_frame_frame_requests$cookies$$$function__31_multiple_domains) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__31_multiple_domains);
    cache_frame_frame_requests$cookies$$$function__31_multiple_domains = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__31_multiple_domains);

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__32_get_dict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_domain = python_pars[1];
PyObject *par_path = python_pars[2];
PyObject *var_dictionary = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__32_get_dict;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__32_get_dict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = var_dictionary;
    var_dictionary = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__32_get_dict)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__32_get_dict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__32_get_dict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__32_get_dict = MAKE_FUNCTION_FRAME(tstate, code_objects_862d6aa91d7951c3ab2d8351d5801173, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__32_get_dict->m_type_description == NULL);
frame_frame_requests$cookies$$$function__32_get_dict = cache_frame_frame_requests$cookies$$$function__32_get_dict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__32_get_dict);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__32_get_dict) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
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
exception_lineno = 341;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_1 = par_domain;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_domain);
tmp_cmp_expr_right_2 = par_domain;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_3 = par_path;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_4 = par_path;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (var_dictionary == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictionary);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 345;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_dictionary;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 345;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooo";
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
if (var_dictionary == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictionary);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 346;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_dictionary;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__32_get_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__32_get_dict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__32_get_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__32_get_dict,
    type_description_1,
    par_self,
    par_domain,
    par_path,
    var_dictionary,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__32_get_dict == cache_frame_frame_requests$cookies$$$function__32_get_dict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__32_get_dict);
    cache_frame_frame_requests$cookies$$$function__32_get_dict = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__32_get_dict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_dictionary);
var_dictionary = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dictionary);
var_dictionary = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__33___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__33___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__33___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__33___iter__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__33___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__33___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__33___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3ab3ef40b96fb799d1f817fb87eb139f, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__33___iter__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__33___iter__ = cache_frame_frame_requests$cookies$$$function__33___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__33___iter__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__33___iter__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 350;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__33___iter__->m_frame.f_lineno = 350;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___iter__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__33___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__33___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__33___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__33___iter__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__33___iter__ == cache_frame_frame_requests$cookies$$$function__33___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__33___iter__);
    cache_frame_frame_requests$cookies$$$function__33___iter__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__33___iter__);

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


static PyObject *impl_requests$cookies$$$function__34___contains__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__34___contains__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__34___contains__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__34___contains__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__34___contains__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__34___contains__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__34___contains__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5b41db841454f6c7698cd6460ff255b1, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__34___contains__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__34___contains__ = cache_frame_frame_requests$cookies$$$function__34___contains__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__34___contains__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__34___contains__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "ooc";
    goto try_except_handler_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooc";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_requests$cookies$$$function__34___contains__->m_frame.f_lineno = 354;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___contains__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooc";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__34___contains__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__34___contains__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = module_var_accessor_requests$cookies$CookieConflictError(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieConflictError);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooc";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 353;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__34___contains__->m_frame)) {
        frame_frame_requests$cookies$$$function__34___contains__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooc";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__34___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__34___contains__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__34___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__34___contains__,
    type_description_1,
    par_self,
    par_name,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__34___contains__ == cache_frame_frame_requests$cookies$$$function__34___contains__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__34___contains__);
    cache_frame_frame_requests$cookies$$$function__34___contains__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__34___contains__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__35___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__35___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__35___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__35___getitem__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__35___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__35___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__35___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9da82cd899dea5031fa58246ee57bce4, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__35___getitem__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__35___getitem__ = cache_frame_frame_requests$cookies$$$function__35___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__35___getitem__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__35___getitem__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_requests$cookies$$$function__35___getitem__->m_frame.f_lineno = 365;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__find_no_duplicates, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__35___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__35___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__35___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__35___getitem__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__35___getitem__ == cache_frame_frame_requests$cookies$$$function__35___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__35___getitem__);
    cache_frame_frame_requests$cookies$$$function__35___getitem__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__35___getitem__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__36___setitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__36___setitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__36___setitem__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__36___setitem__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__36___setitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__36___setitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__36___setitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3e02ecb3b055567199ed9454770bd7e8, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__36___setitem__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__36___setitem__ = cache_frame_frame_requests$cookies$$$function__36___setitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__36___setitem__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__36___setitem__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_requests$cookies$$$function__36___setitem__->m_frame.f_lineno = 374;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_set,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__36___setitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__36___setitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__36___setitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__36___setitem__,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__36___setitem__ == cache_frame_frame_requests$cookies$$$function__36___setitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__36___setitem__);
    cache_frame_frame_requests$cookies$$$function__36___setitem__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__36___setitem__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__37___delitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__37___delitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__37___delitem__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__37___delitem__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__37___delitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__37___delitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__37___delitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9b8732d16e125f67793e18c5c8301251, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__37___delitem__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__37___delitem__ = cache_frame_frame_requests$cookies$$$function__37___delitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__37___delitem__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__37___delitem__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_requests$cookies$remove_cookie_by_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_remove_cookie_by_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_2 = par_name;
frame_frame_requests$cookies$$$function__37___delitem__->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__37___delitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__37___delitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__37___delitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__37___delitem__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__37___delitem__ == cache_frame_frame_requests$cookies$$$function__37___delitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__37___delitem__);
    cache_frame_frame_requests$cookies$$$function__37___delitem__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__37___delitem__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__38_set_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cookie = python_pars[1];
PyObject *par_args = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *var_value = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__38_set_cookie;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__38_set_cookie = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__38_set_cookie)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__38_set_cookie);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__38_set_cookie == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__38_set_cookie = MAKE_FUNCTION_FRAME(tstate, code_objects_f752793d7dd1eeb61b824d9c4d361698, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__38_set_cookie->m_type_description == NULL);
frame_frame_requests$cookies$$$function__38_set_cookie = cache_frame_frame_requests$cookies$$$function__38_set_cookie;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__38_set_cookie);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__38_set_cookie) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cookie);
tmp_expression_value_1 = par_cookie;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_2;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_value);
tmp_expression_value_2 = var_value;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__38_set_cookie->m_frame.f_lineno = 385;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_34_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 385;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_value);
tmp_expression_value_3 = var_value;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_endswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__38_set_cookie->m_frame.f_lineno = 386;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_34_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 386;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(var_value);
tmp_expression_value_4 = var_value;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_replace);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__38_set_cookie->m_frame.f_lineno = 388;
tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cookie);
tmp_ass_attr_target_1 = par_cookie;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_value, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_direct_call_arg4_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 389;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_5 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_set_cookie);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cookie);
tmp_tuple_element_1 = par_cookie;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__38_set_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__38_set_cookie->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__38_set_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__38_set_cookie,
    type_description_1,
    par_self,
    par_cookie,
    par_args,
    par_kwargs,
    var_value,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__38_set_cookie == cache_frame_frame_requests$cookies$$$function__38_set_cookie) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__38_set_cookie);
    cache_frame_frame_requests$cookies$$$function__38_set_cookie = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__38_set_cookie);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
CHECK_OBJECT(par_cookie);
Py_DECREF(par_cookie);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cookie);
Py_DECREF(par_cookie);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__39_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__39_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__39_update = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__39_update)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__39_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__39_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__39_update = MAKE_FUNCTION_FRAME(tstate, code_objects_80fdc7c29bf3ab5a3091eb0b626d60cd, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__39_update->m_type_description == NULL);
frame_frame_requests$cookies$$$function__39_update = cache_frame_frame_requests$cookies$$$function__39_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__39_update);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__39_update) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_expression_value_1 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CookieJar);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooc";
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
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_other);
tmp_iter_arg_1 = par_other;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooc";
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
type_description_1 = "oooc";
exception_lineno = 396;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_3;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 397;
type_description_1 = "oooc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_cookie);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_requests$cookies$copy(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 397;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 397;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cookie);
tmp_args_element_value_2 = var_cookie;
frame_frame_requests$cookies$$$function__39_update->m_frame.f_lineno = 397;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 397;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
frame_frame_requests$cookies$$$function__39_update->m_frame.f_lineno = 397;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooc";
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 399;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_4 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_requests$cookies$$$function__39_update->m_frame.f_lineno = 399;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__39_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__39_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__39_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__39_update,
    type_description_1,
    par_self,
    par_other,
    var_cookie,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__39_update == cache_frame_frame_requests$cookies$$$function__39_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__39_update);
    cache_frame_frame_requests$cookies$$$function__39_update = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__39_update);

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
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__40__find(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_domain = python_pars[2];
PyObject *par_path = python_pars[3];
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__40__find;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__40__find = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__40__find)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__40__find);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__40__find == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__40__find = MAKE_FUNCTION_FRAME(tstate, code_objects_2231a45a0a27e25f7be128b3af9bfde5, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__40__find->m_type_description == NULL);
frame_frame_requests$cookies$$$function__40__find = cache_frame_frame_requests$cookies$$$function__40__find;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__40__find);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__40__find) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooo";
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
type_description_1 = "ooooo";
exception_lineno = 415;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_3;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_cmp_expr_right_1 = par_name;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_2 = par_domain;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_domain);
tmp_cmp_expr_right_3 = par_domain;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_4 = par_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_5 = par_path;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_no_3:;
branch_no_2:;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_operand_value_1 = par_name;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_domain);
tmp_operand_value_2 = par_domain;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_path);
tmp_operand_value_3 = par_path;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
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
frame_frame_requests$cookies$$$function__40__find->m_frame.f_lineno = 421;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 421;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__40__find, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__40__find->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__40__find, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__40__find,
    type_description_1,
    par_self,
    par_name,
    par_domain,
    par_path,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__40__find == cache_frame_frame_requests$cookies$$$function__40__find) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__40__find);
    cache_frame_frame_requests$cookies$$$function__40__find = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__40__find);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cookie);
CHECK_OBJECT(var_cookie);
Py_DECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__41__find_no_duplicates(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_domain = python_pars[2];
PyObject *par_path = python_pars[3];
PyObject *var_toReturn = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__41__find_no_duplicates;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_toReturn;
    var_toReturn = tmp_assign_source_1;
    Py_INCREF(var_toReturn);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates = MAKE_FUNCTION_FRAME(tstate, code_objects_b48967dcf4c3b1e2d4a00e452f827339, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates->m_type_description == NULL);
frame_frame_requests$cookies$$$function__41__find_no_duplicates = cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__41__find_no_duplicates);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__41__find_no_duplicates) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
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
exception_lineno = 438;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_cmp_expr_right_1 = par_name;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_2 = par_domain;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_domain);
tmp_cmp_expr_right_3 = par_domain;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_4 = par_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_5 = par_path;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_toReturn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_toReturn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 442;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_6 = var_toReturn;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$CookieConflictError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieConflictError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_operand_value_1 = par_name;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
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


exception_lineno = 445;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_requests$cookies$$$function__41__find_no_duplicates->m_frame.f_lineno = 444;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 444;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_toReturn;
    var_toReturn = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
branch_no_3:;
branch_no_2:;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
if (var_toReturn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_toReturn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 450;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_7 = var_toReturn;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
if (var_toReturn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_toReturn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 451;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_toReturn;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_name);
tmp_operand_value_2 = par_name;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_domain);
tmp_operand_value_3 = par_domain;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
CHECK_OBJECT(par_path);
tmp_operand_value_4 = par_path;
tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
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
frame_frame_requests$cookies$$$function__41__find_no_duplicates->m_frame.f_lineno = 452;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 452;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__41__find_no_duplicates, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__41__find_no_duplicates->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__41__find_no_duplicates, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__41__find_no_duplicates,
    type_description_1,
    par_self,
    par_name,
    par_domain,
    par_path,
    var_toReturn,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__41__find_no_duplicates == cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates);
    cache_frame_frame_requests$cookies$$$function__41__find_no_duplicates = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__41__find_no_duplicates);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_toReturn);
var_toReturn = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_toReturn);
var_toReturn = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__42___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_state = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__42___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__42___getstate__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__42___getstate__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__42___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__42___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__42___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c933470137cb1798a7c147ac514fd1ae, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__42___getstate__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__42___getstate__ = cache_frame_frame_requests$cookies$$$function__42___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__42___getstate__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__42___getstate__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__42___getstate__->m_frame.f_lineno = 456;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_state;
    var_state = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_state);
tmp_expression_value_3 = var_state;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__42___getstate__->m_frame.f_lineno = 458;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__cookies_lock_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__42___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__42___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__42___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__42___getstate__,
    type_description_1,
    par_self,
    var_state
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__42___getstate__ == cache_frame_frame_requests$cookies$$$function__42___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__42___getstate__);
    cache_frame_frame_requests$cookies$$$function__42___getstate__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__42___getstate__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_state);
tmp_return_value = var_state;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_state);
CHECK_OBJECT(var_state);
Py_DECREF(var_state);
var_state = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_state);
var_state = NULL;
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


static PyObject *impl_requests$cookies$$$function__43___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__43___setstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__43___setstate__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__43___setstate__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__43___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__43___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__43___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f75f0f8af9a90f9779e162c06df1cf72, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__43___setstate__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__43___setstate__ = cache_frame_frame_requests$cookies$$$function__43___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__43___setstate__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__43___setstate__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_args_element_value_1 = par_state;
frame_frame_requests$cookies$$$function__43___setstate__->m_frame.f_lineno = 463;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain__cookies_lock;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_3);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oo";
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
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_1 = module_var_accessor_requests$cookies$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__43___setstate__->m_frame.f_lineno = 465;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_RLock);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__cookies_lock, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__43___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__43___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__43___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__43___setstate__,
    type_description_1,
    par_self,
    par_state
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__43___setstate__ == cache_frame_frame_requests$cookies$$$function__43___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__43___setstate__);
    cache_frame_frame_requests$cookies$$$function__43___setstate__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__43___setstate__);

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
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__44_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_new_cj = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__44_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__44_copy = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__44_copy)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__44_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__44_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__44_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_45158d87e63c4da61c2aeda5f1b03892, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__44_copy->m_type_description == NULL);
frame_frame_requests$cookies$$$function__44_copy = cache_frame_frame_requests$cookies$$$function__44_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__44_copy);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__44_copy) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$RequestsCookieJar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsCookieJar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 469;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__44_copy->m_frame.f_lineno = 469;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_cj;
    var_new_cj = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_new_cj);
tmp_expression_value_1 = var_new_cj;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set_policy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__44_copy->m_frame.f_lineno = 470;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_policy);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 470;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__44_copy->m_frame.f_lineno = 470;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_new_cj);
tmp_expression_value_2 = var_new_cj;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_requests$cookies$$$function__44_copy->m_frame.f_lineno = 471;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__44_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__44_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__44_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__44_copy,
    type_description_1,
    par_self,
    var_new_cj
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__44_copy == cache_frame_frame_requests$cookies$$$function__44_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__44_copy);
    cache_frame_frame_requests$cookies$$$function__44_copy = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__44_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_new_cj);
tmp_return_value = var_new_cj;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_new_cj);
CHECK_OBJECT(var_new_cj);
Py_DECREF(var_new_cj);
var_new_cj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_cj);
var_new_cj = NULL;
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


static PyObject *impl_requests$cookies$$$function__45_get_policy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__45_get_policy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__45_get_policy = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__45_get_policy)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__45_get_policy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__45_get_policy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__45_get_policy = MAKE_FUNCTION_FRAME(tstate, code_objects_e8a86d75e3541410bc6bf36c837345df, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__45_get_policy->m_type_description == NULL);
frame_frame_requests$cookies$$$function__45_get_policy = cache_frame_frame_requests$cookies$$$function__45_get_policy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__45_get_policy);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__45_get_policy) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__policy);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__45_get_policy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__45_get_policy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__45_get_policy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__45_get_policy,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__45_get_policy == cache_frame_frame_requests$cookies$$$function__45_get_policy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__45_get_policy);
    cache_frame_frame_requests$cookies$$$function__45_get_policy = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__45_get_policy);

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


static PyObject *impl_requests$cookies$$$function__46__copy_cookie_jar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_jar = python_pars[0];
PyObject *var_copy_method = NULL;
PyObject *var_new_jar = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__46__copy_cookie_jar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_jar);
tmp_cmp_expr_left_1 = par_jar;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar = MAKE_FUNCTION_FRAME(tstate, code_objects_d9dd4d75ca26c36eb54757d7aa286f8e, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_type_description == NULL);
frame_frame_requests$cookies$$$function__46__copy_cookie_jar = cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__46__copy_cookie_jar);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__46__copy_cookie_jar) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_jar);
tmp_expression_value_1 = par_jar;
tmp_name_value_1 = mod_consts.const_str_plain_copy;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_copy_method;
    var_copy_method = tmp_assign_source_2;
    Py_INCREF(var_copy_method);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 483;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_copy_method);
tmp_called_value_1 = var_copy_method;
frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_frame.f_lineno = 485;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_requests$cookies$copy(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 487;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_jar);
tmp_args_element_value_1 = par_jar;
frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_frame.f_lineno = 487;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_jar;
    var_new_jar = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_new_jar);
tmp_expression_value_3 = var_new_jar;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_clear);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_frame.f_lineno = 488;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_jar);
tmp_iter_arg_1 = par_jar;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 489;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_6;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
if (var_new_jar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_jar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 490;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_expression_value_4 = var_new_jar;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_set_cookie);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_expression_value_5 = module_var_accessor_requests$cookies$copy(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 490;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_copy);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 490;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_cookie);
tmp_args_element_value_3 = var_cookie;
frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_frame.f_lineno = 490;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 490;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_frame.f_lineno = 490;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_new_jar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_jar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 491;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_new_jar;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__46__copy_cookie_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__46__copy_cookie_jar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__46__copy_cookie_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__46__copy_cookie_jar,
    type_description_1,
    par_jar,
    var_copy_method,
    var_new_jar,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__46__copy_cookie_jar == cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar);
    cache_frame_frame_requests$cookies$$$function__46__copy_cookie_jar = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__46__copy_cookie_jar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_copy_method);
var_copy_method = NULL;
Py_XDECREF(var_new_jar);
var_new_jar = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_copy_method);
var_copy_method = NULL;
Py_XDECREF(var_new_jar);
var_new_jar = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__47_create_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_result = NULL;
PyObject *var_badargs = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__47_create_cookie;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__47_create_cookie = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_version;
tmp_dict_value_1 = const_int_0;
tmp_assign_source_1 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_name);
tmp_dict_value_1 = par_name;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_value;
CHECK_OBJECT(par_value);
tmp_dict_value_1 = par_value;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_port;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_domain;
tmp_dict_value_1 = const_str_empty;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_path;
tmp_dict_value_1 = const_str_slash;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_secure;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_expires;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_discard;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_comment;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_comment_url;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rest;
tmp_dict_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rfc2109;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__47_create_cookie)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__47_create_cookie);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__47_create_cookie == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__47_create_cookie = MAKE_FUNCTION_FRAME(tstate, code_objects_2d817438bea6b575d7991b1a9d947f35, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__47_create_cookie->m_type_description == NULL);
frame_frame_requests$cookies$$$function__47_create_cookie = cache_frame_frame_requests$cookies$$$function__47_create_cookie;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__47_create_cookie);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__47_create_cookie) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_set_arg_2;
CHECK_OBJECT(par_kwargs);
tmp_set_arg_1 = par_kwargs;
tmp_sub_expr_left_1 = PySet_New(tmp_set_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_set_arg_2 = var_result;
tmp_sub_expr_right_1 = PySet_New(tmp_set_arg_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 516;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_badargs;
    var_badargs = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
CHECK_OBJECT(var_badargs);
tmp_condition_result_1 = CHECK_IF_TRUE(var_badargs) == 1;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_badargs);
tmp_list_arg_1 = var_badargs;
tmp_format_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "ooooo";
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
frame_frame_requests$cookies$$$function__47_create_cookie->m_frame.f_lineno = 518;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 518;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_1 = var_result;
CHECK_OBJECT(par_kwargs);
tmp_iterable_value_1 = par_kwargs;
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_1;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_2 = var_result;
tmp_key_value_1 = mod_consts.const_str_plain_port;
tmp_value_value_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_port_specified;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_value_value_2;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_2;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_3 = var_result;
tmp_key_value_2 = mod_consts.const_str_plain_domain;
tmp_value_value_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_3, tmp_key_value_2);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_domain_specified;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_key_value_3;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_4 = var_result;
tmp_key_value_3 = mod_consts.const_str_plain_domain;
tmp_expression_value_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_4, tmp_key_value_3);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__47_create_cookie->m_frame.f_lineno = 525;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_domain_initial_dot;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_value_value_3;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_4;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_5 = var_result;
tmp_key_value_4 = const_str_plain_path;
tmp_value_value_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_5, tmp_key_value_4);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_path_specified;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_2 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Cookie);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_direct_call_arg2_1 = var_result;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__47_create_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__47_create_cookie->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__47_create_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__47_create_cookie,
    type_description_1,
    par_name,
    par_value,
    par_kwargs,
    var_result,
    var_badargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__47_create_cookie == cache_frame_frame_requests$cookies$$$function__47_create_cookie) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__47_create_cookie);
    cache_frame_frame_requests$cookies$$$function__47_create_cookie = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__47_create_cookie);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
CHECK_OBJECT(var_badargs);
CHECK_OBJECT(var_badargs);
Py_DECREF(var_badargs);
var_badargs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
Py_XDECREF(var_badargs);
var_badargs = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__48_morsel_to_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_morsel = python_pars[0];
PyObject *var_expires = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__48_morsel_to_cookie;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_expires;
    var_expires = tmp_assign_source_1;
    Py_INCREF(var_expires);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie = MAKE_FUNCTION_FRAME(tstate, code_objects_9a14f38810ed38523b29022732d86f0c, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_type_description == NULL);
frame_frame_requests$cookies$$$function__48_morsel_to_cookie = cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__48_morsel_to_cookie);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__48_morsel_to_cookie) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_morsel);
tmp_expression_value_1 = par_morsel;
tmp_subscript_value_1 = mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 535;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_int_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_called_instance_1 = module_var_accessor_requests$cookies$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 537;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame.f_lineno = 537;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_2 = par_morsel;
tmp_subscript_value_2 = mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
tmp_int_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 537;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 537;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
{
    PyObject *old = var_expires;
    assert(old != NULL);
    var_expires = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__48_morsel_to_cookie, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__48_morsel_to_cookie, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_morsel);
tmp_expression_value_3 = par_morsel;
tmp_subscript_value_3 = mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
tmp_format_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooN";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame.f_lineno = 539;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 539;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooN";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 536;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame)) {
        frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooN";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_morsel);
tmp_expression_value_4 = par_morsel;
tmp_subscript_value_4 = mod_consts.const_str_plain_expires;
tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_subscript_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_2);

exception_lineno = 540;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_2);
Py_DECREF(tmp_subscript_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
PyObject *tmp_args_element_value_3;
tmp_expression_value_5 = module_var_accessor_requests$cookies$calendar(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_calendar);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_timegm);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_requests$cookies$time(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_strptime);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_7 = par_morsel;
tmp_subscript_value_5 = mod_consts.const_str_plain_expires;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame.f_lineno = 542;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame.f_lineno = 542;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_expires;
    assert(old != NULL);
    var_expires = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
branch_end_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_8;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_9;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_10;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_value_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_11;
PyObject *tmp_kw_call_value_11_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_12_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_12;
tmp_called_value_3 = module_var_accessor_requests$cookies$create_cookie(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cookie);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 543;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_8 = par_morsel;
tmp_subscript_value_6 = mod_consts.const_str_plain_comment;
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_9 = par_morsel;
tmp_subscript_value_7 = mod_consts.const_str_plain_comment;
tmp_value_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 545;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 545;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_kw_call_value_2_1 = Py_False;
CHECK_OBJECT(par_morsel);
tmp_expression_value_10 = par_morsel;
tmp_subscript_value_8 = mod_consts.const_str_plain_domain;
tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 547;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_expires);
tmp_kw_call_value_4_1 = var_expires;
CHECK_OBJECT(par_morsel);
tmp_expression_value_11 = par_morsel;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_key);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 549;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_12 = par_morsel;
tmp_subscript_value_9 = const_str_plain_path;
tmp_kw_call_value_6_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_9);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);

exception_lineno = 550;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_7_1 = Py_None;
tmp_dict_key_1 = mod_consts.const_str_plain_HttpOnly;
CHECK_OBJECT(par_morsel);
tmp_expression_value_13 = par_morsel;
tmp_subscript_value_10 = mod_consts.const_str_plain_httponly;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 552;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_8_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_call_value_8_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_kw_call_value_9_1 = Py_False;
CHECK_OBJECT(par_morsel);
tmp_expression_value_14 = par_morsel;
tmp_subscript_value_11 = mod_consts.const_str_plain_secure;
tmp_value_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_11);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 554;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 554;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_10_1 = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(par_morsel);
tmp_expression_value_15 = par_morsel;
tmp_kw_call_value_11_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_value);
if (tmp_kw_call_value_11_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 555;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_16 = par_morsel;
tmp_subscript_value_12 = mod_consts.const_str_plain_version;
tmp_or_left_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_12);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_11_1);

exception_lineno = 556;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_11_1);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 556;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = const_int_0;
Py_INCREF(tmp_or_right_value_1);
tmp_kw_call_value_12_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_kw_call_value_12_1 = tmp_or_left_value_1;
or_end_1:;
frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame.f_lineno = 543;
{
    PyObject *kw_values[13] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
CHECK_OBJECT(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_8_1);
CHECK_OBJECT(tmp_kw_call_value_11_1);
Py_DECREF(tmp_kw_call_value_11_1);
CHECK_OBJECT(tmp_kw_call_value_12_1);
Py_DECREF(tmp_kw_call_value_12_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__48_morsel_to_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__48_morsel_to_cookie->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__48_morsel_to_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__48_morsel_to_cookie,
    type_description_1,
    par_morsel,
    var_expires,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__48_morsel_to_cookie == cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie);
    cache_frame_frame_requests$cookies$$$function__48_morsel_to_cookie = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__48_morsel_to_cookie);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_expires);
CHECK_OBJECT(var_expires);
Py_DECREF(var_expires);
var_expires = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_expires);
var_expires = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_morsel);
Py_DECREF(par_morsel);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_morsel);
Py_DECREF(par_morsel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__51_cookiejar_from_dict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cookie_dict = python_pars[0];
PyObject *par_cookiejar = python_pars[1];
PyObject *par_overwrite = python_pars[2];
PyObject *var_names_from_jar = NULL;
PyObject *var_name = NULL;
PyObject *outline_0_var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__51_cookiejar_from_dict;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict = MAKE_FUNCTION_FRAME(tstate, code_objects_2188f2bda361c106a2f3b1319a80717a, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict->m_type_description == NULL);
frame_frame_requests$cookies$$$function__51_cookiejar_from_dict = cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__51_cookiejar_from_dict);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__51_cookiejar_from_dict) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_cookiejar);
tmp_cmp_expr_left_1 = par_cookiejar;
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
tmp_called_value_1 = module_var_accessor_requests$cookies$RequestsCookieJar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsCookieJar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 593;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__51_cookiejar_from_dict->m_frame.f_lineno = 593;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_cookiejar;
    assert(old != NULL);
    par_cookiejar = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_cookie_dict);
tmp_cmp_expr_left_2 = par_cookie_dict;
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
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cookiejar);
tmp_iter_arg_1 = par_cookiejar;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 596;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_cookie;
    outline_0_var_cookie = tmp_assign_source_6;
    Py_INCREF(outline_0_var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_cookie);
tmp_expression_value_1 = outline_0_var_cookie;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_cookie);
outline_0_var_cookie = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_cookie);
outline_0_var_cookie = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 596;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_names_from_jar;
    var_names_from_jar = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_cookie_dict);
tmp_iter_arg_2 = par_cookie_dict;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 597;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_9;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_overwrite);
tmp_truth_name_1 = CHECK_IF_TRUE(par_overwrite);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_3 = var_name;
CHECK_OBJECT(var_names_from_jar);
tmp_cmp_expr_right_3 = var_names_from_jar;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 599;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_2 = par_cookiejar;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_cookie);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = module_var_accessor_requests$cookies$create_cookie(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cookie);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 599;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_2 = var_name;
CHECK_OBJECT(par_cookie_dict);
tmp_expression_value_3 = par_cookie_dict;
CHECK_OBJECT(var_name);
tmp_subscript_value_1 = var_name;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 599;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_requests$cookies$$$function__51_cookiejar_from_dict->m_frame.f_lineno = 599;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 599;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_requests$cookies$$$function__51_cookiejar_from_dict->m_frame.f_lineno = 599;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_2:;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 601;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_cookiejar;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__51_cookiejar_from_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__51_cookiejar_from_dict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__51_cookiejar_from_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__51_cookiejar_from_dict,
    type_description_1,
    par_cookie_dict,
    par_cookiejar,
    par_overwrite,
    var_names_from_jar,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__51_cookiejar_from_dict == cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict);
    cache_frame_frame_requests$cookies$$$function__51_cookiejar_from_dict = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__51_cookiejar_from_dict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_names_from_jar);
var_names_from_jar = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_names_from_jar);
var_names_from_jar = NULL;
Py_XDECREF(var_name);
var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cookie_dict);
Py_DECREF(par_cookie_dict);
CHECK_OBJECT(par_overwrite);
Py_DECREF(par_overwrite);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cookie_dict);
Py_DECREF(par_cookie_dict);
CHECK_OBJECT(par_overwrite);
Py_DECREF(par_overwrite);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__52_merge_cookies(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cookiejar = python_pars[0];
PyObject *par_cookies = python_pars[1];
PyObject *var_update_method = NULL;
PyObject *var_cookie_in_jar = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__52_merge_cookies;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__52_merge_cookies = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__52_merge_cookies)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__52_merge_cookies);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__52_merge_cookies == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__52_merge_cookies = MAKE_FUNCTION_FRAME(tstate, code_objects_ba87b3cd14745f9b70b1b2b78b62a41b, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__52_merge_cookies->m_type_description == NULL);
frame_frame_requests$cookies$$$function__52_merge_cookies = cache_frame_frame_requests$cookies$$$function__52_merge_cookies;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__52_merge_cookies);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__52_merge_cookies) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cookiejar);
tmp_isinstance_inst_1 = par_cookiejar;
tmp_expression_value_1 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 613;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CookieJar);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_1 = "oooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac;
frame_frame_requests$cookies$$$function__52_merge_cookies->m_frame.f_lineno = 614;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 614;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_cookies);
tmp_isinstance_inst_2 = par_cookies;
tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$cookiejar_from_dict(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar_from_dict);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 617;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cookies);
tmp_kw_call_arg_value_0_1 = par_cookies;
CHECK_OBJECT(par_cookiejar);
tmp_kw_call_dict_value_0_1 = par_cookiejar;
tmp_kw_call_dict_value_1_1 = Py_False;
frame_frame_requests$cookies$$$function__52_merge_cookies->m_frame.f_lineno = 617;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_cookiejar;
    assert(old != NULL);
    par_cookiejar = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cookies);
tmp_isinstance_inst_3 = par_cookies;
tmp_expression_value_2 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CookieJar);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooo";
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_cookiejar);
tmp_expression_value_3 = par_cookiejar;
tmp_name_value_1 = mod_consts.const_str_plain_update;
tmp_default_value_1 = Py_None;
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_3 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_update_method;
    var_update_method = tmp_assign_source_3;
    Py_INCREF(var_update_method);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 619;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_update_method);
tmp_called_value_2 = var_update_method;
CHECK_OBJECT(par_cookies);
tmp_args_element_value_1 = par_cookies;
frame_frame_requests$cookies$$$function__52_merge_cookies->m_frame.f_lineno = 620;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cookies);
tmp_iter_arg_1 = par_cookies;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 622;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cookie_in_jar;
    var_cookie_in_jar = tmp_assign_source_6;
    Py_INCREF(var_cookie_in_jar);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 623;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_called_instance_1 = par_cookiejar;
CHECK_OBJECT(var_cookie_in_jar);
tmp_args_element_value_2 = var_cookie_in_jar;
frame_frame_requests$cookies$$$function__52_merge_cookies->m_frame.f_lineno = 623;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_cookie, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_end_4:;
branch_no_3:;
branch_end_2:;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 625;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_cookiejar;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__52_merge_cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__52_merge_cookies->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__52_merge_cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__52_merge_cookies,
    type_description_1,
    par_cookiejar,
    par_cookies,
    var_update_method,
    var_cookie_in_jar
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__52_merge_cookies == cache_frame_frame_requests$cookies$$$function__52_merge_cookies) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__52_merge_cookies);
    cache_frame_frame_requests$cookies$$$function__52_merge_cookies = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__52_merge_cookies);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_update_method);
var_update_method = NULL;
Py_XDECREF(var_cookie_in_jar);
var_cookie_in_jar = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_update_method);
var_update_method = NULL;
Py_XDECREF(var_cookie_in_jar);
var_cookie_in_jar = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__10_add_unredirected_header(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__10_add_unredirected_header,
        mod_consts.const_str_plain_add_unredirected_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69,
#endif
        code_objects_45a31477fba1f99140699bc7951e7189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__11_get_new_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__11_get_new_headers,
        mod_consts.const_str_plain_get_new_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f,
#endif
        code_objects_daddc2a144670a280497b86ccc29c316,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__12_unverifiable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__12_unverifiable,
        mod_consts.const_str_plain_unverifiable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0,
#endif
        code_objects_5fe287e22d7473f69a7878e9fae78ee3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__13_origin_req_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__13_origin_req_host,
        mod_consts.const_str_plain_origin_req_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea,
#endif
        code_objects_4280e41b44fda4819d071d5374fa916f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__14_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__14_host,
        mod_consts.const_str_plain_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397,
#endif
        code_objects_dbdcc3b4f4816cfa5982fd8503376bb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__15___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f,
#endif
        code_objects_0d48673789955c44cb157af5c44d0777,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__16_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__16_info,
        mod_consts.const_str_plain_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e,
#endif
        code_objects_734d4416384dc622939e0e508b0c6922,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__17_getheaders(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__17_getheaders,
        mod_consts.const_str_plain_getheaders,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f,
#endif
        code_objects_9f3f22f7b5c87cacda07ec9455399ff0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__18_extract_cookies_to_jar(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__18_extract_cookies_to_jar,
        mod_consts.const_str_plain_extract_cookies_to_jar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_516ae783eca24e7db519a1a4d97a7269,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__19_get_cookie_header(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__19_get_cookie_header,
        mod_consts.const_str_plain_get_cookie_header,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d46a28eb9512288ac97fef4e2f64c66f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9,
#endif
        code_objects_2f59978b35ab00845099ce2e7a15ad31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__20_remove_cookie_by_name(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__20_remove_cookie_by_name,
        mod_consts.const_str_plain_remove_cookie_by_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3d6c91321ab42e2c62af655ea3a8d4d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__21_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__21_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0,
#endif
        code_objects_5939100dd793d0712efde315196dd900,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__22_set(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__22_set,
        mod_consts.const_str_plain_set,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a,
#endif
        code_objects_47622edade0ad71494e846a4ac7e8eef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__23_iterkeys(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__23_iterkeys,
        mod_consts.const_str_plain_iterkeys,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        code_objects_a7c9ac5ff4b931e471b92033cb952deb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__24_keys(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__24_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a,
#endif
        code_objects_cb6c8b2f3b6f83391d61c41d82823d54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__25_itervalues(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__25_itervalues,
        mod_consts.const_str_plain_itervalues,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        code_objects_1571c92d4216c818ea5a2c505b4402f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__26_values(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__26_values,
        mod_consts.const_str_plain_values,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7,
#endif
        code_objects_2eda94e7ccd8810cff1dca6868a0f1b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__27_iteritems(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__27_iteritems,
        mod_consts.const_str_plain_iteritems,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        code_objects_eaa256edb584fbc4182d7d40afafa610,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__28_items(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__28_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad2094029011821e111452c0603108d0,
#endif
        code_objects_6d1d77730da452d46d5ba1218cf298e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_b04a12651fd966784023636e22761d12,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__29_list_domains(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__29_list_domains,
        mod_consts.const_str_plain_list_domains,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253,
#endif
        code_objects_2ce7781484a36dfbb8c7da496b33c3b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__2_get_type(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__2_get_type,
        mod_consts.const_str_plain_get_type,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113,
#endif
        code_objects_7e281233fd5bed47182c0e330e0ee3b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__30_list_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__30_list_paths,
        mod_consts.const_str_plain_list_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3,
#endif
        code_objects_a35686a6c1bbdf8257b333976c2f9360,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__31_multiple_domains(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__31_multiple_domains,
        mod_consts.const_str_plain_multiple_domains,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd,
#endif
        code_objects_04ea596b15cbc15852689638674e1ae0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__32_get_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__32_get_dict,
        mod_consts.const_str_plain_get_dict,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698,
#endif
        code_objects_862d6aa91d7951c3ab2d8351d5801173,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__33___iter__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__33___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c449d42f81ab297b14c2fe22811dbeeb,
#endif
        code_objects_3ab3ef40b96fb799d1f817fb87eb139f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_73dc65e0aab1db8049cab59519772846,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__34___contains__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__34___contains__,
        mod_consts.const_str_plain___contains__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79,
#endif
        code_objects_5b41db841454f6c7698cd6460ff255b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__35___getitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__35___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3,
#endif
        code_objects_9da82cd899dea5031fa58246ee57bce4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_08b25300475453472c10345ee7168b50,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__36___setitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__36___setitem__,
        mod_consts.const_str_plain___setitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd,
#endif
        code_objects_3e02ecb3b055567199ed9454770bd7e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__37___delitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__37___delitem__,
        mod_consts.const_str_plain___delitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc,
#endif
        code_objects_9b8732d16e125f67793e18c5c8301251,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__38_set_cookie(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__38_set_cookie,
        mod_consts.const_str_plain_set_cookie,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6,
#endif
        code_objects_f752793d7dd1eeb61b824d9c4d361698,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__39_update(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__39_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e,
#endif
        code_objects_80fdc7c29bf3ab5a3091eb0b626d60cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__3_get_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__3_get_host,
        mod_consts.const_str_plain_get_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93,
#endif
        code_objects_fd14f25ede9fe8e963a1965741af8ba9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__40__find(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__40__find,
        mod_consts.const_str_plain__find,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4,
#endif
        code_objects_2231a45a0a27e25f7be128b3af9bfde5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__41__find_no_duplicates(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__41__find_no_duplicates,
        mod_consts.const_str_plain__find_no_duplicates,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e,
#endif
        code_objects_b48967dcf4c3b1e2d4a00e452f827339,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__42___getstate__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__42___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831,
#endif
        code_objects_c933470137cb1798a7c147ac514fd1ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__43___setstate__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__43___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1,
#endif
        code_objects_f75f0f8af9a90f9779e162c06df1cf72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__44_copy(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__44_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3,
#endif
        code_objects_45158d87e63c4da61c2aeda5f1b03892,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__45_get_policy(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__45_get_policy,
        mod_consts.const_str_plain_get_policy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5,
#endif
        code_objects_e8a86d75e3541410bc6bf36c837345df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__46__copy_cookie_jar(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__46__copy_cookie_jar,
        mod_consts.const_str_plain__copy_cookie_jar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d9dd4d75ca26c36eb54757d7aa286f8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__47_create_cookie(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__47_create_cookie,
        mod_consts.const_str_plain_create_cookie,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d817438bea6b575d7991b1a9d947f35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__48_morsel_to_cookie(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__48_morsel_to_cookie,
        mod_consts.const_str_plain_morsel_to_cookie,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9a14f38810ed38523b29022732d86f0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__49_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cc12abfe149ba69ac5633b340062e9ad,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__4_get_origin_req_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__4_get_origin_req_host,
        mod_consts.const_str_plain_get_origin_req_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0,
#endif
        code_objects_d49da9baf8f974ad0c4722d9eb8a819a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__50_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a100677ddbb5b97528a19c802a998b1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__51_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__51_cookiejar_from_dict,
        mod_consts.const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2188f2bda361c106a2f3b1319a80717a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__52_merge_cookies(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__52_merge_cookies,
        mod_consts.const_str_plain_merge_cookies,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ba87b3cd14745f9b70b1b2b78b62a41b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__5_get_full_url(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__5_get_full_url,
        mod_consts.const_str_plain_get_full_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b,
#endif
        code_objects_72022412b0f86e2875c0fa8f4e349f20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__6_is_unverifiable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_unverifiable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c,
#endif
        code_objects_3807367e792c0d07ba2a0ee86ac911df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__7_has_header(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__7_has_header,
        mod_consts.const_str_plain_has_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10,
#endif
        code_objects_0f7ab96607774cbfb8c471fac9d55761,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__8_get_header(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__8_get_header,
        mod_consts.const_str_plain_get_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6,
#endif
        code_objects_500bcb7ce636aa53f60b83eee9e332e5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__9_add_header(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__9_add_header,
        mod_consts.const_str_plain_add_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44,
#endif
        code_objects_f0f9548b9f56e1c7b7190582a49c5543,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f,
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

static function_impl_code const function_table_requests$cookies[] = {
impl_requests$cookies$$$function__1___init__,
impl_requests$cookies$$$function__2_get_type,
impl_requests$cookies$$$function__3_get_host,
impl_requests$cookies$$$function__4_get_origin_req_host,
impl_requests$cookies$$$function__5_get_full_url,
impl_requests$cookies$$$function__7_has_header,
impl_requests$cookies$$$function__8_get_header,
impl_requests$cookies$$$function__9_add_header,
impl_requests$cookies$$$function__10_add_unredirected_header,
impl_requests$cookies$$$function__11_get_new_headers,
impl_requests$cookies$$$function__12_unverifiable,
impl_requests$cookies$$$function__13_origin_req_host,
impl_requests$cookies$$$function__14_host,
impl_requests$cookies$$$function__15___init__,
impl_requests$cookies$$$function__16_info,
impl_requests$cookies$$$function__17_getheaders,
impl_requests$cookies$$$function__18_extract_cookies_to_jar,
impl_requests$cookies$$$function__19_get_cookie_header,
impl_requests$cookies$$$function__20_remove_cookie_by_name,
impl_requests$cookies$$$function__21_get,
impl_requests$cookies$$$function__22_set,
impl_requests$cookies$$$function__23_iterkeys,
impl_requests$cookies$$$function__24_keys,
impl_requests$cookies$$$function__25_itervalues,
impl_requests$cookies$$$function__26_values,
impl_requests$cookies$$$function__27_iteritems,
impl_requests$cookies$$$function__28_items,
impl_requests$cookies$$$function__29_list_domains,
impl_requests$cookies$$$function__30_list_paths,
impl_requests$cookies$$$function__31_multiple_domains,
impl_requests$cookies$$$function__32_get_dict,
impl_requests$cookies$$$function__33___iter__,
impl_requests$cookies$$$function__34___contains__,
impl_requests$cookies$$$function__35___getitem__,
impl_requests$cookies$$$function__36___setitem__,
impl_requests$cookies$$$function__37___delitem__,
impl_requests$cookies$$$function__38_set_cookie,
impl_requests$cookies$$$function__39_update,
impl_requests$cookies$$$function__40__find,
impl_requests$cookies$$$function__41__find_no_duplicates,
impl_requests$cookies$$$function__42___getstate__,
impl_requests$cookies$$$function__43___setstate__,
impl_requests$cookies$$$function__44_copy,
impl_requests$cookies$$$function__45_get_policy,
impl_requests$cookies$$$function__46__copy_cookie_jar,
impl_requests$cookies$$$function__47_create_cookie,
impl_requests$cookies$$$function__48_morsel_to_cookie,
impl_requests$cookies$$$function__51_cookiejar_from_dict,
impl_requests$cookies$$$function__52_merge_cookies,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$cookies);
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
        module_requests$cookies,
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
        function_table_requests$cookies,
        sizeof(function_table_requests$cookies) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.cookies";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$cookies(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$cookies");

    // Store the module for future use.
    module_requests$cookies = module;

    moduledict_requests$cookies = MODULE_DICT(module_requests$cookies);

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
        PRINT_STRING("requests$cookies: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$cookies: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$cookies: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.cookies" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$cookies\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests$cookies,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$cookies);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$cookies);
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

        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyCellObject *outline_3_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies;
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
PyObject *locals_requests$cookies$$$class__1_MockRequest_31 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$class__1_MockRequest_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_requests$cookies$$$class__2_MockResponse_114 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
int tmp_res;
PyObject *locals_requests$cookies$$$class__3_CookieConflictError_185 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_requests$cookies$$$class__4_RequestsCookieJar_191 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8;
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$cookies = MAKE_MODULE_FRAME(code_objects_3d8ea9e7ff59ff5215893667902680a7, module_requests$cookies);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies);
assert(Py_REFCNT(frame_frame_requests$cookies) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$cookies$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$cookies$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_calendar;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 12;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 13;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 14;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Iterator_str_plain_MutableMapping_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 15;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_MutableMapping,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_MutableMapping);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping, tmp_assign_source_11);
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
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_41c64468a0c9e92d8eea5f7e817937e8;
tmp_globals_arg_value_5 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Cookie_str_plain_CookieJar_str_plain_CookiePolicy_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 16;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_Cookie,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Cookie);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Cookie, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_CookieJar,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_CookieJar);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieJar, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_CookiePolicy,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_CookiePolicy);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookiePolicy, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_16 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_16);
tmp_import_from_3__module = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_17);
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__internal_utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_to_native_string_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_requests$cookies->m_frame.f_lineno = 19;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_to_native_string,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_to_native_string);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_7 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_is_prepared_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_requests$cookies->m_frame.f_lineno = 20;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_is_prepared,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_is_prepared);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__is_prepared, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_8 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_7616210072f96f3543d3039901095cd8_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_requests$cookies->m_frame.f_lineno = 21;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_11 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_Morsel,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Morsel);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_12 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_cookielib,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_cookielib);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_urlunparse,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_urlunparse);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse, tmp_assign_source_27);
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
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_9 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = Py_None;
tmp_level_value_9 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 28;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
// Tried code:
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_requests$cookies$$$class__1_MockRequest_31 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_6f341fcd71e0573a5357b25e930d7a3d;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_MockRequest;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_31;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_requests$cookies$$$class__1_MockRequest_2 = MAKE_CLASS_FRAME(tstate, code_objects_d77a3db01d75efea1b75e6cfa76bd01d, module_requests$cookies, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$cookies$$$class__1_MockRequest_2, locals_requests$cookies$$$class__1_MockRequest_31);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$class__1_MockRequest_2);
assert(Py_REFCNT(frame_frame_requests$cookies$$$class__1_MockRequest_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_requests$cookies$$$class__1_MockRequest_31, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3d0058a0ccd51aff61f7b8608e8fc9e9);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__2_get_type(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_get_type, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__3_get_host(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_get_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__4_get_origin_req_host(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_get_origin_req_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__5_get_full_url(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_get_full_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__6_is_unverifiable(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_is_unverifiable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__7_has_header(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_has_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_8;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_c674706473f99c12eade7a2867b9b2cf);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__8_get_header(tstate, tmp_defaults_1, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_get_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_f758cd6d04d5f0475ac1a6a79a9da949);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__9_add_header(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_add_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_9c4c8948d86e8e5aeef5f67c780bb4a0);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__10_add_unredirected_header(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_add_unredirected_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__11_get_new_headers(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_get_new_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_12;
tmp_called_value_1 = (PyObject *)&PyProperty_Type;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_1 = MAKE_FUNCTION_requests$cookies$$$function__12_unverifiable(tstate, tmp_annotations_12);

frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame.f_lineno = 101;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_unverifiable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_13;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_requests$cookies$$$function__13_origin_req_host(tstate, tmp_annotations_13);

frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame.f_lineno = 105;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_origin_req_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_14;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_3 = MAKE_FUNCTION_requests$cookies$$$function__14_host(tstate, tmp_annotations_14);

frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame.f_lineno = 109;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$cookies$$$class__1_MockRequest_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$class__1_MockRequest_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$class__1_MockRequest_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$class__1_MockRequest_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_requests$cookies$$$class__1_MockRequest_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$cookies$$$class__1_MockRequest_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_31, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_10 = mod_consts.const_str_plain_MockRequest;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_requests$cookies$$$class__1_MockRequest_31;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_31 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_requests$cookies$$$class__1_MockRequest_31);
locals_requests$cookies$$$class__1_MockRequest_31 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__1_MockRequest_31);
locals_requests$cookies$$$class__1_MockRequest_31 = NULL;
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
exception_lineno = 31;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest, tmp_assign_source_31);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_requests$cookies$$$class__2_MockResponse_114 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_MockResponse;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_114;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_8511dcd117a39a2df848b33d7f938f3b);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__15___init__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__16_info(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, mod_consts.const_str_plain_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__17_getheaders(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, mod_consts.const_str_plain_getheaders, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__headers_tuple;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_114, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
tmp_name_value_11 = mod_consts.const_str_plain_MockResponse;
tmp_bases_value_2 = const_tuple_empty;
tmp_dict_arg_value_2 = locals_requests$cookies$$$class__2_MockResponse_114;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_2, tmp_dict_arg_value_2);
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_10;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_35 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_requests$cookies$$$class__2_MockResponse_114);
locals_requests$cookies$$$class__2_MockResponse_114 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__2_MockResponse_114);
locals_requests$cookies$$$class__2_MockResponse_114 = NULL;
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
exception_lineno = 114;
goto try_except_handler_8;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse, tmp_assign_source_35);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_f8b6527bac3d3f26d8407346b2814cff);

tmp_assign_source_37 = MAKE_FUNCTION_requests$cookies$$$function__18_extract_cookies_to_jar(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_60d2a9c340414f0e972e96c8af3ae900);

tmp_assign_source_38 = MAKE_FUNCTION_requests$cookies$$$function__19_get_cookie_header(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cookie_header, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_20;
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_494cccdf64c6d10627801b0860651653);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_39 = MAKE_FUNCTION_requests$cookies$$$function__20_remove_cookie_by_name(tstate, tmp_defaults_2, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name, tmp_assign_source_39);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_RuntimeError_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_CookieConflictError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 185;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_11;
}
frame_frame_requests$cookies->m_frame.f_lineno = 185;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 185;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
}
branch_end_1:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_requests$cookies$$$class__3_CookieConflictError_185 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_185, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_185, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_CookieConflictError;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_185, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_185;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_185, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_185, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_3__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_185, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
branch_no_3:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_13;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = mod_consts.const_str_plain_CookieConflictError;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_requests$cookies$$$class__3_CookieConflictError_185;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_13, tmp_bases_value_4, tmp_dict_arg_value_3);
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_13;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_45 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_requests$cookies$$$class__3_CookieConflictError_185);
locals_requests$cookies$$$class__3_CookieConflictError_185 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__3_CookieConflictError_185);
locals_requests$cookies$$$class__3_CookieConflictError_185 = NULL;
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
exception_lineno = 185;
goto try_except_handler_11;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError, tmp_assign_source_45);
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_requests$cookies$CookieJar(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieJar);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto try_except_handler_14;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_3);
tmp_expression_value_7 = module_var_accessor_requests$cookies$MutableMapping(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MutableMapping);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_2;
}
tmp_subscript_value_2 = mod_consts.const_tuple_type_str_uniontype_tuple_type_str_anon_NoneType_tuple_tuple;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_47, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_47);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
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
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_RequestsCookieJar;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 191;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_14, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_14;
}
frame_frame_requests$cookies->m_frame.f_lineno = 191;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 191;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_52;
}
branch_end_4:;
{
PyObject *tmp_assign_source_53;
outline_3_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_requests$cookies$$$class__4_RequestsCookieJar_191 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestsCookieJar;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_191;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3 = MAKE_CLASS_FRAME(tstate, code_objects_2622a849aff4876151ef6ae96ffc05ea, module_requests$cookies, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3, locals_requests$cookies$$$class__4_RequestsCookieJar_191);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3);
assert(Py_REFCNT(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_CookiePolicy;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__policy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_21;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_30550bef5f652e2dd2418f2fb31e2c00);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__21_get(tstate, tmp_defaults_3, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_733dcff41cd6403d84be373429104b32);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__22_set(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_set, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__23_iterkeys(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_iterkeys, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__24_keys(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain_keys, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_053cd4471201b1a55a1641fece638f90);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__25_itervalues(tstate, tmp_annotations_25);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_itervalues, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_b31c9b60dfb0407841f8698daf037115);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__26_values(tstate, tmp_annotations_26);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_values, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_dedeca1d9bce94d314b4bcf1a275af36);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__27_iteritems(tstate, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_iteritems, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_b42957650b15a590a05c7f7dfa9c058c);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__28_items(tstate, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__29_list_domains(tstate, tmp_annotations_29);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_list_domains, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__30_list_paths(tstate, tmp_annotations_30);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_list_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__31_multiple_domains(tstate, tmp_annotations_31);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_multiple_domains, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_32;
tmp_defaults_4 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_97d4b62e76506025ba3d728f11024c30);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__32_get_dict(tstate, tmp_defaults_4, tmp_annotations_32);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_get_dict, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_33;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_5f4cf62763e5d2d2d54dc7d7c1d3458b);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_3_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__33___iter__(tstate, tmp_annotations_33, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_34;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_e73b69cd4c8d678c89b1a9ec369c751f);
tmp_closure_2[0] = (struct Nuitka_CellObject *)outline_3_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__34___contains__(tstate, tmp_annotations_34, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___contains__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_35;
tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_0e6452fe6e9e9e169b22f18711c403cf);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__35___getitem__(tstate, tmp_annotations_35);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_36;
tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_082faeeaff90e29940bf1072f606f4be);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__36___setitem__(tstate, tmp_annotations_36);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___setitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_37;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_b4dbf171e32ba52d1e21954b404db78a);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__37___delitem__(tstate, tmp_annotations_37);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___delitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_38;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_8e90f6cbe2927fb665830fed365ef4b1);
tmp_closure_3[0] = (struct Nuitka_CellObject *)outline_3_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__38_set_cookie(tstate, tmp_annotations_38, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_set_cookie, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_39;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_ef0b4e29f4f64606967755e3954319b8);
tmp_closure_4[0] = (struct Nuitka_CellObject *)outline_3_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__39_update(tstate, tmp_annotations_39, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_40;
tmp_defaults_5 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_5779279406cadb1ae1d4f46af49448e4);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__40__find(tstate, tmp_defaults_5, tmp_annotations_40);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain__find, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_41;
tmp_defaults_6 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_fadb3adb75567dd85c2d019fb52af6c7);
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__41__find_no_duplicates(tstate, tmp_defaults_6, tmp_annotations_41);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain__find_no_duplicates, tmp_dictset_value);
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
{
PyObject *tmp_annotations_42;
tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_af2da645b2beec145f6a64ea5e580bd4);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__42___getstate__(tstate, tmp_annotations_42);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_43;
tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_12cfbb9989eb821739003d09dbc8bf2a);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__43___setstate__(tstate, tmp_annotations_43);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_44;
tmp_annotations_44 = DICT_COPY(tstate, mod_consts.const_dict_924e792aa6746308f911f548d146050a);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__44_copy(tstate, tmp_annotations_44);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_45;
tmp_annotations_45 = DICT_COPY(tstate, mod_consts.const_dict_e809cfa0ee4012f2563d8d9f3ba675bb);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__45_get_policy(tstate, tmp_annotations_45);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain_get_policy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_16;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__cookies_lock_tuple;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_191, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
branch_no_6:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_15;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_15 = mod_consts.const_str_plain_RequestsCookieJar;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_4 = locals_requests$cookies$$$class__4_RequestsCookieJar_191;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_4, const_str_plain___classcell__, (PyObject *)outline_3_var___class__);
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_15, tmp_bases_value_6, tmp_dict_arg_value_4);
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto try_except_handler_16;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_3_var___class__);
    PyCell_SET((PyObject *)outline_3_var___class__, tmp_assign_source_54);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_3_var___class__));
tmp_assign_source_53 = PyCell_GET((PyObject *)outline_3_var___class__);
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_requests$cookies$$$class__4_RequestsCookieJar_191);
locals_requests$cookies$$$class__4_RequestsCookieJar_191 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__4_RequestsCookieJar_191);
locals_requests$cookies$$$class__4_RequestsCookieJar_191 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_3_var___class__);
assert(PyCell_Check((PyObject *)outline_3_var___class__));
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 191;
goto try_except_handler_14;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar, tmp_assign_source_53);
}
goto try_end_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_annotations_46;
tmp_annotations_46 = DICT_COPY(tstate, mod_consts.const_dict_17f0b5053a0bc21d36a4b0f15b882833);

tmp_assign_source_55 = MAKE_FUNCTION_requests$cookies$$$function__46__copy_cookie_jar(tstate, tmp_annotations_46);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_cookie_jar, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_annotations_47;
tmp_annotations_47 = DICT_COPY(tstate, mod_consts.const_dict_0762a3fb08b25beefe5679b84ce3d1b1);

tmp_assign_source_56 = MAKE_FUNCTION_requests$cookies$$$function__47_create_cookie(tstate, tmp_annotations_47);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_48;
tmp_annotations_48 = DICT_COPY(tstate, mod_consts.const_dict_c43a26bff3ccf68c1ccfed0a75963144);

tmp_assign_source_57 = MAKE_FUNCTION_requests$cookies$$$function__48_morsel_to_cookie(tstate, tmp_annotations_48);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_6 = module_var_accessor_requests$cookies$TypeVar(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_requests$cookies$CookieJar(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieJar);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;

    goto frame_exception_exit_1;
}
frame_frame_requests$cookies->m_frame.f_lineno = 560;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_58 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain__CookieJarT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__CookieJarT, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_49;
tmp_called_value_7 = module_var_accessor_requests$cookies$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;

    goto frame_exception_exit_1;
}
tmp_defaults_7 = mod_consts.const_tuple_none_true_tuple;
tmp_annotations_49 = DICT_COPY(tstate, mod_consts.const_dict_97053106dd5aa5a1671c8e0a902a4a98);
Py_INCREF(tmp_defaults_7);

tmp_args_element_value_4 = MAKE_FUNCTION_requests$cookies$$$function__49_cookiejar_from_dict(tstate, tmp_defaults_7, tmp_annotations_49);

frame_frame_requests$cookies->m_frame.f_lineno = 563;
tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_50;
tmp_called_value_8 = module_var_accessor_requests$cookies$overload(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 571;

    goto frame_exception_exit_1;
}
tmp_defaults_8 = mod_consts.const_tuple_true_tuple;
tmp_annotations_50 = DICT_COPY(tstate, mod_consts.const_dict_f487d40347bccb653368ed7c20bf5f89);
Py_INCREF(tmp_defaults_8);

tmp_args_element_value_5 = MAKE_FUNCTION_requests$cookies$$$function__50_cookiejar_from_dict(tstate, tmp_defaults_8, tmp_annotations_50);

frame_frame_requests$cookies->m_frame.f_lineno = 571;
tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict, tmp_assign_source_60);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$cookies);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_51;
tmp_defaults_9 = mod_consts.const_tuple_none_true_tuple;
tmp_annotations_51 = DICT_COPY(tstate, mod_consts.const_dict_ba9df4cf85d686b47dcf2aa5594ef21f);
Py_INCREF(tmp_defaults_9);

tmp_assign_source_61 = MAKE_FUNCTION_requests$cookies$$$function__51_cookiejar_from_dict(tstate, tmp_defaults_9, tmp_annotations_51);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_annotations_52;
tmp_annotations_52 = DICT_COPY(tstate, mod_consts.const_dict_7f1cc7f5e32e8445dd6b5563aac497b4);

tmp_assign_source_62 = MAKE_FUNCTION_requests$cookies$$$function__52_merge_cookies(tstate, tmp_annotations_52);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_cookies, tmp_assign_source_62);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$cookies", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.cookies" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$cookies);
    return module_requests$cookies;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$cookies", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
