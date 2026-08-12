/* Generated code for Python module 'cryptography$hazmat$primitives$asymmetric$types'
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



/* The "module_cryptography$hazmat$primitives$asymmetric$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$types;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
PyObject *const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple;
PyObject *const_str_plain_dh;
PyObject *const_str_plain_dsa;
PyObject *const_str_plain_ec;
PyObject *const_str_plain_ed448;
PyObject *const_str_plain_ed25519;
PyObject *const_str_plain_mldsa;
PyObject *const_str_plain_mlkem;
PyObject *const_str_plain_rsa;
PyObject *const_str_plain_x448;
PyObject *const_str_plain_x25519;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__DHPublicKey;
PyObject *const_str_plain_DSAPublicKey;
PyObject *const_str_plain_RSAPublicKey;
PyObject *const_str_plain_EllipticCurvePublicKey;
PyObject *const_str_plain_Ed25519PublicKey;
PyObject *const_str_plain_Ed448PublicKey;
PyObject *const_str_plain_MLDSA44PublicKey;
PyObject *const_str_plain_MLDSA65PublicKey;
PyObject *const_str_plain_MLDSA87PublicKey;
PyObject *const_str_plain_MLKEM768PublicKey;
PyObject *const_str_plain_MLKEM1024PublicKey;
PyObject *const_str_plain_X25519PublicKey;
PyObject *const_str_plain_X448PublicKey;
PyObject *const_str_plain_PublicKeyTypes;
PyObject *const_str_plain__DHPrivateKey;
PyObject *const_str_plain_Ed25519PrivateKey;
PyObject *const_str_plain_Ed448PrivateKey;
PyObject *const_str_plain_MLDSA44PrivateKey;
PyObject *const_str_plain_MLDSA65PrivateKey;
PyObject *const_str_plain_MLDSA87PrivateKey;
PyObject *const_str_plain_MLKEM768PrivateKey;
PyObject *const_str_plain_MLKEM1024PrivateKey;
PyObject *const_str_plain_RSAPrivateKey;
PyObject *const_str_plain_DSAPrivateKey;
PyObject *const_str_plain_EllipticCurvePrivateKey;
PyObject *const_str_plain_X25519PrivateKey;
PyObject *const_str_plain_X448PrivateKey;
PyObject *const_str_plain_PrivateKeyTypes;
PyObject *const_str_plain_CertificateIssuerPrivateKeyTypes;
PyObject *const_str_plain_CertificateIssuerPublicKeyTypes;
PyObject *const_str_plain_CertificatePublicKeyTypes;
PyObject *const_str_digest_00b08d884b2ae02a0979a758a513f322;
PyObject *const_str_digest_298da5bb079d5adb926512c662e15c5f;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[50];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 50) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 50 values, got %d\n",
                    UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.types"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple", mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dh", mod_consts.const_str_plain_dh);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_dh);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dsa", mod_consts.const_str_plain_dsa);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_dsa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ec", mod_consts.const_str_plain_ec);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed448", mod_consts.const_str_plain_ed448);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ed448);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed25519", mod_consts.const_str_plain_ed25519);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ed25519);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mldsa", mod_consts.const_str_plain_mldsa);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_mldsa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mlkem", mod_consts.const_str_plain_mlkem);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_mlkem);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa", mod_consts.const_str_plain_rsa);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x448", mod_consts.const_str_plain_x448);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_x448);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x25519", mod_consts.const_str_plain_x25519);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_x25519);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DHPublicKey", mod_consts.const_str_plain__DHPublicKey);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__DHPublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSAPublicKey", mod_consts.const_str_plain_DSAPublicKey);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicKey", mod_consts.const_str_plain_RSAPublicKey);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicKey", mod_consts.const_str_plain_EllipticCurvePublicKey);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed25519PublicKey", mod_consts.const_str_plain_Ed25519PublicKey);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ed25519PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed448PublicKey", mod_consts.const_str_plain_Ed448PublicKey);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ed448PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA44PublicKey", mod_consts.const_str_plain_MLDSA44PublicKey);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA44PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA65PublicKey", mod_consts.const_str_plain_MLDSA65PublicKey);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA65PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA87PublicKey", mod_consts.const_str_plain_MLDSA87PublicKey);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA87PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM768PublicKey", mod_consts.const_str_plain_MLKEM768PublicKey);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM768PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM1024PublicKey", mod_consts.const_str_plain_MLKEM1024PublicKey);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM1024PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X25519PublicKey", mod_consts.const_str_plain_X25519PublicKey);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_X25519PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X448PublicKey", mod_consts.const_str_plain_X448PublicKey);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_X448PublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PublicKeyTypes", mod_consts.const_str_plain_PublicKeyTypes);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKeyTypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DHPrivateKey", mod_consts.const_str_plain__DHPrivateKey);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__DHPrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed25519PrivateKey", mod_consts.const_str_plain_Ed25519PrivateKey);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ed25519PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed448PrivateKey", mod_consts.const_str_plain_Ed448PrivateKey);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ed448PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA44PrivateKey", mod_consts.const_str_plain_MLDSA44PrivateKey);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA44PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA65PrivateKey", mod_consts.const_str_plain_MLDSA65PrivateKey);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA65PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA87PrivateKey", mod_consts.const_str_plain_MLDSA87PrivateKey);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA87PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM768PrivateKey", mod_consts.const_str_plain_MLKEM768PrivateKey);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM768PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM1024PrivateKey", mod_consts.const_str_plain_MLKEM1024PrivateKey);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM1024PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateKey", mod_consts.const_str_plain_RSAPrivateKey);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSAPrivateKey", mod_consts.const_str_plain_DSAPrivateKey);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateKey", mod_consts.const_str_plain_EllipticCurvePrivateKey);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X25519PrivateKey", mod_consts.const_str_plain_X25519PrivateKey);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_X25519PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X448PrivateKey", mod_consts.const_str_plain_X448PrivateKey);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_X448PrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrivateKeyTypes", mod_consts.const_str_plain_PrivateKeyTypes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKeyTypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes", mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes", mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificatePublicKeyTypes", mod_consts.const_str_plain_CertificatePublicKeyTypes);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_CertificatePublicKeyTypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322", mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f", mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f);
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
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47) && "mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple", mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple) && "mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dh", mod_consts.const_str_plain_dh);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_dh) && "mod_consts.const_str_plain_dh");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dsa", mod_consts.const_str_plain_dsa);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_dsa) && "mod_consts.const_str_plain_dsa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ec", mod_consts.const_str_plain_ec);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ec) && "mod_consts.const_str_plain_ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed448", mod_consts.const_str_plain_ed448);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ed448) && "mod_consts.const_str_plain_ed448");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed25519", mod_consts.const_str_plain_ed25519);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ed25519) && "mod_consts.const_str_plain_ed25519");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mldsa", mod_consts.const_str_plain_mldsa);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_mldsa) && "mod_consts.const_str_plain_mldsa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mlkem", mod_consts.const_str_plain_mlkem);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_mlkem) && "mod_consts.const_str_plain_mlkem");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa", mod_consts.const_str_plain_rsa);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa) && "mod_consts.const_str_plain_rsa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x448", mod_consts.const_str_plain_x448);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_x448) && "mod_consts.const_str_plain_x448");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x25519", mod_consts.const_str_plain_x25519);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_x25519) && "mod_consts.const_str_plain_x25519");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DHPublicKey", mod_consts.const_str_plain__DHPublicKey);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__DHPublicKey) && "mod_consts.const_str_plain__DHPublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSAPublicKey", mod_consts.const_str_plain_DSAPublicKey);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPublicKey) && "mod_consts.const_str_plain_DSAPublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicKey", mod_consts.const_str_plain_RSAPublicKey);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicKey) && "mod_consts.const_str_plain_RSAPublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicKey", mod_consts.const_str_plain_EllipticCurvePublicKey);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicKey) && "mod_consts.const_str_plain_EllipticCurvePublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed25519PublicKey", mod_consts.const_str_plain_Ed25519PublicKey);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ed25519PublicKey) && "mod_consts.const_str_plain_Ed25519PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed448PublicKey", mod_consts.const_str_plain_Ed448PublicKey);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ed448PublicKey) && "mod_consts.const_str_plain_Ed448PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA44PublicKey", mod_consts.const_str_plain_MLDSA44PublicKey);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA44PublicKey) && "mod_consts.const_str_plain_MLDSA44PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA65PublicKey", mod_consts.const_str_plain_MLDSA65PublicKey);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA65PublicKey) && "mod_consts.const_str_plain_MLDSA65PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA87PublicKey", mod_consts.const_str_plain_MLDSA87PublicKey);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA87PublicKey) && "mod_consts.const_str_plain_MLDSA87PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM768PublicKey", mod_consts.const_str_plain_MLKEM768PublicKey);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM768PublicKey) && "mod_consts.const_str_plain_MLKEM768PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM1024PublicKey", mod_consts.const_str_plain_MLKEM1024PublicKey);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM1024PublicKey) && "mod_consts.const_str_plain_MLKEM1024PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X25519PublicKey", mod_consts.const_str_plain_X25519PublicKey);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_X25519PublicKey) && "mod_consts.const_str_plain_X25519PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X448PublicKey", mod_consts.const_str_plain_X448PublicKey);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_X448PublicKey) && "mod_consts.const_str_plain_X448PublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PublicKeyTypes", mod_consts.const_str_plain_PublicKeyTypes);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKeyTypes) && "mod_consts.const_str_plain_PublicKeyTypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DHPrivateKey", mod_consts.const_str_plain__DHPrivateKey);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__DHPrivateKey) && "mod_consts.const_str_plain__DHPrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed25519PrivateKey", mod_consts.const_str_plain_Ed25519PrivateKey);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ed25519PrivateKey) && "mod_consts.const_str_plain_Ed25519PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Ed448PrivateKey", mod_consts.const_str_plain_Ed448PrivateKey);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ed448PrivateKey) && "mod_consts.const_str_plain_Ed448PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA44PrivateKey", mod_consts.const_str_plain_MLDSA44PrivateKey);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA44PrivateKey) && "mod_consts.const_str_plain_MLDSA44PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA65PrivateKey", mod_consts.const_str_plain_MLDSA65PrivateKey);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA65PrivateKey) && "mod_consts.const_str_plain_MLDSA65PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLDSA87PrivateKey", mod_consts.const_str_plain_MLDSA87PrivateKey);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLDSA87PrivateKey) && "mod_consts.const_str_plain_MLDSA87PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM768PrivateKey", mod_consts.const_str_plain_MLKEM768PrivateKey);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM768PrivateKey) && "mod_consts.const_str_plain_MLKEM768PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MLKEM1024PrivateKey", mod_consts.const_str_plain_MLKEM1024PrivateKey);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_MLKEM1024PrivateKey) && "mod_consts.const_str_plain_MLKEM1024PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateKey", mod_consts.const_str_plain_RSAPrivateKey);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateKey) && "mod_consts.const_str_plain_RSAPrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DSAPrivateKey", mod_consts.const_str_plain_DSAPrivateKey);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_DSAPrivateKey) && "mod_consts.const_str_plain_DSAPrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateKey", mod_consts.const_str_plain_EllipticCurvePrivateKey);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateKey) && "mod_consts.const_str_plain_EllipticCurvePrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X25519PrivateKey", mod_consts.const_str_plain_X25519PrivateKey);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_X25519PrivateKey) && "mod_consts.const_str_plain_X25519PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_X448PrivateKey", mod_consts.const_str_plain_X448PrivateKey);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_X448PrivateKey) && "mod_consts.const_str_plain_X448PrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrivateKeyTypes", mod_consts.const_str_plain_PrivateKeyTypes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateKeyTypes) && "mod_consts.const_str_plain_PrivateKeyTypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes", mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes) && "mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes", mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes) && "mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CertificatePublicKeyTypes", mod_consts.const_str_plain_CertificatePublicKeyTypes);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_CertificatePublicKeyTypes) && "mod_consts.const_str_plain_CertificatePublicKeyTypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322", mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322) && "mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f", mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f) && "mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f");
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
static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dh(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dh);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dh);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dh, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dh);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dh, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dh);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dh);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dh);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dsa(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dsa);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dsa);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dsa, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dsa);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dsa, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dsa);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dsa);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dsa);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ec(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed25519(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed25519);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ed25519);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ed25519, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ed25519);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ed25519, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed25519);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed25519);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ed25519);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed448(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed448);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ed448);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ed448, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ed448);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ed448, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed448);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed448);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ed448);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mldsa);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mldsa);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mldsa, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mldsa);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mldsa, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mldsa);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mldsa);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mldsa);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mlkem);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mlkem);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mlkem, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mlkem);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mlkem, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mlkem);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mlkem);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mlkem);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$rsa(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rsa);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rsa, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rsa);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rsa, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x25519(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x25519);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_x25519);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_x25519, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_x25519);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_x25519, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x25519);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x25519);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_x25519);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x448(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x448);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_x448);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_x448, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_x448);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_x448, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x448);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x448);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_x448);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7e4447c18fde8bc43f3675aa602cff8f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_00b08d884b2ae02a0979a758a513f322); CHECK_OBJECT(module_filename_obj);
code_objects_7e4447c18fde8bc43f3675aa602cff8f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f, mod_consts.const_str_digest_298da5bb079d5adb926512c662e15c5f, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_cryptography$hazmat$primitives$asymmetric$types[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$primitives$asymmetric$types);
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
        module_cryptography$hazmat$primitives$asymmetric$types,
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
        function_table_cryptography$hazmat$primitives$asymmetric$types,
        sizeof(function_table_cryptography$hazmat$primitives$asymmetric$types) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.primitives.asymmetric.types";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$primitives$asymmetric$types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$primitives$asymmetric$types");

    // Store the module for future use.
    module_cryptography$hazmat$primitives$asymmetric$types = module;

    moduledict_cryptography$hazmat$primitives$asymmetric$types = MODULE_DICT(module_cryptography$hazmat$primitives$asymmetric$types);

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
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$primitives$asymmetric$types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$primitives$asymmetric$types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$hazmat$primitives$asymmetric$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$asymmetric$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$primitives$asymmetric$types);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$primitives$asymmetric$types = MAKE_MODULE_FRAME(code_objects_7e4447c18fde8bc43f3675aa602cff8f, module_cryptography$hazmat$primitives$asymmetric$types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$types);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$types) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_9dfbe6cedff6496d77be0700b11d0b35_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$types->m_frame.f_lineno = 9;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

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
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_dh,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dh);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dh, tmp_assign_source_8);
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
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_dsa,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_dsa);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_dsa, tmp_assign_source_9);
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
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_ec,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ec);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ec, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_ed448,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ed448);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed448, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_ed25519,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ed25519);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ed25519, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_mldsa,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_mldsa);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mldsa, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_mlkem,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_mlkem);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_mlkem, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_rsa,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_rsa);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_x448,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_x448);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x448, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$types,
        mod_consts.const_str_plain_x25519,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_x25519);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_x25519, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Union);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dh(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dh);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_1);

exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__DHPublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 13);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dsa(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dsa);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DSAPublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$rsa(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_RSAPublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ec(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_EllipticCurvePublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 3, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed25519(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed25519);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Ed25519PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 4, tmp_tuple_element_1);
tmp_expression_value_8 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed448(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed448);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Ed448PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 5, tmp_tuple_element_1);
tmp_expression_value_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_MLDSA44PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 6, tmp_tuple_element_1);
tmp_expression_value_10 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MLDSA65PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 7, tmp_tuple_element_1);
tmp_expression_value_11 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_MLDSA87PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 8, tmp_tuple_element_1);
tmp_expression_value_12 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mlkem);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_MLKEM768PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 9, tmp_tuple_element_1);
tmp_expression_value_13 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mlkem);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_MLKEM1024PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 10, tmp_tuple_element_1);
tmp_expression_value_14 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x25519(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x25519);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_X25519PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 11, tmp_tuple_element_1);
tmp_expression_value_15 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x448(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x448);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_X448PublicKey);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 12, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyTypes, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_18;
tmp_expression_value_17 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_17 == NULL));
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Union);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_expression_value_18 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dh(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dh);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_16);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__DHPrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_16);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 13);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_expression_value_19 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed25519(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed25519);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Ed25519PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_expression_value_20 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed448(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed448);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Ed448PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 2, tmp_tuple_element_2);
tmp_expression_value_21 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_MLDSA44PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 3, tmp_tuple_element_2);
tmp_expression_value_22 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_MLDSA65PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 4, tmp_tuple_element_2);
tmp_expression_value_23 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_MLDSA87PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 5, tmp_tuple_element_2);
tmp_expression_value_24 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mlkem);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_MLKEM768PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 6, tmp_tuple_element_2);
tmp_expression_value_25 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mlkem);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_MLKEM1024PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 7, tmp_tuple_element_2);
tmp_expression_value_26 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$rsa(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_RSAPrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 8, tmp_tuple_element_2);
tmp_expression_value_27 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dsa(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dsa);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_DSAPrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 9, tmp_tuple_element_2);
tmp_expression_value_28 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ec(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_EllipticCurvePrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 10, tmp_tuple_element_2);
tmp_expression_value_29 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x25519(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x25519);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_X25519PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 11, tmp_tuple_element_2);
tmp_expression_value_30 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x448(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x448);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_X448PrivateKey);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 12, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_16);
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_PrivateKeyTypes, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_33;
tmp_expression_value_32 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_32 == NULL));
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_Union);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
tmp_expression_value_33 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed25519(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed25519);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_31);

exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_Ed25519PrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_31);

exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_3);
tmp_expression_value_34 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed448(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed448);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_Ed448PrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_3);
tmp_expression_value_35 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$rsa(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_RSAPrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 2, tmp_tuple_element_3);
tmp_expression_value_36 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dsa(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dsa);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_DSAPrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 3, tmp_tuple_element_3);
tmp_expression_value_37 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ec(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_EllipticCurvePrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 4, tmp_tuple_element_3);
tmp_expression_value_38 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_MLDSA44PrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 5, tmp_tuple_element_3);
tmp_expression_value_39 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_MLDSA65PrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 6, tmp_tuple_element_3);
tmp_expression_value_40 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_MLDSA87PrivateKey);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 7, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_31);
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateIssuerPrivateKeyTypes, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_43;
tmp_expression_value_42 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_42 == NULL));
tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_Union);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_expression_value_43 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dsa(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dsa);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_41);

exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_DSAPublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_41);

exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_4);
tmp_expression_value_44 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$rsa(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_RSAPublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_4);
tmp_expression_value_45 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ec(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_EllipticCurvePublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_4);
tmp_expression_value_46 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed25519(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed25519);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_Ed25519PublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 3, tmp_tuple_element_4);
tmp_expression_value_47 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed448(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed448);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_Ed448PublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 4, tmp_tuple_element_4);
tmp_expression_value_48 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_MLDSA44PublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 5, tmp_tuple_element_4);
tmp_expression_value_49 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_MLDSA65PublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 6, tmp_tuple_element_4);
tmp_expression_value_50 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_MLDSA87PublicKey);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 7, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_expression_value_41);
Py_DECREF(tmp_subscript_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificateIssuerPublicKeyTypes, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_53;
tmp_expression_value_52 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_52 == NULL));
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_Union);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
tmp_expression_value_53 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$dsa(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dsa);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_51);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_DSAPublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_51);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 12);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_expression_value_60;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_expression_value_63;
PyObject *tmp_expression_value_64;
PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_5);
tmp_expression_value_54 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$rsa(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_RSAPublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_5);
tmp_expression_value_55 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ec(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_EllipticCurvePublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 2, tmp_tuple_element_5);
tmp_expression_value_56 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed25519(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed25519);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_Ed25519PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 3, tmp_tuple_element_5);
tmp_expression_value_57 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$ed448(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ed448);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_Ed448PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 4, tmp_tuple_element_5);
tmp_expression_value_58 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_MLDSA44PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 5, tmp_tuple_element_5);
tmp_expression_value_59 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_MLDSA65PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 6, tmp_tuple_element_5);
tmp_expression_value_60 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mldsa(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mldsa);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_MLDSA87PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 7, tmp_tuple_element_5);
tmp_expression_value_61 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mlkem);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_MLKEM768PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 8, tmp_tuple_element_5);
tmp_expression_value_62 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$mlkem(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mlkem);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_MLKEM1024PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 9, tmp_tuple_element_5);
tmp_expression_value_63 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x25519(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x25519);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_X25519PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 10, tmp_tuple_element_5);
tmp_expression_value_64 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$types$x448(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x448);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_X448PublicKey);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 11, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_expression_value_51);
Py_DECREF(tmp_subscript_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CertificatePublicKeyTypes, tmp_assign_source_22);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$primitives$asymmetric$types);
    return module_cryptography$hazmat$primitives$asymmetric$types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
