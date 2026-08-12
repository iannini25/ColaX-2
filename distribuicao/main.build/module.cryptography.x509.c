/* Generated code for Python module 'cryptography$x509'
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



/* The "module_cryptography$x509" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$x509;
PyDictObject *moduledict_cryptography$x509;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple;
PyObject *const_str_plain_x509;
PyObject *const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
PyObject *const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple;
PyObject *const_str_plain_certificate_transparency;
PyObject *const_str_plain_oid;
PyObject *const_str_plain_verification;
PyObject *const_str_digest_99d507f2ac89b982963447ed05345806;
PyObject *const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple;
PyObject *const_str_plain_Attribute;
PyObject *const_str_plain_AttributeNotFound;
PyObject *const_str_plain_Attributes;
PyObject *const_str_plain_Certificate;
PyObject *const_str_plain_CertificateBuilder;
PyObject *const_str_plain_CertificateRevocationList;
PyObject *const_str_plain_CertificateRevocationListBuilder;
PyObject *const_str_plain_CertificateSigningRequest;
PyObject *const_str_plain_CertificateSigningRequestBuilder;
PyObject *const_str_plain_InvalidVersion;
PyObject *const_str_plain_RevokedCertificate;
PyObject *const_str_plain_RevokedCertificateBuilder;
PyObject *const_str_plain_Version;
PyObject *const_str_plain_load_der_x509_certificate;
PyObject *const_str_plain_load_der_x509_crl;
PyObject *const_str_plain_load_der_x509_csr;
PyObject *const_str_plain_load_pem_x509_certificate;
PyObject *const_str_plain_load_pem_x509_certificates;
PyObject *const_str_plain_load_pem_x509_crl;
PyObject *const_str_plain_load_pem_x509_csr;
PyObject *const_str_plain_random_serial_number;
PyObject *const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
PyObject *const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple;
PyObject *const_str_plain_AccessDescription;
PyObject *const_str_plain_Admission;
PyObject *const_str_plain_Admissions;
PyObject *const_str_plain_AuthorityInformationAccess;
PyObject *const_str_plain_AuthorityKeyIdentifier;
PyObject *const_str_plain_BasicConstraints;
PyObject *const_str_plain_CertificateIssuer;
PyObject *const_str_plain_CertificatePolicies;
PyObject *const_str_plain_CRLDistributionPoints;
PyObject *const_str_plain_CRLNumber;
PyObject *const_str_plain_CRLReason;
PyObject *const_str_plain_DeltaCRLIndicator;
PyObject *const_str_plain_DistributionPoint;
PyObject *const_str_plain_DuplicateExtension;
PyObject *const_str_plain_ExtendedKeyUsage;
PyObject *const_str_plain_Extension;
PyObject *const_str_plain_ExtensionNotFound;
PyObject *const_str_plain_Extensions;
PyObject *const_str_plain_ExtensionType;
PyObject *const_str_plain_FreshestCRL;
PyObject *const_str_plain_GeneralNames;
PyObject *const_str_plain_InhibitAnyPolicy;
PyObject *const_str_plain_InvalidityDate;
PyObject *const_str_plain_IssuerAlternativeName;
PyObject *const_str_plain_IssuingDistributionPoint;
PyObject *const_str_plain_KeyUsage;
PyObject *const_str_plain_MSCertificateTemplate;
PyObject *const_str_plain_NameConstraints;
PyObject *const_str_plain_NamingAuthority;
PyObject *const_str_plain_NoticeReference;
PyObject *const_str_plain_OCSPAcceptableResponses;
PyObject *const_str_plain_OCSPNoCheck;
PyObject *const_str_plain_OCSPNonce;
PyObject *const_str_plain_PolicyConstraints;
PyObject *const_str_plain_PolicyInformation;
PyObject *const_str_digest_97ac982b098bfd0facb64df38773c335;
PyObject *const_str_plain_PrecertPoison;
PyObject *const_str_plain_PrivateKeyUsagePeriod;
PyObject *const_str_plain_ProfessionInfo;
PyObject *const_str_plain_ReasonFlags;
PyObject *const_str_plain_SignedCertificateTimestamps;
PyObject *const_str_plain_SubjectAlternativeName;
PyObject *const_str_plain_SubjectInformationAccess;
PyObject *const_str_plain_SubjectKeyIdentifier;
PyObject *const_str_plain_TLSFeature;
PyObject *const_str_plain_TLSFeatureType;
PyObject *const_str_plain_UnrecognizedExtension;
PyObject *const_str_plain_UserNotice;
PyObject *const_str_digest_becb7ddc5eba88bda421a9fc23a1539c;
PyObject *const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple;
PyObject *const_str_plain_DirectoryName;
PyObject *const_str_plain_DNSName;
PyObject *const_str_plain_GeneralName;
PyObject *const_str_plain_IPAddress;
PyObject *const_str_plain_OtherName;
PyObject *const_str_plain_RegisteredID;
PyObject *const_str_plain_RFC822Name;
PyObject *const_str_plain_UniformResourceIdentifier;
PyObject *const_str_plain_UnsupportedGeneralNameType;
PyObject *const_str_digest_957c81bc7a15c28c0c453fa3270dbc10;
PyObject *const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple;
PyObject *const_str_plain_Name;
PyObject *const_str_plain_NameAttribute;
PyObject *const_str_plain_RelativeDistinguishedName;
PyObject *const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
PyObject *const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple;
PyObject *const_str_plain_AuthorityInformationAccessOID;
PyObject *const_str_plain_CertificatePoliciesOID;
PyObject *const_str_plain_CRLEntryExtensionOID;
PyObject *const_str_plain_ExtendedKeyUsageOID;
PyObject *const_str_plain_ExtensionOID;
PyObject *const_str_plain_NameOID;
PyObject *const_str_plain_ObjectIdentifier;
PyObject *const_str_plain_PublicKeyAlgorithmOID;
PyObject *const_str_plain_SignatureAlgorithmOID;
PyObject *const_str_plain_AUTHORITY_INFORMATION_ACCESS;
PyObject *const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS;
PyObject *const_str_plain_AUTHORITY_KEY_IDENTIFIER;
PyObject *const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER;
PyObject *const_str_plain_BASIC_CONSTRAINTS;
PyObject *const_str_plain_OID_BASIC_CONSTRAINTS;
PyObject *const_str_plain_CERTIFICATE_POLICIES;
PyObject *const_str_plain_OID_CERTIFICATE_POLICIES;
PyObject *const_str_plain_CRL_DISTRIBUTION_POINTS;
PyObject *const_str_plain_OID_CRL_DISTRIBUTION_POINTS;
PyObject *const_str_plain_EXTENDED_KEY_USAGE;
PyObject *const_str_plain_OID_EXTENDED_KEY_USAGE;
PyObject *const_str_plain_FRESHEST_CRL;
PyObject *const_str_plain_OID_FRESHEST_CRL;
PyObject *const_str_plain_INHIBIT_ANY_POLICY;
PyObject *const_str_plain_OID_INHIBIT_ANY_POLICY;
PyObject *const_str_plain_ISSUER_ALTERNATIVE_NAME;
PyObject *const_str_plain_OID_ISSUER_ALTERNATIVE_NAME;
PyObject *const_str_plain_KEY_USAGE;
PyObject *const_str_plain_OID_KEY_USAGE;
PyObject *const_str_plain_PRIVATE_KEY_USAGE_PERIOD;
PyObject *const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD;
PyObject *const_str_plain_NAME_CONSTRAINTS;
PyObject *const_str_plain_OID_NAME_CONSTRAINTS;
PyObject *const_str_plain_OCSP_NO_CHECK;
PyObject *const_str_plain_OID_OCSP_NO_CHECK;
PyObject *const_str_plain_POLICY_CONSTRAINTS;
PyObject *const_str_plain_OID_POLICY_CONSTRAINTS;
PyObject *const_str_plain_POLICY_MAPPINGS;
PyObject *const_str_plain_OID_POLICY_MAPPINGS;
PyObject *const_str_plain_SUBJECT_ALTERNATIVE_NAME;
PyObject *const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME;
PyObject *const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES;
PyObject *const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES;
PyObject *const_str_plain_SUBJECT_INFORMATION_ACCESS;
PyObject *const_str_plain_OID_SUBJECT_INFORMATION_ACCESS;
PyObject *const_str_plain_SUBJECT_KEY_IDENTIFIER;
PyObject *const_str_plain_OID_SUBJECT_KEY_IDENTIFIER;
PyObject *const_str_plain_DSA_WITH_SHA1;
PyObject *const_str_plain_OID_DSA_WITH_SHA1;
PyObject *const_str_plain_DSA_WITH_SHA224;
PyObject *const_str_plain_OID_DSA_WITH_SHA224;
PyObject *const_str_plain_DSA_WITH_SHA256;
PyObject *const_str_plain_OID_DSA_WITH_SHA256;
PyObject *const_str_plain_ECDSA_WITH_SHA1;
PyObject *const_str_plain_OID_ECDSA_WITH_SHA1;
PyObject *const_str_plain_ECDSA_WITH_SHA224;
PyObject *const_str_plain_OID_ECDSA_WITH_SHA224;
PyObject *const_str_plain_ECDSA_WITH_SHA256;
PyObject *const_str_plain_OID_ECDSA_WITH_SHA256;
PyObject *const_str_plain_ECDSA_WITH_SHA384;
PyObject *const_str_plain_OID_ECDSA_WITH_SHA384;
PyObject *const_str_plain_ECDSA_WITH_SHA512;
PyObject *const_str_plain_OID_ECDSA_WITH_SHA512;
PyObject *const_str_plain_RSA_WITH_MD5;
PyObject *const_str_plain_OID_RSA_WITH_MD5;
PyObject *const_str_plain_RSA_WITH_SHA1;
PyObject *const_str_plain_OID_RSA_WITH_SHA1;
PyObject *const_str_plain_RSA_WITH_SHA224;
PyObject *const_str_plain_OID_RSA_WITH_SHA224;
PyObject *const_str_plain_RSA_WITH_SHA256;
PyObject *const_str_plain_OID_RSA_WITH_SHA256;
PyObject *const_str_plain_RSA_WITH_SHA384;
PyObject *const_str_plain_OID_RSA_WITH_SHA384;
PyObject *const_str_plain_RSA_WITH_SHA512;
PyObject *const_str_plain_OID_RSA_WITH_SHA512;
PyObject *const_str_plain_RSASSA_PSS;
PyObject *const_str_plain_OID_RSASSA_PSS;
PyObject *const_str_plain_COMMON_NAME;
PyObject *const_str_plain_OID_COMMON_NAME;
PyObject *const_str_plain_COUNTRY_NAME;
PyObject *const_str_plain_OID_COUNTRY_NAME;
PyObject *const_str_plain_DOMAIN_COMPONENT;
PyObject *const_str_plain_OID_DOMAIN_COMPONENT;
PyObject *const_str_plain_DN_QUALIFIER;
PyObject *const_str_plain_OID_DN_QUALIFIER;
PyObject *const_str_plain_EMAIL_ADDRESS;
PyObject *const_str_plain_OID_EMAIL_ADDRESS;
PyObject *const_str_plain_GENERATION_QUALIFIER;
PyObject *const_str_plain_OID_GENERATION_QUALIFIER;
PyObject *const_str_plain_GIVEN_NAME;
PyObject *const_str_plain_OID_GIVEN_NAME;
PyObject *const_str_plain_LOCALITY_NAME;
PyObject *const_str_plain_OID_LOCALITY_NAME;
PyObject *const_str_plain_ORGANIZATIONAL_UNIT_NAME;
PyObject *const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME;
PyObject *const_str_plain_ORGANIZATION_NAME;
PyObject *const_str_plain_OID_ORGANIZATION_NAME;
PyObject *const_str_plain_PSEUDONYM;
PyObject *const_str_plain_OID_PSEUDONYM;
PyObject *const_str_plain_SERIAL_NUMBER;
PyObject *const_str_plain_OID_SERIAL_NUMBER;
PyObject *const_str_plain_STATE_OR_PROVINCE_NAME;
PyObject *const_str_plain_OID_STATE_OR_PROVINCE_NAME;
PyObject *const_str_plain_SURNAME;
PyObject *const_str_plain_OID_SURNAME;
PyObject *const_str_plain_TITLE;
PyObject *const_str_plain_OID_TITLE;
PyObject *const_str_plain_CLIENT_AUTH;
PyObject *const_str_plain_OID_CLIENT_AUTH;
PyObject *const_str_plain_CODE_SIGNING;
PyObject *const_str_plain_OID_CODE_SIGNING;
PyObject *const_str_plain_EMAIL_PROTECTION;
PyObject *const_str_plain_OID_EMAIL_PROTECTION;
PyObject *const_str_plain_OCSP_SIGNING;
PyObject *const_str_plain_OID_OCSP_SIGNING;
PyObject *const_str_plain_SERVER_AUTH;
PyObject *const_str_plain_OID_SERVER_AUTH;
PyObject *const_str_plain_TIME_STAMPING;
PyObject *const_str_plain_OID_TIME_STAMPING;
PyObject *const_str_plain_ANY_POLICY;
PyObject *const_str_plain_OID_ANY_POLICY;
PyObject *const_str_plain_CPS_QUALIFIER;
PyObject *const_str_plain_OID_CPS_QUALIFIER;
PyObject *const_str_plain_CPS_USER_NOTICE;
PyObject *const_str_plain_OID_CPS_USER_NOTICE;
PyObject *const_str_plain_CERTIFICATE_ISSUER;
PyObject *const_str_plain_OID_CERTIFICATE_ISSUER;
PyObject *const_str_plain_CRL_REASON;
PyObject *const_str_plain_OID_CRL_REASON;
PyObject *const_str_plain_INVALIDITY_DATE;
PyObject *const_str_plain_OID_INVALIDITY_DATE;
PyObject *const_str_plain_CA_ISSUERS;
PyObject *const_str_plain_OID_CA_ISSUERS;
PyObject *const_str_plain_OCSP;
PyObject *const_str_plain_OID_OCSP;
PyObject *const_list_3605a1b81b3fdc6b253d3881893c210e_list;
PyObject *const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45;
PyObject *const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[243];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.x509"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 243) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 243 values, got %d\n",
                    UN_TRANSLATE("cryptography.x509"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple", mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x509", mod_consts.const_str_plain_x509);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_x509);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple", mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86", mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple", mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_certificate_transparency", mod_consts.const_str_plain_certificate_transparency);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_certificate_transparency);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_oid", mod_consts.const_str_plain_oid);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_oid);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verification", mod_consts.const_str_plain_verification);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_verification);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806", mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple", mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Attribute", mod_consts.const_str_plain_Attribute);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Attribute);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AttributeNotFound", mod_consts.const_str_plain_AttributeNotFound);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_AttributeNotFound);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Attributes", mod_consts.const_str_plain_Attributes);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Attributes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Certificate", mod_consts.const_str_plain_Certificate);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Certificate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateBuilder", mod_consts.const_str_plain_CertificateBuilder);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateBuilder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateRevocationList", mod_consts.const_str_plain_CertificateRevocationList);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateRevocationList);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateRevocationListBuilder", mod_consts.const_str_plain_CertificateRevocationListBuilder);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateRevocationListBuilder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateSigningRequest", mod_consts.const_str_plain_CertificateSigningRequest);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateSigningRequest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateSigningRequestBuilder", mod_consts.const_str_plain_CertificateSigningRequestBuilder);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateSigningRequestBuilder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidVersion", mod_consts.const_str_plain_InvalidVersion);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RevokedCertificate", mod_consts.const_str_plain_RevokedCertificate);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_RevokedCertificate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RevokedCertificateBuilder", mod_consts.const_str_plain_RevokedCertificateBuilder);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_RevokedCertificateBuilder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Version", mod_consts.const_str_plain_Version);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_der_x509_certificate", mod_consts.const_str_plain_load_der_x509_certificate);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_der_x509_certificate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_der_x509_crl", mod_consts.const_str_plain_load_der_x509_crl);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_der_x509_crl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_der_x509_csr", mod_consts.const_str_plain_load_der_x509_csr);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_der_x509_csr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_certificate", mod_consts.const_str_plain_load_pem_x509_certificate);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_certificate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_certificates", mod_consts.const_str_plain_load_pem_x509_certificates);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_certificates);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_crl", mod_consts.const_str_plain_load_pem_x509_crl);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_crl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_csr", mod_consts.const_str_plain_load_pem_x509_csr);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_csr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_random_serial_number", mod_consts.const_str_plain_random_serial_number);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_random_serial_number);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5", mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple", mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AccessDescription", mod_consts.const_str_plain_AccessDescription);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_AccessDescription);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Admission", mod_consts.const_str_plain_Admission);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_Admission);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Admissions", mod_consts.const_str_plain_Admissions);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Admissions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthorityInformationAccess", mod_consts.const_str_plain_AuthorityInformationAccess);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorityInformationAccess);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthorityKeyIdentifier", mod_consts.const_str_plain_AuthorityKeyIdentifier);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorityKeyIdentifier);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BasicConstraints", mod_consts.const_str_plain_BasicConstraints);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_BasicConstraints);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateIssuer", mod_consts.const_str_plain_CertificateIssuer);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateIssuer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificatePolicies", mod_consts.const_str_plain_CertificatePolicies);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificatePolicies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLDistributionPoints", mod_consts.const_str_plain_CRLDistributionPoints);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRLDistributionPoints);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLNumber", mod_consts.const_str_plain_CRLNumber);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRLNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLReason", mod_consts.const_str_plain_CRLReason);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRLReason);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeltaCRLIndicator", mod_consts.const_str_plain_DeltaCRLIndicator);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeltaCRLIndicator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DistributionPoint", mod_consts.const_str_plain_DistributionPoint);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_DistributionPoint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DuplicateExtension", mod_consts.const_str_plain_DuplicateExtension);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateExtension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtendedKeyUsage", mod_consts.const_str_plain_ExtendedKeyUsage);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtendedKeyUsage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Extension", mod_consts.const_str_plain_Extension);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_Extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtensionNotFound", mod_consts.const_str_plain_ExtensionNotFound);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionNotFound);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Extensions", mod_consts.const_str_plain_Extensions);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Extensions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtensionType", mod_consts.const_str_plain_ExtensionType);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreshestCRL", mod_consts.const_str_plain_FreshestCRL);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreshestCRL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GeneralNames", mod_consts.const_str_plain_GeneralNames);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralNames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InhibitAnyPolicy", mod_consts.const_str_plain_InhibitAnyPolicy);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_InhibitAnyPolicy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidityDate", mod_consts.const_str_plain_InvalidityDate);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidityDate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IssuerAlternativeName", mod_consts.const_str_plain_IssuerAlternativeName);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_IssuerAlternativeName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IssuingDistributionPoint", mod_consts.const_str_plain_IssuingDistributionPoint);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_IssuingDistributionPoint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyUsage", mod_consts.const_str_plain_KeyUsage);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyUsage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MSCertificateTemplate", mod_consts.const_str_plain_MSCertificateTemplate);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_MSCertificateTemplate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NameConstraints", mod_consts.const_str_plain_NameConstraints);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_NameConstraints);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamingAuthority", mod_consts.const_str_plain_NamingAuthority);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamingAuthority);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NoticeReference", mod_consts.const_str_plain_NoticeReference);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoticeReference);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSPAcceptableResponses", mod_consts.const_str_plain_OCSPAcceptableResponses);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_OCSPAcceptableResponses);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSPNoCheck", mod_consts.const_str_plain_OCSPNoCheck);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_OCSPNoCheck);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSPNonce", mod_consts.const_str_plain_OCSPNonce);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_OCSPNonce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PolicyConstraints", mod_consts.const_str_plain_PolicyConstraints);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_PolicyConstraints);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PolicyInformation", mod_consts.const_str_plain_PolicyInformation);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_PolicyInformation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335", mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrecertPoison", mod_consts.const_str_plain_PrecertPoison);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrecertPoison);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrivateKeyUsagePeriod", mod_consts.const_str_plain_PrivateKeyUsagePeriod);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKeyUsagePeriod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfessionInfo", mod_consts.const_str_plain_ProfessionInfo);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfessionInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReasonFlags", mod_consts.const_str_plain_ReasonFlags);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReasonFlags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SignedCertificateTimestamps", mod_consts.const_str_plain_SignedCertificateTimestamps);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_SignedCertificateTimestamps);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectAlternativeName", mod_consts.const_str_plain_SubjectAlternativeName);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectAlternativeName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectInformationAccess", mod_consts.const_str_plain_SubjectInformationAccess);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectInformationAccess);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectKeyIdentifier", mod_consts.const_str_plain_SubjectKeyIdentifier);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectKeyIdentifier);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSFeature", mod_consts.const_str_plain_TLSFeature);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLSFeature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSFeatureType", mod_consts.const_str_plain_TLSFeatureType);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLSFeatureType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnrecognizedExtension", mod_consts.const_str_plain_UnrecognizedExtension);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnrecognizedExtension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UserNotice", mod_consts.const_str_plain_UserNotice);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserNotice);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c", mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple", mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DirectoryName", mod_consts.const_str_plain_DirectoryName);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirectoryName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNSName", mod_consts.const_str_plain_DNSName);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_DNSName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GeneralName", mod_consts.const_str_plain_GeneralName);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IPAddress", mod_consts.const_str_plain_IPAddress);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPAddress);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OtherName", mod_consts.const_str_plain_OtherName);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_OtherName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RegisteredID", mod_consts.const_str_plain_RegisteredID);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_RegisteredID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RFC822Name", mod_consts.const_str_plain_RFC822Name);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_RFC822Name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UniformResourceIdentifier", mod_consts.const_str_plain_UniformResourceIdentifier);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniformResourceIdentifier);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnsupportedGeneralNameType", mod_consts.const_str_plain_UnsupportedGeneralNameType);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedGeneralNameType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10", mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple", mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Name", mod_consts.const_str_plain_Name);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NameAttribute", mod_consts.const_str_plain_NameAttribute);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_NameAttribute);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelativeDistinguishedName", mod_consts.const_str_plain_RelativeDistinguishedName);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelativeDistinguishedName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35", mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple", mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthorityInformationAccessOID", mod_consts.const_str_plain_AuthorityInformationAccessOID);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorityInformationAccessOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificatePoliciesOID", mod_consts.const_str_plain_CertificatePoliciesOID);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificatePoliciesOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLEntryExtensionOID", mod_consts.const_str_plain_CRLEntryExtensionOID);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRLEntryExtensionOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtendedKeyUsageOID", mod_consts.const_str_plain_ExtendedKeyUsageOID);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtendedKeyUsageOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtensionOID", mod_consts.const_str_plain_ExtensionOID);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NameOID", mod_consts.const_str_plain_NameOID);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_NameOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ObjectIdentifier", mod_consts.const_str_plain_ObjectIdentifier);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectIdentifier);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PublicKeyAlgorithmOID", mod_consts.const_str_plain_PublicKeyAlgorithmOID);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKeyAlgorithmOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SignatureAlgorithmOID", mod_consts.const_str_plain_SignatureAlgorithmOID);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_SignatureAlgorithmOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS", mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS", mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER", mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER", mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BASIC_CONSTRAINTS", mod_consts.const_str_plain_BASIC_CONSTRAINTS);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_BASIC_CONSTRAINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS", mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERTIFICATE_POLICIES", mod_consts.const_str_plain_CERTIFICATE_POLICIES);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE_POLICIES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES", mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS", mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS", mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXTENDED_KEY_USAGE", mod_consts.const_str_plain_EXTENDED_KEY_USAGE);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENDED_KEY_USAGE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE", mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FRESHEST_CRL", mod_consts.const_str_plain_FRESHEST_CRL);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_FRESHEST_CRL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_FRESHEST_CRL", mod_consts.const_str_plain_OID_FRESHEST_CRL);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_FRESHEST_CRL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INHIBIT_ANY_POLICY", mod_consts.const_str_plain_INHIBIT_ANY_POLICY);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_INHIBIT_ANY_POLICY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY", mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME", mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME", mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_USAGE", mod_consts.const_str_plain_KEY_USAGE);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_USAGE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_KEY_USAGE", mod_consts.const_str_plain_OID_KEY_USAGE);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_KEY_USAGE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD", mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD", mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NAME_CONSTRAINTS", mod_consts.const_str_plain_NAME_CONSTRAINTS);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_NAME_CONSTRAINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_NAME_CONSTRAINTS", mod_consts.const_str_plain_OID_NAME_CONSTRAINTS);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_NAME_CONSTRAINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSP_NO_CHECK", mod_consts.const_str_plain_OCSP_NO_CHECK);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_OCSP_NO_CHECK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_OCSP_NO_CHECK", mod_consts.const_str_plain_OID_OCSP_NO_CHECK);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_OCSP_NO_CHECK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLICY_CONSTRAINTS", mod_consts.const_str_plain_POLICY_CONSTRAINTS);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_POLICY_CONSTRAINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS", mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLICY_MAPPINGS", mod_consts.const_str_plain_POLICY_MAPPINGS);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_POLICY_MAPPINGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_POLICY_MAPPINGS", mod_consts.const_str_plain_OID_POLICY_MAPPINGS);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_POLICY_MAPPINGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME", mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME", mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES", mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES", mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS", mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS", mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER", mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER", mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSA_WITH_SHA1", mod_consts.const_str_plain_DSA_WITH_SHA1);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSA_WITH_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DSA_WITH_SHA1", mod_consts.const_str_plain_OID_DSA_WITH_SHA1);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DSA_WITH_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSA_WITH_SHA224", mod_consts.const_str_plain_DSA_WITH_SHA224);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSA_WITH_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DSA_WITH_SHA224", mod_consts.const_str_plain_OID_DSA_WITH_SHA224);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DSA_WITH_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSA_WITH_SHA256", mod_consts.const_str_plain_DSA_WITH_SHA256);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSA_WITH_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DSA_WITH_SHA256", mod_consts.const_str_plain_OID_DSA_WITH_SHA256);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DSA_WITH_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA1", mod_consts.const_str_plain_ECDSA_WITH_SHA1);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA224", mod_consts.const_str_plain_ECDSA_WITH_SHA224);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA256", mod_consts.const_str_plain_ECDSA_WITH_SHA256);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA384", mod_consts.const_str_plain_ECDSA_WITH_SHA384);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA512", mod_consts.const_str_plain_ECDSA_WITH_SHA512);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_MD5", mod_consts.const_str_plain_RSA_WITH_MD5);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_MD5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_MD5", mod_consts.const_str_plain_OID_RSA_WITH_MD5);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_MD5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA1", mod_consts.const_str_plain_RSA_WITH_SHA1);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA1", mod_consts.const_str_plain_OID_RSA_WITH_SHA1);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA224", mod_consts.const_str_plain_RSA_WITH_SHA224);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA224", mod_consts.const_str_plain_OID_RSA_WITH_SHA224);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA256", mod_consts.const_str_plain_RSA_WITH_SHA256);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA256", mod_consts.const_str_plain_OID_RSA_WITH_SHA256);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA384", mod_consts.const_str_plain_RSA_WITH_SHA384);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA384", mod_consts.const_str_plain_OID_RSA_WITH_SHA384);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA512", mod_consts.const_str_plain_RSA_WITH_SHA512);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA512", mod_consts.const_str_plain_OID_RSA_WITH_SHA512);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSASSA_PSS", mod_consts.const_str_plain_RSASSA_PSS);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSASSA_PSS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSASSA_PSS", mod_consts.const_str_plain_OID_RSASSA_PSS);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSASSA_PSS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COMMON_NAME", mod_consts.const_str_plain_COMMON_NAME);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMON_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_COMMON_NAME", mod_consts.const_str_plain_OID_COMMON_NAME);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_COMMON_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COUNTRY_NAME", mod_consts.const_str_plain_COUNTRY_NAME);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_COUNTRY_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_COUNTRY_NAME", mod_consts.const_str_plain_OID_COUNTRY_NAME);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_COUNTRY_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOMAIN_COMPONENT", mod_consts.const_str_plain_DOMAIN_COMPONENT);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOMAIN_COMPONENT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DOMAIN_COMPONENT", mod_consts.const_str_plain_OID_DOMAIN_COMPONENT);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DOMAIN_COMPONENT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DN_QUALIFIER", mod_consts.const_str_plain_DN_QUALIFIER);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_DN_QUALIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DN_QUALIFIER", mod_consts.const_str_plain_OID_DN_QUALIFIER);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DN_QUALIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EMAIL_ADDRESS", mod_consts.const_str_plain_EMAIL_ADDRESS);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_EMAIL_ADDRESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_EMAIL_ADDRESS", mod_consts.const_str_plain_OID_EMAIL_ADDRESS);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_EMAIL_ADDRESS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GENERATION_QUALIFIER", mod_consts.const_str_plain_GENERATION_QUALIFIER);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_GENERATION_QUALIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_GENERATION_QUALIFIER", mod_consts.const_str_plain_OID_GENERATION_QUALIFIER);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_GENERATION_QUALIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GIVEN_NAME", mod_consts.const_str_plain_GIVEN_NAME);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_GIVEN_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_GIVEN_NAME", mod_consts.const_str_plain_OID_GIVEN_NAME);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_GIVEN_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LOCALITY_NAME", mod_consts.const_str_plain_LOCALITY_NAME);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOCALITY_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_LOCALITY_NAME", mod_consts.const_str_plain_OID_LOCALITY_NAME);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_LOCALITY_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME", mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME", mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ORGANIZATION_NAME", mod_consts.const_str_plain_ORGANIZATION_NAME);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_ORGANIZATION_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ORGANIZATION_NAME", mod_consts.const_str_plain_OID_ORGANIZATION_NAME);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ORGANIZATION_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PSEUDONYM", mod_consts.const_str_plain_PSEUDONYM);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_PSEUDONYM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_PSEUDONYM", mod_consts.const_str_plain_OID_PSEUDONYM);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_PSEUDONYM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SERIAL_NUMBER", mod_consts.const_str_plain_SERIAL_NUMBER);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERIAL_NUMBER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SERIAL_NUMBER", mod_consts.const_str_plain_OID_SERIAL_NUMBER);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SERIAL_NUMBER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME", mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME", mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SURNAME", mod_consts.const_str_plain_SURNAME);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_SURNAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SURNAME", mod_consts.const_str_plain_OID_SURNAME);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SURNAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TITLE", mod_consts.const_str_plain_TITLE);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_TITLE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_TITLE", mod_consts.const_str_plain_OID_TITLE);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_TITLE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLIENT_AUTH", mod_consts.const_str_plain_CLIENT_AUTH);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT_AUTH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CLIENT_AUTH", mod_consts.const_str_plain_OID_CLIENT_AUTH);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CLIENT_AUTH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CODE_SIGNING", mod_consts.const_str_plain_CODE_SIGNING);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_CODE_SIGNING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CODE_SIGNING", mod_consts.const_str_plain_OID_CODE_SIGNING);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CODE_SIGNING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EMAIL_PROTECTION", mod_consts.const_str_plain_EMAIL_PROTECTION);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_EMAIL_PROTECTION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_EMAIL_PROTECTION", mod_consts.const_str_plain_OID_EMAIL_PROTECTION);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_EMAIL_PROTECTION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSP_SIGNING", mod_consts.const_str_plain_OCSP_SIGNING);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_OCSP_SIGNING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_OCSP_SIGNING", mod_consts.const_str_plain_OID_OCSP_SIGNING);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_OCSP_SIGNING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SERVER_AUTH", mod_consts.const_str_plain_SERVER_AUTH);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_AUTH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SERVER_AUTH", mod_consts.const_str_plain_OID_SERVER_AUTH);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SERVER_AUTH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TIME_STAMPING", mod_consts.const_str_plain_TIME_STAMPING);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_TIME_STAMPING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_TIME_STAMPING", mod_consts.const_str_plain_OID_TIME_STAMPING);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_TIME_STAMPING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANY_POLICY", mod_consts.const_str_plain_ANY_POLICY);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANY_POLICY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ANY_POLICY", mod_consts.const_str_plain_OID_ANY_POLICY);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ANY_POLICY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CPS_QUALIFIER", mod_consts.const_str_plain_CPS_QUALIFIER);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_CPS_QUALIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CPS_QUALIFIER", mod_consts.const_str_plain_OID_CPS_QUALIFIER);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CPS_QUALIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CPS_USER_NOTICE", mod_consts.const_str_plain_CPS_USER_NOTICE);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_CPS_USER_NOTICE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CPS_USER_NOTICE", mod_consts.const_str_plain_OID_CPS_USER_NOTICE);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CPS_USER_NOTICE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERTIFICATE_ISSUER", mod_consts.const_str_plain_CERTIFICATE_ISSUER);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE_ISSUER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER", mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRL_REASON", mod_consts.const_str_plain_CRL_REASON);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRL_REASON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CRL_REASON", mod_consts.const_str_plain_OID_CRL_REASON);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CRL_REASON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INVALIDITY_DATE", mod_consts.const_str_plain_INVALIDITY_DATE);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALIDITY_DATE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_INVALIDITY_DATE", mod_consts.const_str_plain_OID_INVALIDITY_DATE);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_INVALIDITY_DATE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CA_ISSUERS", mod_consts.const_str_plain_CA_ISSUERS);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_CA_ISSUERS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CA_ISSUERS", mod_consts.const_str_plain_OID_CA_ISSUERS);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CA_ISSUERS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSP", mod_consts.const_str_plain_OCSP);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_OCSP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_OCSP", mod_consts.const_str_plain_OID_OCSP);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_OID_OCSP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list", mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45", mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e", mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e);
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
void checkModuleConstants_cryptography$x509(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join) && "mod_consts.const_str_plain_join");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple", mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple) && "mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x509", mod_consts.const_str_plain_x509);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_x509) && "mod_consts.const_str_plain_x509");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple", mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple) && "mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86", mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86) && "mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple", mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple) && "mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_certificate_transparency", mod_consts.const_str_plain_certificate_transparency);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_certificate_transparency) && "mod_consts.const_str_plain_certificate_transparency");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_oid", mod_consts.const_str_plain_oid);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_oid) && "mod_consts.const_str_plain_oid");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verification", mod_consts.const_str_plain_verification);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_verification) && "mod_consts.const_str_plain_verification");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806", mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806) && "mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple", mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple) && "mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Attribute", mod_consts.const_str_plain_Attribute);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Attribute) && "mod_consts.const_str_plain_Attribute");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AttributeNotFound", mod_consts.const_str_plain_AttributeNotFound);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_AttributeNotFound) && "mod_consts.const_str_plain_AttributeNotFound");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Attributes", mod_consts.const_str_plain_Attributes);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Attributes) && "mod_consts.const_str_plain_Attributes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Certificate", mod_consts.const_str_plain_Certificate);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Certificate) && "mod_consts.const_str_plain_Certificate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateBuilder", mod_consts.const_str_plain_CertificateBuilder);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateBuilder) && "mod_consts.const_str_plain_CertificateBuilder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateRevocationList", mod_consts.const_str_plain_CertificateRevocationList);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateRevocationList) && "mod_consts.const_str_plain_CertificateRevocationList");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateRevocationListBuilder", mod_consts.const_str_plain_CertificateRevocationListBuilder);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateRevocationListBuilder) && "mod_consts.const_str_plain_CertificateRevocationListBuilder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateSigningRequest", mod_consts.const_str_plain_CertificateSigningRequest);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateSigningRequest) && "mod_consts.const_str_plain_CertificateSigningRequest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateSigningRequestBuilder", mod_consts.const_str_plain_CertificateSigningRequestBuilder);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateSigningRequestBuilder) && "mod_consts.const_str_plain_CertificateSigningRequestBuilder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidVersion", mod_consts.const_str_plain_InvalidVersion);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidVersion) && "mod_consts.const_str_plain_InvalidVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RevokedCertificate", mod_consts.const_str_plain_RevokedCertificate);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_RevokedCertificate) && "mod_consts.const_str_plain_RevokedCertificate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RevokedCertificateBuilder", mod_consts.const_str_plain_RevokedCertificateBuilder);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_RevokedCertificateBuilder) && "mod_consts.const_str_plain_RevokedCertificateBuilder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Version", mod_consts.const_str_plain_Version);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Version) && "mod_consts.const_str_plain_Version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_der_x509_certificate", mod_consts.const_str_plain_load_der_x509_certificate);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_der_x509_certificate) && "mod_consts.const_str_plain_load_der_x509_certificate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_der_x509_crl", mod_consts.const_str_plain_load_der_x509_crl);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_der_x509_crl) && "mod_consts.const_str_plain_load_der_x509_crl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_der_x509_csr", mod_consts.const_str_plain_load_der_x509_csr);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_der_x509_csr) && "mod_consts.const_str_plain_load_der_x509_csr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_certificate", mod_consts.const_str_plain_load_pem_x509_certificate);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_certificate) && "mod_consts.const_str_plain_load_pem_x509_certificate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_certificates", mod_consts.const_str_plain_load_pem_x509_certificates);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_certificates) && "mod_consts.const_str_plain_load_pem_x509_certificates");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_crl", mod_consts.const_str_plain_load_pem_x509_crl);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_crl) && "mod_consts.const_str_plain_load_pem_x509_crl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_pem_x509_csr", mod_consts.const_str_plain_load_pem_x509_csr);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_pem_x509_csr) && "mod_consts.const_str_plain_load_pem_x509_csr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_random_serial_number", mod_consts.const_str_plain_random_serial_number);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_random_serial_number) && "mod_consts.const_str_plain_random_serial_number");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5", mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5) && "mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple", mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple) && "mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AccessDescription", mod_consts.const_str_plain_AccessDescription);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_AccessDescription) && "mod_consts.const_str_plain_AccessDescription");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Admission", mod_consts.const_str_plain_Admission);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_Admission) && "mod_consts.const_str_plain_Admission");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Admissions", mod_consts.const_str_plain_Admissions);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Admissions) && "mod_consts.const_str_plain_Admissions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthorityInformationAccess", mod_consts.const_str_plain_AuthorityInformationAccess);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorityInformationAccess) && "mod_consts.const_str_plain_AuthorityInformationAccess");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthorityKeyIdentifier", mod_consts.const_str_plain_AuthorityKeyIdentifier);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorityKeyIdentifier) && "mod_consts.const_str_plain_AuthorityKeyIdentifier");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BasicConstraints", mod_consts.const_str_plain_BasicConstraints);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_BasicConstraints) && "mod_consts.const_str_plain_BasicConstraints");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateIssuer", mod_consts.const_str_plain_CertificateIssuer);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateIssuer) && "mod_consts.const_str_plain_CertificateIssuer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificatePolicies", mod_consts.const_str_plain_CertificatePolicies);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificatePolicies) && "mod_consts.const_str_plain_CertificatePolicies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLDistributionPoints", mod_consts.const_str_plain_CRLDistributionPoints);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRLDistributionPoints) && "mod_consts.const_str_plain_CRLDistributionPoints");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLNumber", mod_consts.const_str_plain_CRLNumber);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRLNumber) && "mod_consts.const_str_plain_CRLNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLReason", mod_consts.const_str_plain_CRLReason);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRLReason) && "mod_consts.const_str_plain_CRLReason");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeltaCRLIndicator", mod_consts.const_str_plain_DeltaCRLIndicator);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeltaCRLIndicator) && "mod_consts.const_str_plain_DeltaCRLIndicator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DistributionPoint", mod_consts.const_str_plain_DistributionPoint);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_DistributionPoint) && "mod_consts.const_str_plain_DistributionPoint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DuplicateExtension", mod_consts.const_str_plain_DuplicateExtension);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateExtension) && "mod_consts.const_str_plain_DuplicateExtension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtendedKeyUsage", mod_consts.const_str_plain_ExtendedKeyUsage);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtendedKeyUsage) && "mod_consts.const_str_plain_ExtendedKeyUsage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Extension", mod_consts.const_str_plain_Extension);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_Extension) && "mod_consts.const_str_plain_Extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtensionNotFound", mod_consts.const_str_plain_ExtensionNotFound);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionNotFound) && "mod_consts.const_str_plain_ExtensionNotFound");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Extensions", mod_consts.const_str_plain_Extensions);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Extensions) && "mod_consts.const_str_plain_Extensions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtensionType", mod_consts.const_str_plain_ExtensionType);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionType) && "mod_consts.const_str_plain_ExtensionType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreshestCRL", mod_consts.const_str_plain_FreshestCRL);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreshestCRL) && "mod_consts.const_str_plain_FreshestCRL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GeneralNames", mod_consts.const_str_plain_GeneralNames);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralNames) && "mod_consts.const_str_plain_GeneralNames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InhibitAnyPolicy", mod_consts.const_str_plain_InhibitAnyPolicy);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_InhibitAnyPolicy) && "mod_consts.const_str_plain_InhibitAnyPolicy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidityDate", mod_consts.const_str_plain_InvalidityDate);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidityDate) && "mod_consts.const_str_plain_InvalidityDate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IssuerAlternativeName", mod_consts.const_str_plain_IssuerAlternativeName);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_IssuerAlternativeName) && "mod_consts.const_str_plain_IssuerAlternativeName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IssuingDistributionPoint", mod_consts.const_str_plain_IssuingDistributionPoint);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_IssuingDistributionPoint) && "mod_consts.const_str_plain_IssuingDistributionPoint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyUsage", mod_consts.const_str_plain_KeyUsage);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyUsage) && "mod_consts.const_str_plain_KeyUsage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MSCertificateTemplate", mod_consts.const_str_plain_MSCertificateTemplate);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_MSCertificateTemplate) && "mod_consts.const_str_plain_MSCertificateTemplate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NameConstraints", mod_consts.const_str_plain_NameConstraints);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_NameConstraints) && "mod_consts.const_str_plain_NameConstraints");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamingAuthority", mod_consts.const_str_plain_NamingAuthority);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamingAuthority) && "mod_consts.const_str_plain_NamingAuthority");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NoticeReference", mod_consts.const_str_plain_NoticeReference);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoticeReference) && "mod_consts.const_str_plain_NoticeReference");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSPAcceptableResponses", mod_consts.const_str_plain_OCSPAcceptableResponses);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_OCSPAcceptableResponses) && "mod_consts.const_str_plain_OCSPAcceptableResponses");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSPNoCheck", mod_consts.const_str_plain_OCSPNoCheck);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_OCSPNoCheck) && "mod_consts.const_str_plain_OCSPNoCheck");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSPNonce", mod_consts.const_str_plain_OCSPNonce);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_OCSPNonce) && "mod_consts.const_str_plain_OCSPNonce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PolicyConstraints", mod_consts.const_str_plain_PolicyConstraints);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_PolicyConstraints) && "mod_consts.const_str_plain_PolicyConstraints");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PolicyInformation", mod_consts.const_str_plain_PolicyInformation);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_PolicyInformation) && "mod_consts.const_str_plain_PolicyInformation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335", mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335) && "mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrecertPoison", mod_consts.const_str_plain_PrecertPoison);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrecertPoison) && "mod_consts.const_str_plain_PrecertPoison");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrivateKeyUsagePeriod", mod_consts.const_str_plain_PrivateKeyUsagePeriod);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKeyUsagePeriod) && "mod_consts.const_str_plain_PrivateKeyUsagePeriod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfessionInfo", mod_consts.const_str_plain_ProfessionInfo);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfessionInfo) && "mod_consts.const_str_plain_ProfessionInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReasonFlags", mod_consts.const_str_plain_ReasonFlags);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReasonFlags) && "mod_consts.const_str_plain_ReasonFlags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SignedCertificateTimestamps", mod_consts.const_str_plain_SignedCertificateTimestamps);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_SignedCertificateTimestamps) && "mod_consts.const_str_plain_SignedCertificateTimestamps");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectAlternativeName", mod_consts.const_str_plain_SubjectAlternativeName);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectAlternativeName) && "mod_consts.const_str_plain_SubjectAlternativeName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectInformationAccess", mod_consts.const_str_plain_SubjectInformationAccess);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectInformationAccess) && "mod_consts.const_str_plain_SubjectInformationAccess");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectKeyIdentifier", mod_consts.const_str_plain_SubjectKeyIdentifier);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectKeyIdentifier) && "mod_consts.const_str_plain_SubjectKeyIdentifier");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSFeature", mod_consts.const_str_plain_TLSFeature);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLSFeature) && "mod_consts.const_str_plain_TLSFeature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSFeatureType", mod_consts.const_str_plain_TLSFeatureType);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLSFeatureType) && "mod_consts.const_str_plain_TLSFeatureType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnrecognizedExtension", mod_consts.const_str_plain_UnrecognizedExtension);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnrecognizedExtension) && "mod_consts.const_str_plain_UnrecognizedExtension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UserNotice", mod_consts.const_str_plain_UserNotice);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserNotice) && "mod_consts.const_str_plain_UserNotice");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c", mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c) && "mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple", mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple) && "mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DirectoryName", mod_consts.const_str_plain_DirectoryName);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirectoryName) && "mod_consts.const_str_plain_DirectoryName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNSName", mod_consts.const_str_plain_DNSName);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_DNSName) && "mod_consts.const_str_plain_DNSName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GeneralName", mod_consts.const_str_plain_GeneralName);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralName) && "mod_consts.const_str_plain_GeneralName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IPAddress", mod_consts.const_str_plain_IPAddress);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPAddress) && "mod_consts.const_str_plain_IPAddress");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OtherName", mod_consts.const_str_plain_OtherName);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_OtherName) && "mod_consts.const_str_plain_OtherName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RegisteredID", mod_consts.const_str_plain_RegisteredID);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_RegisteredID) && "mod_consts.const_str_plain_RegisteredID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RFC822Name", mod_consts.const_str_plain_RFC822Name);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_RFC822Name) && "mod_consts.const_str_plain_RFC822Name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UniformResourceIdentifier", mod_consts.const_str_plain_UniformResourceIdentifier);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniformResourceIdentifier) && "mod_consts.const_str_plain_UniformResourceIdentifier");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnsupportedGeneralNameType", mod_consts.const_str_plain_UnsupportedGeneralNameType);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedGeneralNameType) && "mod_consts.const_str_plain_UnsupportedGeneralNameType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10", mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10) && "mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple", mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple) && "mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Name", mod_consts.const_str_plain_Name);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Name) && "mod_consts.const_str_plain_Name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NameAttribute", mod_consts.const_str_plain_NameAttribute);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_NameAttribute) && "mod_consts.const_str_plain_NameAttribute");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelativeDistinguishedName", mod_consts.const_str_plain_RelativeDistinguishedName);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelativeDistinguishedName) && "mod_consts.const_str_plain_RelativeDistinguishedName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35", mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35) && "mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple", mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple) && "mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthorityInformationAccessOID", mod_consts.const_str_plain_AuthorityInformationAccessOID);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorityInformationAccessOID) && "mod_consts.const_str_plain_AuthorityInformationAccessOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificatePoliciesOID", mod_consts.const_str_plain_CertificatePoliciesOID);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificatePoliciesOID) && "mod_consts.const_str_plain_CertificatePoliciesOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRLEntryExtensionOID", mod_consts.const_str_plain_CRLEntryExtensionOID);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRLEntryExtensionOID) && "mod_consts.const_str_plain_CRLEntryExtensionOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtendedKeyUsageOID", mod_consts.const_str_plain_ExtendedKeyUsageOID);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtendedKeyUsageOID) && "mod_consts.const_str_plain_ExtendedKeyUsageOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtensionOID", mod_consts.const_str_plain_ExtensionOID);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionOID) && "mod_consts.const_str_plain_ExtensionOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NameOID", mod_consts.const_str_plain_NameOID);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_NameOID) && "mod_consts.const_str_plain_NameOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ObjectIdentifier", mod_consts.const_str_plain_ObjectIdentifier);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectIdentifier) && "mod_consts.const_str_plain_ObjectIdentifier");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PublicKeyAlgorithmOID", mod_consts.const_str_plain_PublicKeyAlgorithmOID);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKeyAlgorithmOID) && "mod_consts.const_str_plain_PublicKeyAlgorithmOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SignatureAlgorithmOID", mod_consts.const_str_plain_SignatureAlgorithmOID);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_SignatureAlgorithmOID) && "mod_consts.const_str_plain_SignatureAlgorithmOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS", mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS) && "mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS", mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS) && "mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER", mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER) && "mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER", mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER) && "mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BASIC_CONSTRAINTS", mod_consts.const_str_plain_BASIC_CONSTRAINTS);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_BASIC_CONSTRAINTS) && "mod_consts.const_str_plain_BASIC_CONSTRAINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS", mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS) && "mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERTIFICATE_POLICIES", mod_consts.const_str_plain_CERTIFICATE_POLICIES);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE_POLICIES) && "mod_consts.const_str_plain_CERTIFICATE_POLICIES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES", mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES) && "mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS", mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS) && "mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS", mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS) && "mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXTENDED_KEY_USAGE", mod_consts.const_str_plain_EXTENDED_KEY_USAGE);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENDED_KEY_USAGE) && "mod_consts.const_str_plain_EXTENDED_KEY_USAGE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE", mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE) && "mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FRESHEST_CRL", mod_consts.const_str_plain_FRESHEST_CRL);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_FRESHEST_CRL) && "mod_consts.const_str_plain_FRESHEST_CRL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_FRESHEST_CRL", mod_consts.const_str_plain_OID_FRESHEST_CRL);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_FRESHEST_CRL) && "mod_consts.const_str_plain_OID_FRESHEST_CRL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INHIBIT_ANY_POLICY", mod_consts.const_str_plain_INHIBIT_ANY_POLICY);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_INHIBIT_ANY_POLICY) && "mod_consts.const_str_plain_INHIBIT_ANY_POLICY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY", mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY) && "mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME", mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME) && "mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME", mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME) && "mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_USAGE", mod_consts.const_str_plain_KEY_USAGE);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_USAGE) && "mod_consts.const_str_plain_KEY_USAGE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_KEY_USAGE", mod_consts.const_str_plain_OID_KEY_USAGE);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_KEY_USAGE) && "mod_consts.const_str_plain_OID_KEY_USAGE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD", mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD) && "mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD", mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD) && "mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NAME_CONSTRAINTS", mod_consts.const_str_plain_NAME_CONSTRAINTS);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_NAME_CONSTRAINTS) && "mod_consts.const_str_plain_NAME_CONSTRAINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_NAME_CONSTRAINTS", mod_consts.const_str_plain_OID_NAME_CONSTRAINTS);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_NAME_CONSTRAINTS) && "mod_consts.const_str_plain_OID_NAME_CONSTRAINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSP_NO_CHECK", mod_consts.const_str_plain_OCSP_NO_CHECK);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_OCSP_NO_CHECK) && "mod_consts.const_str_plain_OCSP_NO_CHECK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_OCSP_NO_CHECK", mod_consts.const_str_plain_OID_OCSP_NO_CHECK);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_OCSP_NO_CHECK) && "mod_consts.const_str_plain_OID_OCSP_NO_CHECK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLICY_CONSTRAINTS", mod_consts.const_str_plain_POLICY_CONSTRAINTS);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_POLICY_CONSTRAINTS) && "mod_consts.const_str_plain_POLICY_CONSTRAINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS", mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS) && "mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLICY_MAPPINGS", mod_consts.const_str_plain_POLICY_MAPPINGS);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_POLICY_MAPPINGS) && "mod_consts.const_str_plain_POLICY_MAPPINGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_POLICY_MAPPINGS", mod_consts.const_str_plain_OID_POLICY_MAPPINGS);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_POLICY_MAPPINGS) && "mod_consts.const_str_plain_OID_POLICY_MAPPINGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME", mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME) && "mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME", mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME) && "mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES", mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES) && "mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES", mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES) && "mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS", mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS) && "mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS", mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS) && "mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER", mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER) && "mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER", mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER) && "mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSA_WITH_SHA1", mod_consts.const_str_plain_DSA_WITH_SHA1);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSA_WITH_SHA1) && "mod_consts.const_str_plain_DSA_WITH_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DSA_WITH_SHA1", mod_consts.const_str_plain_OID_DSA_WITH_SHA1);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DSA_WITH_SHA1) && "mod_consts.const_str_plain_OID_DSA_WITH_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSA_WITH_SHA224", mod_consts.const_str_plain_DSA_WITH_SHA224);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSA_WITH_SHA224) && "mod_consts.const_str_plain_DSA_WITH_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DSA_WITH_SHA224", mod_consts.const_str_plain_OID_DSA_WITH_SHA224);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DSA_WITH_SHA224) && "mod_consts.const_str_plain_OID_DSA_WITH_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSA_WITH_SHA256", mod_consts.const_str_plain_DSA_WITH_SHA256);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSA_WITH_SHA256) && "mod_consts.const_str_plain_DSA_WITH_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DSA_WITH_SHA256", mod_consts.const_str_plain_OID_DSA_WITH_SHA256);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DSA_WITH_SHA256) && "mod_consts.const_str_plain_OID_DSA_WITH_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA1", mod_consts.const_str_plain_ECDSA_WITH_SHA1);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA1) && "mod_consts.const_str_plain_ECDSA_WITH_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1) && "mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA224", mod_consts.const_str_plain_ECDSA_WITH_SHA224);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA224) && "mod_consts.const_str_plain_ECDSA_WITH_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224) && "mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA256", mod_consts.const_str_plain_ECDSA_WITH_SHA256);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA256) && "mod_consts.const_str_plain_ECDSA_WITH_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256) && "mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA384", mod_consts.const_str_plain_ECDSA_WITH_SHA384);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA384) && "mod_consts.const_str_plain_ECDSA_WITH_SHA384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384) && "mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA_WITH_SHA512", mod_consts.const_str_plain_ECDSA_WITH_SHA512);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA_WITH_SHA512) && "mod_consts.const_str_plain_ECDSA_WITH_SHA512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512", mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512) && "mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_MD5", mod_consts.const_str_plain_RSA_WITH_MD5);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_MD5) && "mod_consts.const_str_plain_RSA_WITH_MD5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_MD5", mod_consts.const_str_plain_OID_RSA_WITH_MD5);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_MD5) && "mod_consts.const_str_plain_OID_RSA_WITH_MD5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA1", mod_consts.const_str_plain_RSA_WITH_SHA1);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA1) && "mod_consts.const_str_plain_RSA_WITH_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA1", mod_consts.const_str_plain_OID_RSA_WITH_SHA1);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA1) && "mod_consts.const_str_plain_OID_RSA_WITH_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA224", mod_consts.const_str_plain_RSA_WITH_SHA224);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA224) && "mod_consts.const_str_plain_RSA_WITH_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA224", mod_consts.const_str_plain_OID_RSA_WITH_SHA224);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA224) && "mod_consts.const_str_plain_OID_RSA_WITH_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA256", mod_consts.const_str_plain_RSA_WITH_SHA256);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA256) && "mod_consts.const_str_plain_RSA_WITH_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA256", mod_consts.const_str_plain_OID_RSA_WITH_SHA256);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA256) && "mod_consts.const_str_plain_OID_RSA_WITH_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA384", mod_consts.const_str_plain_RSA_WITH_SHA384);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA384) && "mod_consts.const_str_plain_RSA_WITH_SHA384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA384", mod_consts.const_str_plain_OID_RSA_WITH_SHA384);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA384) && "mod_consts.const_str_plain_OID_RSA_WITH_SHA384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSA_WITH_SHA512", mod_consts.const_str_plain_RSA_WITH_SHA512);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSA_WITH_SHA512) && "mod_consts.const_str_plain_RSA_WITH_SHA512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSA_WITH_SHA512", mod_consts.const_str_plain_OID_RSA_WITH_SHA512);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSA_WITH_SHA512) && "mod_consts.const_str_plain_OID_RSA_WITH_SHA512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSASSA_PSS", mod_consts.const_str_plain_RSASSA_PSS);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSASSA_PSS) && "mod_consts.const_str_plain_RSASSA_PSS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_RSASSA_PSS", mod_consts.const_str_plain_OID_RSASSA_PSS);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_RSASSA_PSS) && "mod_consts.const_str_plain_OID_RSASSA_PSS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COMMON_NAME", mod_consts.const_str_plain_COMMON_NAME);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMON_NAME) && "mod_consts.const_str_plain_COMMON_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_COMMON_NAME", mod_consts.const_str_plain_OID_COMMON_NAME);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_COMMON_NAME) && "mod_consts.const_str_plain_OID_COMMON_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COUNTRY_NAME", mod_consts.const_str_plain_COUNTRY_NAME);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_COUNTRY_NAME) && "mod_consts.const_str_plain_COUNTRY_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_COUNTRY_NAME", mod_consts.const_str_plain_OID_COUNTRY_NAME);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_COUNTRY_NAME) && "mod_consts.const_str_plain_OID_COUNTRY_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOMAIN_COMPONENT", mod_consts.const_str_plain_DOMAIN_COMPONENT);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOMAIN_COMPONENT) && "mod_consts.const_str_plain_DOMAIN_COMPONENT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DOMAIN_COMPONENT", mod_consts.const_str_plain_OID_DOMAIN_COMPONENT);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DOMAIN_COMPONENT) && "mod_consts.const_str_plain_OID_DOMAIN_COMPONENT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DN_QUALIFIER", mod_consts.const_str_plain_DN_QUALIFIER);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_DN_QUALIFIER) && "mod_consts.const_str_plain_DN_QUALIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_DN_QUALIFIER", mod_consts.const_str_plain_OID_DN_QUALIFIER);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_DN_QUALIFIER) && "mod_consts.const_str_plain_OID_DN_QUALIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EMAIL_ADDRESS", mod_consts.const_str_plain_EMAIL_ADDRESS);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_EMAIL_ADDRESS) && "mod_consts.const_str_plain_EMAIL_ADDRESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_EMAIL_ADDRESS", mod_consts.const_str_plain_OID_EMAIL_ADDRESS);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_EMAIL_ADDRESS) && "mod_consts.const_str_plain_OID_EMAIL_ADDRESS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GENERATION_QUALIFIER", mod_consts.const_str_plain_GENERATION_QUALIFIER);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_GENERATION_QUALIFIER) && "mod_consts.const_str_plain_GENERATION_QUALIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_GENERATION_QUALIFIER", mod_consts.const_str_plain_OID_GENERATION_QUALIFIER);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_GENERATION_QUALIFIER) && "mod_consts.const_str_plain_OID_GENERATION_QUALIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GIVEN_NAME", mod_consts.const_str_plain_GIVEN_NAME);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_GIVEN_NAME) && "mod_consts.const_str_plain_GIVEN_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_GIVEN_NAME", mod_consts.const_str_plain_OID_GIVEN_NAME);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_GIVEN_NAME) && "mod_consts.const_str_plain_OID_GIVEN_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LOCALITY_NAME", mod_consts.const_str_plain_LOCALITY_NAME);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOCALITY_NAME) && "mod_consts.const_str_plain_LOCALITY_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_LOCALITY_NAME", mod_consts.const_str_plain_OID_LOCALITY_NAME);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_LOCALITY_NAME) && "mod_consts.const_str_plain_OID_LOCALITY_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME", mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME) && "mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME", mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME) && "mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ORGANIZATION_NAME", mod_consts.const_str_plain_ORGANIZATION_NAME);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_ORGANIZATION_NAME) && "mod_consts.const_str_plain_ORGANIZATION_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ORGANIZATION_NAME", mod_consts.const_str_plain_OID_ORGANIZATION_NAME);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ORGANIZATION_NAME) && "mod_consts.const_str_plain_OID_ORGANIZATION_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PSEUDONYM", mod_consts.const_str_plain_PSEUDONYM);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_PSEUDONYM) && "mod_consts.const_str_plain_PSEUDONYM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_PSEUDONYM", mod_consts.const_str_plain_OID_PSEUDONYM);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_PSEUDONYM) && "mod_consts.const_str_plain_OID_PSEUDONYM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SERIAL_NUMBER", mod_consts.const_str_plain_SERIAL_NUMBER);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERIAL_NUMBER) && "mod_consts.const_str_plain_SERIAL_NUMBER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SERIAL_NUMBER", mod_consts.const_str_plain_OID_SERIAL_NUMBER);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SERIAL_NUMBER) && "mod_consts.const_str_plain_OID_SERIAL_NUMBER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME", mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME) && "mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME", mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME) && "mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SURNAME", mod_consts.const_str_plain_SURNAME);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_SURNAME) && "mod_consts.const_str_plain_SURNAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SURNAME", mod_consts.const_str_plain_OID_SURNAME);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SURNAME) && "mod_consts.const_str_plain_OID_SURNAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TITLE", mod_consts.const_str_plain_TITLE);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_TITLE) && "mod_consts.const_str_plain_TITLE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_TITLE", mod_consts.const_str_plain_OID_TITLE);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_TITLE) && "mod_consts.const_str_plain_OID_TITLE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLIENT_AUTH", mod_consts.const_str_plain_CLIENT_AUTH);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLIENT_AUTH) && "mod_consts.const_str_plain_CLIENT_AUTH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CLIENT_AUTH", mod_consts.const_str_plain_OID_CLIENT_AUTH);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CLIENT_AUTH) && "mod_consts.const_str_plain_OID_CLIENT_AUTH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CODE_SIGNING", mod_consts.const_str_plain_CODE_SIGNING);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_CODE_SIGNING) && "mod_consts.const_str_plain_CODE_SIGNING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CODE_SIGNING", mod_consts.const_str_plain_OID_CODE_SIGNING);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CODE_SIGNING) && "mod_consts.const_str_plain_OID_CODE_SIGNING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EMAIL_PROTECTION", mod_consts.const_str_plain_EMAIL_PROTECTION);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_EMAIL_PROTECTION) && "mod_consts.const_str_plain_EMAIL_PROTECTION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_EMAIL_PROTECTION", mod_consts.const_str_plain_OID_EMAIL_PROTECTION);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_EMAIL_PROTECTION) && "mod_consts.const_str_plain_OID_EMAIL_PROTECTION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSP_SIGNING", mod_consts.const_str_plain_OCSP_SIGNING);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_OCSP_SIGNING) && "mod_consts.const_str_plain_OCSP_SIGNING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_OCSP_SIGNING", mod_consts.const_str_plain_OID_OCSP_SIGNING);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_OCSP_SIGNING) && "mod_consts.const_str_plain_OID_OCSP_SIGNING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SERVER_AUTH", mod_consts.const_str_plain_SERVER_AUTH);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_SERVER_AUTH) && "mod_consts.const_str_plain_SERVER_AUTH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_SERVER_AUTH", mod_consts.const_str_plain_OID_SERVER_AUTH);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_SERVER_AUTH) && "mod_consts.const_str_plain_OID_SERVER_AUTH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TIME_STAMPING", mod_consts.const_str_plain_TIME_STAMPING);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_TIME_STAMPING) && "mod_consts.const_str_plain_TIME_STAMPING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_TIME_STAMPING", mod_consts.const_str_plain_OID_TIME_STAMPING);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_TIME_STAMPING) && "mod_consts.const_str_plain_OID_TIME_STAMPING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANY_POLICY", mod_consts.const_str_plain_ANY_POLICY);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANY_POLICY) && "mod_consts.const_str_plain_ANY_POLICY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_ANY_POLICY", mod_consts.const_str_plain_OID_ANY_POLICY);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_ANY_POLICY) && "mod_consts.const_str_plain_OID_ANY_POLICY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CPS_QUALIFIER", mod_consts.const_str_plain_CPS_QUALIFIER);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_CPS_QUALIFIER) && "mod_consts.const_str_plain_CPS_QUALIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CPS_QUALIFIER", mod_consts.const_str_plain_OID_CPS_QUALIFIER);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CPS_QUALIFIER) && "mod_consts.const_str_plain_OID_CPS_QUALIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CPS_USER_NOTICE", mod_consts.const_str_plain_CPS_USER_NOTICE);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_CPS_USER_NOTICE) && "mod_consts.const_str_plain_CPS_USER_NOTICE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CPS_USER_NOTICE", mod_consts.const_str_plain_OID_CPS_USER_NOTICE);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CPS_USER_NOTICE) && "mod_consts.const_str_plain_OID_CPS_USER_NOTICE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERTIFICATE_ISSUER", mod_consts.const_str_plain_CERTIFICATE_ISSUER);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERTIFICATE_ISSUER) && "mod_consts.const_str_plain_CERTIFICATE_ISSUER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER", mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER) && "mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRL_REASON", mod_consts.const_str_plain_CRL_REASON);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRL_REASON) && "mod_consts.const_str_plain_CRL_REASON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CRL_REASON", mod_consts.const_str_plain_OID_CRL_REASON);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CRL_REASON) && "mod_consts.const_str_plain_OID_CRL_REASON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INVALIDITY_DATE", mod_consts.const_str_plain_INVALIDITY_DATE);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALIDITY_DATE) && "mod_consts.const_str_plain_INVALIDITY_DATE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_INVALIDITY_DATE", mod_consts.const_str_plain_OID_INVALIDITY_DATE);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_INVALIDITY_DATE) && "mod_consts.const_str_plain_OID_INVALIDITY_DATE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CA_ISSUERS", mod_consts.const_str_plain_CA_ISSUERS);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_CA_ISSUERS) && "mod_consts.const_str_plain_CA_ISSUERS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_CA_ISSUERS", mod_consts.const_str_plain_OID_CA_ISSUERS);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_CA_ISSUERS) && "mod_consts.const_str_plain_OID_CA_ISSUERS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OCSP", mod_consts.const_str_plain_OCSP);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_OCSP) && "mod_consts.const_str_plain_OCSP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OID_OCSP", mod_consts.const_str_plain_OID_OCSP);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_OID_OCSP) && "mod_consts.const_str_plain_OID_OCSP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list", mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list) && "mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45", mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45) && "mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e", mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e) && "mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_cryptography$x509$AuthorityInformationAccessOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityInformationAccessOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthorityInformationAccessOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthorityInformationAccessOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthorityInformationAccessOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthorityInformationAccessOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityInformationAccessOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityInformationAccessOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityInformationAccessOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$CRLEntryExtensionOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLEntryExtensionOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRLEntryExtensionOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRLEntryExtensionOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CRLEntryExtensionOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CRLEntryExtensionOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLEntryExtensionOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLEntryExtensionOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLEntryExtensionOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$CertificatePoliciesOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePoliciesOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CertificatePoliciesOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CertificatePoliciesOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CertificatePoliciesOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CertificatePoliciesOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePoliciesOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePoliciesOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePoliciesOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendedKeyUsageOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtendedKeyUsageOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtendedKeyUsageOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtendedKeyUsageOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtendedKeyUsageOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendedKeyUsageOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendedKeyUsageOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendedKeyUsageOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$ExtensionOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtensionOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtensionOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExtensionOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExtensionOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$NameOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NameOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NameOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NameOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NameOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NameOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NameOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NameOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NameOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$SignatureAlgorithmOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SignatureAlgorithmOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SignatureAlgorithmOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SignatureAlgorithmOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SignatureAlgorithmOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SignatureAlgorithmOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SignatureAlgorithmOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SignatureAlgorithmOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SignatureAlgorithmOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$x509$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$x509->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$x509->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$x509->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d6cd12e0a0c7169f30650eafcc9221b0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a7b34d5e2a03cf0bbc47b9174154ca45); CHECK_OBJECT(module_filename_obj);
code_objects_d6cd12e0a0c7169f30650eafcc9221b0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e, mod_consts.const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_cryptography$x509[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$x509);
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
        module_cryptography$x509,
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
        function_table_cryptography$x509,
        sizeof(function_table_cryptography$x509) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.x509";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$x509(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$x509");

    // Store the module for future use.
    module_cryptography$x509 = module;

    moduledict_cryptography$x509 = MODULE_DICT(module_cryptography$x509);

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
        PRINT_STRING("cryptography$x509: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$x509: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$x509: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.x509" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$x509\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$x509,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$x509);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$x509);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$x509;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$x509 = MAKE_MODULE_FRAME(code_objects_d6cd12e0a0c7169f30650eafcc9221b0, module_cryptography$x509);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$x509);
assert(Py_REFCNT(frame_frame_cryptography$x509) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
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
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_b21381dc2b5831023f61a8fd571218c0_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_x509;
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_cryptography$x509->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_7cb793d0eb743d5a252e684642650a3c_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$x509$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$x509$__spec__(tstate);
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
tmp_ass_attr_value_3 = module_var_accessor_cryptography$x509$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_cryptography$x509$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$x509;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_a2dc2167aef420398fb6f9053c2f555c_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$x509->m_frame.f_lineno = 7;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_certificate_transparency,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_certificate_transparency);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_certificate_transparency, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_oid,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_oid);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_oid, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_verification,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_verification);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_verification, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_99d507f2ac89b982963447ed05345806;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$x509;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_bef25d89e8194e5258cd52e13ff69cf6_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$x509->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Attribute,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Attribute);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Attribute, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_AttributeNotFound,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AttributeNotFound);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AttributeNotFound, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Attributes,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Attributes);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Attributes, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Certificate,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Certificate);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Certificate, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificateBuilder,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_CertificateBuilder);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateBuilder, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificateRevocationList,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_CertificateRevocationList);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateRevocationList, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificateRevocationListBuilder,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_CertificateRevocationListBuilder);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateRevocationListBuilder, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificateSigningRequest,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_CertificateSigningRequest);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateSigningRequest, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificateSigningRequestBuilder,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_CertificateSigningRequestBuilder);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateSigningRequestBuilder, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_InvalidVersion,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_InvalidVersion);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidVersion, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_RevokedCertificate,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_RevokedCertificate);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_RevokedCertificate, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_RevokedCertificateBuilder,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_RevokedCertificateBuilder);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_RevokedCertificateBuilder, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Version,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Version);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Version, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_der_x509_certificate,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_load_der_x509_certificate);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_der_x509_certificate, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_der_x509_crl,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_load_der_x509_crl);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_der_x509_crl, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_19 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_der_x509_csr,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_load_der_x509_csr);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_der_x509_csr, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_20 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_pem_x509_certificate,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_load_pem_x509_certificate);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_pem_x509_certificate, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_21 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_pem_x509_certificates,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_load_pem_x509_certificates);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_pem_x509_certificates, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_22 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_pem_x509_crl,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_load_pem_x509_crl);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_pem_x509_crl, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_23 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_load_pem_x509_csr,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_load_pem_x509_csr);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_load_pem_x509_csr, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_24 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_random_serial_number,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_random_serial_number);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_random_serial_number, tmp_assign_source_32);
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
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$x509;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_d79ef27befd37caac6120ae05f4a26e1_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$x509->m_frame.f_lineno = 31;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_25 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_AccessDescription,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_AccessDescription);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AccessDescription, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_26 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Admission,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_Admission);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Admission, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_27 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Admissions,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_Admissions);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Admissions, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_28 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_AuthorityInformationAccess,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_AuthorityInformationAccess);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityInformationAccess, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_29 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_AuthorityKeyIdentifier,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_AuthorityKeyIdentifier);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityKeyIdentifier, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_30 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_BasicConstraints,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_BasicConstraints);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_BasicConstraints, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_31 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificateIssuer,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_CertificateIssuer);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateIssuer, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_32 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificatePolicies,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_CertificatePolicies);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePolicies, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_33 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CRLDistributionPoints,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_CRLDistributionPoints);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLDistributionPoints, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_34 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CRLNumber,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_CRLNumber);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLNumber, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_35 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CRLReason,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_CRLReason);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLReason, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_36 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_DeltaCRLIndicator,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_DeltaCRLIndicator);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_DeltaCRLIndicator, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_37 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_DistributionPoint,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_DistributionPoint);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_DistributionPoint, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_38 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_DuplicateExtension,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_DuplicateExtension);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateExtension, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_39 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ExtendedKeyUsage,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_ExtendedKeyUsage);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendedKeyUsage, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_40 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Extension,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_Extension);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Extension, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_41 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ExtensionNotFound,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_ExtensionNotFound);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionNotFound, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_42 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Extensions,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_Extensions);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Extensions, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_43 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ExtensionType,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_ExtensionType);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionType, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_44 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_FreshestCRL,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_FreshestCRL);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_FreshestCRL, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_45 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_GeneralNames,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_GeneralNames);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralNames, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_46 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_InhibitAnyPolicy,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_InhibitAnyPolicy);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_InhibitAnyPolicy, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_47;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_47 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_InvalidityDate,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_InvalidityDate);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidityDate, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_48;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_48 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_IssuerAlternativeName,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_IssuerAlternativeName);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_IssuerAlternativeName, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_49;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_49 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_IssuingDistributionPoint,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_IssuingDistributionPoint);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_IssuingDistributionPoint, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_50 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_KeyUsage,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_KeyUsage);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyUsage, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_51 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_MSCertificateTemplate,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_MSCertificateTemplate);
}

if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_MSCertificateTemplate, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_52;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_52 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_NameConstraints,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_NameConstraints);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NameConstraints, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_53;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_53 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_NamingAuthority,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_NamingAuthority);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NamingAuthority, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_54;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_54 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_NoticeReference,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_NoticeReference);
}

if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NoticeReference, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_55;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_55 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_OCSPAcceptableResponses,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_OCSPAcceptableResponses);
}

if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OCSPAcceptableResponses, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_56;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_56 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_OCSPNoCheck,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_OCSPNoCheck);
}

if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OCSPNoCheck, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_57;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_57 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_OCSPNonce,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_OCSPNonce);
}

if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OCSPNonce, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_58;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_58 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_PolicyConstraints,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_PolicyConstraints);
}

if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_PolicyConstraints, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_59;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_59 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_PolicyInformation,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_PolicyInformation);
}

if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_PolicyInformation, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_import_name_from_60;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_60 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335,
        const_int_0
    );
} else {
    tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335);
}

if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_digest_97ac982b098bfd0facb64df38773c335, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_import_name_from_61;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_61 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_PrecertPoison,
        const_int_0
    );
} else {
    tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_PrecertPoison);
}

if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_PrecertPoison, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_62;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_62 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_PrivateKeyUsagePeriod,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_PrivateKeyUsagePeriod);
}

if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyUsagePeriod, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_import_name_from_63;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_63 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ProfessionInfo,
        const_int_0
    );
} else {
    tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain_ProfessionInfo);
}

if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ProfessionInfo, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_import_name_from_64;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_64 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ReasonFlags,
        const_int_0
    );
} else {
    tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain_ReasonFlags);
}

if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ReasonFlags, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_65;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_65 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_SignedCertificateTimestamps,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain_SignedCertificateTimestamps);
}

if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SignedCertificateTimestamps, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_import_name_from_66;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_66 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_SubjectAlternativeName,
        const_int_0
    );
} else {
    tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain_SubjectAlternativeName);
}

if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectAlternativeName, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_import_name_from_67;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_67 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_SubjectInformationAccess,
        const_int_0
    );
} else {
    tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain_SubjectInformationAccess);
}

if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectInformationAccess, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_import_name_from_68;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_68 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_SubjectKeyIdentifier,
        const_int_0
    );
} else {
    tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_plain_SubjectKeyIdentifier);
}

if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectKeyIdentifier, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_import_name_from_69;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_69 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_TLSFeature,
        const_int_0
    );
} else {
    tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_plain_TLSFeature);
}

if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSFeature, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_import_name_from_70;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_70 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_TLSFeatureType,
        const_int_0
    );
} else {
    tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_plain_TLSFeatureType);
}

if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSFeatureType, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_import_name_from_71;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_71 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_71)) {
    tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_71,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_UnrecognizedExtension,
        const_int_0
    );
} else {
    tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts.const_str_plain_UnrecognizedExtension);
}

if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrecognizedExtension, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_import_name_from_72;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_72 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_72)) {
    tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_72,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_UserNotice,
        const_int_0
    );
} else {
    tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts.const_str_plain_UserNotice);
}

if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_UserNotice, tmp_assign_source_81);
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
PyObject *tmp_assign_source_82;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_becb7ddc5eba88bda421a9fc23a1539c;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cryptography$x509;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_de53f17a504c3c9af62ded21644f33f7_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_cryptography$x509->m_frame.f_lineno = 81;
tmp_assign_source_82 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_82;
}
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_import_name_from_73;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_73 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_73)) {
    tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_73,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_DirectoryName,
        const_int_0
    );
} else {
    tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts.const_str_plain_DirectoryName);
}

if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectoryName, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_import_name_from_74;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_74 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_74)) {
    tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_74,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_DNSName,
        const_int_0
    );
} else {
    tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts.const_str_plain_DNSName);
}

if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_DNSName, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_import_name_from_75;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_75 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_75)) {
    tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_75,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_GeneralName,
        const_int_0
    );
} else {
    tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts.const_str_plain_GeneralName);
}

if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralName, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_import_name_from_76;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_76 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_76)) {
    tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_76,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_IPAddress,
        const_int_0
    );
} else {
    tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts.const_str_plain_IPAddress);
}

if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_IPAddress, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_import_name_from_77;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_77 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_77)) {
    tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_77,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_OtherName,
        const_int_0
    );
} else {
    tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts.const_str_plain_OtherName);
}

if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OtherName, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_import_name_from_78;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_78 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_78)) {
    tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_78,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_RegisteredID,
        const_int_0
    );
} else {
    tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts.const_str_plain_RegisteredID);
}

if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_RegisteredID, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_import_name_from_79;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_79 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_79)) {
    tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_79,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_RFC822Name,
        const_int_0
    );
} else {
    tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts.const_str_plain_RFC822Name);
}

if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_RFC822Name, tmp_assign_source_89);
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_import_name_from_80;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_80 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_80)) {
    tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_80,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_UniformResourceIdentifier,
        const_int_0
    );
} else {
    tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts.const_str_plain_UniformResourceIdentifier);
}

if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_UniformResourceIdentifier, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_import_name_from_81;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_81 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_81)) {
    tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_81,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_UnsupportedGeneralNameType,
        const_int_0
    );
} else {
    tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts.const_str_plain_UnsupportedGeneralNameType);
}

if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedGeneralNameType, tmp_assign_source_91);
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
PyObject *tmp_assign_source_92;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_957c81bc7a15c28c0c453fa3270dbc10;
tmp_globals_arg_value_5 = (PyObject *)moduledict_cryptography$x509;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_cryptography$x509->m_frame.f_lineno = 92;
tmp_assign_source_92 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_92;
}
// Tried code:
{
PyObject *tmp_assign_source_93;
PyObject *tmp_import_name_from_82;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_82 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_82)) {
    tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_82,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_Name,
        const_int_0
    );
} else {
    tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts.const_str_plain_Name);
}

if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_Name, tmp_assign_source_93);
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_import_name_from_83;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_83 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_83)) {
    tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_83,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_NameAttribute,
        const_int_0
    );
} else {
    tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts.const_str_plain_NameAttribute);
}

if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NameAttribute, tmp_assign_source_94);
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_import_name_from_84;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_84 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_84)) {
    tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_84,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_RelativeDistinguishedName,
        const_int_0
    );
} else {
    tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts.const_str_plain_RelativeDistinguishedName);
}

if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_RelativeDistinguishedName, tmp_assign_source_95);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_96;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
tmp_globals_arg_value_6 = (PyObject *)moduledict_cryptography$x509;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_a2adc006b12a347f7b244ff79ab3dc4a_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_cryptography$x509->m_frame.f_lineno = 97;
tmp_assign_source_96 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_96;
}
// Tried code:
{
PyObject *tmp_assign_source_97;
PyObject *tmp_import_name_from_85;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_85 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_85)) {
    tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_85,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_AuthorityInformationAccessOID,
        const_int_0
    );
} else {
    tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts.const_str_plain_AuthorityInformationAccessOID);
}

if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorityInformationAccessOID, tmp_assign_source_97);
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_import_name_from_86;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_86 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_86)) {
    tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_86,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CertificatePoliciesOID,
        const_int_0
    );
} else {
    tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts.const_str_plain_CertificatePoliciesOID);
}

if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePoliciesOID, tmp_assign_source_98);
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_import_name_from_87;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_87 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_87)) {
    tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_87,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_CRLEntryExtensionOID,
        const_int_0
    );
} else {
    tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts.const_str_plain_CRLEntryExtensionOID);
}

if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_CRLEntryExtensionOID, tmp_assign_source_99);
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_import_name_from_88;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_88 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_88)) {
    tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_88,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ExtendedKeyUsageOID,
        const_int_0
    );
} else {
    tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtendedKeyUsageOID, tmp_assign_source_100);
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_import_name_from_89;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_89 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_89)) {
    tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_89,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ExtensionOID,
        const_int_0
    );
} else {
    tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ExtensionOID, tmp_assign_source_101);
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_import_name_from_90;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_90 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_90)) {
    tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_90,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_NameOID,
        const_int_0
    );
} else {
    tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts.const_str_plain_NameOID);
}

if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_NameOID, tmp_assign_source_102);
}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_import_name_from_91;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_91 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_91)) {
    tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_91,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_ObjectIdentifier,
        const_int_0
    );
} else {
    tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectIdentifier, tmp_assign_source_103);
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_import_name_from_92;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_92 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_92)) {
    tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_92,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_PublicKeyAlgorithmOID,
        const_int_0
    );
} else {
    tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_92, mod_consts.const_str_plain_PublicKeyAlgorithmOID);
}

if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyAlgorithmOID, tmp_assign_source_104);
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_import_name_from_93;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_93 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_93)) {
    tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_93,
        (PyObject *)moduledict_cryptography$x509,
        mod_consts.const_str_plain_SignatureAlgorithmOID,
        const_int_0
    );
} else {
    tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_93, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_SignatureAlgorithmOID, tmp_assign_source_105);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

    goto frame_exception_exit_1;
}
tmp_assign_source_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_AUTHORITY_INFORMATION_ACCESS);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS, tmp_assign_source_106);
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto frame_exception_exit_1;
}
tmp_assign_source_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_AUTHORITY_KEY_IDENTIFIER);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER, tmp_assign_source_107);
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;

    goto frame_exception_exit_1;
}
tmp_assign_source_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_BASIC_CONSTRAINTS);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_BASIC_CONSTRAINTS, tmp_assign_source_108);
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_assign_source_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CERTIFICATE_POLICIES);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CERTIFICATE_POLICIES, tmp_assign_source_109);
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto frame_exception_exit_1;
}
tmp_assign_source_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CRL_DISTRIBUTION_POINTS);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CRL_DISTRIBUTION_POINTS, tmp_assign_source_110);
}
{
PyObject *tmp_assign_source_111;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto frame_exception_exit_1;
}
tmp_assign_source_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_EXTENDED_KEY_USAGE);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_EXTENDED_KEY_USAGE, tmp_assign_source_111);
}
{
PyObject *tmp_assign_source_112;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_assign_source_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_FRESHEST_CRL);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_FRESHEST_CRL, tmp_assign_source_112);
}
{
PyObject *tmp_assign_source_113;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto frame_exception_exit_1;
}
tmp_assign_source_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_INHIBIT_ANY_POLICY);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_INHIBIT_ANY_POLICY, tmp_assign_source_113);
}
{
PyObject *tmp_assign_source_114;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ISSUER_ALTERNATIVE_NAME);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ISSUER_ALTERNATIVE_NAME, tmp_assign_source_114);
}
{
PyObject *tmp_assign_source_115;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto frame_exception_exit_1;
}
tmp_assign_source_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_KEY_USAGE);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_KEY_USAGE, tmp_assign_source_115);
}
{
PyObject *tmp_assign_source_116;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto frame_exception_exit_1;
}
tmp_assign_source_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_PRIVATE_KEY_USAGE_PERIOD);
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_PRIVATE_KEY_USAGE_PERIOD, tmp_assign_source_116);
}
{
PyObject *tmp_assign_source_117;
PyObject *tmp_expression_value_16;
tmp_expression_value_16 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_NAME_CONSTRAINTS);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_NAME_CONSTRAINTS, tmp_assign_source_117);
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_OCSP_NO_CHECK);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_OCSP_NO_CHECK, tmp_assign_source_118);
}
{
PyObject *tmp_assign_source_119;
PyObject *tmp_expression_value_18;
tmp_expression_value_18 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto frame_exception_exit_1;
}
tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_POLICY_CONSTRAINTS);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_POLICY_CONSTRAINTS, tmp_assign_source_119);
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_expression_value_19;
tmp_expression_value_19 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto frame_exception_exit_1;
}
tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_POLICY_MAPPINGS);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_POLICY_MAPPINGS, tmp_assign_source_120);
}
{
PyObject *tmp_assign_source_121;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_assign_source_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_SUBJECT_ALTERNATIVE_NAME);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME, tmp_assign_source_121);
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto frame_exception_exit_1;
}
tmp_assign_source_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES, tmp_assign_source_122);
}
{
PyObject *tmp_assign_source_123;
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto frame_exception_exit_1;
}
tmp_assign_source_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_SUBJECT_INFORMATION_ACCESS);
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SUBJECT_INFORMATION_ACCESS, tmp_assign_source_123);
}
{
PyObject *tmp_assign_source_124;
PyObject *tmp_expression_value_23;
tmp_expression_value_23 = module_var_accessor_cryptography$x509$ExtensionOID(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtensionOID);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_assign_source_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_SUBJECT_KEY_IDENTIFIER);
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SUBJECT_KEY_IDENTIFIER, tmp_assign_source_124);
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_expression_value_24;
tmp_expression_value_24 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_assign_source_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_DSA_WITH_SHA1);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_DSA_WITH_SHA1, tmp_assign_source_125);
}
{
PyObject *tmp_assign_source_126;
PyObject *tmp_expression_value_25;
tmp_expression_value_25 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_assign_source_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_DSA_WITH_SHA224);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_DSA_WITH_SHA224, tmp_assign_source_126);
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_expression_value_26;
tmp_expression_value_26 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_DSA_WITH_SHA256);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_DSA_WITH_SHA256, tmp_assign_source_127);
}
{
PyObject *tmp_assign_source_128;
PyObject *tmp_expression_value_27;
tmp_expression_value_27 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto frame_exception_exit_1;
}
tmp_assign_source_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_ECDSA_WITH_SHA1);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ECDSA_WITH_SHA1, tmp_assign_source_128);
}
{
PyObject *tmp_assign_source_129;
PyObject *tmp_expression_value_28;
tmp_expression_value_28 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto frame_exception_exit_1;
}
tmp_assign_source_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_ECDSA_WITH_SHA224);
if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ECDSA_WITH_SHA224, tmp_assign_source_129);
}
{
PyObject *tmp_assign_source_130;
PyObject *tmp_expression_value_29;
tmp_expression_value_29 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_assign_source_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_ECDSA_WITH_SHA256);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ECDSA_WITH_SHA256, tmp_assign_source_130);
}
{
PyObject *tmp_assign_source_131;
PyObject *tmp_expression_value_30;
tmp_expression_value_30 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_assign_source_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_ECDSA_WITH_SHA384);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ECDSA_WITH_SHA384, tmp_assign_source_131);
}
{
PyObject *tmp_assign_source_132;
PyObject *tmp_expression_value_31;
tmp_expression_value_31 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_ECDSA_WITH_SHA512);
if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ECDSA_WITH_SHA512, tmp_assign_source_132);
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_expression_value_32;
tmp_expression_value_32 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;

    goto frame_exception_exit_1;
}
tmp_assign_source_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_RSA_WITH_MD5);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSA_WITH_MD5, tmp_assign_source_133);
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_expression_value_33;
tmp_expression_value_33 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_assign_source_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_RSA_WITH_SHA1);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSA_WITH_SHA1, tmp_assign_source_134);
}
{
PyObject *tmp_assign_source_135;
PyObject *tmp_expression_value_34;
tmp_expression_value_34 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto frame_exception_exit_1;
}
tmp_assign_source_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_RSA_WITH_SHA224);
if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSA_WITH_SHA224, tmp_assign_source_135);
}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_expression_value_35;
tmp_expression_value_35 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;

    goto frame_exception_exit_1;
}
tmp_assign_source_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_RSA_WITH_SHA256);
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSA_WITH_SHA256, tmp_assign_source_136);
}
{
PyObject *tmp_assign_source_137;
PyObject *tmp_expression_value_36;
tmp_expression_value_36 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto frame_exception_exit_1;
}
tmp_assign_source_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_RSA_WITH_SHA384);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSA_WITH_SHA384, tmp_assign_source_137);
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_expression_value_37;
tmp_expression_value_37 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto frame_exception_exit_1;
}
tmp_assign_source_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_RSA_WITH_SHA512);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSA_WITH_SHA512, tmp_assign_source_138);
}
{
PyObject *tmp_assign_source_139;
PyObject *tmp_expression_value_38;
tmp_expression_value_38 = module_var_accessor_cryptography$x509$SignatureAlgorithmOID(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignatureAlgorithmOID);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;

    goto frame_exception_exit_1;
}
tmp_assign_source_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_RSASSA_PSS);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_RSASSA_PSS, tmp_assign_source_139);
}
{
PyObject *tmp_assign_source_140;
PyObject *tmp_expression_value_39;
tmp_expression_value_39 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_assign_source_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_COMMON_NAME);
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_COMMON_NAME, tmp_assign_source_140);
}
{
PyObject *tmp_assign_source_141;
PyObject *tmp_expression_value_40;
tmp_expression_value_40 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto frame_exception_exit_1;
}
tmp_assign_source_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_COUNTRY_NAME);
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_COUNTRY_NAME, tmp_assign_source_141);
}
{
PyObject *tmp_assign_source_142;
PyObject *tmp_expression_value_41;
tmp_expression_value_41 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto frame_exception_exit_1;
}
tmp_assign_source_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_DOMAIN_COMPONENT);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_DOMAIN_COMPONENT, tmp_assign_source_142);
}
{
PyObject *tmp_assign_source_143;
PyObject *tmp_expression_value_42;
tmp_expression_value_42 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto frame_exception_exit_1;
}
tmp_assign_source_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_DN_QUALIFIER);
if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_DN_QUALIFIER, tmp_assign_source_143);
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_expression_value_43;
tmp_expression_value_43 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;

    goto frame_exception_exit_1;
}
tmp_assign_source_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_EMAIL_ADDRESS);
if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_EMAIL_ADDRESS, tmp_assign_source_144);
}
{
PyObject *tmp_assign_source_145;
PyObject *tmp_expression_value_44;
tmp_expression_value_44 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;

    goto frame_exception_exit_1;
}
tmp_assign_source_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_GENERATION_QUALIFIER);
if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_GENERATION_QUALIFIER, tmp_assign_source_145);
}
{
PyObject *tmp_assign_source_146;
PyObject *tmp_expression_value_45;
tmp_expression_value_45 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;

    goto frame_exception_exit_1;
}
tmp_assign_source_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_GIVEN_NAME);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_GIVEN_NAME, tmp_assign_source_146);
}
{
PyObject *tmp_assign_source_147;
PyObject *tmp_expression_value_46;
tmp_expression_value_46 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;

    goto frame_exception_exit_1;
}
tmp_assign_source_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_LOCALITY_NAME);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_LOCALITY_NAME, tmp_assign_source_147);
}
{
PyObject *tmp_assign_source_148;
PyObject *tmp_expression_value_47;
tmp_expression_value_47 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto frame_exception_exit_1;
}
tmp_assign_source_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_ORGANIZATIONAL_UNIT_NAME);
if (tmp_assign_source_148 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME, tmp_assign_source_148);
}
{
PyObject *tmp_assign_source_149;
PyObject *tmp_expression_value_48;
tmp_expression_value_48 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;

    goto frame_exception_exit_1;
}
tmp_assign_source_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_ORGANIZATION_NAME);
if (tmp_assign_source_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ORGANIZATION_NAME, tmp_assign_source_149);
}
{
PyObject *tmp_assign_source_150;
PyObject *tmp_expression_value_49;
tmp_expression_value_49 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;

    goto frame_exception_exit_1;
}
tmp_assign_source_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_PSEUDONYM);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_PSEUDONYM, tmp_assign_source_150);
}
{
PyObject *tmp_assign_source_151;
PyObject *tmp_expression_value_50;
tmp_expression_value_50 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;

    goto frame_exception_exit_1;
}
tmp_assign_source_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_SERIAL_NUMBER);
if (tmp_assign_source_151 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SERIAL_NUMBER, tmp_assign_source_151);
}
{
PyObject *tmp_assign_source_152;
PyObject *tmp_expression_value_51;
tmp_expression_value_51 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto frame_exception_exit_1;
}
tmp_assign_source_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_STATE_OR_PROVINCE_NAME);
if (tmp_assign_source_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_STATE_OR_PROVINCE_NAME, tmp_assign_source_152);
}
{
PyObject *tmp_assign_source_153;
PyObject *tmp_expression_value_52;
tmp_expression_value_52 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_assign_source_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_SURNAME);
if (tmp_assign_source_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SURNAME, tmp_assign_source_153);
}
{
PyObject *tmp_assign_source_154;
PyObject *tmp_expression_value_53;
tmp_expression_value_53 = module_var_accessor_cryptography$x509$NameOID(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameOID);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto frame_exception_exit_1;
}
tmp_assign_source_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_TITLE);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_TITLE, tmp_assign_source_154);
}
{
PyObject *tmp_assign_source_155;
PyObject *tmp_expression_value_54;
tmp_expression_value_54 = module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_assign_source_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_CLIENT_AUTH);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CLIENT_AUTH, tmp_assign_source_155);
}
{
PyObject *tmp_assign_source_156;
PyObject *tmp_expression_value_55;
tmp_expression_value_55 = module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto frame_exception_exit_1;
}
tmp_assign_source_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_CODE_SIGNING);
if (tmp_assign_source_156 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CODE_SIGNING, tmp_assign_source_156);
}
{
PyObject *tmp_assign_source_157;
PyObject *tmp_expression_value_56;
tmp_expression_value_56 = module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_assign_source_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_EMAIL_PROTECTION);
if (tmp_assign_source_157 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_EMAIL_PROTECTION, tmp_assign_source_157);
}
{
PyObject *tmp_assign_source_158;
PyObject *tmp_expression_value_57;
tmp_expression_value_57 = module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;

    goto frame_exception_exit_1;
}
tmp_assign_source_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_OCSP_SIGNING);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_OCSP_SIGNING, tmp_assign_source_158);
}
{
PyObject *tmp_assign_source_159;
PyObject *tmp_expression_value_58;
tmp_expression_value_58 = module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;

    goto frame_exception_exit_1;
}
tmp_assign_source_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_SERVER_AUTH);
if (tmp_assign_source_159 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_SERVER_AUTH, tmp_assign_source_159);
}
{
PyObject *tmp_assign_source_160;
PyObject *tmp_expression_value_59;
tmp_expression_value_59 = module_var_accessor_cryptography$x509$ExtendedKeyUsageOID(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExtendedKeyUsageOID);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;

    goto frame_exception_exit_1;
}
tmp_assign_source_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_TIME_STAMPING);
if (tmp_assign_source_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_TIME_STAMPING, tmp_assign_source_160);
}
{
PyObject *tmp_assign_source_161;
PyObject *tmp_expression_value_60;
tmp_expression_value_60 = module_var_accessor_cryptography$x509$CertificatePoliciesOID(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CertificatePoliciesOID);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;

    goto frame_exception_exit_1;
}
tmp_assign_source_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_ANY_POLICY);
if (tmp_assign_source_161 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_ANY_POLICY, tmp_assign_source_161);
}
{
PyObject *tmp_assign_source_162;
PyObject *tmp_expression_value_61;
tmp_expression_value_61 = module_var_accessor_cryptography$x509$CertificatePoliciesOID(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CertificatePoliciesOID);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;

    goto frame_exception_exit_1;
}
tmp_assign_source_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_CPS_QUALIFIER);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CPS_QUALIFIER, tmp_assign_source_162);
}
{
PyObject *tmp_assign_source_163;
PyObject *tmp_expression_value_62;
tmp_expression_value_62 = module_var_accessor_cryptography$x509$CertificatePoliciesOID(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CertificatePoliciesOID);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;

    goto frame_exception_exit_1;
}
tmp_assign_source_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_CPS_USER_NOTICE);
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CPS_USER_NOTICE, tmp_assign_source_163);
}
{
PyObject *tmp_assign_source_164;
PyObject *tmp_expression_value_63;
tmp_expression_value_63 = module_var_accessor_cryptography$x509$CRLEntryExtensionOID(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRLEntryExtensionOID);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;

    goto frame_exception_exit_1;
}
tmp_assign_source_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_CERTIFICATE_ISSUER);
if (tmp_assign_source_164 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CERTIFICATE_ISSUER, tmp_assign_source_164);
}
{
PyObject *tmp_assign_source_165;
PyObject *tmp_expression_value_64;
tmp_expression_value_64 = module_var_accessor_cryptography$x509$CRLEntryExtensionOID(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRLEntryExtensionOID);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;

    goto frame_exception_exit_1;
}
tmp_assign_source_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_CRL_REASON);
if (tmp_assign_source_165 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CRL_REASON, tmp_assign_source_165);
}
{
PyObject *tmp_assign_source_166;
PyObject *tmp_expression_value_65;
tmp_expression_value_65 = module_var_accessor_cryptography$x509$CRLEntryExtensionOID(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CRLEntryExtensionOID);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;

    goto frame_exception_exit_1;
}
tmp_assign_source_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_INVALIDITY_DATE);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_INVALIDITY_DATE, tmp_assign_source_166);
}
{
PyObject *tmp_assign_source_167;
PyObject *tmp_expression_value_66;
tmp_expression_value_66 = module_var_accessor_cryptography$x509$AuthorityInformationAccessOID(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthorityInformationAccessOID);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto frame_exception_exit_1;
}
tmp_assign_source_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_CA_ISSUERS);
if (tmp_assign_source_167 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_CA_ISSUERS, tmp_assign_source_167);
}
{
PyObject *tmp_assign_source_168;
PyObject *tmp_expression_value_67;
tmp_expression_value_67 = module_var_accessor_cryptography$x509$AuthorityInformationAccessOID(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthorityInformationAccessOID);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;

    goto frame_exception_exit_1;
}
tmp_assign_source_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_OCSP);
if (tmp_assign_source_168 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)mod_consts.const_str_plain_OID_OCSP, tmp_assign_source_168);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$x509, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$x509->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$x509, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$x509);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_169;
tmp_assign_source_169 = LIST_COPY(tstate, mod_consts.const_list_3605a1b81b3fdc6b253d3881893c210e_list);
UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_169);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$x509", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.x509" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$x509);
    return module_cryptography$x509;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$x509", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
