/* Generated code for Python module 'PIL$TiffTags'
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



/* The "module_PIL$TiffTags" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$TiffTags;
PyDictObject *moduledict_PIL$TiffTags;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___new__;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_TAGS_V2_GROUPS;
PyObject *const_str_plain_TAGS_V2;
PyObject *const_str_plain_TagInfo;
PyObject *const_str_plain_TAGS;
PyObject *const_str_plain_unknown;
PyObject *const_str_digest_45ef12b43bbf3de50ff9734b0133b105;
PyObject *const_str_plain__tags_v2;
PyObject *const_str_plain_items;
PyObject *const_int_pos_3;
PyObject *const_str_plain__tags_v2_groups;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain__TagInfo;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_53d172ce5d71b7b445878c626394ea74;
PyObject *const_int_pos_24;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_str_plain_value;
PyObject *const_str_plain_str;
PyObject *const_str_plain_length;
PyObject *const_str_digest_284143fd57fa31d3e58fbc42a8de71e7;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_32;
PyObject *const_str_plain___slots__;
PyObject *const_str_digest_e457754874b2ab64235a137685f8363a;
PyObject *const_tuple_none_str_plain_unknown_none_none_none_tuple;
PyObject *const_dict_082d5086a36b87f3267fd4294923ac94;
PyObject *const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7;
PyObject *const_dict_edf6be2ebd5064234776f33b8ac76316;
PyObject *const_str_plain_cvt_enum;
PyObject *const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_982a936f996ba783e96258eabd9a7694;
PyObject *const_str_plain_lookup;
PyObject *const_str_plain_BYTE;
PyObject *const_int_pos_2;
PyObject *const_str_plain_ASCII;
PyObject *const_str_plain_SHORT;
PyObject *const_int_pos_4;
PyObject *const_str_plain_LONG;
PyObject *const_int_pos_5;
PyObject *const_str_plain_RATIONAL;
PyObject *const_int_pos_6;
PyObject *const_str_plain_SIGNED_BYTE;
PyObject *const_int_pos_7;
PyObject *const_str_plain_UNDEFINED;
PyObject *const_int_pos_8;
PyObject *const_str_plain_SIGNED_SHORT;
PyObject *const_int_pos_9;
PyObject *const_str_plain_SIGNED_LONG;
PyObject *const_int_pos_10;
PyObject *const_str_plain_SIGNED_RATIONAL;
PyObject *const_int_pos_11;
PyObject *const_str_plain_FLOAT;
PyObject *const_int_pos_12;
PyObject *const_str_plain_DOUBLE;
PyObject *const_int_pos_13;
PyObject *const_str_plain_IFD;
PyObject *const_int_pos_16;
PyObject *const_str_plain_LONG8;
PyObject *const_int_pos_254;
PyObject *const_str_plain_NewSubfileType;
PyObject *const_int_pos_255;
PyObject *const_str_plain_SubfileType;
PyObject *const_int_pos_256;
PyObject *const_str_plain_ImageWidth;
PyObject *const_int_pos_257;
PyObject *const_str_plain_ImageLength;
PyObject *const_int_pos_258;
PyObject *const_str_plain_BitsPerSample;
PyObject *const_int_pos_259;
PyObject *const_str_plain_Compression;
PyObject *const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c;
PyObject *const_int_pos_262;
PyObject *const_str_plain_PhotometricInterpretation;
PyObject *const_dict_39749579f943d31b5ff968e26bc0ca5a;
PyObject *const_int_pos_263;
PyObject *const_str_plain_Threshholding;
PyObject *const_int_pos_264;
PyObject *const_str_plain_CellWidth;
PyObject *const_int_pos_265;
PyObject *const_str_plain_CellLength;
PyObject *const_int_pos_266;
PyObject *const_str_plain_FillOrder;
PyObject *const_int_pos_269;
PyObject *const_str_plain_DocumentName;
PyObject *const_int_pos_270;
PyObject *const_str_plain_ImageDescription;
PyObject *const_int_pos_271;
PyObject *const_str_plain_Make;
PyObject *const_int_pos_272;
PyObject *const_str_plain_Model;
PyObject *const_int_pos_273;
PyObject *const_str_plain_StripOffsets;
PyObject *const_int_pos_274;
PyObject *const_str_plain_Orientation;
PyObject *const_int_pos_277;
PyObject *const_str_plain_SamplesPerPixel;
PyObject *const_int_pos_278;
PyObject *const_str_plain_RowsPerStrip;
PyObject *const_int_pos_279;
PyObject *const_str_plain_StripByteCounts;
PyObject *const_int_pos_280;
PyObject *const_str_plain_MinSampleValue;
PyObject *const_int_pos_281;
PyObject *const_str_plain_MaxSampleValue;
PyObject *const_int_pos_282;
PyObject *const_str_plain_XResolution;
PyObject *const_int_pos_283;
PyObject *const_str_plain_YResolution;
PyObject *const_int_pos_284;
PyObject *const_str_plain_PlanarConfiguration;
PyObject *const_dict_d42350037eae70df4c65014dffbfed19;
PyObject *const_int_pos_285;
PyObject *const_str_plain_PageName;
PyObject *const_int_pos_286;
PyObject *const_str_plain_XPosition;
PyObject *const_int_pos_287;
PyObject *const_str_plain_YPosition;
PyObject *const_int_pos_288;
PyObject *const_str_plain_FreeOffsets;
PyObject *const_int_pos_289;
PyObject *const_str_plain_FreeByteCounts;
PyObject *const_int_pos_290;
PyObject *const_str_plain_GrayResponseUnit;
PyObject *const_int_pos_291;
PyObject *const_str_plain_GrayResponseCurve;
PyObject *const_int_pos_292;
PyObject *const_str_plain_T4Options;
PyObject *const_int_pos_293;
PyObject *const_str_plain_T6Options;
PyObject *const_int_pos_296;
PyObject *const_str_plain_ResolutionUnit;
PyObject *const_dict_22dc888c657875abc535e5e13e9ac7c5;
PyObject *const_int_pos_297;
PyObject *const_str_plain_PageNumber;
PyObject *const_int_pos_301;
PyObject *const_str_plain_TransferFunction;
PyObject *const_int_pos_305;
PyObject *const_str_plain_Software;
PyObject *const_int_pos_306;
PyObject *const_str_plain_DateTime;
PyObject *const_int_pos_315;
PyObject *const_str_plain_Artist;
PyObject *const_int_pos_316;
PyObject *const_str_plain_HostComputer;
PyObject *const_int_pos_317;
PyObject *const_str_plain_Predictor;
PyObject *const_dict_24f46532581234f3874adc3a050bd90e;
PyObject *const_int_pos_318;
PyObject *const_str_plain_WhitePoint;
PyObject *const_int_pos_319;
PyObject *const_str_plain_PrimaryChromaticities;
PyObject *const_int_pos_320;
PyObject *const_str_plain_ColorMap;
PyObject *const_int_pos_321;
PyObject *const_str_plain_HalftoneHints;
PyObject *const_int_pos_322;
PyObject *const_str_plain_TileWidth;
PyObject *const_int_pos_323;
PyObject *const_str_plain_TileLength;
PyObject *const_int_pos_324;
PyObject *const_str_plain_TileOffsets;
PyObject *const_int_pos_325;
PyObject *const_str_plain_TileByteCounts;
PyObject *const_int_pos_330;
PyObject *const_str_plain_SubIFDs;
PyObject *const_int_pos_332;
PyObject *const_str_plain_InkSet;
PyObject *const_int_pos_333;
PyObject *const_str_plain_InkNames;
PyObject *const_int_pos_334;
PyObject *const_str_plain_NumberOfInks;
PyObject *const_int_pos_336;
PyObject *const_str_plain_DotRange;
PyObject *const_int_pos_337;
PyObject *const_str_plain_TargetPrinter;
PyObject *const_int_pos_338;
PyObject *const_str_plain_ExtraSamples;
PyObject *const_int_pos_339;
PyObject *const_str_plain_SampleFormat;
PyObject *const_int_pos_340;
PyObject *const_str_plain_SMinSampleValue;
PyObject *const_int_pos_341;
PyObject *const_str_plain_SMaxSampleValue;
PyObject *const_int_pos_342;
PyObject *const_str_plain_TransferRange;
PyObject *const_int_pos_347;
PyObject *const_str_plain_JPEGTables;
PyObject *const_int_pos_512;
PyObject *const_str_plain_JPEGProc;
PyObject *const_int_pos_513;
PyObject *const_str_plain_JPEGInterchangeFormat;
PyObject *const_int_pos_514;
PyObject *const_str_plain_JPEGInterchangeFormatLength;
PyObject *const_int_pos_515;
PyObject *const_str_plain_JPEGRestartInterval;
PyObject *const_int_pos_517;
PyObject *const_str_plain_JPEGLosslessPredictors;
PyObject *const_int_pos_518;
PyObject *const_str_plain_JPEGPointTransforms;
PyObject *const_int_pos_519;
PyObject *const_str_plain_JPEGQTables;
PyObject *const_int_pos_520;
PyObject *const_str_plain_JPEGDCTables;
PyObject *const_int_pos_521;
PyObject *const_str_plain_JPEGACTables;
PyObject *const_int_pos_529;
PyObject *const_str_plain_YCbCrCoefficients;
PyObject *const_int_pos_530;
PyObject *const_str_plain_YCbCrSubSampling;
PyObject *const_int_pos_531;
PyObject *const_str_plain_YCbCrPositioning;
PyObject *const_int_pos_532;
PyObject *const_str_plain_ReferenceBlackWhite;
PyObject *const_int_pos_700;
PyObject *const_str_plain_XMP;
PyObject *const_int_pos_32995;
PyObject *const_str_plain_Matteing;
PyObject *const_int_pos_32996;
PyObject *const_str_plain_DataType;
PyObject *const_int_pos_32997;
PyObject *const_str_plain_ImageDepth;
PyObject *const_int_pos_32998;
PyObject *const_str_plain_TileDepth;
PyObject *const_int_pos_33432;
PyObject *const_str_plain_Copyright;
PyObject *const_int_pos_33723;
PyObject *const_str_plain_IptcNaaInfo;
PyObject *const_int_pos_34377;
PyObject *const_str_plain_PhotoshopInfo;
PyObject *const_int_pos_34665;
PyObject *const_str_plain_ExifIFD;
PyObject *const_int_pos_34675;
PyObject *const_str_plain_ICCProfile;
PyObject *const_int_pos_34853;
PyObject *const_str_plain_GPSInfoIFD;
PyObject *const_int_pos_36864;
PyObject *const_str_plain_ExifVersion;
PyObject *const_int_pos_37724;
PyObject *const_str_plain_ImageSourceData;
PyObject *const_int_pos_40965;
PyObject *const_str_plain_InteroperabilityIFD;
PyObject *const_int_pos_41730;
PyObject *const_str_plain_CFAPattern;
PyObject *const_int_pos_45056;
PyObject *const_str_plain_MPFVersion;
PyObject *const_int_pos_45057;
PyObject *const_str_plain_NumberOfImages;
PyObject *const_int_pos_45058;
PyObject *const_str_plain_MPEntry;
PyObject *const_int_pos_45059;
PyObject *const_str_plain_ImageUIDList;
PyObject *const_int_pos_45060;
PyObject *const_str_plain_TotalFrames;
PyObject *const_int_pos_45313;
PyObject *const_str_plain_MPIndividualNum;
PyObject *const_int_pos_45569;
PyObject *const_str_plain_PanOrientation;
PyObject *const_int_pos_45570;
PyObject *const_str_plain_PanOverlap_H;
PyObject *const_int_pos_45571;
PyObject *const_str_plain_PanOverlap_V;
PyObject *const_int_pos_45572;
PyObject *const_str_plain_BaseViewpointNum;
PyObject *const_int_pos_45573;
PyObject *const_str_plain_ConvergenceAngle;
PyObject *const_int_pos_45574;
PyObject *const_str_plain_BaselineLength;
PyObject *const_int_pos_45575;
PyObject *const_str_plain_VerticalDivergence;
PyObject *const_int_pos_45576;
PyObject *const_str_plain_AxisDistance_X;
PyObject *const_int_pos_45577;
PyObject *const_str_plain_AxisDistance_Y;
PyObject *const_int_pos_45578;
PyObject *const_str_plain_AxisDistance_Z;
PyObject *const_int_pos_45579;
PyObject *const_str_plain_YawAngle;
PyObject *const_int_pos_45580;
PyObject *const_str_plain_PitchAngle;
PyObject *const_int_pos_45581;
PyObject *const_str_plain_RollAngle;
PyObject *const_int_pos_40960;
PyObject *const_str_plain_FlashPixVersion;
PyObject *const_int_pos_50741;
PyObject *const_str_plain_MakerNoteSafety;
PyObject *const_dict_d5fe7a7e78b4671757baf25612bf91d9;
PyObject *const_int_pos_50780;
PyObject *const_str_plain_BestQualityScale;
PyObject *const_int_pos_50838;
PyObject *const_str_plain_ImageJMetaDataByteCounts;
PyObject *const_int_pos_50839;
PyObject *const_str_plain_ImageJMetaData;
PyObject *const_str_digest_8fdd939d3732797b3e034b980a24531d;
PyObject *const_str_plain_GPSVersionID;
PyObject *const_str_plain_GPSLatitudeRef;
PyObject *const_str_plain_GPSLatitude;
PyObject *const_str_plain_GPSLongitudeRef;
PyObject *const_str_plain_GPSLongitude;
PyObject *const_str_plain_GPSAltitudeRef;
PyObject *const_str_plain_GPSAltitude;
PyObject *const_str_plain_GPSTimeStamp;
PyObject *const_str_plain_GPSSatellites;
PyObject *const_str_plain_GPSStatus;
PyObject *const_str_plain_GPSMeasureMode;
PyObject *const_str_plain_GPSDOP;
PyObject *const_str_plain_GPSSpeedRef;
PyObject *const_str_plain_GPSSpeed;
PyObject *const_int_pos_14;
PyObject *const_str_plain_GPSTrackRef;
PyObject *const_int_pos_15;
PyObject *const_str_plain_GPSTrack;
PyObject *const_str_plain_GPSImgDirectionRef;
PyObject *const_int_pos_17;
PyObject *const_str_plain_GPSImgDirection;
PyObject *const_int_pos_18;
PyObject *const_str_plain_GPSMapDatum;
PyObject *const_int_pos_19;
PyObject *const_str_plain_GPSDestLatitudeRef;
PyObject *const_int_pos_20;
PyObject *const_str_plain_GPSDestLatitude;
PyObject *const_int_pos_21;
PyObject *const_str_plain_GPSDestLongitudeRef;
PyObject *const_int_pos_22;
PyObject *const_str_plain_GPSDestLongitude;
PyObject *const_int_pos_23;
PyObject *const_str_plain_GPSDestBearingRef;
PyObject *const_str_plain_GPSDestBearing;
PyObject *const_int_pos_25;
PyObject *const_str_plain_GPSDestDistanceRef;
PyObject *const_int_pos_26;
PyObject *const_str_plain_GPSDestDistance;
PyObject *const_int_pos_27;
PyObject *const_str_plain_GPSProcessingMethod;
PyObject *const_int_pos_28;
PyObject *const_str_plain_GPSAreaInformation;
PyObject *const_int_pos_29;
PyObject *const_str_plain_GPSDateStamp;
PyObject *const_int_pos_30;
PyObject *const_str_plain_GPSDifferential;
PyObject *const_str_plain_InteropIndex;
PyObject *const_str_plain_InteropVersion;
PyObject *const_dict_10636d5b66fa57f494ff7a6cca7dbe5d;
PyObject *const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb;
PyObject *const_str_digest_4d4369df266fb3849fdfd661c050cf9e;
PyObject *const_str_digest_fcf05e8ba08eebfceffcede8c44aa122;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain__populate;
PyObject *const_str_plain_TYPES;
PyObject *const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301;
PyObject *const_set_4c07d51f8f0ae9e5ed0ee43665776747;
PyObject *const_str_plain_LIBTIFF_CORE;
PyObject *const_str_plain_remove;
PyObject *const_tuple_int_pos_255_tuple;
PyObject *const_tuple_int_pos_322_tuple;
PyObject *const_tuple_int_pos_323_tuple;
PyObject *const_str_digest_9de6e60b96ba5410370e2e616a430537;
PyObject *const_str_digest_721f10328662a234e6901bd2fd070d78;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple;
PyObject *const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[373];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.TiffTags"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 373) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 373 values, got %d\n",
                    UN_TRANSLATE("PIL.TiffTags"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___new__", mod_consts.const_str_plain___new__);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS_V2_GROUPS", mod_consts.const_str_plain_TAGS_V2_GROUPS);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS_V2_GROUPS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS_V2", mod_consts.const_str_plain_TAGS_V2);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS_V2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TagInfo", mod_consts.const_str_plain_TagInfo);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_TagInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS", mod_consts.const_str_plain_TAGS);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unknown", mod_consts.const_str_plain_unknown);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_unknown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105", mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__tags_v2", mod_consts.const_str_plain__tags_v2);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__tags_v2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__tags_v2_groups", mod_consts.const_str_plain__tags_v2_groups);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__tags_v2_groups);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TagInfo", mod_consts.const_str_plain__TagInfo);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__TagInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74", mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_length", mod_consts.const_str_plain_length);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7", mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___slots__", mod_consts.const_str_plain___slots__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a", mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple", mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94", mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7", mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316", mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cvt_enum", mod_consts.const_str_plain_cvt_enum);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_cvt_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f", mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_982a936f996ba783e96258eabd9a7694", mod_consts.const_dict_982a936f996ba783e96258eabd9a7694);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_982a936f996ba783e96258eabd9a7694);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lookup", mod_consts.const_str_plain_lookup);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_lookup);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BYTE", mod_consts.const_str_plain_BYTE);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_BYTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ASCII", mod_consts.const_str_plain_ASCII);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ASCII);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHORT", mod_consts.const_str_plain_SHORT);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHORT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG", mod_consts.const_str_plain_LONG);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_LONG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RATIONAL", mod_consts.const_str_plain_RATIONAL);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_RATIONAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_BYTE", mod_consts.const_str_plain_SIGNED_BYTE);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_BYTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNDEFINED", mod_consts.const_str_plain_UNDEFINED);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNDEFINED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_SHORT", mod_consts.const_str_plain_SIGNED_SHORT);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_SHORT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_LONG", mod_consts.const_str_plain_SIGNED_LONG);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_LONG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_RATIONAL", mod_consts.const_str_plain_SIGNED_RATIONAL);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_RATIONAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_11", mod_consts.const_int_pos_11);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FLOAT", mod_consts.const_str_plain_FLOAT);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_FLOAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOUBLE", mod_consts.const_str_plain_DOUBLE);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOUBLE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IFD", mod_consts.const_str_plain_IFD);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_IFD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG8", mod_consts.const_str_plain_LONG8);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_LONG8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NewSubfileType", mod_consts.const_str_plain_NewSubfileType);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_NewSubfileType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubfileType", mod_consts.const_str_plain_SubfileType);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubfileType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageWidth", mod_consts.const_str_plain_ImageWidth);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_257", mod_consts.const_int_pos_257);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_257);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageLength", mod_consts.const_str_plain_ImageLength);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_258", mod_consts.const_int_pos_258);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_258);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitsPerSample", mod_consts.const_str_plain_BitsPerSample);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_BitsPerSample);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_259", mod_consts.const_int_pos_259);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_int_pos_259);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Compression", mod_consts.const_str_plain_Compression);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_Compression);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c", mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_262", mod_consts.const_int_pos_262);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_262);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotometricInterpretation", mod_consts.const_str_plain_PhotometricInterpretation);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_PhotometricInterpretation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a", mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_263", mod_consts.const_int_pos_263);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_int_pos_263);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Threshholding", mod_consts.const_str_plain_Threshholding);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Threshholding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_264", mod_consts.const_int_pos_264);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_264);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellWidth", mod_consts.const_str_plain_CellWidth);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_CellWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_265", mod_consts.const_int_pos_265);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_265);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellLength", mod_consts.const_str_plain_CellLength);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_CellLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_266", mod_consts.const_int_pos_266);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_266);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FillOrder", mod_consts.const_str_plain_FillOrder);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_FillOrder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_269", mod_consts.const_int_pos_269);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_269);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DocumentName", mod_consts.const_str_plain_DocumentName);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocumentName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_270", mod_consts.const_int_pos_270);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_270);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageDescription", mod_consts.const_str_plain_ImageDescription);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageDescription);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_271", mod_consts.const_int_pos_271);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_271);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Make", mod_consts.const_str_plain_Make);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Make);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_272", mod_consts.const_int_pos_272);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_272);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Model", mod_consts.const_str_plain_Model);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Model);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_273", mod_consts.const_int_pos_273);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_273);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripOffsets", mod_consts.const_str_plain_StripOffsets);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_StripOffsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_274", mod_consts.const_int_pos_274);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_277", mod_consts.const_int_pos_277);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_277);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SamplesPerPixel", mod_consts.const_str_plain_SamplesPerPixel);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_SamplesPerPixel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_278", mod_consts.const_int_pos_278);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_278);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RowsPerStrip", mod_consts.const_str_plain_RowsPerStrip);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_RowsPerStrip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_279", mod_consts.const_int_pos_279);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_int_pos_279);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripByteCounts", mod_consts.const_str_plain_StripByteCounts);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_StripByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_280", mod_consts.const_int_pos_280);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_280);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MinSampleValue", mod_consts.const_str_plain_MinSampleValue);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_MinSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_281", mod_consts.const_int_pos_281);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_281);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxSampleValue", mod_consts.const_str_plain_MaxSampleValue);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_282", mod_consts.const_int_pos_282);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_282);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XResolution", mod_consts.const_str_plain_XResolution);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_XResolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_283", mod_consts.const_int_pos_283);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_int_pos_283);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YResolution", mod_consts.const_str_plain_YResolution);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_YResolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_284", mod_consts.const_int_pos_284);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_284);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PlanarConfiguration", mod_consts.const_str_plain_PlanarConfiguration);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlanarConfiguration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d42350037eae70df4c65014dffbfed19", mod_consts.const_dict_d42350037eae70df4c65014dffbfed19);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_dict_d42350037eae70df4c65014dffbfed19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_285", mod_consts.const_int_pos_285);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_285);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageName", mod_consts.const_str_plain_PageName);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_PageName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_286", mod_consts.const_int_pos_286);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_286);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPosition", mod_consts.const_str_plain_XPosition);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_XPosition);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_287", mod_consts.const_int_pos_287);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_287);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YPosition", mod_consts.const_str_plain_YPosition);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_YPosition);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_288", mod_consts.const_int_pos_288);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_288);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeOffsets", mod_consts.const_str_plain_FreeOffsets);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreeOffsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_289", mod_consts.const_int_pos_289);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_289);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeByteCounts", mod_consts.const_str_plain_FreeByteCounts);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreeByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_290", mod_consts.const_int_pos_290);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_290);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseUnit", mod_consts.const_str_plain_GrayResponseUnit);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseUnit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_291", mod_consts.const_int_pos_291);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_291);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseCurve", mod_consts.const_str_plain_GrayResponseCurve);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseCurve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_292", mod_consts.const_int_pos_292);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_292);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T4Options", mod_consts.const_str_plain_T4Options);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_T4Options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_293", mod_consts.const_int_pos_293);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_293);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T6Options", mod_consts.const_str_plain_T6Options);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_T6Options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_296", mod_consts.const_int_pos_296);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_296);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResolutionUnit", mod_consts.const_str_plain_ResolutionUnit);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResolutionUnit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5", mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_297", mod_consts.const_int_pos_297);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_int_pos_297);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageNumber", mod_consts.const_str_plain_PageNumber);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_PageNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_301", mod_consts.const_int_pos_301);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_int_pos_301);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferFunction", mod_consts.const_str_plain_TransferFunction);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransferFunction);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_305", mod_consts.const_int_pos_305);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_int_pos_305);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Software", mod_consts.const_str_plain_Software);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_Software);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_306", mod_consts.const_int_pos_306);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_306);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTime", mod_consts.const_str_plain_DateTime);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_DateTime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_315", mod_consts.const_int_pos_315);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_315);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Artist", mod_consts.const_str_plain_Artist);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_Artist);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_316", mod_consts.const_int_pos_316);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HostComputer", mod_consts.const_str_plain_HostComputer);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_HostComputer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_317", mod_consts.const_int_pos_317);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_int_pos_317);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Predictor", mod_consts.const_str_plain_Predictor);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Predictor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_24f46532581234f3874adc3a050bd90e", mod_consts.const_dict_24f46532581234f3874adc3a050bd90e);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_24f46532581234f3874adc3a050bd90e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_318", mod_consts.const_int_pos_318);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_318);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhitePoint", mod_consts.const_str_plain_WhitePoint);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_WhitePoint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_319", mod_consts.const_int_pos_319);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_319);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrimaryChromaticities", mod_consts.const_str_plain_PrimaryChromaticities);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrimaryChromaticities);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_320", mod_consts.const_int_pos_320);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_int_pos_320);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMap", mod_consts.const_str_plain_ColorMap);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_321", mod_consts.const_int_pos_321);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_321);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HalftoneHints", mod_consts.const_str_plain_HalftoneHints);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_HalftoneHints);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_322", mod_consts.const_int_pos_322);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_322);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileWidth", mod_consts.const_str_plain_TileWidth);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_323", mod_consts.const_int_pos_323);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_323);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileLength", mod_consts.const_str_plain_TileLength);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_324);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileOffsets", mod_consts.const_str_plain_TileOffsets);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileOffsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_325", mod_consts.const_int_pos_325);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_325);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileByteCounts", mod_consts.const_str_plain_TileByteCounts);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_330", mod_consts.const_int_pos_330);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_330);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubIFDs", mod_consts.const_str_plain_SubIFDs);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubIFDs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_332", mod_consts.const_int_pos_332);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_332);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkSet", mod_consts.const_str_plain_InkSet);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_InkSet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_333", mod_consts.const_int_pos_333);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_333);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkNames", mod_consts.const_str_plain_InkNames);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_InkNames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_334", mod_consts.const_int_pos_334);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_334);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NumberOfInks", mod_consts.const_str_plain_NumberOfInks);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_NumberOfInks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_336", mod_consts.const_int_pos_336);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_int_pos_336);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DotRange", mod_consts.const_str_plain_DotRange);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_DotRange);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_337", mod_consts.const_int_pos_337);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_337);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TargetPrinter", mod_consts.const_str_plain_TargetPrinter);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_TargetPrinter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_338", mod_consts.const_int_pos_338);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_338);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtraSamples", mod_consts.const_str_plain_ExtraSamples);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtraSamples);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_339", mod_consts.const_int_pos_339);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_int_pos_339);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SampleFormat", mod_consts.const_str_plain_SampleFormat);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_SampleFormat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_340", mod_consts.const_int_pos_340);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_340);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMinSampleValue", mod_consts.const_str_plain_SMinSampleValue);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMinSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_341", mod_consts.const_int_pos_341);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_341);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMaxSampleValue", mod_consts.const_str_plain_SMaxSampleValue);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMaxSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_342", mod_consts.const_int_pos_342);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_342);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferRange", mod_consts.const_str_plain_TransferRange);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransferRange);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_347", mod_consts.const_int_pos_347);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_int_pos_347);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGTables", mod_consts.const_str_plain_JPEGTables);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGProc", mod_consts.const_str_plain_JPEGProc);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGProc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_513", mod_consts.const_int_pos_513);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_int_pos_513);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGInterchangeFormat", mod_consts.const_str_plain_JPEGInterchangeFormat);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGInterchangeFormat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_514", mod_consts.const_int_pos_514);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_int_pos_514);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGInterchangeFormatLength", mod_consts.const_str_plain_JPEGInterchangeFormatLength);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGInterchangeFormatLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_515", mod_consts.const_int_pos_515);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_int_pos_515);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGRestartInterval", mod_consts.const_str_plain_JPEGRestartInterval);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGRestartInterval);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_517", mod_consts.const_int_pos_517);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_int_pos_517);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGLosslessPredictors", mod_consts.const_str_plain_JPEGLosslessPredictors);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGLosslessPredictors);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_518", mod_consts.const_int_pos_518);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_int_pos_518);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGPointTransforms", mod_consts.const_str_plain_JPEGPointTransforms);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGPointTransforms);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_519", mod_consts.const_int_pos_519);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_int_pos_519);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGQTables", mod_consts.const_str_plain_JPEGQTables);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGQTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_520", mod_consts.const_int_pos_520);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_int_pos_520);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGDCTables", mod_consts.const_str_plain_JPEGDCTables);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGDCTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_521", mod_consts.const_int_pos_521);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_int_pos_521);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGACTables", mod_consts.const_str_plain_JPEGACTables);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGACTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_529", mod_consts.const_int_pos_529);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_int_pos_529);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrCoefficients", mod_consts.const_str_plain_YCbCrCoefficients);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrCoefficients);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_530", mod_consts.const_int_pos_530);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_int_pos_530);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrSubSampling", mod_consts.const_str_plain_YCbCrSubSampling);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrSubSampling);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_531", mod_consts.const_int_pos_531);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_int_pos_531);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrPositioning", mod_consts.const_str_plain_YCbCrPositioning);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrPositioning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_532", mod_consts.const_int_pos_532);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_int_pos_532);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReferenceBlackWhite", mod_consts.const_str_plain_ReferenceBlackWhite);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReferenceBlackWhite);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_700", mod_consts.const_int_pos_700);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_int_pos_700);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XMP", mod_consts.const_str_plain_XMP);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_XMP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32995", mod_consts.const_int_pos_32995);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_int_pos_32995);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Matteing", mod_consts.const_str_plain_Matteing);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_Matteing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32996", mod_consts.const_int_pos_32996);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_int_pos_32996);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DataType", mod_consts.const_str_plain_DataType);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32997", mod_consts.const_int_pos_32997);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_int_pos_32997);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageDepth", mod_consts.const_str_plain_ImageDepth);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageDepth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32998", mod_consts.const_int_pos_32998);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_int_pos_32998);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileDepth", mod_consts.const_str_plain_TileDepth);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileDepth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33432", mod_consts.const_int_pos_33432);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_int_pos_33432);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Copyright", mod_consts.const_str_plain_Copyright);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_Copyright);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33723", mod_consts.const_int_pos_33723);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_int_pos_33723);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IptcNaaInfo", mod_consts.const_str_plain_IptcNaaInfo);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_IptcNaaInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34377", mod_consts.const_int_pos_34377);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_int_pos_34377);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotoshopInfo", mod_consts.const_str_plain_PhotoshopInfo);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_PhotoshopInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34665", mod_consts.const_int_pos_34665);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_int_pos_34665);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifIFD", mod_consts.const_str_plain_ExifIFD);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifIFD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34675", mod_consts.const_int_pos_34675);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_int_pos_34675);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICCProfile", mod_consts.const_str_plain_ICCProfile);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_plain_ICCProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34853", mod_consts.const_int_pos_34853);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_int_pos_34853);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSInfoIFD", mod_consts.const_str_plain_GPSInfoIFD);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSInfoIFD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36864", mod_consts.const_int_pos_36864);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_int_pos_36864);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifVersion", mod_consts.const_str_plain_ExifVersion);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37724", mod_consts.const_int_pos_37724);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_int_pos_37724);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageSourceData", mod_consts.const_str_plain_ImageSourceData);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageSourceData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40965", mod_consts.const_int_pos_40965);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_int_pos_40965);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteroperabilityIFD", mod_consts.const_str_plain_InteroperabilityIFD);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteroperabilityIFD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41730", mod_consts.const_int_pos_41730);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_int_pos_41730);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFAPattern", mod_consts.const_str_plain_CFAPattern);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFAPattern);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45056", mod_consts.const_int_pos_45056);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_int_pos_45056);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MPFVersion", mod_consts.const_str_plain_MPFVersion);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_plain_MPFVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45057", mod_consts.const_int_pos_45057);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_int_pos_45057);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NumberOfImages", mod_consts.const_str_plain_NumberOfImages);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain_NumberOfImages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45058", mod_consts.const_int_pos_45058);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_int_pos_45058);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MPEntry", mod_consts.const_str_plain_MPEntry);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_plain_MPEntry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45059", mod_consts.const_int_pos_45059);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_int_pos_45059);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageUIDList", mod_consts.const_str_plain_ImageUIDList);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageUIDList);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45060", mod_consts.const_int_pos_45060);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_int_pos_45060);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TotalFrames", mod_consts.const_str_plain_TotalFrames);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_plain_TotalFrames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45313", mod_consts.const_int_pos_45313);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_int_pos_45313);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MPIndividualNum", mod_consts.const_str_plain_MPIndividualNum);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_plain_MPIndividualNum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45569", mod_consts.const_int_pos_45569);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_int_pos_45569);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PanOrientation", mod_consts.const_str_plain_PanOrientation);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_plain_PanOrientation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45570", mod_consts.const_int_pos_45570);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_int_pos_45570);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PanOverlap_H", mod_consts.const_str_plain_PanOverlap_H);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_plain_PanOverlap_H);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45571", mod_consts.const_int_pos_45571);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_int_pos_45571);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PanOverlap_V", mod_consts.const_str_plain_PanOverlap_V);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_plain_PanOverlap_V);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45572", mod_consts.const_int_pos_45572);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_int_pos_45572);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseViewpointNum", mod_consts.const_str_plain_BaseViewpointNum);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseViewpointNum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45573", mod_consts.const_int_pos_45573);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_int_pos_45573);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConvergenceAngle", mod_consts.const_str_plain_ConvergenceAngle);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConvergenceAngle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45574", mod_consts.const_int_pos_45574);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_int_pos_45574);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineLength", mod_consts.const_str_plain_BaselineLength);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45575", mod_consts.const_int_pos_45575);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_int_pos_45575);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VerticalDivergence", mod_consts.const_str_plain_VerticalDivergence);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalDivergence);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45576", mod_consts.const_int_pos_45576);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_int_pos_45576);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AxisDistance_X", mod_consts.const_str_plain_AxisDistance_X);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_plain_AxisDistance_X);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45577", mod_consts.const_int_pos_45577);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_int_pos_45577);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AxisDistance_Y", mod_consts.const_str_plain_AxisDistance_Y);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_plain_AxisDistance_Y);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45578", mod_consts.const_int_pos_45578);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_int_pos_45578);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AxisDistance_Z", mod_consts.const_str_plain_AxisDistance_Z);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_str_plain_AxisDistance_Z);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45579", mod_consts.const_int_pos_45579);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_int_pos_45579);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YawAngle", mod_consts.const_str_plain_YawAngle);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_str_plain_YawAngle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45580", mod_consts.const_int_pos_45580);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_int_pos_45580);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PitchAngle", mod_consts.const_str_plain_PitchAngle);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_str_plain_PitchAngle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45581", mod_consts.const_int_pos_45581);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_int_pos_45581);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RollAngle", mod_consts.const_str_plain_RollAngle);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_str_plain_RollAngle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40960", mod_consts.const_int_pos_40960);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_int_pos_40960);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FlashPixVersion", mod_consts.const_str_plain_FlashPixVersion);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_str_plain_FlashPixVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50741", mod_consts.const_int_pos_50741);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_int_pos_50741);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MakerNoteSafety", mod_consts.const_str_plain_MakerNoteSafety);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_str_plain_MakerNoteSafety);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9", mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50780", mod_consts.const_int_pos_50780);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_int_pos_50780);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BestQualityScale", mod_consts.const_str_plain_BestQualityScale);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_str_plain_BestQualityScale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50838", mod_consts.const_int_pos_50838);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_int_pos_50838);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageJMetaDataByteCounts", mod_consts.const_str_plain_ImageJMetaDataByteCounts);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageJMetaDataByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50839", mod_consts.const_int_pos_50839);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_int_pos_50839);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageJMetaData", mod_consts.const_str_plain_ImageJMetaData);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageJMetaData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d", mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSVersionID", mod_consts.const_str_plain_GPSVersionID);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSVersionID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitudeRef", mod_consts.const_str_plain_GPSLatitudeRef);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitude", mod_consts.const_str_plain_GPSLatitude);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitudeRef", mod_consts.const_str_plain_GPSLongitudeRef);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitude", mod_consts.const_str_plain_GPSLongitude);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitudeRef", mod_consts.const_str_plain_GPSAltitudeRef);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitude", mod_consts.const_str_plain_GPSAltitude);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTimeStamp", mod_consts.const_str_plain_GPSTimeStamp);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTimeStamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSatellites", mod_consts.const_str_plain_GPSSatellites);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSatellites);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSStatus", mod_consts.const_str_plain_GPSStatus);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSStatus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMeasureMode", mod_consts.const_str_plain_GPSMeasureMode);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMeasureMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDOP", mod_consts.const_str_plain_GPSDOP);
mod_consts_hash[315] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeedRef", mod_consts.const_str_plain_GPSSpeedRef);
mod_consts_hash[316] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeedRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeed", mod_consts.const_str_plain_GPSSpeed);
mod_consts_hash[317] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
mod_consts_hash[318] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrackRef", mod_consts.const_str_plain_GPSTrackRef);
mod_consts_hash[319] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrackRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_15", mod_consts.const_int_pos_15);
mod_consts_hash[320] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrack", mod_consts.const_str_plain_GPSTrack);
mod_consts_hash[321] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrack);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirectionRef", mod_consts.const_str_plain_GPSImgDirectionRef);
mod_consts_hash[322] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirectionRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
mod_consts_hash[323] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirection", mod_consts.const_str_plain_GPSImgDirection);
mod_consts_hash[324] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[325] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMapDatum", mod_consts.const_str_plain_GPSMapDatum);
mod_consts_hash[326] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMapDatum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19", mod_consts.const_int_pos_19);
mod_consts_hash[327] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitudeRef", mod_consts.const_str_plain_GPSDestLatitudeRef);
mod_consts_hash[328] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[329] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitude", mod_consts.const_str_plain_GPSDestLatitude);
mod_consts_hash[330] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
mod_consts_hash[331] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitudeRef", mod_consts.const_str_plain_GPSDestLongitudeRef);
mod_consts_hash[332] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
mod_consts_hash[333] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitude", mod_consts.const_str_plain_GPSDestLongitude);
mod_consts_hash[334] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_23", mod_consts.const_int_pos_23);
mod_consts_hash[335] = DEEP_HASH(tstate, mod_consts.const_int_pos_23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearingRef", mod_consts.const_str_plain_GPSDestBearingRef);
mod_consts_hash[336] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearingRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearing", mod_consts.const_str_plain_GPSDestBearing);
mod_consts_hash[337] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
mod_consts_hash[338] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistanceRef", mod_consts.const_str_plain_GPSDestDistanceRef);
mod_consts_hash[339] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistanceRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
mod_consts_hash[340] = DEEP_HASH(tstate, mod_consts.const_int_pos_26);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistance", mod_consts.const_str_plain_GPSDestDistance);
mod_consts_hash[341] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistance);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
mod_consts_hash[342] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSProcessingMethod", mod_consts.const_str_plain_GPSProcessingMethod);
mod_consts_hash[343] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSProcessingMethod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
mod_consts_hash[344] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAreaInformation", mod_consts.const_str_plain_GPSAreaInformation);
mod_consts_hash[345] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAreaInformation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_29", mod_consts.const_int_pos_29);
mod_consts_hash[346] = DEEP_HASH(tstate, mod_consts.const_int_pos_29);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDateStamp", mod_consts.const_str_plain_GPSDateStamp);
mod_consts_hash[347] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDateStamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
mod_consts_hash[348] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDifferential", mod_consts.const_str_plain_GPSDifferential);
mod_consts_hash[349] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDifferential);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropIndex", mod_consts.const_str_plain_InteropIndex);
mod_consts_hash[350] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteropIndex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropVersion", mod_consts.const_str_plain_InteropVersion);
mod_consts_hash[351] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteropVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d", mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d);
mod_consts_hash[352] = DEEP_HASH(tstate, mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb", mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb);
mod_consts_hash[353] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e", mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e);
mod_consts_hash[354] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122", mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122);
mod_consts_hash[355] = DEEP_HASH(tstate, mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[356] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__populate", mod_consts.const_str_plain__populate);
mod_consts_hash[357] = DEEP_HASH(tstate, mod_consts.const_str_plain__populate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPES", mod_consts.const_str_plain_TYPES);
mod_consts_hash[358] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301", mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301);
mod_consts_hash[359] = DEEP_HASH(tstate, mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747", mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747);
mod_consts_hash[360] = DEEP_HASH(tstate, mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LIBTIFF_CORE", mod_consts.const_str_plain_LIBTIFF_CORE);
mod_consts_hash[361] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIBTIFF_CORE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove", mod_consts.const_str_plain_remove);
mod_consts_hash[362] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_255_tuple", mod_consts.const_tuple_int_pos_255_tuple);
mod_consts_hash[363] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_255_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_322_tuple", mod_consts.const_tuple_int_pos_322_tuple);
mod_consts_hash[364] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_322_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_323_tuple", mod_consts.const_tuple_int_pos_323_tuple);
mod_consts_hash[365] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_323_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537", mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537);
mod_consts_hash[366] = DEEP_HASH(tstate, mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78", mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78);
mod_consts_hash[367] = DEEP_HASH(tstate, mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[368] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple", mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple);
mod_consts_hash[369] = DEEP_HASH(tstate, mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple", mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple);
mod_consts_hash[370] = DEEP_HASH(tstate, mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_value_tuple", mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[371] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple", mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple);
mod_consts_hash[372] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple);
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
void checkModuleConstants_PIL$TiffTags(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___new__", mod_consts.const_str_plain___new__);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__) && "mod_consts.const_str_plain___new__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS_V2_GROUPS", mod_consts.const_str_plain_TAGS_V2_GROUPS);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS_V2_GROUPS) && "mod_consts.const_str_plain_TAGS_V2_GROUPS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS_V2", mod_consts.const_str_plain_TAGS_V2);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS_V2) && "mod_consts.const_str_plain_TAGS_V2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TagInfo", mod_consts.const_str_plain_TagInfo);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_TagInfo) && "mod_consts.const_str_plain_TagInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS", mod_consts.const_str_plain_TAGS);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS) && "mod_consts.const_str_plain_TAGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unknown", mod_consts.const_str_plain_unknown);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_unknown) && "mod_consts.const_str_plain_unknown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105", mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105) && "mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__tags_v2", mod_consts.const_str_plain__tags_v2);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__tags_v2) && "mod_consts.const_str_plain__tags_v2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__tags_v2_groups", mod_consts.const_str_plain__tags_v2_groups);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__tags_v2_groups) && "mod_consts.const_str_plain__tags_v2_groups");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple) && "mod_consts.const_str_plain_NamedTuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TagInfo", mod_consts.const_str_plain__TagInfo);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__TagInfo) && "mod_consts.const_str_plain__TagInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74", mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74) && "mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_24) && "mod_consts.const_int_pos_24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a) && "mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_str) && "mod_consts.const_str_plain_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_length", mod_consts.const_str_plain_length);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_length) && "mod_consts.const_str_plain_length");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7", mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7) && "mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___slots__", mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__) && "mod_consts.const_str_plain___slots__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a", mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a) && "mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple", mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple) && "mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94", mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94) && "mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7", mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7) && "mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316", mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316) && "mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cvt_enum", mod_consts.const_str_plain_cvt_enum);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_cvt_enum) && "mod_consts.const_str_plain_cvt_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f", mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f) && "mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_982a936f996ba783e96258eabd9a7694", mod_consts.const_dict_982a936f996ba783e96258eabd9a7694);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_982a936f996ba783e96258eabd9a7694) && "mod_consts.const_dict_982a936f996ba783e96258eabd9a7694");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lookup", mod_consts.const_str_plain_lookup);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_lookup) && "mod_consts.const_str_plain_lookup");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BYTE", mod_consts.const_str_plain_BYTE);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_BYTE) && "mod_consts.const_str_plain_BYTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ASCII", mod_consts.const_str_plain_ASCII);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ASCII) && "mod_consts.const_str_plain_ASCII");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHORT", mod_consts.const_str_plain_SHORT);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHORT) && "mod_consts.const_str_plain_SHORT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG", mod_consts.const_str_plain_LONG);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_LONG) && "mod_consts.const_str_plain_LONG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RATIONAL", mod_consts.const_str_plain_RATIONAL);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_RATIONAL) && "mod_consts.const_str_plain_RATIONAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_BYTE", mod_consts.const_str_plain_SIGNED_BYTE);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_BYTE) && "mod_consts.const_str_plain_SIGNED_BYTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_7) && "mod_consts.const_int_pos_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNDEFINED", mod_consts.const_str_plain_UNDEFINED);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNDEFINED) && "mod_consts.const_str_plain_UNDEFINED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_SHORT", mod_consts.const_str_plain_SIGNED_SHORT);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_SHORT) && "mod_consts.const_str_plain_SIGNED_SHORT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_int_pos_9) && "mod_consts.const_int_pos_9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_LONG", mod_consts.const_str_plain_SIGNED_LONG);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_LONG) && "mod_consts.const_str_plain_SIGNED_LONG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_10) && "mod_consts.const_int_pos_10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SIGNED_RATIONAL", mod_consts.const_str_plain_SIGNED_RATIONAL);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIGNED_RATIONAL) && "mod_consts.const_str_plain_SIGNED_RATIONAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_11", mod_consts.const_int_pos_11);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_11) && "mod_consts.const_int_pos_11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FLOAT", mod_consts.const_str_plain_FLOAT);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_FLOAT) && "mod_consts.const_str_plain_FLOAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_12) && "mod_consts.const_int_pos_12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOUBLE", mod_consts.const_str_plain_DOUBLE);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOUBLE) && "mod_consts.const_str_plain_DOUBLE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_13) && "mod_consts.const_int_pos_13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IFD", mod_consts.const_str_plain_IFD);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_IFD) && "mod_consts.const_str_plain_IFD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG8", mod_consts.const_str_plain_LONG8);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_LONG8) && "mod_consts.const_str_plain_LONG8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_254) && "mod_consts.const_int_pos_254");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NewSubfileType", mod_consts.const_str_plain_NewSubfileType);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_NewSubfileType) && "mod_consts.const_str_plain_NewSubfileType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubfileType", mod_consts.const_str_plain_SubfileType);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubfileType) && "mod_consts.const_str_plain_SubfileType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageWidth", mod_consts.const_str_plain_ImageWidth);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageWidth) && "mod_consts.const_str_plain_ImageWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_257", mod_consts.const_int_pos_257);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_257) && "mod_consts.const_int_pos_257");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageLength", mod_consts.const_str_plain_ImageLength);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageLength) && "mod_consts.const_str_plain_ImageLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_258", mod_consts.const_int_pos_258);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_258) && "mod_consts.const_int_pos_258");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitsPerSample", mod_consts.const_str_plain_BitsPerSample);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_BitsPerSample) && "mod_consts.const_str_plain_BitsPerSample");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_259", mod_consts.const_int_pos_259);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_int_pos_259) && "mod_consts.const_int_pos_259");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Compression", mod_consts.const_str_plain_Compression);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_Compression) && "mod_consts.const_str_plain_Compression");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c", mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c) && "mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_262", mod_consts.const_int_pos_262);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_262) && "mod_consts.const_int_pos_262");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotometricInterpretation", mod_consts.const_str_plain_PhotometricInterpretation);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_PhotometricInterpretation) && "mod_consts.const_str_plain_PhotometricInterpretation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a", mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a) && "mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_263", mod_consts.const_int_pos_263);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_int_pos_263) && "mod_consts.const_int_pos_263");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Threshholding", mod_consts.const_str_plain_Threshholding);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Threshholding) && "mod_consts.const_str_plain_Threshholding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_264", mod_consts.const_int_pos_264);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_264) && "mod_consts.const_int_pos_264");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellWidth", mod_consts.const_str_plain_CellWidth);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_CellWidth) && "mod_consts.const_str_plain_CellWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_265", mod_consts.const_int_pos_265);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_265) && "mod_consts.const_int_pos_265");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellLength", mod_consts.const_str_plain_CellLength);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_CellLength) && "mod_consts.const_str_plain_CellLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_266", mod_consts.const_int_pos_266);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_266) && "mod_consts.const_int_pos_266");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FillOrder", mod_consts.const_str_plain_FillOrder);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_FillOrder) && "mod_consts.const_str_plain_FillOrder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_269", mod_consts.const_int_pos_269);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_269) && "mod_consts.const_int_pos_269");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DocumentName", mod_consts.const_str_plain_DocumentName);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocumentName) && "mod_consts.const_str_plain_DocumentName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_270", mod_consts.const_int_pos_270);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_270) && "mod_consts.const_int_pos_270");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageDescription", mod_consts.const_str_plain_ImageDescription);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageDescription) && "mod_consts.const_str_plain_ImageDescription");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_271", mod_consts.const_int_pos_271);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_271) && "mod_consts.const_int_pos_271");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Make", mod_consts.const_str_plain_Make);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Make) && "mod_consts.const_str_plain_Make");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_272", mod_consts.const_int_pos_272);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_272) && "mod_consts.const_int_pos_272");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Model", mod_consts.const_str_plain_Model);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Model) && "mod_consts.const_str_plain_Model");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_273", mod_consts.const_int_pos_273);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_273) && "mod_consts.const_int_pos_273");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripOffsets", mod_consts.const_str_plain_StripOffsets);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_StripOffsets) && "mod_consts.const_str_plain_StripOffsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_274", mod_consts.const_int_pos_274);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_274) && "mod_consts.const_int_pos_274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation) && "mod_consts.const_str_plain_Orientation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_277", mod_consts.const_int_pos_277);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_277) && "mod_consts.const_int_pos_277");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SamplesPerPixel", mod_consts.const_str_plain_SamplesPerPixel);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_SamplesPerPixel) && "mod_consts.const_str_plain_SamplesPerPixel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_278", mod_consts.const_int_pos_278);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_278) && "mod_consts.const_int_pos_278");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RowsPerStrip", mod_consts.const_str_plain_RowsPerStrip);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_RowsPerStrip) && "mod_consts.const_str_plain_RowsPerStrip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_279", mod_consts.const_int_pos_279);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_int_pos_279) && "mod_consts.const_int_pos_279");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripByteCounts", mod_consts.const_str_plain_StripByteCounts);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_StripByteCounts) && "mod_consts.const_str_plain_StripByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_280", mod_consts.const_int_pos_280);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_280) && "mod_consts.const_int_pos_280");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MinSampleValue", mod_consts.const_str_plain_MinSampleValue);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_MinSampleValue) && "mod_consts.const_str_plain_MinSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_281", mod_consts.const_int_pos_281);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_281) && "mod_consts.const_int_pos_281");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxSampleValue", mod_consts.const_str_plain_MaxSampleValue);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxSampleValue) && "mod_consts.const_str_plain_MaxSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_282", mod_consts.const_int_pos_282);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_282) && "mod_consts.const_int_pos_282");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XResolution", mod_consts.const_str_plain_XResolution);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_XResolution) && "mod_consts.const_str_plain_XResolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_283", mod_consts.const_int_pos_283);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_int_pos_283) && "mod_consts.const_int_pos_283");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YResolution", mod_consts.const_str_plain_YResolution);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_YResolution) && "mod_consts.const_str_plain_YResolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_284", mod_consts.const_int_pos_284);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_284) && "mod_consts.const_int_pos_284");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PlanarConfiguration", mod_consts.const_str_plain_PlanarConfiguration);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlanarConfiguration) && "mod_consts.const_str_plain_PlanarConfiguration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d42350037eae70df4c65014dffbfed19", mod_consts.const_dict_d42350037eae70df4c65014dffbfed19);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_dict_d42350037eae70df4c65014dffbfed19) && "mod_consts.const_dict_d42350037eae70df4c65014dffbfed19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_285", mod_consts.const_int_pos_285);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_285) && "mod_consts.const_int_pos_285");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageName", mod_consts.const_str_plain_PageName);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_PageName) && "mod_consts.const_str_plain_PageName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_286", mod_consts.const_int_pos_286);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_286) && "mod_consts.const_int_pos_286");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPosition", mod_consts.const_str_plain_XPosition);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_XPosition) && "mod_consts.const_str_plain_XPosition");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_287", mod_consts.const_int_pos_287);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_287) && "mod_consts.const_int_pos_287");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YPosition", mod_consts.const_str_plain_YPosition);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_YPosition) && "mod_consts.const_str_plain_YPosition");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_288", mod_consts.const_int_pos_288);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_288) && "mod_consts.const_int_pos_288");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeOffsets", mod_consts.const_str_plain_FreeOffsets);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreeOffsets) && "mod_consts.const_str_plain_FreeOffsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_289", mod_consts.const_int_pos_289);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_289) && "mod_consts.const_int_pos_289");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeByteCounts", mod_consts.const_str_plain_FreeByteCounts);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreeByteCounts) && "mod_consts.const_str_plain_FreeByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_290", mod_consts.const_int_pos_290);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_290) && "mod_consts.const_int_pos_290");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseUnit", mod_consts.const_str_plain_GrayResponseUnit);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseUnit) && "mod_consts.const_str_plain_GrayResponseUnit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_291", mod_consts.const_int_pos_291);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_291) && "mod_consts.const_int_pos_291");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseCurve", mod_consts.const_str_plain_GrayResponseCurve);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseCurve) && "mod_consts.const_str_plain_GrayResponseCurve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_292", mod_consts.const_int_pos_292);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_292) && "mod_consts.const_int_pos_292");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T4Options", mod_consts.const_str_plain_T4Options);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_T4Options) && "mod_consts.const_str_plain_T4Options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_293", mod_consts.const_int_pos_293);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_293) && "mod_consts.const_int_pos_293");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T6Options", mod_consts.const_str_plain_T6Options);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_T6Options) && "mod_consts.const_str_plain_T6Options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_296", mod_consts.const_int_pos_296);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_296) && "mod_consts.const_int_pos_296");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResolutionUnit", mod_consts.const_str_plain_ResolutionUnit);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResolutionUnit) && "mod_consts.const_str_plain_ResolutionUnit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5", mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5) && "mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_297", mod_consts.const_int_pos_297);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_int_pos_297) && "mod_consts.const_int_pos_297");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageNumber", mod_consts.const_str_plain_PageNumber);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_PageNumber) && "mod_consts.const_str_plain_PageNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_301", mod_consts.const_int_pos_301);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_int_pos_301) && "mod_consts.const_int_pos_301");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferFunction", mod_consts.const_str_plain_TransferFunction);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransferFunction) && "mod_consts.const_str_plain_TransferFunction");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_305", mod_consts.const_int_pos_305);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_int_pos_305) && "mod_consts.const_int_pos_305");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Software", mod_consts.const_str_plain_Software);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_Software) && "mod_consts.const_str_plain_Software");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_306", mod_consts.const_int_pos_306);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_306) && "mod_consts.const_int_pos_306");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTime", mod_consts.const_str_plain_DateTime);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_DateTime) && "mod_consts.const_str_plain_DateTime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_315", mod_consts.const_int_pos_315);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_315) && "mod_consts.const_int_pos_315");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Artist", mod_consts.const_str_plain_Artist);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_Artist) && "mod_consts.const_str_plain_Artist");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_316", mod_consts.const_int_pos_316);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_316) && "mod_consts.const_int_pos_316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HostComputer", mod_consts.const_str_plain_HostComputer);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_HostComputer) && "mod_consts.const_str_plain_HostComputer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_317", mod_consts.const_int_pos_317);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_int_pos_317) && "mod_consts.const_int_pos_317");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Predictor", mod_consts.const_str_plain_Predictor);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Predictor) && "mod_consts.const_str_plain_Predictor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_24f46532581234f3874adc3a050bd90e", mod_consts.const_dict_24f46532581234f3874adc3a050bd90e);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_24f46532581234f3874adc3a050bd90e) && "mod_consts.const_dict_24f46532581234f3874adc3a050bd90e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_318", mod_consts.const_int_pos_318);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_318) && "mod_consts.const_int_pos_318");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhitePoint", mod_consts.const_str_plain_WhitePoint);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_WhitePoint) && "mod_consts.const_str_plain_WhitePoint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_319", mod_consts.const_int_pos_319);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_319) && "mod_consts.const_int_pos_319");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrimaryChromaticities", mod_consts.const_str_plain_PrimaryChromaticities);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrimaryChromaticities) && "mod_consts.const_str_plain_PrimaryChromaticities");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_320", mod_consts.const_int_pos_320);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_int_pos_320) && "mod_consts.const_int_pos_320");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMap", mod_consts.const_str_plain_ColorMap);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMap) && "mod_consts.const_str_plain_ColorMap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_321", mod_consts.const_int_pos_321);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_321) && "mod_consts.const_int_pos_321");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HalftoneHints", mod_consts.const_str_plain_HalftoneHints);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_HalftoneHints) && "mod_consts.const_str_plain_HalftoneHints");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_322", mod_consts.const_int_pos_322);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_322) && "mod_consts.const_int_pos_322");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileWidth", mod_consts.const_str_plain_TileWidth);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileWidth) && "mod_consts.const_str_plain_TileWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_323", mod_consts.const_int_pos_323);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_323) && "mod_consts.const_int_pos_323");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileLength", mod_consts.const_str_plain_TileLength);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileLength) && "mod_consts.const_str_plain_TileLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_324) && "mod_consts.const_int_pos_324");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileOffsets", mod_consts.const_str_plain_TileOffsets);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileOffsets) && "mod_consts.const_str_plain_TileOffsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_325", mod_consts.const_int_pos_325);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_325) && "mod_consts.const_int_pos_325");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileByteCounts", mod_consts.const_str_plain_TileByteCounts);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileByteCounts) && "mod_consts.const_str_plain_TileByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_330", mod_consts.const_int_pos_330);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_330) && "mod_consts.const_int_pos_330");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubIFDs", mod_consts.const_str_plain_SubIFDs);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubIFDs) && "mod_consts.const_str_plain_SubIFDs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_332", mod_consts.const_int_pos_332);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_332) && "mod_consts.const_int_pos_332");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkSet", mod_consts.const_str_plain_InkSet);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_InkSet) && "mod_consts.const_str_plain_InkSet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_333", mod_consts.const_int_pos_333);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_333) && "mod_consts.const_int_pos_333");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkNames", mod_consts.const_str_plain_InkNames);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_InkNames) && "mod_consts.const_str_plain_InkNames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_334", mod_consts.const_int_pos_334);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_334) && "mod_consts.const_int_pos_334");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NumberOfInks", mod_consts.const_str_plain_NumberOfInks);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_NumberOfInks) && "mod_consts.const_str_plain_NumberOfInks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_336", mod_consts.const_int_pos_336);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_int_pos_336) && "mod_consts.const_int_pos_336");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DotRange", mod_consts.const_str_plain_DotRange);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_DotRange) && "mod_consts.const_str_plain_DotRange");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_337", mod_consts.const_int_pos_337);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_337) && "mod_consts.const_int_pos_337");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TargetPrinter", mod_consts.const_str_plain_TargetPrinter);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_TargetPrinter) && "mod_consts.const_str_plain_TargetPrinter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_338", mod_consts.const_int_pos_338);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_338) && "mod_consts.const_int_pos_338");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtraSamples", mod_consts.const_str_plain_ExtraSamples);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtraSamples) && "mod_consts.const_str_plain_ExtraSamples");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_339", mod_consts.const_int_pos_339);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_int_pos_339) && "mod_consts.const_int_pos_339");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SampleFormat", mod_consts.const_str_plain_SampleFormat);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_SampleFormat) && "mod_consts.const_str_plain_SampleFormat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_340", mod_consts.const_int_pos_340);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_340) && "mod_consts.const_int_pos_340");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMinSampleValue", mod_consts.const_str_plain_SMinSampleValue);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMinSampleValue) && "mod_consts.const_str_plain_SMinSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_341", mod_consts.const_int_pos_341);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_341) && "mod_consts.const_int_pos_341");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMaxSampleValue", mod_consts.const_str_plain_SMaxSampleValue);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMaxSampleValue) && "mod_consts.const_str_plain_SMaxSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_342", mod_consts.const_int_pos_342);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_342) && "mod_consts.const_int_pos_342");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferRange", mod_consts.const_str_plain_TransferRange);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransferRange) && "mod_consts.const_str_plain_TransferRange");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_347", mod_consts.const_int_pos_347);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_int_pos_347) && "mod_consts.const_int_pos_347");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGTables", mod_consts.const_str_plain_JPEGTables);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGTables) && "mod_consts.const_str_plain_JPEGTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_int_pos_512) && "mod_consts.const_int_pos_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGProc", mod_consts.const_str_plain_JPEGProc);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGProc) && "mod_consts.const_str_plain_JPEGProc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_513", mod_consts.const_int_pos_513);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_int_pos_513) && "mod_consts.const_int_pos_513");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGInterchangeFormat", mod_consts.const_str_plain_JPEGInterchangeFormat);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGInterchangeFormat) && "mod_consts.const_str_plain_JPEGInterchangeFormat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_514", mod_consts.const_int_pos_514);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_int_pos_514) && "mod_consts.const_int_pos_514");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGInterchangeFormatLength", mod_consts.const_str_plain_JPEGInterchangeFormatLength);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGInterchangeFormatLength) && "mod_consts.const_str_plain_JPEGInterchangeFormatLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_515", mod_consts.const_int_pos_515);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_int_pos_515) && "mod_consts.const_int_pos_515");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGRestartInterval", mod_consts.const_str_plain_JPEGRestartInterval);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGRestartInterval) && "mod_consts.const_str_plain_JPEGRestartInterval");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_517", mod_consts.const_int_pos_517);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_int_pos_517) && "mod_consts.const_int_pos_517");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGLosslessPredictors", mod_consts.const_str_plain_JPEGLosslessPredictors);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGLosslessPredictors) && "mod_consts.const_str_plain_JPEGLosslessPredictors");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_518", mod_consts.const_int_pos_518);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_int_pos_518) && "mod_consts.const_int_pos_518");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGPointTransforms", mod_consts.const_str_plain_JPEGPointTransforms);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGPointTransforms) && "mod_consts.const_str_plain_JPEGPointTransforms");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_519", mod_consts.const_int_pos_519);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_int_pos_519) && "mod_consts.const_int_pos_519");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGQTables", mod_consts.const_str_plain_JPEGQTables);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGQTables) && "mod_consts.const_str_plain_JPEGQTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_520", mod_consts.const_int_pos_520);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_int_pos_520) && "mod_consts.const_int_pos_520");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGDCTables", mod_consts.const_str_plain_JPEGDCTables);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGDCTables) && "mod_consts.const_str_plain_JPEGDCTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_521", mod_consts.const_int_pos_521);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_int_pos_521) && "mod_consts.const_int_pos_521");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGACTables", mod_consts.const_str_plain_JPEGACTables);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGACTables) && "mod_consts.const_str_plain_JPEGACTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_529", mod_consts.const_int_pos_529);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_int_pos_529) && "mod_consts.const_int_pos_529");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrCoefficients", mod_consts.const_str_plain_YCbCrCoefficients);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrCoefficients) && "mod_consts.const_str_plain_YCbCrCoefficients");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_530", mod_consts.const_int_pos_530);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_int_pos_530) && "mod_consts.const_int_pos_530");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrSubSampling", mod_consts.const_str_plain_YCbCrSubSampling);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrSubSampling) && "mod_consts.const_str_plain_YCbCrSubSampling");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_531", mod_consts.const_int_pos_531);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_int_pos_531) && "mod_consts.const_int_pos_531");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrPositioning", mod_consts.const_str_plain_YCbCrPositioning);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrPositioning) && "mod_consts.const_str_plain_YCbCrPositioning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_532", mod_consts.const_int_pos_532);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_int_pos_532) && "mod_consts.const_int_pos_532");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReferenceBlackWhite", mod_consts.const_str_plain_ReferenceBlackWhite);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReferenceBlackWhite) && "mod_consts.const_str_plain_ReferenceBlackWhite");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_700", mod_consts.const_int_pos_700);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_int_pos_700) && "mod_consts.const_int_pos_700");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XMP", mod_consts.const_str_plain_XMP);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_XMP) && "mod_consts.const_str_plain_XMP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32995", mod_consts.const_int_pos_32995);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_int_pos_32995) && "mod_consts.const_int_pos_32995");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Matteing", mod_consts.const_str_plain_Matteing);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_Matteing) && "mod_consts.const_str_plain_Matteing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32996", mod_consts.const_int_pos_32996);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_int_pos_32996) && "mod_consts.const_int_pos_32996");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DataType", mod_consts.const_str_plain_DataType);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataType) && "mod_consts.const_str_plain_DataType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32997", mod_consts.const_int_pos_32997);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_int_pos_32997) && "mod_consts.const_int_pos_32997");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageDepth", mod_consts.const_str_plain_ImageDepth);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageDepth) && "mod_consts.const_str_plain_ImageDepth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32998", mod_consts.const_int_pos_32998);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_int_pos_32998) && "mod_consts.const_int_pos_32998");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileDepth", mod_consts.const_str_plain_TileDepth);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileDepth) && "mod_consts.const_str_plain_TileDepth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33432", mod_consts.const_int_pos_33432);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_int_pos_33432) && "mod_consts.const_int_pos_33432");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Copyright", mod_consts.const_str_plain_Copyright);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_Copyright) && "mod_consts.const_str_plain_Copyright");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33723", mod_consts.const_int_pos_33723);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_int_pos_33723) && "mod_consts.const_int_pos_33723");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IptcNaaInfo", mod_consts.const_str_plain_IptcNaaInfo);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_IptcNaaInfo) && "mod_consts.const_str_plain_IptcNaaInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34377", mod_consts.const_int_pos_34377);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_int_pos_34377) && "mod_consts.const_int_pos_34377");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotoshopInfo", mod_consts.const_str_plain_PhotoshopInfo);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_PhotoshopInfo) && "mod_consts.const_str_plain_PhotoshopInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34665", mod_consts.const_int_pos_34665);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_int_pos_34665) && "mod_consts.const_int_pos_34665");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifIFD", mod_consts.const_str_plain_ExifIFD);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifIFD) && "mod_consts.const_str_plain_ExifIFD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34675", mod_consts.const_int_pos_34675);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_int_pos_34675) && "mod_consts.const_int_pos_34675");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICCProfile", mod_consts.const_str_plain_ICCProfile);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_plain_ICCProfile) && "mod_consts.const_str_plain_ICCProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34853", mod_consts.const_int_pos_34853);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_int_pos_34853) && "mod_consts.const_int_pos_34853");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSInfoIFD", mod_consts.const_str_plain_GPSInfoIFD);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSInfoIFD) && "mod_consts.const_str_plain_GPSInfoIFD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36864", mod_consts.const_int_pos_36864);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_int_pos_36864) && "mod_consts.const_int_pos_36864");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifVersion", mod_consts.const_str_plain_ExifVersion);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifVersion) && "mod_consts.const_str_plain_ExifVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37724", mod_consts.const_int_pos_37724);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_int_pos_37724) && "mod_consts.const_int_pos_37724");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageSourceData", mod_consts.const_str_plain_ImageSourceData);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageSourceData) && "mod_consts.const_str_plain_ImageSourceData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40965", mod_consts.const_int_pos_40965);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_int_pos_40965) && "mod_consts.const_int_pos_40965");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteroperabilityIFD", mod_consts.const_str_plain_InteroperabilityIFD);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteroperabilityIFD) && "mod_consts.const_str_plain_InteroperabilityIFD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41730", mod_consts.const_int_pos_41730);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_int_pos_41730) && "mod_consts.const_int_pos_41730");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFAPattern", mod_consts.const_str_plain_CFAPattern);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFAPattern) && "mod_consts.const_str_plain_CFAPattern");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45056", mod_consts.const_int_pos_45056);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_int_pos_45056) && "mod_consts.const_int_pos_45056");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MPFVersion", mod_consts.const_str_plain_MPFVersion);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_plain_MPFVersion) && "mod_consts.const_str_plain_MPFVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45057", mod_consts.const_int_pos_45057);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_int_pos_45057) && "mod_consts.const_int_pos_45057");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NumberOfImages", mod_consts.const_str_plain_NumberOfImages);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain_NumberOfImages) && "mod_consts.const_str_plain_NumberOfImages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45058", mod_consts.const_int_pos_45058);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_int_pos_45058) && "mod_consts.const_int_pos_45058");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MPEntry", mod_consts.const_str_plain_MPEntry);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_plain_MPEntry) && "mod_consts.const_str_plain_MPEntry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45059", mod_consts.const_int_pos_45059);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_int_pos_45059) && "mod_consts.const_int_pos_45059");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageUIDList", mod_consts.const_str_plain_ImageUIDList);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageUIDList) && "mod_consts.const_str_plain_ImageUIDList");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45060", mod_consts.const_int_pos_45060);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_int_pos_45060) && "mod_consts.const_int_pos_45060");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TotalFrames", mod_consts.const_str_plain_TotalFrames);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_plain_TotalFrames) && "mod_consts.const_str_plain_TotalFrames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45313", mod_consts.const_int_pos_45313);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_int_pos_45313) && "mod_consts.const_int_pos_45313");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MPIndividualNum", mod_consts.const_str_plain_MPIndividualNum);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_plain_MPIndividualNum) && "mod_consts.const_str_plain_MPIndividualNum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45569", mod_consts.const_int_pos_45569);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_int_pos_45569) && "mod_consts.const_int_pos_45569");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PanOrientation", mod_consts.const_str_plain_PanOrientation);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_plain_PanOrientation) && "mod_consts.const_str_plain_PanOrientation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45570", mod_consts.const_int_pos_45570);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_int_pos_45570) && "mod_consts.const_int_pos_45570");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PanOverlap_H", mod_consts.const_str_plain_PanOverlap_H);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_plain_PanOverlap_H) && "mod_consts.const_str_plain_PanOverlap_H");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45571", mod_consts.const_int_pos_45571);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_int_pos_45571) && "mod_consts.const_int_pos_45571");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PanOverlap_V", mod_consts.const_str_plain_PanOverlap_V);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_plain_PanOverlap_V) && "mod_consts.const_str_plain_PanOverlap_V");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45572", mod_consts.const_int_pos_45572);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_int_pos_45572) && "mod_consts.const_int_pos_45572");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseViewpointNum", mod_consts.const_str_plain_BaseViewpointNum);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseViewpointNum) && "mod_consts.const_str_plain_BaseViewpointNum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45573", mod_consts.const_int_pos_45573);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_int_pos_45573) && "mod_consts.const_int_pos_45573");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConvergenceAngle", mod_consts.const_str_plain_ConvergenceAngle);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConvergenceAngle) && "mod_consts.const_str_plain_ConvergenceAngle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45574", mod_consts.const_int_pos_45574);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_int_pos_45574) && "mod_consts.const_int_pos_45574");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineLength", mod_consts.const_str_plain_BaselineLength);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineLength) && "mod_consts.const_str_plain_BaselineLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45575", mod_consts.const_int_pos_45575);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_int_pos_45575) && "mod_consts.const_int_pos_45575");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VerticalDivergence", mod_consts.const_str_plain_VerticalDivergence);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalDivergence) && "mod_consts.const_str_plain_VerticalDivergence");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45576", mod_consts.const_int_pos_45576);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_int_pos_45576) && "mod_consts.const_int_pos_45576");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AxisDistance_X", mod_consts.const_str_plain_AxisDistance_X);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_plain_AxisDistance_X) && "mod_consts.const_str_plain_AxisDistance_X");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45577", mod_consts.const_int_pos_45577);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_int_pos_45577) && "mod_consts.const_int_pos_45577");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AxisDistance_Y", mod_consts.const_str_plain_AxisDistance_Y);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_plain_AxisDistance_Y) && "mod_consts.const_str_plain_AxisDistance_Y");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45578", mod_consts.const_int_pos_45578);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_int_pos_45578) && "mod_consts.const_int_pos_45578");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AxisDistance_Z", mod_consts.const_str_plain_AxisDistance_Z);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_str_plain_AxisDistance_Z) && "mod_consts.const_str_plain_AxisDistance_Z");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45579", mod_consts.const_int_pos_45579);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_int_pos_45579) && "mod_consts.const_int_pos_45579");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YawAngle", mod_consts.const_str_plain_YawAngle);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_str_plain_YawAngle) && "mod_consts.const_str_plain_YawAngle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45580", mod_consts.const_int_pos_45580);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_int_pos_45580) && "mod_consts.const_int_pos_45580");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PitchAngle", mod_consts.const_str_plain_PitchAngle);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_str_plain_PitchAngle) && "mod_consts.const_str_plain_PitchAngle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45581", mod_consts.const_int_pos_45581);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_int_pos_45581) && "mod_consts.const_int_pos_45581");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RollAngle", mod_consts.const_str_plain_RollAngle);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_str_plain_RollAngle) && "mod_consts.const_str_plain_RollAngle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40960", mod_consts.const_int_pos_40960);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_int_pos_40960) && "mod_consts.const_int_pos_40960");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FlashPixVersion", mod_consts.const_str_plain_FlashPixVersion);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_str_plain_FlashPixVersion) && "mod_consts.const_str_plain_FlashPixVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50741", mod_consts.const_int_pos_50741);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_int_pos_50741) && "mod_consts.const_int_pos_50741");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MakerNoteSafety", mod_consts.const_str_plain_MakerNoteSafety);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_str_plain_MakerNoteSafety) && "mod_consts.const_str_plain_MakerNoteSafety");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9", mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9) && "mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50780", mod_consts.const_int_pos_50780);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_int_pos_50780) && "mod_consts.const_int_pos_50780");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BestQualityScale", mod_consts.const_str_plain_BestQualityScale);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_str_plain_BestQualityScale) && "mod_consts.const_str_plain_BestQualityScale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50838", mod_consts.const_int_pos_50838);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_int_pos_50838) && "mod_consts.const_int_pos_50838");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageJMetaDataByteCounts", mod_consts.const_str_plain_ImageJMetaDataByteCounts);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageJMetaDataByteCounts) && "mod_consts.const_str_plain_ImageJMetaDataByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50839", mod_consts.const_int_pos_50839);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_int_pos_50839) && "mod_consts.const_int_pos_50839");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageJMetaData", mod_consts.const_str_plain_ImageJMetaData);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageJMetaData) && "mod_consts.const_str_plain_ImageJMetaData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d", mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d) && "mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSVersionID", mod_consts.const_str_plain_GPSVersionID);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSVersionID) && "mod_consts.const_str_plain_GPSVersionID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitudeRef", mod_consts.const_str_plain_GPSLatitudeRef);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitudeRef) && "mod_consts.const_str_plain_GPSLatitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitude", mod_consts.const_str_plain_GPSLatitude);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitude) && "mod_consts.const_str_plain_GPSLatitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitudeRef", mod_consts.const_str_plain_GPSLongitudeRef);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitudeRef) && "mod_consts.const_str_plain_GPSLongitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitude", mod_consts.const_str_plain_GPSLongitude);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitude) && "mod_consts.const_str_plain_GPSLongitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitudeRef", mod_consts.const_str_plain_GPSAltitudeRef);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitudeRef) && "mod_consts.const_str_plain_GPSAltitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitude", mod_consts.const_str_plain_GPSAltitude);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitude) && "mod_consts.const_str_plain_GPSAltitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTimeStamp", mod_consts.const_str_plain_GPSTimeStamp);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTimeStamp) && "mod_consts.const_str_plain_GPSTimeStamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSatellites", mod_consts.const_str_plain_GPSSatellites);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSatellites) && "mod_consts.const_str_plain_GPSSatellites");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSStatus", mod_consts.const_str_plain_GPSStatus);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSStatus) && "mod_consts.const_str_plain_GPSStatus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMeasureMode", mod_consts.const_str_plain_GPSMeasureMode);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMeasureMode) && "mod_consts.const_str_plain_GPSMeasureMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDOP", mod_consts.const_str_plain_GPSDOP);
assert(mod_consts_hash[315] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDOP) && "mod_consts.const_str_plain_GPSDOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeedRef", mod_consts.const_str_plain_GPSSpeedRef);
assert(mod_consts_hash[316] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeedRef) && "mod_consts.const_str_plain_GPSSpeedRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeed", mod_consts.const_str_plain_GPSSpeed);
assert(mod_consts_hash[317] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeed) && "mod_consts.const_str_plain_GPSSpeed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
assert(mod_consts_hash[318] == DEEP_HASH(tstate, mod_consts.const_int_pos_14) && "mod_consts.const_int_pos_14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrackRef", mod_consts.const_str_plain_GPSTrackRef);
assert(mod_consts_hash[319] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrackRef) && "mod_consts.const_str_plain_GPSTrackRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_15", mod_consts.const_int_pos_15);
assert(mod_consts_hash[320] == DEEP_HASH(tstate, mod_consts.const_int_pos_15) && "mod_consts.const_int_pos_15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrack", mod_consts.const_str_plain_GPSTrack);
assert(mod_consts_hash[321] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrack) && "mod_consts.const_str_plain_GPSTrack");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirectionRef", mod_consts.const_str_plain_GPSImgDirectionRef);
assert(mod_consts_hash[322] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirectionRef) && "mod_consts.const_str_plain_GPSImgDirectionRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
assert(mod_consts_hash[323] == DEEP_HASH(tstate, mod_consts.const_int_pos_17) && "mod_consts.const_int_pos_17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirection", mod_consts.const_str_plain_GPSImgDirection);
assert(mod_consts_hash[324] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirection) && "mod_consts.const_str_plain_GPSImgDirection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[325] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMapDatum", mod_consts.const_str_plain_GPSMapDatum);
assert(mod_consts_hash[326] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMapDatum) && "mod_consts.const_str_plain_GPSMapDatum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19", mod_consts.const_int_pos_19);
assert(mod_consts_hash[327] == DEEP_HASH(tstate, mod_consts.const_int_pos_19) && "mod_consts.const_int_pos_19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitudeRef", mod_consts.const_str_plain_GPSDestLatitudeRef);
assert(mod_consts_hash[328] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitudeRef) && "mod_consts.const_str_plain_GPSDestLatitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[329] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitude", mod_consts.const_str_plain_GPSDestLatitude);
assert(mod_consts_hash[330] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitude) && "mod_consts.const_str_plain_GPSDestLatitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
assert(mod_consts_hash[331] == DEEP_HASH(tstate, mod_consts.const_int_pos_21) && "mod_consts.const_int_pos_21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitudeRef", mod_consts.const_str_plain_GPSDestLongitudeRef);
assert(mod_consts_hash[332] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitudeRef) && "mod_consts.const_str_plain_GPSDestLongitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
assert(mod_consts_hash[333] == DEEP_HASH(tstate, mod_consts.const_int_pos_22) && "mod_consts.const_int_pos_22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitude", mod_consts.const_str_plain_GPSDestLongitude);
assert(mod_consts_hash[334] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitude) && "mod_consts.const_str_plain_GPSDestLongitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_23", mod_consts.const_int_pos_23);
assert(mod_consts_hash[335] == DEEP_HASH(tstate, mod_consts.const_int_pos_23) && "mod_consts.const_int_pos_23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearingRef", mod_consts.const_str_plain_GPSDestBearingRef);
assert(mod_consts_hash[336] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearingRef) && "mod_consts.const_str_plain_GPSDestBearingRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearing", mod_consts.const_str_plain_GPSDestBearing);
assert(mod_consts_hash[337] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearing) && "mod_consts.const_str_plain_GPSDestBearing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
assert(mod_consts_hash[338] == DEEP_HASH(tstate, mod_consts.const_int_pos_25) && "mod_consts.const_int_pos_25");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistanceRef", mod_consts.const_str_plain_GPSDestDistanceRef);
assert(mod_consts_hash[339] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistanceRef) && "mod_consts.const_str_plain_GPSDestDistanceRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
assert(mod_consts_hash[340] == DEEP_HASH(tstate, mod_consts.const_int_pos_26) && "mod_consts.const_int_pos_26");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistance", mod_consts.const_str_plain_GPSDestDistance);
assert(mod_consts_hash[341] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistance) && "mod_consts.const_str_plain_GPSDestDistance");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
assert(mod_consts_hash[342] == DEEP_HASH(tstate, mod_consts.const_int_pos_27) && "mod_consts.const_int_pos_27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSProcessingMethod", mod_consts.const_str_plain_GPSProcessingMethod);
assert(mod_consts_hash[343] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSProcessingMethod) && "mod_consts.const_str_plain_GPSProcessingMethod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
assert(mod_consts_hash[344] == DEEP_HASH(tstate, mod_consts.const_int_pos_28) && "mod_consts.const_int_pos_28");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAreaInformation", mod_consts.const_str_plain_GPSAreaInformation);
assert(mod_consts_hash[345] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAreaInformation) && "mod_consts.const_str_plain_GPSAreaInformation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_29", mod_consts.const_int_pos_29);
assert(mod_consts_hash[346] == DEEP_HASH(tstate, mod_consts.const_int_pos_29) && "mod_consts.const_int_pos_29");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDateStamp", mod_consts.const_str_plain_GPSDateStamp);
assert(mod_consts_hash[347] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDateStamp) && "mod_consts.const_str_plain_GPSDateStamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
assert(mod_consts_hash[348] == DEEP_HASH(tstate, mod_consts.const_int_pos_30) && "mod_consts.const_int_pos_30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDifferential", mod_consts.const_str_plain_GPSDifferential);
assert(mod_consts_hash[349] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDifferential) && "mod_consts.const_str_plain_GPSDifferential");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropIndex", mod_consts.const_str_plain_InteropIndex);
assert(mod_consts_hash[350] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteropIndex) && "mod_consts.const_str_plain_InteropIndex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropVersion", mod_consts.const_str_plain_InteropVersion);
assert(mod_consts_hash[351] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteropVersion) && "mod_consts.const_str_plain_InteropVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d", mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d);
assert(mod_consts_hash[352] == DEEP_HASH(tstate, mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d) && "mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb", mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb);
assert(mod_consts_hash[353] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb) && "mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e", mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e);
assert(mod_consts_hash[354] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e) && "mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122", mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122);
assert(mod_consts_hash[355] == DEEP_HASH(tstate, mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122) && "mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[356] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__populate", mod_consts.const_str_plain__populate);
assert(mod_consts_hash[357] == DEEP_HASH(tstate, mod_consts.const_str_plain__populate) && "mod_consts.const_str_plain__populate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPES", mod_consts.const_str_plain_TYPES);
assert(mod_consts_hash[358] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPES) && "mod_consts.const_str_plain_TYPES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301", mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301);
assert(mod_consts_hash[359] == DEEP_HASH(tstate, mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301) && "mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747", mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747);
assert(mod_consts_hash[360] == DEEP_HASH(tstate, mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747) && "mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LIBTIFF_CORE", mod_consts.const_str_plain_LIBTIFF_CORE);
assert(mod_consts_hash[361] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIBTIFF_CORE) && "mod_consts.const_str_plain_LIBTIFF_CORE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove", mod_consts.const_str_plain_remove);
assert(mod_consts_hash[362] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove) && "mod_consts.const_str_plain_remove");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_255_tuple", mod_consts.const_tuple_int_pos_255_tuple);
assert(mod_consts_hash[363] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_255_tuple) && "mod_consts.const_tuple_int_pos_255_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_322_tuple", mod_consts.const_tuple_int_pos_322_tuple);
assert(mod_consts_hash[364] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_322_tuple) && "mod_consts.const_tuple_int_pos_322_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_323_tuple", mod_consts.const_tuple_int_pos_323_tuple);
assert(mod_consts_hash[365] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_323_tuple) && "mod_consts.const_tuple_int_pos_323_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537", mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537);
assert(mod_consts_hash[366] == DEEP_HASH(tstate, mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537) && "mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78", mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78);
assert(mod_consts_hash[367] == DEEP_HASH(tstate, mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78) && "mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[368] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple", mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple);
assert(mod_consts_hash[369] == DEEP_HASH(tstate, mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple) && "mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple", mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple);
assert(mod_consts_hash[370] == DEEP_HASH(tstate, mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple) && "mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_value_tuple", mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[371] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_value_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple", mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple);
assert(mod_consts_hash[372] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple) && "mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_PIL$TiffTags$ASCII(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ASCII);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ASCII, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ASCII);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ASCII, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$BYTE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_BYTE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BYTE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BYTE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BYTE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BYTE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_BYTE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_BYTE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BYTE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$DOUBLE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_DOUBLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DOUBLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DOUBLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DOUBLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DOUBLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_DOUBLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_DOUBLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DOUBLE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$LIBTIFF_CORE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LIBTIFF_CORE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LIBTIFF_CORE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LIBTIFF_CORE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LIBTIFF_CORE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LIBTIFF_CORE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LIBTIFF_CORE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LIBTIFF_CORE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LIBTIFF_CORE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$LONG(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LONG);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LONG);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LONG, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LONG);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LONG, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LONG);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LONG);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LONG);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$NamedTuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NamedTuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NamedTuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NamedTuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NamedTuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$RATIONAL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_RATIONAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RATIONAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RATIONAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RATIONAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RATIONAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_RATIONAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_RATIONAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RATIONAL);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$SHORT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SHORT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SHORT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SHORT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SHORT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_RATIONAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SIGNED_RATIONAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SIGNED_RATIONAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SIGNED_RATIONAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SIGNED_RATIONAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_RATIONAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_RATIONAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_RATIONAL);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$TAGS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAGS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAGS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAGS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAGS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$TAGS_V2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAGS_V2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAGS_V2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAGS_V2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAGS_V2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$TAGS_V2_GROUPS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2_GROUPS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAGS_V2_GROUPS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAGS_V2_GROUPS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAGS_V2_GROUPS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAGS_V2_GROUPS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2_GROUPS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2_GROUPS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2_GROUPS);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$TagInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TagInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TagInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TagInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TagInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TagInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TagInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TagInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TagInfo);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$UNDEFINED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_UNDEFINED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNDEFINED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNDEFINED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNDEFINED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNDEFINED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_UNDEFINED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_UNDEFINED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UNDEFINED);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$_TagInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__TagInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TagInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TagInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TagInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TagInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__TagInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__TagInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TagInfo);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$_populate(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__populate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__populate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__populate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__populate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__populate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__populate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__populate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__populate);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$_tags_v2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__tags_v2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__tags_v2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__tags_v2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__tags_v2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$TiffTags$_tags_v2_groups(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$TiffTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$TiffTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2_groups);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$TiffTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__tags_v2_groups);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__tags_v2_groups, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__tags_v2_groups);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__tags_v2_groups, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2_groups);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2_groups);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2_groups);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e4582c65146426fb654a51f7f5cea30a;
static PyCodeObject *code_objects_8538766734e6a6f10ac5a30b5be77d0f;
static PyCodeObject *code_objects_e3209f976a27fdc8f1e3a9e2b3d72d99;
static PyCodeObject *code_objects_79336bac9266fcd99979692ae5ddad70;
static PyCodeObject *code_objects_002e2c97db0f2e9789f460a648f6d0ac;
static PyCodeObject *code_objects_bfd7fd395bc3b4e1c85abda25b2a1df5;
static PyCodeObject *code_objects_15539008dded10e99dbce4428bc85518;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9de6e60b96ba5410370e2e616a430537); CHECK_OBJECT(module_filename_obj);
code_objects_e4582c65146426fb654a51f7f5cea30a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78, mod_consts.const_str_digest_721f10328662a234e6901bd2fd070d78, NULL, NULL, 0, 0, 0);
code_objects_8538766734e6a6f10ac5a30b5be77d0f = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TagInfo, mod_consts.const_str_plain_TagInfo, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e3209f976a27fdc8f1e3a9e2b3d72d99 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__TagInfo, mod_consts.const_str_plain__TagInfo, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_79336bac9266fcd99979692ae5ddad70 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7, mod_consts.const_tuple_b3f774eba0643da7255cb6f47a856fab_tuple, mod_consts.const_tuple_str_plain___class___tuple, 6, 0, 0);
code_objects_002e2c97db0f2e9789f460a648f6d0ac = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__populate, mod_consts.const_str_plain__populate, mod_consts.const_tuple_5001a3d79f38c73fc7460210b51fdf6b_tuple, NULL, 0, 0, 0);
code_objects_bfd7fd395bc3b4e1c85abda25b2a1df5 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cvt_enum, mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_15539008dded10e99dbce4428bc85518 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_lookup, mod_consts.const_str_plain_lookup, mod_consts.const_tuple_str_plain_tag_str_plain_group_str_plain_info_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__1___new__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__2_cvt_enum(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__3_lookup(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__4__populate(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$TiffTags$$$function__1___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_name = python_pars[2];
PyObject *par_type = python_pars[3];
PyObject *par_length = python_pars[4];
PyObject *par_enum = python_pars[5];
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags$$$function__1___new__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$TiffTags$$$function__1___new__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$TiffTags$$$function__1___new__)) {
    Py_XDECREF(cache_frame_frame_PIL$TiffTags$$$function__1___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$TiffTags$$$function__1___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$TiffTags$$$function__1___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_79336bac9266fcd99979692ae5ddad70, module_PIL$TiffTags, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$TiffTags$$$function__1___new__->m_type_description == NULL);
frame_frame_PIL$TiffTags$$$function__1___new__ = cache_frame_frame_PIL$TiffTags$$$function__1___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags$$$function__1___new__);
assert(Py_REFCNT(frame_frame_PIL$TiffTags$$$function__1___new__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_PIL$TiffTags, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___new__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
CHECK_OBJECT(par_type);
tmp_args_element_value_4 = par_type;
CHECK_OBJECT(par_length);
tmp_args_element_value_5 = par_length;
CHECK_OBJECT(par_enum);
tmp_or_left_value_1 = par_enum;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 43;
type_description_1 = "ooooooc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_args_element_value_6 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_args_element_value_6 = tmp_or_left_value_1;
or_end_1:;
frame_frame_PIL$TiffTags$$$function__1___new__->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags$$$function__1___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags$$$function__1___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags$$$function__1___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$TiffTags$$$function__1___new__,
    type_description_1,
    par_cls,
    par_value,
    par_name,
    par_type,
    par_length,
    par_enum,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_PIL$TiffTags$$$function__1___new__ == cache_frame_frame_PIL$TiffTags$$$function__1___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$TiffTags$$$function__1___new__);
    cache_frame_frame_PIL$TiffTags$$$function__1___new__ = NULL;
}

assertFrameObject(frame_frame_PIL$TiffTags$$$function__1___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_length);
Py_DECREF(par_length);
CHECK_OBJECT(par_enum);
Py_DECREF(par_enum);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_length);
Py_DECREF(par_length);
CHECK_OBJECT(par_enum);
Py_DECREF(par_enum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$TiffTags$$$function__2_cvt_enum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags$$$function__2_cvt_enum;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum)) {
    Py_XDECREF(cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum = MAKE_FUNCTION_FRAME(tstate, code_objects_bfd7fd395bc3b4e1c85abda25b2a1df5, module_PIL$TiffTags, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum->m_type_description == NULL);
frame_frame_PIL$TiffTags$$$function__2_cvt_enum = cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags$$$function__2_cvt_enum);
assert(Py_REFCNT(frame_frame_PIL$TiffTags$$$function__2_cvt_enum) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_enum);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_enum);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_PIL$TiffTags$$$function__2_cvt_enum->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags$$$function__2_cvt_enum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags$$$function__2_cvt_enum->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags$$$function__2_cvt_enum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$TiffTags$$$function__2_cvt_enum,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_PIL$TiffTags$$$function__2_cvt_enum == cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum);
    cache_frame_frame_PIL$TiffTags$$$function__2_cvt_enum = NULL;
}

assertFrameObject(frame_frame_PIL$TiffTags$$$function__2_cvt_enum);

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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$TiffTags$$$function__3_lookup(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tag = python_pars[0];
PyObject *par_group = python_pars[1];
PyObject *var_info = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags$$$function__3_lookup;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$TiffTags$$$function__3_lookup = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$TiffTags$$$function__3_lookup)) {
    Py_XDECREF(cache_frame_frame_PIL$TiffTags$$$function__3_lookup);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$TiffTags$$$function__3_lookup == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$TiffTags$$$function__3_lookup = MAKE_FUNCTION_FRAME(tstate, code_objects_15539008dded10e99dbce4428bc85518, module_PIL$TiffTags, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$TiffTags$$$function__3_lookup->m_type_description == NULL);
frame_frame_PIL$TiffTags$$$function__3_lookup = cache_frame_frame_PIL$TiffTags$$$function__3_lookup;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags$$$function__3_lookup);
assert(Py_REFCNT(frame_frame_PIL$TiffTags$$$function__3_lookup) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_group);
tmp_cmp_expr_left_1 = par_group;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_group);
tmp_cmp_expr_left_2 = par_group;
tmp_cmp_expr_right_2 = module_var_accessor_PIL$TiffTags$TAGS_V2_GROUPS(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS_V2_GROUPS);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_2 = module_var_accessor_PIL$TiffTags$TAGS_V2_GROUPS(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS_V2_GROUPS);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_group);
tmp_subscript_value_1 = par_group;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_1 = par_tag;
frame_frame_PIL$TiffTags$$$function__3_lookup->m_frame.f_lineno = 66;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = Py_None;
Py_INCREF(tmp_assign_source_1);
condexpr_end_1:;
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_PIL$TiffTags$TAGS_V2(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS_V2);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_2 = par_tag;
frame_frame_PIL$TiffTags$$$function__3_lookup->m_frame.f_lineno = 68;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(var_info);
tmp_or_left_value_1 = var_info;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_3 = module_var_accessor_PIL$TiffTags$TagInfo(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TagInfo);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_3 = par_tag;
tmp_expression_value_4 = module_var_accessor_PIL$TiffTags$TAGS(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_5 = par_tag;
tmp_args_element_value_6 = mod_consts.const_str_plain_unknown;
frame_frame_PIL$TiffTags$$$function__3_lookup->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$TiffTags$$$function__3_lookup->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags$$$function__3_lookup, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags$$$function__3_lookup->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags$$$function__3_lookup, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$TiffTags$$$function__3_lookup,
    type_description_1,
    par_tag,
    par_group,
    var_info
);


// Release cached frame if used for exception.
if (frame_frame_PIL$TiffTags$$$function__3_lookup == cache_frame_frame_PIL$TiffTags$$$function__3_lookup) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$TiffTags$$$function__3_lookup);
    cache_frame_frame_PIL$TiffTags$$$function__3_lookup = NULL;
}

assertFrameObject(frame_frame_PIL$TiffTags$$$function__3_lookup);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_info);
var_info = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_group);
Py_DECREF(par_group);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_group);
Py_DECREF(par_group);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$TiffTags$$$function__4__populate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *var_sk = NULL;
PyObject *var_sv = NULL;
PyObject *var_group = NULL;
PyObject *var_tags = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags$$$function__4__populate;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$TiffTags$$$function__4__populate = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$TiffTags$$$function__4__populate)) {
    Py_XDECREF(cache_frame_frame_PIL$TiffTags$$$function__4__populate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$TiffTags$$$function__4__populate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$TiffTags$$$function__4__populate = MAKE_FUNCTION_FRAME(tstate, code_objects_002e2c97db0f2e9789f460a648f6d0ac, module_PIL$TiffTags, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$TiffTags$$$function__4__populate->m_type_description == NULL);
frame_frame_PIL$TiffTags$$$function__4__populate = cache_frame_frame_PIL$TiffTags$$$function__4__populate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags$$$function__4__populate);
assert(Py_REFCNT(frame_frame_PIL$TiffTags$$$function__4__populate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$TiffTags$_tags_v2(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__tags_v2);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$TiffTags$$$function__4__populate->m_frame.f_lineno = 445;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 445;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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



exception_lineno = 445;
type_description_1 = "oooooo";
    goto try_except_handler_4;
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



exception_lineno = 445;
type_description_1 = "oooooo";
    goto try_except_handler_4;
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



exception_lineno = 445;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_6;
    Py_INCREF(var_k);
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
    PyObject *old = var_v;
    var_v = tmp_assign_source_7;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_v);
tmp_expression_value_2 = var_v;
tmp_subscript_value_1 = const_int_0;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_ass_subscribed_1 = module_var_accessor_PIL$TiffTags$TAGS(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 447;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_k);
tmp_ass_subscript_1 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_v);
tmp_len_arg_1 = var_v;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = 4;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_v);
tmp_expression_value_4 = var_v;
tmp_subscript_value_2 = mod_consts.const_int_pos_3;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 3);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_PIL$TiffTags$$$function__4__populate->m_frame.f_lineno = 449;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 449;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
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



exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_sk;
    var_sk = tmp_assign_source_13;
    Py_INCREF(var_sk);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_sv;
    var_sv = tmp_assign_source_14;
    Py_INCREF(var_sv);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_sk);
tmp_ass_subvalue_2 = var_sk;
tmp_ass_subscribed_2 = module_var_accessor_PIL$TiffTags$TAGS(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 450;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_k);
tmp_tuple_element_1 = var_k;
tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_ass_subscript_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_sv);
tmp_tuple_element_1 = var_sv;
PyTuple_SET_ITEM0(tmp_ass_subscript_2, 1, tmp_tuple_element_1);
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_1:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_direct_call_arg1_1 = module_var_accessor_PIL$TiffTags$TagInfo(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TagInfo);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_k);
tmp_tuple_element_2 = var_k;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_v);
tmp_direct_call_arg3_1 = var_v;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_ass_subvalue_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_ass_subscribed_3 = module_var_accessor_PIL$TiffTags$TAGS_V2(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS_V2);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 452;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_k);
tmp_ass_subscript_3 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_PIL$TiffTags$_tags_v2_groups(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__tags_v2_groups);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$TiffTags$$$function__4__populate->m_frame.f_lineno = 454;
tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 454;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_6 = tmp_for_loop_3__iter_value;
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_group;
    var_group = tmp_assign_source_20;
    Py_INCREF(var_group);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_tags;
    var_tags = tmp_assign_source_21;
    Py_INCREF(var_tags);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_tags);
tmp_expression_value_6 = var_tags;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_items);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_11;
}
frame_frame_PIL$TiffTags$$$function__4__populate->m_frame.f_lineno = 455;
tmp_iter_arg_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iter_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_11;
}
tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
CHECK_OBJECT(tmp_iter_arg_7);
Py_DECREF(tmp_iter_arg_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_dictcontraction_1__$0;
    tmp_dictcontraction_1__$0 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_dictcontraction_1__contraction;
    tmp_dictcontraction_1__contraction = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_4 = tmp_dictcontraction_1__$0;
tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_24 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 455;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_8 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_7 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_8 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_4 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_14;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_13;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_12;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_28 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_28;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_29 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_29;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
tmp_direct_call_arg1_2 = module_var_accessor_PIL$TiffTags$TagInfo(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TagInfo);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(outline_0_var_k);
tmp_tuple_element_3 = outline_0_var_k;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(outline_0_var_v);
tmp_direct_call_arg3_2 = outline_0_var_v;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_dictset38_value_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_12;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_12;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_ass_subvalue_4 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_ass_subvalue_4);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 455;
goto try_except_handler_8;
outline_result_1:;
tmp_ass_subscribed_4 = module_var_accessor_PIL$TiffTags$TAGS_V2_GROUPS(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAGS_V2_GROUPS);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_group);
tmp_ass_subscript_4 = var_group;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_11;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_11:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags$$$function__4__populate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags$$$function__4__populate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags$$$function__4__populate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$TiffTags$$$function__4__populate,
    type_description_1,
    var_k,
    var_v,
    var_sk,
    var_sv,
    var_group,
    var_tags
);


// Release cached frame if used for exception.
if (frame_frame_PIL$TiffTags$$$function__4__populate == cache_frame_frame_PIL$TiffTags$$$function__4__populate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$TiffTags$$$function__4__populate);
    cache_frame_frame_PIL$TiffTags$$$function__4__populate = NULL;
}

assertFrameObject(frame_frame_PIL$TiffTags$$$function__4__populate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_sk);
var_sk = NULL;
Py_XDECREF(var_sv);
var_sv = NULL;
Py_XDECREF(var_group);
var_group = NULL;
Py_XDECREF(var_tags);
var_tags = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_sk);
var_sk = NULL;
Py_XDECREF(var_sv);
var_sv = NULL;
Py_XDECREF(var_group);
var_group = NULL;
Py_XDECREF(var_tags);
var_tags = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

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



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__1___new__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function__1___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6dc26ddce418bcacac57b367fb6f7e7,
#endif
        code_objects_79336bac9266fcd99979692ae5ddad70,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$TiffTags,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__2_cvt_enum(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function__2_cvt_enum,
        mod_consts.const_str_plain_cvt_enum,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6dad7c3e74a8f2791f9f9446a43b0c1f,
#endif
        code_objects_bfd7fd395bc3b4e1c85abda25b2a1df5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$TiffTags,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__3_lookup(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function__3_lookup,
        mod_consts.const_str_plain_lookup,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_15539008dded10e99dbce4428bc85518,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$TiffTags,
        mod_consts.const_str_digest_45ef12b43bbf3de50ff9734b0133b105,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$TiffTags$$$function__4__populate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$TiffTags$$$function__4__populate,
        mod_consts.const_str_plain__populate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_002e2c97db0f2e9789f460a648f6d0ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$TiffTags,
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

static function_impl_code const function_table_PIL$TiffTags[] = {
impl_PIL$TiffTags$$$function__1___new__,
impl_PIL$TiffTags$$$function__2_cvt_enum,
impl_PIL$TiffTags$$$function__3_lookup,
impl_PIL$TiffTags$$$function__4__populate,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$TiffTags);
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
        module_PIL$TiffTags,
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
        function_table_PIL$TiffTags,
        sizeof(function_table_PIL$TiffTags) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.TiffTags";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$TiffTags(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$TiffTags");

    // Store the module for future use.
    module_PIL$TiffTags = module;

    moduledict_PIL$TiffTags = MODULE_DICT(module_PIL$TiffTags);

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
        PRINT_STRING("PIL$TiffTags: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$TiffTags: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$TiffTags: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.TiffTags" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$TiffTags\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$TiffTags,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$TiffTags,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$TiffTags,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$TiffTags,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$TiffTags,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$TiffTags);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$TiffTags);
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

        UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyCellObject *outline_1_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_PIL$TiffTags$$$class__1__TagInfo_24 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags$$$class__1__TagInfo_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_PIL$TiffTags$$$class__2_TagInfo_32 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$TiffTags$$$class__2_TagInfo_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$TiffTags = MAKE_MODULE_FRAME(code_objects_e4582c65146426fb654a51f7f5cea30a, module_PIL$TiffTags);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags);
assert(Py_REFCNT(frame_frame_PIL$TiffTags) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$TiffTags$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$TiffTags$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$TiffTags,
        mod_consts.const_str_plain_NamedTuple,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_PIL$TiffTags$NamedTuple(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_8 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_8, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_9 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_11 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__TagInfo;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$TiffTags->m_frame.f_lineno = 24;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
frame_frame_PIL$TiffTags->m_frame.f_lineno = 24;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 24;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
branch_end_1:;
{
PyObject *tmp_assign_source_14;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$TiffTags$$$class__1__TagInfo_24 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain__TagInfo;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_24;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
frame_frame_PIL$TiffTags$$$class__1__TagInfo_2 = MAKE_CLASS_FRAME(tstate, code_objects_e3209f976a27fdc8f1e3a9e2b3d72d99, module_PIL$TiffTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$TiffTags$$$class__1__TagInfo_2, locals_PIL$TiffTags$$$class__1__TagInfo_24);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags$$$class__1__TagInfo_2);
assert(Py_REFCNT(frame_frame_PIL$TiffTags$$$class__1__TagInfo_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_value;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = const_str_plain_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_284143fd57fa31d3e58fbc42a8de71e7;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_enum;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$TiffTags$$$class__1__TagInfo_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags$$$class__1__TagInfo_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags$$$class__1__TagInfo_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags$$$class__1__TagInfo_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$TiffTags$$$class__1__TagInfo_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$TiffTags$$$class__1__TagInfo_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$TiffTags$$$class__1__TagInfo_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
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


exception_lineno = 24;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__1__TagInfo_24, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = mod_consts.const_str_plain__TagInfo;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$TiffTags$$$class__1__TagInfo_24;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_2, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_14 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_PIL$TiffTags$$$class__1__TagInfo_24);
locals_PIL$TiffTags$$$class__1__TagInfo_24 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$TiffTags$$$class__1__TagInfo_24);
locals_PIL$TiffTags$$$class__1__TagInfo_24 = NULL;
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
exception_lineno = 24;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__TagInfo, tmp_assign_source_14);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_PIL$TiffTags$_TagInfo(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TagInfo);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_17 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_19;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_TagInfo;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_PIL$TiffTags->m_frame.f_lineno = 32;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_20;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_3, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
frame_frame_PIL$TiffTags->m_frame.f_lineno = 32;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 32;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
branch_end_4:;
{
PyObject *tmp_assign_source_22;
outline_1_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_PIL$TiffTags$$$class__2_TagInfo_32 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_53d172ce5d71b7b445878c626394ea74;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_TagInfo;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
frame_frame_PIL$TiffTags$$$class__2_TagInfo_3 = MAKE_CLASS_FRAME(tstate, code_objects_8538766734e6a6f10ac5a30b5be77d0f, module_PIL$TiffTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$TiffTags$$$class__2_TagInfo_3, locals_PIL$TiffTags$$$class__2_TagInfo_32);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$TiffTags$$$class__2_TagInfo_3);
assert(Py_REFCNT(frame_frame_PIL$TiffTags$$$class__2_TagInfo_3) == 2);

// Framed code:
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 0);
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, mod_consts.const_str_plain___slots__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain___slots__;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_none_str_plain_unknown_none_none_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_082d5086a36b87f3267fd4294923ac94);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_PIL$TiffTags$$$function__1___new__(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_edf6be2ebd5064234776f33b8ac76316);

tmp_dictset_value = MAKE_FUNCTION_PIL$TiffTags$$$function__2_cvt_enum(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, mod_consts.const_str_plain_cvt_enum, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$TiffTags$$$class__2_TagInfo_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags$$$class__2_TagInfo_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags$$$class__2_TagInfo_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags$$$class__2_TagInfo_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$TiffTags$$$class__2_TagInfo_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_PIL$TiffTags$$$class__2_TagInfo_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$TiffTags$$$class__2_TagInfo_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
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


exception_lineno = 32;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_PIL$TiffTags$$$class__2_TagInfo_32, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_TagInfo;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_PIL$TiffTags$$$class__2_TagInfo_32;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_2, const_str_plain___classcell__, (PyObject *)outline_1_var___class__);
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_1_var___class__);
    PyCell_SET((PyObject *)outline_1_var___class__, tmp_assign_source_23);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_1_var___class__));
tmp_assign_source_22 = PyCell_GET((PyObject *)outline_1_var___class__);
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_PIL$TiffTags$$$class__2_TagInfo_32);
locals_PIL$TiffTags$$$class__2_TagInfo_32 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$TiffTags$$$class__2_TagInfo_32);
locals_PIL$TiffTags$$$class__2_TagInfo_32 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
assert(PyCell_Check((PyObject *)outline_1_var___class__));
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 32;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TagInfo, tmp_assign_source_22);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_3;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_982a936f996ba783e96258eabd9a7694);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_24 = MAKE_FUNCTION_PIL$TiffTags$$$function__3_lookup(tstate, tmp_defaults_2, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_lookup, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_BYTE, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LONG, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_int_pos_5;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_RATIONAL, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_int_pos_6;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_BYTE, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = mod_consts.const_int_pos_7;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_UNDEFINED, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_SHORT, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_int_pos_9;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_LONG, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = mod_consts.const_int_pos_10;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_SIGNED_RATIONAL, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = mod_consts.const_int_pos_11;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_FLOAT, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_int_pos_12;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_DOUBLE, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = mod_consts.const_int_pos_13;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_IFD, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LONG8, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_tuple_element_7;
tmp_dict_key_1 = mod_consts.const_int_pos_254;
tmp_tuple_element_7 = mod_consts.const_str_plain_NewSubfileType;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_7 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_7);
tmp_assign_source_39 = _PyDict_NewPresized( 114 );
{
PyObject *tmp_tuple_element_8;
PyObject *tmp_tuple_element_9;
PyObject *tmp_tuple_element_10;
PyObject *tmp_tuple_element_11;
PyObject *tmp_tuple_element_12;
PyObject *tmp_tuple_element_13;
PyObject *tmp_tuple_element_14;
PyObject *tmp_tuple_element_15;
PyObject *tmp_tuple_element_16;
PyObject *tmp_tuple_element_17;
PyObject *tmp_tuple_element_18;
PyObject *tmp_tuple_element_19;
PyObject *tmp_tuple_element_20;
PyObject *tmp_tuple_element_21;
PyObject *tmp_tuple_element_22;
PyObject *tmp_tuple_element_23;
PyObject *tmp_tuple_element_24;
PyObject *tmp_tuple_element_25;
PyObject *tmp_tuple_element_26;
PyObject *tmp_tuple_element_27;
PyObject *tmp_tuple_element_28;
PyObject *tmp_tuple_element_29;
PyObject *tmp_tuple_element_30;
PyObject *tmp_tuple_element_31;
PyObject *tmp_tuple_element_32;
PyObject *tmp_tuple_element_33;
PyObject *tmp_tuple_element_34;
PyObject *tmp_tuple_element_35;
PyObject *tmp_tuple_element_36;
PyObject *tmp_tuple_element_37;
PyObject *tmp_tuple_element_38;
PyObject *tmp_tuple_element_39;
PyObject *tmp_tuple_element_40;
PyObject *tmp_tuple_element_41;
PyObject *tmp_tuple_element_42;
PyObject *tmp_tuple_element_43;
PyObject *tmp_tuple_element_44;
PyObject *tmp_tuple_element_45;
PyObject *tmp_tuple_element_46;
PyObject *tmp_tuple_element_47;
PyObject *tmp_tuple_element_48;
PyObject *tmp_tuple_element_49;
PyObject *tmp_tuple_element_50;
PyObject *tmp_tuple_element_51;
PyObject *tmp_tuple_element_52;
PyObject *tmp_tuple_element_53;
PyObject *tmp_tuple_element_54;
PyObject *tmp_tuple_element_55;
PyObject *tmp_tuple_element_56;
PyObject *tmp_tuple_element_57;
PyObject *tmp_tuple_element_58;
PyObject *tmp_tuple_element_59;
PyObject *tmp_tuple_element_60;
PyObject *tmp_tuple_element_61;
PyObject *tmp_tuple_element_62;
PyObject *tmp_tuple_element_63;
PyObject *tmp_tuple_element_64;
PyObject *tmp_tuple_element_65;
PyObject *tmp_tuple_element_66;
PyObject *tmp_tuple_element_67;
PyObject *tmp_tuple_element_68;
PyObject *tmp_tuple_element_69;
PyObject *tmp_tuple_element_70;
PyObject *tmp_tuple_element_71;
PyObject *tmp_tuple_element_72;
PyObject *tmp_tuple_element_73;
PyObject *tmp_tuple_element_74;
PyObject *tmp_tuple_element_75;
PyObject *tmp_tuple_element_76;
PyObject *tmp_tuple_element_77;
PyObject *tmp_tuple_element_78;
PyObject *tmp_tuple_element_79;
PyObject *tmp_tuple_element_80;
PyObject *tmp_tuple_element_81;
PyObject *tmp_tuple_element_82;
PyObject *tmp_tuple_element_83;
PyObject *tmp_tuple_element_84;
PyObject *tmp_tuple_element_85;
PyObject *tmp_tuple_element_86;
PyObject *tmp_tuple_element_87;
PyObject *tmp_tuple_element_88;
PyObject *tmp_tuple_element_89;
PyObject *tmp_tuple_element_90;
PyObject *tmp_tuple_element_91;
PyObject *tmp_tuple_element_92;
PyObject *tmp_tuple_element_93;
PyObject *tmp_tuple_element_94;
PyObject *tmp_tuple_element_95;
PyObject *tmp_tuple_element_96;
PyObject *tmp_tuple_element_97;
PyObject *tmp_tuple_element_98;
PyObject *tmp_tuple_element_99;
PyObject *tmp_tuple_element_100;
PyObject *tmp_tuple_element_101;
PyObject *tmp_tuple_element_102;
PyObject *tmp_tuple_element_103;
PyObject *tmp_tuple_element_104;
PyObject *tmp_tuple_element_105;
PyObject *tmp_tuple_element_106;
PyObject *tmp_tuple_element_107;
PyObject *tmp_tuple_element_108;
PyObject *tmp_tuple_element_109;
PyObject *tmp_tuple_element_110;
PyObject *tmp_tuple_element_111;
PyObject *tmp_tuple_element_112;
PyObject *tmp_tuple_element_113;
PyObject *tmp_tuple_element_114;
PyObject *tmp_tuple_element_115;
PyObject *tmp_tuple_element_116;
PyObject *tmp_tuple_element_117;
PyObject *tmp_tuple_element_118;
PyObject *tmp_tuple_element_119;
PyObject *tmp_tuple_element_120;
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_255;
tmp_tuple_element_8 = mod_consts.const_str_plain_SubfileType;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_8 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_8);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_256;
tmp_tuple_element_9 = mod_consts.const_str_plain_ImageWidth;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_9 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_9);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_257;
tmp_tuple_element_10 = mod_consts.const_str_plain_ImageLength;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_10 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_10);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_258;
tmp_tuple_element_11 = mod_consts.const_str_plain_BitsPerSample;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_11 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_11);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_259;
tmp_tuple_element_12 = mod_consts.const_str_plain_Compression;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_12 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_12);
tmp_tuple_element_12 = DICT_COPY(tstate, mod_consts.const_dict_5dc73ef09b7ff8a9b0d93d7297f9537c);
PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_12);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_262;
tmp_tuple_element_13 = mod_consts.const_str_plain_PhotometricInterpretation;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_13 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_13);
tmp_tuple_element_13 = DICT_COPY(tstate, mod_consts.const_dict_39749579f943d31b5ff968e26bc0ca5a);
PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_13);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_263;
tmp_tuple_element_14 = mod_consts.const_str_plain_Threshholding;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_14 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_14);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_264;
tmp_tuple_element_15 = mod_consts.const_str_plain_CellWidth;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_15 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_15);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_265;
tmp_tuple_element_16 = mod_consts.const_str_plain_CellLength;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_16 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_16);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_266;
tmp_tuple_element_17 = mod_consts.const_str_plain_FillOrder;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_17 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_17);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_269;
tmp_tuple_element_18 = mod_consts.const_str_plain_DocumentName;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_18 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_18);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_270;
tmp_tuple_element_19 = mod_consts.const_str_plain_ImageDescription;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_19 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_19);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_271;
tmp_tuple_element_20 = mod_consts.const_str_plain_Make;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_20 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_20);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_272;
tmp_tuple_element_21 = mod_consts.const_str_plain_Model;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_21 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_21);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_273;
tmp_tuple_element_22 = mod_consts.const_str_plain_StripOffsets;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_22 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_22);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_274;
tmp_tuple_element_23 = mod_consts.const_str_plain_Orientation;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_23);
tmp_tuple_element_23 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_23 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_23);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_277;
tmp_tuple_element_24 = mod_consts.const_str_plain_SamplesPerPixel;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_24);
tmp_tuple_element_24 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_24 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_24);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_278;
tmp_tuple_element_25 = mod_consts.const_str_plain_RowsPerStrip;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_25 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_25);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_279;
tmp_tuple_element_26 = mod_consts.const_str_plain_StripByteCounts;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_26 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_26);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_280;
tmp_tuple_element_27 = mod_consts.const_str_plain_MinSampleValue;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_27 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_27);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_281;
tmp_tuple_element_28 = mod_consts.const_str_plain_MaxSampleValue;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_28 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_28);
tmp_tuple_element_28 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_28);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_282;
tmp_tuple_element_29 = mod_consts.const_str_plain_XResolution;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_29 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_29);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_283;
tmp_tuple_element_30 = mod_consts.const_str_plain_YResolution;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_30);
tmp_tuple_element_30 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_30 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_30);
tmp_tuple_element_30 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_30);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_284;
tmp_tuple_element_31 = mod_consts.const_str_plain_PlanarConfiguration;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_31);
tmp_tuple_element_31 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_31 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_31);
tmp_tuple_element_31 = DICT_COPY(tstate, mod_consts.const_dict_d42350037eae70df4c65014dffbfed19);
PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_31);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_285;
tmp_tuple_element_32 = mod_consts.const_str_plain_PageName;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_32);
tmp_tuple_element_32 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_32 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_32);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_286;
tmp_tuple_element_33 = mod_consts.const_str_plain_XPosition;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_33);
tmp_tuple_element_33 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_33 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_33);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_287;
tmp_tuple_element_34 = mod_consts.const_str_plain_YPosition;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_34 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_34);
tmp_tuple_element_34 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_34);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_288;
tmp_tuple_element_35 = mod_consts.const_str_plain_FreeOffsets;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_35);
tmp_tuple_element_35 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_35 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_35);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_289;
tmp_tuple_element_36 = mod_consts.const_str_plain_FreeByteCounts;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_36);
tmp_tuple_element_36 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_36 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_36);
tmp_tuple_element_36 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_36);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_290;
tmp_tuple_element_37 = mod_consts.const_str_plain_GrayResponseUnit;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_37);
tmp_tuple_element_37 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_37 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_37);
tmp_tuple_element_37 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_37);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_291;
tmp_tuple_element_38 = mod_consts.const_str_plain_GrayResponseCurve;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_38);
tmp_tuple_element_38 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_38 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_38);
tmp_tuple_element_38 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_38);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_292;
tmp_tuple_element_39 = mod_consts.const_str_plain_T4Options;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_39);
tmp_tuple_element_39 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_39 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_39);
tmp_tuple_element_39 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_39);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_293;
tmp_tuple_element_40 = mod_consts.const_str_plain_T6Options;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_40);
tmp_tuple_element_40 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_40 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_40);
tmp_tuple_element_40 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_40);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_296;
tmp_tuple_element_41 = mod_consts.const_str_plain_ResolutionUnit;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_41);
tmp_tuple_element_41 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_41 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_41);
tmp_tuple_element_41 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_41);
tmp_tuple_element_41 = DICT_COPY(tstate, mod_consts.const_dict_22dc888c657875abc535e5e13e9ac7c5);
PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_41);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_297;
tmp_tuple_element_42 = mod_consts.const_str_plain_PageNumber;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_42);
tmp_tuple_element_42 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_42 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_42);
tmp_tuple_element_42 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_42);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_301;
tmp_tuple_element_43 = mod_consts.const_str_plain_TransferFunction;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_43);
tmp_tuple_element_43 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_43 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_43);
tmp_tuple_element_43 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_43);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_305;
tmp_tuple_element_44 = mod_consts.const_str_plain_Software;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_44);
tmp_tuple_element_44 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_44 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_44);
tmp_tuple_element_44 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_44);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_306;
tmp_tuple_element_45 = mod_consts.const_str_plain_DateTime;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_45);
tmp_tuple_element_45 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_45 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_45);
tmp_tuple_element_45 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_45);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_315;
tmp_tuple_element_46 = mod_consts.const_str_plain_Artist;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_46);
tmp_tuple_element_46 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_46 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_46);
tmp_tuple_element_46 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_46);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_316;
tmp_tuple_element_47 = mod_consts.const_str_plain_HostComputer;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_47);
tmp_tuple_element_47 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_47 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_47);
tmp_tuple_element_47 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_47);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_317;
tmp_tuple_element_48 = mod_consts.const_str_plain_Predictor;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_48);
tmp_tuple_element_48 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_48 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_48);
tmp_tuple_element_48 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_48);
tmp_tuple_element_48 = DICT_COPY(tstate, mod_consts.const_dict_24f46532581234f3874adc3a050bd90e);
PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_48);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_318;
tmp_tuple_element_49 = mod_consts.const_str_plain_WhitePoint;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_49);
tmp_tuple_element_49 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_49 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_49);
tmp_tuple_element_49 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_49);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_319;
tmp_tuple_element_50 = mod_consts.const_str_plain_PrimaryChromaticities;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_50);
tmp_tuple_element_50 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_50 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_50);
tmp_tuple_element_50 = mod_consts.const_int_pos_6;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_50);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_320;
tmp_tuple_element_51 = mod_consts.const_str_plain_ColorMap;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_51 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_51);
tmp_tuple_element_51 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_51);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_321;
tmp_tuple_element_52 = mod_consts.const_str_plain_HalftoneHints;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_52);
tmp_tuple_element_52 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_52 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_52);
tmp_tuple_element_52 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_52);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_322;
tmp_tuple_element_53 = mod_consts.const_str_plain_TileWidth;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_53);
tmp_tuple_element_53 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_53 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_53);
tmp_tuple_element_53 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_53);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_323;
tmp_tuple_element_54 = mod_consts.const_str_plain_TileLength;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_54);
tmp_tuple_element_54 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_54 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_54);
tmp_tuple_element_54 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_54);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_324;
tmp_tuple_element_55 = mod_consts.const_str_plain_TileOffsets;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_55);
tmp_tuple_element_55 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_55 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_55);
tmp_tuple_element_55 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_55);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_325;
tmp_tuple_element_56 = mod_consts.const_str_plain_TileByteCounts;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_56);
tmp_tuple_element_56 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_56 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_56);
tmp_tuple_element_56 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_56);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_330;
tmp_tuple_element_57 = mod_consts.const_str_plain_SubIFDs;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_57);
tmp_tuple_element_57 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_57 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_57);
tmp_tuple_element_57 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_57);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_332;
tmp_tuple_element_58 = mod_consts.const_str_plain_InkSet;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_58);
tmp_tuple_element_58 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_58 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_58);
tmp_tuple_element_58 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_58);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_333;
tmp_tuple_element_59 = mod_consts.const_str_plain_InkNames;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_59);
tmp_tuple_element_59 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_59 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_59);
tmp_tuple_element_59 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_59);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_334;
tmp_tuple_element_60 = mod_consts.const_str_plain_NumberOfInks;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_60);
tmp_tuple_element_60 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_60 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_60);
tmp_tuple_element_60 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_60);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_336;
tmp_tuple_element_61 = mod_consts.const_str_plain_DotRange;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_61);
tmp_tuple_element_61 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_61 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_61);
tmp_tuple_element_61 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_61);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_337;
tmp_tuple_element_62 = mod_consts.const_str_plain_TargetPrinter;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_62);
tmp_tuple_element_62 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_62 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_62);
tmp_tuple_element_62 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_62);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_338;
tmp_tuple_element_63 = mod_consts.const_str_plain_ExtraSamples;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_63);
tmp_tuple_element_63 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_63 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_63);
tmp_tuple_element_63 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_63);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_339;
tmp_tuple_element_64 = mod_consts.const_str_plain_SampleFormat;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_64);
tmp_tuple_element_64 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_64 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_64);
tmp_tuple_element_64 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_64);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_340;
tmp_tuple_element_65 = mod_consts.const_str_plain_SMinSampleValue;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_65);
tmp_tuple_element_65 = module_var_accessor_PIL$TiffTags$DOUBLE(tstate);
assert(!(tmp_tuple_element_65 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_65);
tmp_tuple_element_65 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_65);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_341;
tmp_tuple_element_66 = mod_consts.const_str_plain_SMaxSampleValue;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_66);
tmp_tuple_element_66 = module_var_accessor_PIL$TiffTags$DOUBLE(tstate);
assert(!(tmp_tuple_element_66 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_66);
tmp_tuple_element_66 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_66);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_342;
tmp_tuple_element_67 = mod_consts.const_str_plain_TransferRange;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_67);
tmp_tuple_element_67 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_67 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_67);
tmp_tuple_element_67 = mod_consts.const_int_pos_6;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_67);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_347;
tmp_tuple_element_68 = mod_consts.const_str_plain_JPEGTables;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_68);
tmp_tuple_element_68 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_68 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_68);
tmp_tuple_element_68 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_68);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_512;
tmp_tuple_element_69 = mod_consts.const_str_plain_JPEGProc;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_69);
tmp_tuple_element_69 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_69 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_69);
tmp_tuple_element_69 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_69);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_513;
tmp_tuple_element_70 = mod_consts.const_str_plain_JPEGInterchangeFormat;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_70);
tmp_tuple_element_70 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_70 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_70);
tmp_tuple_element_70 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_70);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_514;
tmp_tuple_element_71 = mod_consts.const_str_plain_JPEGInterchangeFormatLength;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_71);
tmp_tuple_element_71 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_71 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_71);
tmp_tuple_element_71 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_71);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_515;
tmp_tuple_element_72 = mod_consts.const_str_plain_JPEGRestartInterval;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_72);
tmp_tuple_element_72 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_72 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_72);
tmp_tuple_element_72 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_72);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_517;
tmp_tuple_element_73 = mod_consts.const_str_plain_JPEGLosslessPredictors;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_73);
tmp_tuple_element_73 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_73 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_73);
tmp_tuple_element_73 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_73);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_518;
tmp_tuple_element_74 = mod_consts.const_str_plain_JPEGPointTransforms;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_74);
tmp_tuple_element_74 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_74 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_74);
tmp_tuple_element_74 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_74);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_519;
tmp_tuple_element_75 = mod_consts.const_str_plain_JPEGQTables;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_75);
tmp_tuple_element_75 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_75 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_75);
tmp_tuple_element_75 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_75);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_520;
tmp_tuple_element_76 = mod_consts.const_str_plain_JPEGDCTables;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_76);
tmp_tuple_element_76 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_76 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_76);
tmp_tuple_element_76 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_76);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_521;
tmp_tuple_element_77 = mod_consts.const_str_plain_JPEGACTables;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_77);
tmp_tuple_element_77 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_77 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_77);
tmp_tuple_element_77 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_77);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_529;
tmp_tuple_element_78 = mod_consts.const_str_plain_YCbCrCoefficients;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_78);
tmp_tuple_element_78 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_78 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_78);
tmp_tuple_element_78 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_78);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_530;
tmp_tuple_element_79 = mod_consts.const_str_plain_YCbCrSubSampling;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_79);
tmp_tuple_element_79 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_79 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_79);
tmp_tuple_element_79 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_79);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_531;
tmp_tuple_element_80 = mod_consts.const_str_plain_YCbCrPositioning;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_80);
tmp_tuple_element_80 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_80 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_80);
tmp_tuple_element_80 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_80);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_532;
tmp_tuple_element_81 = mod_consts.const_str_plain_ReferenceBlackWhite;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_81);
tmp_tuple_element_81 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_81 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_81);
tmp_tuple_element_81 = mod_consts.const_int_pos_6;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_81);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_700;
tmp_tuple_element_82 = mod_consts.const_str_plain_XMP;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_82);
tmp_tuple_element_82 = module_var_accessor_PIL$TiffTags$BYTE(tstate);
assert(!(tmp_tuple_element_82 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_82);
tmp_tuple_element_82 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_82);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_32995;
tmp_tuple_element_83 = mod_consts.const_str_plain_Matteing;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_83);
tmp_tuple_element_83 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_83 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_83);
tmp_tuple_element_83 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_83);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_32996;
tmp_tuple_element_84 = mod_consts.const_str_plain_DataType;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_84);
tmp_tuple_element_84 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_84 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_84);
tmp_tuple_element_84 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_84);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_32997;
tmp_tuple_element_85 = mod_consts.const_str_plain_ImageDepth;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_85);
tmp_tuple_element_85 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_85 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_85);
tmp_tuple_element_85 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_85);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_32998;
tmp_tuple_element_86 = mod_consts.const_str_plain_TileDepth;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_86);
tmp_tuple_element_86 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_86 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_86);
tmp_tuple_element_86 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_86);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_33432;
tmp_tuple_element_87 = mod_consts.const_str_plain_Copyright;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_87);
tmp_tuple_element_87 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
assert(!(tmp_tuple_element_87 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_87);
tmp_tuple_element_87 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_87);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_33723;
tmp_tuple_element_88 = mod_consts.const_str_plain_IptcNaaInfo;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_88);
tmp_tuple_element_88 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_88 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_88);
tmp_tuple_element_88 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_88);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_34377;
tmp_tuple_element_89 = mod_consts.const_str_plain_PhotoshopInfo;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_89);
tmp_tuple_element_89 = module_var_accessor_PIL$TiffTags$BYTE(tstate);
assert(!(tmp_tuple_element_89 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_89);
tmp_tuple_element_89 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_89);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_34665;
tmp_tuple_element_90 = mod_consts.const_str_plain_ExifIFD;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_90);
tmp_tuple_element_90 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_90 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_90);
tmp_tuple_element_90 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_90);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_34675;
tmp_tuple_element_91 = mod_consts.const_str_plain_ICCProfile;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_91);
tmp_tuple_element_91 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_91 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_91);
tmp_tuple_element_91 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_91);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_34853;
tmp_tuple_element_92 = mod_consts.const_str_plain_GPSInfoIFD;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_92);
tmp_tuple_element_92 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_92 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_92);
tmp_tuple_element_92 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_92);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_36864;
tmp_tuple_element_93 = mod_consts.const_str_plain_ExifVersion;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_93);
tmp_tuple_element_93 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_93 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_93);
tmp_tuple_element_93 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_93);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_37724;
tmp_tuple_element_94 = mod_consts.const_str_plain_ImageSourceData;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_94);
tmp_tuple_element_94 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_94 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_94);
tmp_tuple_element_94 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_94);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_40965;
tmp_tuple_element_95 = mod_consts.const_str_plain_InteroperabilityIFD;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_95);
tmp_tuple_element_95 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_95 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_95);
tmp_tuple_element_95 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_95);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_41730;
tmp_tuple_element_96 = mod_consts.const_str_plain_CFAPattern;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_96);
tmp_tuple_element_96 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_96 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_96);
tmp_tuple_element_96 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_96);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45056;
tmp_tuple_element_97 = mod_consts.const_str_plain_MPFVersion;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_97);
tmp_tuple_element_97 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_97 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_97);
tmp_tuple_element_97 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_97);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45057;
tmp_tuple_element_98 = mod_consts.const_str_plain_NumberOfImages;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_98 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_98);
tmp_tuple_element_98 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_98);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45058;
tmp_tuple_element_99 = mod_consts.const_str_plain_MPEntry;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_99);
tmp_tuple_element_99 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_99 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_99);
tmp_tuple_element_99 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_99);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45059;
tmp_tuple_element_100 = mod_consts.const_str_plain_ImageUIDList;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_100);
tmp_tuple_element_100 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_100 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_100);
tmp_tuple_element_100 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_100);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45060;
tmp_tuple_element_101 = mod_consts.const_str_plain_TotalFrames;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_101);
tmp_tuple_element_101 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_101 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_101);
tmp_tuple_element_101 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_101);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45313;
tmp_tuple_element_102 = mod_consts.const_str_plain_MPIndividualNum;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_102);
tmp_tuple_element_102 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_102 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_102);
tmp_tuple_element_102 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_102);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45569;
tmp_tuple_element_103 = mod_consts.const_str_plain_PanOrientation;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_103);
tmp_tuple_element_103 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_103 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_103);
tmp_tuple_element_103 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_103);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45570;
tmp_tuple_element_104 = mod_consts.const_str_plain_PanOverlap_H;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_104);
tmp_tuple_element_104 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_104 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_104);
tmp_tuple_element_104 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_104);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45571;
tmp_tuple_element_105 = mod_consts.const_str_plain_PanOverlap_V;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_105);
tmp_tuple_element_105 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_105 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_105);
tmp_tuple_element_105 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_105);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45572;
tmp_tuple_element_106 = mod_consts.const_str_plain_BaseViewpointNum;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_106);
tmp_tuple_element_106 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_106 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_106);
tmp_tuple_element_106 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_106);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45573;
tmp_tuple_element_107 = mod_consts.const_str_plain_ConvergenceAngle;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_107);
tmp_tuple_element_107 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_107 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_107);
tmp_tuple_element_107 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_107);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45574;
tmp_tuple_element_108 = mod_consts.const_str_plain_BaselineLength;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_108);
tmp_tuple_element_108 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_108 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_108);
tmp_tuple_element_108 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_108);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45575;
tmp_tuple_element_109 = mod_consts.const_str_plain_VerticalDivergence;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_109);
tmp_tuple_element_109 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_109 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_109);
tmp_tuple_element_109 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_109);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45576;
tmp_tuple_element_110 = mod_consts.const_str_plain_AxisDistance_X;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_110);
tmp_tuple_element_110 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_110 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_110);
tmp_tuple_element_110 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_110);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45577;
tmp_tuple_element_111 = mod_consts.const_str_plain_AxisDistance_Y;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_111);
tmp_tuple_element_111 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_111 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_111);
tmp_tuple_element_111 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_111);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45578;
tmp_tuple_element_112 = mod_consts.const_str_plain_AxisDistance_Z;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_112);
tmp_tuple_element_112 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_112 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_112);
tmp_tuple_element_112 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_112);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45579;
tmp_tuple_element_113 = mod_consts.const_str_plain_YawAngle;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_113);
tmp_tuple_element_113 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_113 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_113);
tmp_tuple_element_113 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_113);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45580;
tmp_tuple_element_114 = mod_consts.const_str_plain_PitchAngle;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_114);
tmp_tuple_element_114 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_114 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_114);
tmp_tuple_element_114 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_114);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_45581;
tmp_tuple_element_115 = mod_consts.const_str_plain_RollAngle;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_115);
tmp_tuple_element_115 = module_var_accessor_PIL$TiffTags$SIGNED_RATIONAL(tstate);
assert(!(tmp_tuple_element_115 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_115);
tmp_tuple_element_115 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_115);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_40960;
tmp_tuple_element_116 = mod_consts.const_str_plain_FlashPixVersion;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_116);
tmp_tuple_element_116 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_116 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_116);
tmp_tuple_element_116 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_116);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_50741;
tmp_tuple_element_117 = mod_consts.const_str_plain_MakerNoteSafety;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_117);
tmp_tuple_element_117 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
assert(!(tmp_tuple_element_117 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_117);
tmp_tuple_element_117 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_117);
tmp_tuple_element_117 = DICT_COPY(tstate, mod_consts.const_dict_d5fe7a7e78b4671757baf25612bf91d9);
PyTuple_SET_ITEM(tmp_dict_value_1, 3, tmp_tuple_element_117);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_50780;
tmp_tuple_element_118 = mod_consts.const_str_plain_BestQualityScale;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_118);
tmp_tuple_element_118 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
assert(!(tmp_tuple_element_118 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_118);
tmp_tuple_element_118 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_118);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_50838;
tmp_tuple_element_119 = mod_consts.const_str_plain_ImageJMetaDataByteCounts;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_119);
tmp_tuple_element_119 = module_var_accessor_PIL$TiffTags$LONG(tstate);
assert(!(tmp_tuple_element_119 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_119);
tmp_tuple_element_119 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_119);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_50839;
tmp_tuple_element_120 = mod_consts.const_str_plain_ImageJMetaData;
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_120);
tmp_tuple_element_120 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
assert(!(tmp_tuple_element_120 == NULL));
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_120);
tmp_tuple_element_120 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_120);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2, tmp_assign_source_39);
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_8fdd939d3732797b3e034b980a24531d;
tmp_ass_subscribed_7 = module_var_accessor_PIL$TiffTags$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain__tags_v2;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_tuple_element_121;
tmp_dict_key_2 = mod_consts.const_int_pos_34665;
tmp_dict_key_3 = mod_consts.const_int_pos_36864;
tmp_tuple_element_121 = mod_consts.const_str_plain_ExifVersion;
tmp_dict_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_121);
tmp_tuple_element_121 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
if (unlikely(tmp_tuple_element_121 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNDEFINED);
}

if (tmp_tuple_element_121 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_121);
tmp_tuple_element_121 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_121);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_dict_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_tuple_element_122;
PyObject *tmp_tuple_element_123;
PyObject *tmp_tuple_element_124;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_int_pos_40960;
tmp_tuple_element_122 = mod_consts.const_str_plain_FlashPixVersion;
tmp_dict_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_122);
tmp_tuple_element_122 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
if (unlikely(tmp_tuple_element_122 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNDEFINED);
}

if (tmp_tuple_element_122 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_122);
tmp_tuple_element_122 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_122);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_dict_value_3);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_int_pos_40965;
tmp_tuple_element_123 = mod_consts.const_str_plain_InteroperabilityIFD;
tmp_dict_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_123);
tmp_tuple_element_123 = module_var_accessor_PIL$TiffTags$LONG(tstate);
if (unlikely(tmp_tuple_element_123 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LONG);
}

if (tmp_tuple_element_123 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_123);
tmp_tuple_element_123 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_123);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_dict_value_3);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_int_pos_41730;
tmp_tuple_element_124 = mod_consts.const_str_plain_CFAPattern;
tmp_dict_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_124);
tmp_tuple_element_124 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
if (unlikely(tmp_tuple_element_124 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNDEFINED);
}

if (tmp_tuple_element_124 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_124);
tmp_tuple_element_124 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_124);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_dict_value_3);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_dict_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_assign_source_40 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_tuple_element_125;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_tuple_element_156;
tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_int_pos_34853;
tmp_dict_key_4 = const_int_0;
tmp_tuple_element_125 = mod_consts.const_str_plain_GPSVersionID;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_125);
tmp_tuple_element_125 = module_var_accessor_PIL$TiffTags$BYTE(tstate);
if (unlikely(tmp_tuple_element_125 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BYTE);
}

if (tmp_tuple_element_125 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_125);
tmp_tuple_element_125 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_125);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_dict_value_2 = _PyDict_NewPresized( 31 );
{
PyObject *tmp_tuple_element_126;
PyObject *tmp_tuple_element_127;
PyObject *tmp_tuple_element_128;
PyObject *tmp_tuple_element_129;
PyObject *tmp_tuple_element_130;
PyObject *tmp_tuple_element_131;
PyObject *tmp_tuple_element_132;
PyObject *tmp_tuple_element_133;
PyObject *tmp_tuple_element_134;
PyObject *tmp_tuple_element_135;
PyObject *tmp_tuple_element_136;
PyObject *tmp_tuple_element_137;
PyObject *tmp_tuple_element_138;
PyObject *tmp_tuple_element_139;
PyObject *tmp_tuple_element_140;
PyObject *tmp_tuple_element_141;
PyObject *tmp_tuple_element_142;
PyObject *tmp_tuple_element_143;
PyObject *tmp_tuple_element_144;
PyObject *tmp_tuple_element_145;
PyObject *tmp_tuple_element_146;
PyObject *tmp_tuple_element_147;
PyObject *tmp_tuple_element_148;
PyObject *tmp_tuple_element_149;
PyObject *tmp_tuple_element_150;
PyObject *tmp_tuple_element_151;
PyObject *tmp_tuple_element_152;
PyObject *tmp_tuple_element_153;
PyObject *tmp_tuple_element_154;
PyObject *tmp_tuple_element_155;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = const_int_pos_1;
tmp_tuple_element_126 = mod_consts.const_str_plain_GPSLatitudeRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_126);
tmp_tuple_element_126 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_126 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_126 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_126);
tmp_tuple_element_126 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_126);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_2;
tmp_tuple_element_127 = mod_consts.const_str_plain_GPSLatitude;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_127);
tmp_tuple_element_127 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_127 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_127);
tmp_tuple_element_127 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_127);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_3;
tmp_tuple_element_128 = mod_consts.const_str_plain_GPSLongitudeRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_128);
tmp_tuple_element_128 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_128 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_128 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_128);
tmp_tuple_element_128 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_128);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_4;
tmp_tuple_element_129 = mod_consts.const_str_plain_GPSLongitude;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_129);
tmp_tuple_element_129 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_129 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_129 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_129);
tmp_tuple_element_129 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_129);
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_5;
tmp_tuple_element_130 = mod_consts.const_str_plain_GPSAltitudeRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_130);
tmp_tuple_element_130 = module_var_accessor_PIL$TiffTags$BYTE(tstate);
if (unlikely(tmp_tuple_element_130 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BYTE);
}

if (tmp_tuple_element_130 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_130);
tmp_tuple_element_130 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_130);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_6;
tmp_tuple_element_131 = mod_consts.const_str_plain_GPSAltitude;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_131);
tmp_tuple_element_131 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_131 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_131 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_131);
tmp_tuple_element_131 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_131);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_7;
tmp_tuple_element_132 = mod_consts.const_str_plain_GPSTimeStamp;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_132);
tmp_tuple_element_132 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_132 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_132 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_132);
tmp_tuple_element_132 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_132);
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_8;
tmp_tuple_element_133 = mod_consts.const_str_plain_GPSSatellites;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_133);
tmp_tuple_element_133 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_133 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_133 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_133);
tmp_tuple_element_133 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_133);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_9;
tmp_tuple_element_134 = mod_consts.const_str_plain_GPSStatus;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_134);
tmp_tuple_element_134 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_134 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_134 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_134);
tmp_tuple_element_134 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_134);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_10;
tmp_tuple_element_135 = mod_consts.const_str_plain_GPSMeasureMode;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_135);
tmp_tuple_element_135 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_135 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_135 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_135);
tmp_tuple_element_135 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_135);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_11;
tmp_tuple_element_136 = mod_consts.const_str_plain_GPSDOP;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_136);
tmp_tuple_element_136 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_136 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_136 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_136);
tmp_tuple_element_136 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_136);
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_12;
tmp_tuple_element_137 = mod_consts.const_str_plain_GPSSpeedRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_137);
tmp_tuple_element_137 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_137 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_137 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_137);
tmp_tuple_element_137 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_137);
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_13;
tmp_tuple_element_138 = mod_consts.const_str_plain_GPSSpeed;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_138);
tmp_tuple_element_138 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_138 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_138 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_138);
tmp_tuple_element_138 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_138);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_14;
tmp_tuple_element_139 = mod_consts.const_str_plain_GPSTrackRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_139);
tmp_tuple_element_139 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_139 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_139 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_139);
tmp_tuple_element_139 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_139);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_15;
tmp_tuple_element_140 = mod_consts.const_str_plain_GPSTrack;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_140);
tmp_tuple_element_140 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_140 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_140 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_140);
tmp_tuple_element_140 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_140);
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_16;
tmp_tuple_element_141 = mod_consts.const_str_plain_GPSImgDirectionRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_141);
tmp_tuple_element_141 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_141 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_141 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_141);
tmp_tuple_element_141 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_141);
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_17;
tmp_tuple_element_142 = mod_consts.const_str_plain_GPSImgDirection;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_142);
tmp_tuple_element_142 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_142 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_142 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_142);
tmp_tuple_element_142 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_142);
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_18;
tmp_tuple_element_143 = mod_consts.const_str_plain_GPSMapDatum;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_143);
tmp_tuple_element_143 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_143 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_143);
tmp_tuple_element_143 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_143);
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_19;
tmp_tuple_element_144 = mod_consts.const_str_plain_GPSDestLatitudeRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_144);
tmp_tuple_element_144 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_144 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_144 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_144);
tmp_tuple_element_144 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_144);
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_20;
tmp_tuple_element_145 = mod_consts.const_str_plain_GPSDestLatitude;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_145);
tmp_tuple_element_145 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_145 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_145 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto tuple_build_exception_27;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_145);
tmp_tuple_element_145 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_145);
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_21;
tmp_tuple_element_146 = mod_consts.const_str_plain_GPSDestLongitudeRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_146);
tmp_tuple_element_146 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_146 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_146 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_146);
tmp_tuple_element_146 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_146);
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_22;
tmp_tuple_element_147 = mod_consts.const_str_plain_GPSDestLongitude;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_147);
tmp_tuple_element_147 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_147 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_147 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;

    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_147);
tmp_tuple_element_147 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_147);
goto tuple_build_no_exception_29;
// Exception handling pass through code for tuple_build:
tuple_build_exception_29:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_29:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_23;
tmp_tuple_element_148 = mod_consts.const_str_plain_GPSDestBearingRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_148);
tmp_tuple_element_148 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_148 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_148 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;

    goto tuple_build_exception_30;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_148);
tmp_tuple_element_148 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_148);
goto tuple_build_no_exception_30;
// Exception handling pass through code for tuple_build:
tuple_build_exception_30:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_30:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_24;
tmp_tuple_element_149 = mod_consts.const_str_plain_GPSDestBearing;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_149);
tmp_tuple_element_149 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_149 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_149 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;

    goto tuple_build_exception_31;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_149);
tmp_tuple_element_149 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_149);
goto tuple_build_no_exception_31;
// Exception handling pass through code for tuple_build:
tuple_build_exception_31:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_31:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_25;
tmp_tuple_element_150 = mod_consts.const_str_plain_GPSDestDistanceRef;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_150);
tmp_tuple_element_150 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_150 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_150 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;

    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_150);
tmp_tuple_element_150 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_150);
goto tuple_build_no_exception_32;
// Exception handling pass through code for tuple_build:
tuple_build_exception_32:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_32:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_26;
tmp_tuple_element_151 = mod_consts.const_str_plain_GPSDestDistance;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_151);
tmp_tuple_element_151 = module_var_accessor_PIL$TiffTags$RATIONAL(tstate);
if (unlikely(tmp_tuple_element_151 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RATIONAL);
}

if (tmp_tuple_element_151 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;

    goto tuple_build_exception_33;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_151);
tmp_tuple_element_151 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_151);
goto tuple_build_no_exception_33;
// Exception handling pass through code for tuple_build:
tuple_build_exception_33:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_33:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_27;
tmp_tuple_element_152 = mod_consts.const_str_plain_GPSProcessingMethod;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_152);
tmp_tuple_element_152 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
if (unlikely(tmp_tuple_element_152 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNDEFINED);
}

if (tmp_tuple_element_152 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;

    goto tuple_build_exception_34;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_152);
tmp_tuple_element_152 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_152);
goto tuple_build_no_exception_34;
// Exception handling pass through code for tuple_build:
tuple_build_exception_34:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_34:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_28;
tmp_tuple_element_153 = mod_consts.const_str_plain_GPSAreaInformation;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_153);
tmp_tuple_element_153 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
if (unlikely(tmp_tuple_element_153 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNDEFINED);
}

if (tmp_tuple_element_153 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;

    goto tuple_build_exception_35;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_153);
tmp_tuple_element_153 = const_int_0;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_153);
goto tuple_build_no_exception_35;
// Exception handling pass through code for tuple_build:
tuple_build_exception_35:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_35:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_29;
tmp_tuple_element_154 = mod_consts.const_str_plain_GPSDateStamp;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_154);
tmp_tuple_element_154 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_154 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_154 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;

    goto tuple_build_exception_36;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_154);
tmp_tuple_element_154 = mod_consts.const_int_pos_11;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_154);
goto tuple_build_no_exception_36;
// Exception handling pass through code for tuple_build:
tuple_build_exception_36:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_36:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_int_pos_30;
tmp_tuple_element_155 = mod_consts.const_str_plain_GPSDifferential;
tmp_dict_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_4, 0, tmp_tuple_element_155);
tmp_tuple_element_155 = module_var_accessor_PIL$TiffTags$SHORT(tstate);
if (unlikely(tmp_tuple_element_155 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SHORT);
}

if (tmp_tuple_element_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;

    goto tuple_build_exception_37;
}
PyTuple_SET_ITEM0(tmp_dict_value_4, 1, tmp_tuple_element_155);
tmp_tuple_element_155 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_4, 2, tmp_tuple_element_155);
goto tuple_build_no_exception_37;
// Exception handling pass through code for tuple_build:
tuple_build_exception_37:;
Py_DECREF(tmp_dict_value_4);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_37:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_int_pos_40965;
tmp_dict_key_5 = const_int_pos_1;
tmp_tuple_element_156 = mod_consts.const_str_plain_InteropIndex;
tmp_dict_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_5, 0, tmp_tuple_element_156);
tmp_tuple_element_156 = module_var_accessor_PIL$TiffTags$ASCII(tstate);
if (unlikely(tmp_tuple_element_156 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII);
}

if (tmp_tuple_element_156 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM0(tmp_dict_value_5, 1, tmp_tuple_element_156);
tmp_tuple_element_156 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_5, 2, tmp_tuple_element_156);
goto tuple_build_no_exception_38;
// Exception handling pass through code for tuple_build:
tuple_build_exception_38:;
Py_DECREF(tmp_dict_value_5);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_38:;
tmp_dict_value_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_tuple_element_157;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_int_pos_2;
tmp_tuple_element_157 = mod_consts.const_str_plain_InteropVersion;
tmp_dict_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_dict_value_5, 0, tmp_tuple_element_157);
tmp_tuple_element_157 = module_var_accessor_PIL$TiffTags$UNDEFINED(tstate);
if (unlikely(tmp_tuple_element_157 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNDEFINED);
}

if (tmp_tuple_element_157 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto tuple_build_exception_39;
}
PyTuple_SET_ITEM0(tmp_dict_value_5, 1, tmp_tuple_element_157);
tmp_tuple_element_157 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_dict_value_5, 2, tmp_tuple_element_157);
goto tuple_build_no_exception_39;
// Exception handling pass through code for tuple_build:
tuple_build_exception_39:;
Py_DECREF(tmp_dict_value_5);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_39:;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_40);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__tags_v2_groups, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = DICT_COPY(tstate, mod_consts.const_dict_10636d5b66fa57f494ff7a6cca7dbe5d);
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS, tmp_assign_source_41);
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_ef26ffbc12f03bc0cb9226b8296c2dcb;
tmp_ass_subscribed_8 = module_var_accessor_PIL$TiffTags$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_TAGS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2, tmp_assign_source_42);
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_4d4369df266fb3849fdfd661c050cf9e;
tmp_ass_subscribed_9 = module_var_accessor_PIL$TiffTags$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_TAGS_V2;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS_V2_GROUPS, tmp_assign_source_43);
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_fcf05e8ba08eebfceffcede8c44aa122;
tmp_ass_subscribed_10 = module_var_accessor_PIL$TiffTags$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_TAGS_V2_GROUPS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_44 = MAKE_FUNCTION_PIL$TiffTags$$$function__4__populate(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain__populate, tmp_assign_source_44);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
tmp_called_value_3 = module_var_accessor_PIL$TiffTags$_populate(tstate);
assert(!(tmp_called_value_3 == NULL));
frame_frame_PIL$TiffTags->m_frame.f_lineno = 458;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPES, tmp_assign_source_45);
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_49d3c3fc3ee96ead1ca58f86d1afd301;
tmp_ass_subscribed_11 = module_var_accessor_PIL$TiffTags$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_TYPES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = PySet_New(mod_consts.const_set_4c07d51f8f0ae9e5ed0ee43665776747);
UPDATE_STRING_DICT1(moduledict_PIL$TiffTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LIBTIFF_CORE, tmp_assign_source_46);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
tmp_expression_value_13 = module_var_accessor_PIL$TiffTags$LIBTIFF_CORE(tstate);
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_remove);
assert(!(tmp_called_value_4 == NULL));
frame_frame_PIL$TiffTags->m_frame.f_lineno = 558;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_int_pos_255_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_3;
tmp_expression_value_14 = module_var_accessor_PIL$TiffTags$LIBTIFF_CORE(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LIBTIFF_CORE);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 559;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_remove);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto frame_exception_exit_1;
}
frame_frame_PIL$TiffTags->m_frame.f_lineno = 559;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_int_pos_322_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_4;
tmp_expression_value_15 = module_var_accessor_PIL$TiffTags$LIBTIFF_CORE(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LIBTIFF_CORE);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_remove);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;

    goto frame_exception_exit_1;
}
frame_frame_PIL$TiffTags->m_frame.f_lineno = 560;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_int_pos_323_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$TiffTags, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$TiffTags->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$TiffTags, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$TiffTags);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$TiffTags", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.TiffTags" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$TiffTags);
    return module_PIL$TiffTags;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$TiffTags", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
