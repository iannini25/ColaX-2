/* Generated code for Python module 'PIL$ExifTags'
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



/* The "module_PIL$ExifTags" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ExifTags;
PyDictObject *moduledict_PIL$ExifTags;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_335afd2abc4b0cfecad09952efc0b712;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_IntEnum_tuple;
PyObject *const_str_plain_IntEnum;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Base;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ff15ba11b29b80abac876e78a6df1898;
PyObject *const_int_pos_22;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_InteropIndex;
PyObject *const_int_pos_11;
PyObject *const_str_plain_ProcessingSoftware;
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
PyObject *const_int_pos_262;
PyObject *const_str_plain_PhotometricInterpretation;
PyObject *const_int_pos_263;
PyObject *const_str_plain_Thresholding;
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
PyObject *const_int_pos_285;
PyObject *const_str_plain_PageName;
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
PyObject *const_int_pos_343;
PyObject *const_str_plain_ClipPath;
PyObject *const_int_pos_344;
PyObject *const_str_plain_XClipPathUnits;
PyObject *const_int_pos_345;
PyObject *const_str_plain_YClipPathUnits;
PyObject *const_int_pos_346;
PyObject *const_str_plain_Indexed;
PyObject *const_int_pos_347;
PyObject *const_str_plain_JPEGTables;
PyObject *const_int_pos_351;
PyObject *const_str_plain_OPIProxy;
PyObject *const_int_pos_512;
PyObject *const_str_plain_JPEGProc;
PyObject *const_int_pos_513;
PyObject *const_str_plain_JpegIFOffset;
PyObject *const_int_pos_514;
PyObject *const_str_plain_JpegIFByteCount;
PyObject *const_int_pos_515;
PyObject *const_str_plain_JpegRestartInterval;
PyObject *const_int_pos_517;
PyObject *const_str_plain_JpegLosslessPredictors;
PyObject *const_int_pos_518;
PyObject *const_str_plain_JpegPointTransforms;
PyObject *const_int_pos_519;
PyObject *const_str_plain_JpegQTables;
PyObject *const_int_pos_520;
PyObject *const_str_plain_JpegDCTables;
PyObject *const_int_pos_521;
PyObject *const_str_plain_JpegACTables;
PyObject *const_int_pos_529;
PyObject *const_str_plain_YCbCrCoefficients;
PyObject *const_int_pos_530;
PyObject *const_str_plain_YCbCrSubSampling;
PyObject *const_int_pos_531;
PyObject *const_str_plain_YCbCrPositioning;
PyObject *const_int_pos_532;
PyObject *const_str_plain_ReferenceBlackWhite;
PyObject *const_int_pos_700;
PyObject *const_str_plain_XMLPacket;
PyObject *const_int_pos_4096;
PyObject *const_str_plain_RelatedImageFileFormat;
PyObject *const_int_pos_4097;
PyObject *const_str_plain_RelatedImageWidth;
PyObject *const_int_pos_4098;
PyObject *const_str_plain_RelatedImageLength;
PyObject *const_int_pos_18246;
PyObject *const_str_plain_Rating;
PyObject *const_int_pos_18249;
PyObject *const_str_plain_RatingPercent;
PyObject *const_int_pos_32781;
PyObject *const_str_plain_ImageID;
PyObject *const_int_pos_33421;
PyObject *const_str_plain_CFARepeatPatternDim;
PyObject *const_int_pos_33423;
PyObject *const_str_plain_BatteryLevel;
PyObject *const_int_pos_33432;
PyObject *const_str_plain_Copyright;
PyObject *const_int_pos_33434;
PyObject *const_str_plain_ExposureTime;
PyObject *const_int_pos_33437;
PyObject *const_str_plain_FNumber;
PyObject *const_int_pos_33723;
PyObject *const_str_plain_IPTCNAA;
PyObject *const_int_pos_34377;
PyObject *const_str_plain_ImageResources;
PyObject *const_int_pos_34665;
PyObject *const_str_plain_ExifOffset;
PyObject *const_int_pos_34675;
PyObject *const_str_plain_InterColorProfile;
PyObject *const_int_pos_34850;
PyObject *const_str_plain_ExposureProgram;
PyObject *const_int_pos_34852;
PyObject *const_str_plain_SpectralSensitivity;
PyObject *const_int_pos_34853;
PyObject *const_str_plain_GPSInfo;
PyObject *const_int_pos_34855;
PyObject *const_str_plain_ISOSpeedRatings;
PyObject *const_int_pos_34856;
PyObject *const_str_plain_OECF;
PyObject *const_int_pos_34857;
PyObject *const_str_plain_Interlace;
PyObject *const_int_pos_34858;
PyObject *const_str_plain_TimeZoneOffset;
PyObject *const_int_pos_34859;
PyObject *const_str_plain_SelfTimerMode;
PyObject *const_int_pos_34864;
PyObject *const_str_plain_SensitivityType;
PyObject *const_int_pos_34865;
PyObject *const_str_plain_StandardOutputSensitivity;
PyObject *const_int_pos_34866;
PyObject *const_str_plain_RecommendedExposureIndex;
PyObject *const_int_pos_34867;
PyObject *const_str_plain_ISOSpeed;
PyObject *const_int_pos_34868;
PyObject *const_str_plain_ISOSpeedLatitudeyyy;
PyObject *const_int_pos_34869;
PyObject *const_str_plain_ISOSpeedLatitudezzz;
PyObject *const_int_pos_36864;
PyObject *const_str_plain_ExifVersion;
PyObject *const_int_pos_36867;
PyObject *const_str_plain_DateTimeOriginal;
PyObject *const_int_pos_36868;
PyObject *const_str_plain_DateTimeDigitized;
PyObject *const_int_pos_36880;
PyObject *const_str_plain_OffsetTime;
PyObject *const_int_pos_36881;
PyObject *const_str_plain_OffsetTimeOriginal;
PyObject *const_int_pos_36882;
PyObject *const_str_plain_OffsetTimeDigitized;
PyObject *const_int_pos_37121;
PyObject *const_str_plain_ComponentsConfiguration;
PyObject *const_int_pos_37122;
PyObject *const_str_plain_CompressedBitsPerPixel;
PyObject *const_int_pos_37377;
PyObject *const_str_plain_ShutterSpeedValue;
PyObject *const_int_pos_37378;
PyObject *const_str_plain_ApertureValue;
PyObject *const_int_pos_37379;
PyObject *const_str_plain_BrightnessValue;
PyObject *const_int_pos_37380;
PyObject *const_str_plain_ExposureBiasValue;
PyObject *const_int_pos_37381;
PyObject *const_str_plain_MaxApertureValue;
PyObject *const_int_pos_37382;
PyObject *const_str_plain_SubjectDistance;
PyObject *const_int_pos_37383;
PyObject *const_str_plain_MeteringMode;
PyObject *const_int_pos_37384;
PyObject *const_str_plain_LightSource;
PyObject *const_int_pos_37385;
PyObject *const_str_plain_Flash;
PyObject *const_int_pos_37386;
PyObject *const_str_plain_FocalLength;
PyObject *const_int_pos_37389;
PyObject *const_str_plain_Noise;
PyObject *const_int_pos_37393;
PyObject *const_str_plain_ImageNumber;
PyObject *const_int_pos_37394;
PyObject *const_str_plain_SecurityClassification;
PyObject *const_int_pos_37395;
PyObject *const_str_plain_ImageHistory;
PyObject *const_int_pos_37398;
PyObject *const_str_plain_TIFFEPStandardID;
PyObject *const_int_pos_37500;
PyObject *const_str_plain_MakerNote;
PyObject *const_int_pos_37510;
PyObject *const_str_plain_UserComment;
PyObject *const_int_pos_37520;
PyObject *const_str_plain_SubsecTime;
PyObject *const_int_pos_37521;
PyObject *const_str_plain_SubsecTimeOriginal;
PyObject *const_int_pos_37522;
PyObject *const_str_plain_SubsecTimeDigitized;
PyObject *const_int_pos_37888;
PyObject *const_str_plain_AmbientTemperature;
PyObject *const_int_pos_37889;
PyObject *const_str_plain_Humidity;
PyObject *const_int_pos_37890;
PyObject *const_str_plain_Pressure;
PyObject *const_int_pos_37891;
PyObject *const_str_plain_WaterDepth;
PyObject *const_int_pos_37892;
PyObject *const_str_plain_Acceleration;
PyObject *const_int_pos_37893;
PyObject *const_str_plain_CameraElevationAngle;
PyObject *const_int_pos_40091;
PyObject *const_str_plain_XPTitle;
PyObject *const_int_pos_40092;
PyObject *const_str_plain_XPComment;
PyObject *const_int_pos_40093;
PyObject *const_str_plain_XPAuthor;
PyObject *const_int_pos_40094;
PyObject *const_str_plain_XPKeywords;
PyObject *const_int_pos_40095;
PyObject *const_str_plain_XPSubject;
PyObject *const_int_pos_40960;
PyObject *const_str_plain_FlashPixVersion;
PyObject *const_int_pos_40961;
PyObject *const_str_plain_ColorSpace;
PyObject *const_int_pos_40962;
PyObject *const_str_plain_ExifImageWidth;
PyObject *const_int_pos_40963;
PyObject *const_str_plain_ExifImageHeight;
PyObject *const_int_pos_40964;
PyObject *const_str_plain_RelatedSoundFile;
PyObject *const_int_pos_40965;
PyObject *const_str_plain_ExifInteroperabilityOffset;
PyObject *const_int_pos_41483;
PyObject *const_str_plain_FlashEnergy;
PyObject *const_int_pos_41484;
PyObject *const_str_plain_SpatialFrequencyResponse;
PyObject *const_int_pos_41486;
PyObject *const_str_plain_FocalPlaneXResolution;
PyObject *const_int_pos_41487;
PyObject *const_str_plain_FocalPlaneYResolution;
PyObject *const_int_pos_41488;
PyObject *const_str_plain_FocalPlaneResolutionUnit;
PyObject *const_int_pos_41492;
PyObject *const_str_plain_SubjectLocation;
PyObject *const_int_pos_41493;
PyObject *const_str_plain_ExposureIndex;
PyObject *const_int_pos_41495;
PyObject *const_str_plain_SensingMethod;
PyObject *const_int_pos_41728;
PyObject *const_str_plain_FileSource;
PyObject *const_int_pos_41729;
PyObject *const_str_plain_SceneType;
PyObject *const_int_pos_41730;
PyObject *const_str_plain_CFAPattern;
PyObject *const_int_pos_41985;
PyObject *const_str_plain_CustomRendered;
PyObject *const_int_pos_41986;
PyObject *const_str_plain_ExposureMode;
PyObject *const_int_pos_41987;
PyObject *const_str_plain_WhiteBalance;
PyObject *const_int_pos_41988;
PyObject *const_str_plain_DigitalZoomRatio;
PyObject *const_int_pos_41989;
PyObject *const_str_plain_FocalLengthIn35mmFilm;
PyObject *const_int_pos_41990;
PyObject *const_str_plain_SceneCaptureType;
PyObject *const_int_pos_41991;
PyObject *const_str_plain_GainControl;
PyObject *const_int_pos_41992;
PyObject *const_str_plain_Contrast;
PyObject *const_int_pos_41993;
PyObject *const_str_plain_Saturation;
PyObject *const_int_pos_41994;
PyObject *const_str_plain_Sharpness;
PyObject *const_int_pos_41995;
PyObject *const_str_plain_DeviceSettingDescription;
PyObject *const_int_pos_41996;
PyObject *const_str_plain_SubjectDistanceRange;
PyObject *const_int_pos_42016;
PyObject *const_str_plain_ImageUniqueID;
PyObject *const_int_pos_42032;
PyObject *const_str_plain_CameraOwnerName;
PyObject *const_int_pos_42033;
PyObject *const_str_plain_BodySerialNumber;
PyObject *const_int_pos_42034;
PyObject *const_str_plain_LensSpecification;
PyObject *const_int_pos_42035;
PyObject *const_str_plain_LensMake;
PyObject *const_int_pos_42036;
PyObject *const_str_plain_LensModel;
PyObject *const_int_pos_42037;
PyObject *const_str_plain_LensSerialNumber;
PyObject *const_int_pos_42080;
PyObject *const_str_plain_CompositeImage;
PyObject *const_int_pos_42081;
PyObject *const_str_plain_CompositeImageCount;
PyObject *const_int_pos_42082;
PyObject *const_str_plain_CompositeImageExposureTimes;
PyObject *const_int_pos_42240;
PyObject *const_str_plain_Gamma;
PyObject *const_int_pos_50341;
PyObject *const_str_plain_PrintImageMatching;
PyObject *const_int_pos_50706;
PyObject *const_str_plain_DNGVersion;
PyObject *const_int_pos_50707;
PyObject *const_str_plain_DNGBackwardVersion;
PyObject *const_int_pos_50708;
PyObject *const_str_plain_UniqueCameraModel;
PyObject *const_int_pos_50709;
PyObject *const_str_plain_LocalizedCameraModel;
PyObject *const_int_pos_50710;
PyObject *const_str_plain_CFAPlaneColor;
PyObject *const_int_pos_50711;
PyObject *const_str_plain_CFALayout;
PyObject *const_int_pos_50712;
PyObject *const_str_plain_LinearizationTable;
PyObject *const_int_pos_50713;
PyObject *const_str_plain_BlackLevelRepeatDim;
PyObject *const_int_pos_50714;
PyObject *const_str_plain_BlackLevel;
PyObject *const_int_pos_50715;
PyObject *const_str_plain_BlackLevelDeltaH;
PyObject *const_int_pos_50716;
PyObject *const_str_plain_BlackLevelDeltaV;
PyObject *const_int_pos_50717;
PyObject *const_str_plain_WhiteLevel;
PyObject *const_int_pos_50718;
PyObject *const_str_plain_DefaultScale;
PyObject *const_int_pos_50719;
PyObject *const_str_plain_DefaultCropOrigin;
PyObject *const_int_pos_50720;
PyObject *const_str_plain_DefaultCropSize;
PyObject *const_int_pos_50721;
PyObject *const_str_plain_ColorMatrix1;
PyObject *const_int_pos_50722;
PyObject *const_str_plain_ColorMatrix2;
PyObject *const_int_pos_50723;
PyObject *const_str_plain_CameraCalibration1;
PyObject *const_int_pos_50724;
PyObject *const_str_plain_CameraCalibration2;
PyObject *const_int_pos_50725;
PyObject *const_str_plain_ReductionMatrix1;
PyObject *const_int_pos_50726;
PyObject *const_str_plain_ReductionMatrix2;
PyObject *const_int_pos_50727;
PyObject *const_str_plain_AnalogBalance;
PyObject *const_int_pos_50728;
PyObject *const_str_plain_AsShotNeutral;
PyObject *const_int_pos_50729;
PyObject *const_str_plain_AsShotWhiteXY;
PyObject *const_int_pos_50730;
PyObject *const_str_plain_BaselineExposure;
PyObject *const_int_pos_50731;
PyObject *const_str_plain_BaselineNoise;
PyObject *const_int_pos_50732;
PyObject *const_str_plain_BaselineSharpness;
PyObject *const_int_pos_50733;
PyObject *const_str_plain_BayerGreenSplit;
PyObject *const_int_pos_50734;
PyObject *const_str_plain_LinearResponseLimit;
PyObject *const_int_pos_50735;
PyObject *const_str_plain_CameraSerialNumber;
PyObject *const_int_pos_50736;
PyObject *const_str_plain_LensInfo;
PyObject *const_int_pos_50737;
PyObject *const_str_plain_ChromaBlurRadius;
PyObject *const_int_pos_50738;
PyObject *const_str_plain_AntiAliasStrength;
PyObject *const_int_pos_50739;
PyObject *const_str_plain_ShadowScale;
PyObject *const_int_pos_50740;
PyObject *const_str_plain_DNGPrivateData;
PyObject *const_int_pos_50741;
PyObject *const_str_plain_MakerNoteSafety;
PyObject *const_int_pos_50778;
PyObject *const_str_plain_CalibrationIlluminant1;
PyObject *const_int_pos_50779;
PyObject *const_str_plain_CalibrationIlluminant2;
PyObject *const_int_pos_50780;
PyObject *const_str_plain_BestQualityScale;
PyObject *const_int_pos_50781;
PyObject *const_str_plain_RawDataUniqueID;
PyObject *const_int_pos_50827;
PyObject *const_str_plain_OriginalRawFileName;
PyObject *const_int_pos_50828;
PyObject *const_str_plain_OriginalRawFileData;
PyObject *const_int_pos_50829;
PyObject *const_str_plain_ActiveArea;
PyObject *const_int_pos_50830;
PyObject *const_str_plain_MaskedAreas;
PyObject *const_int_pos_50831;
PyObject *const_str_plain_AsShotICCProfile;
PyObject *const_int_pos_50832;
PyObject *const_str_plain_AsShotPreProfileMatrix;
PyObject *const_int_pos_50833;
PyObject *const_str_plain_CurrentICCProfile;
PyObject *const_int_pos_50834;
PyObject *const_str_plain_CurrentPreProfileMatrix;
PyObject *const_int_pos_50879;
PyObject *const_str_plain_ColorimetricReference;
PyObject *const_int_pos_50931;
PyObject *const_str_plain_CameraCalibrationSignature;
PyObject *const_int_pos_50932;
PyObject *const_str_plain_ProfileCalibrationSignature;
PyObject *const_int_pos_50934;
PyObject *const_str_plain_AsShotProfileName;
PyObject *const_int_pos_50935;
PyObject *const_str_plain_NoiseReductionApplied;
PyObject *const_int_pos_50936;
PyObject *const_str_plain_ProfileName;
PyObject *const_int_pos_50937;
PyObject *const_str_plain_ProfileHueSatMapDims;
PyObject *const_int_pos_50938;
PyObject *const_str_plain_ProfileHueSatMapData1;
PyObject *const_int_pos_50939;
PyObject *const_str_plain_ProfileHueSatMapData2;
PyObject *const_int_pos_50940;
PyObject *const_str_plain_ProfileToneCurve;
PyObject *const_int_pos_50941;
PyObject *const_str_plain_ProfileEmbedPolicy;
PyObject *const_int_pos_50942;
PyObject *const_str_plain_ProfileCopyright;
PyObject *const_int_pos_50964;
PyObject *const_str_plain_ForwardMatrix1;
PyObject *const_int_pos_50965;
PyObject *const_str_plain_ForwardMatrix2;
PyObject *const_int_pos_50966;
PyObject *const_str_plain_PreviewApplicationName;
PyObject *const_int_pos_50967;
PyObject *const_str_plain_PreviewApplicationVersion;
PyObject *const_int_pos_50968;
PyObject *const_str_plain_PreviewSettingsName;
PyObject *const_int_pos_50969;
PyObject *const_str_plain_PreviewSettingsDigest;
PyObject *const_int_pos_50970;
PyObject *const_str_plain_PreviewColorSpace;
PyObject *const_int_pos_50971;
PyObject *const_str_plain_PreviewDateTime;
PyObject *const_int_pos_50972;
PyObject *const_str_plain_RawImageDigest;
PyObject *const_int_pos_50973;
PyObject *const_str_plain_OriginalRawFileDigest;
PyObject *const_int_pos_50974;
PyObject *const_str_plain_SubTileBlockSize;
PyObject *const_int_pos_50975;
PyObject *const_str_plain_RowInterleaveFactor;
PyObject *const_int_pos_50981;
PyObject *const_str_plain_ProfileLookTableDims;
PyObject *const_int_pos_50982;
PyObject *const_str_plain_ProfileLookTableData;
PyObject *const_int_pos_51008;
PyObject *const_str_plain_OpcodeList1;
PyObject *const_int_pos_51009;
PyObject *const_str_plain_OpcodeList2;
PyObject *const_int_pos_51022;
PyObject *const_str_plain_OpcodeList3;
PyObject *const_int_pos_51041;
PyObject *const_str_plain_NoiseProfile;
PyObject *const_int_pos_51044;
PyObject *const_str_plain_FrameRate;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_value;
PyObject *const_dict_b971225a09442fce603c448aedb82c94;
PyObject *const_dict_a6759c25feeaa2f87cd476dae51c6e8c;
PyObject *const_dict_4654160741f1f9a47928576bb1777e1e;
PyObject *const_dict_1f33aedb98bda16b7e452ebe83f255ee;
PyObject *const_dict_25eb2efb1f48f02ed218c540d754a2ea;
PyObject *const_dict_177fa3f1c4078c6e45f6d1d852669621;
PyObject *const_str_plain_TAGS;
PyObject *const_str_plain_GPS;
PyObject *const_int_pos_307;
PyObject *const_str_plain_GPSVersionID;
PyObject *const_str_plain_GPSLatitudeRef;
PyObject *const_int_pos_2;
PyObject *const_str_plain_GPSLatitude;
PyObject *const_int_pos_3;
PyObject *const_str_plain_GPSLongitudeRef;
PyObject *const_int_pos_4;
PyObject *const_str_plain_GPSLongitude;
PyObject *const_int_pos_5;
PyObject *const_str_plain_GPSAltitudeRef;
PyObject *const_int_pos_6;
PyObject *const_str_plain_GPSAltitude;
PyObject *const_int_pos_7;
PyObject *const_str_plain_GPSTimeStamp;
PyObject *const_int_pos_8;
PyObject *const_str_plain_GPSSatellites;
PyObject *const_int_pos_9;
PyObject *const_str_plain_GPSStatus;
PyObject *const_int_pos_10;
PyObject *const_str_plain_GPSMeasureMode;
PyObject *const_str_plain_GPSDOP;
PyObject *const_int_pos_12;
PyObject *const_str_plain_GPSSpeedRef;
PyObject *const_int_pos_13;
PyObject *const_str_plain_GPSSpeed;
PyObject *const_int_pos_14;
PyObject *const_str_plain_GPSTrackRef;
PyObject *const_int_pos_15;
PyObject *const_str_plain_GPSTrack;
PyObject *const_int_pos_16;
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
PyObject *const_str_plain_GPSDestLongitude;
PyObject *const_int_pos_23;
PyObject *const_str_plain_GPSDestBearingRef;
PyObject *const_int_pos_24;
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
PyObject *const_int_pos_31;
PyObject *const_str_plain_GPSHPositioningError;
PyObject *const_str_plain_GPSTAGS;
PyObject *const_str_plain_Interop;
PyObject *const_str_plain_InteropVersion;
PyObject *const_str_plain_RelatedImageHeight;
PyObject *const_str_plain_IFD;
PyObject *const_int_pos_354;
PyObject *const_str_plain_Exif;
PyObject *const_str_plain_Makernote;
PyObject *const_str_plain_IFD1;
PyObject *const_int_pos_363;
PyObject *const_str_plain_Unknown;
PyObject *const_str_plain_Daylight;
PyObject *const_str_plain_Fluorescent;
PyObject *const_str_plain_Tungsten;
PyObject *const_str_plain_Fine;
PyObject *const_str_plain_Cloudy;
PyObject *const_str_plain_Shade;
PyObject *const_str_plain_DaylightFluorescent;
PyObject *const_str_plain_DayWhiteFluorescent;
PyObject *const_str_plain_CoolWhiteFluorescent;
PyObject *const_str_plain_WhiteFluorescent;
PyObject *const_str_plain_StandardLightA;
PyObject *const_str_plain_StandardLightB;
PyObject *const_str_plain_StandardLightC;
PyObject *const_str_plain_D55;
PyObject *const_str_plain_D65;
PyObject *const_str_plain_D75;
PyObject *const_str_plain_D50;
PyObject *const_str_plain_ISO;
PyObject *const_str_plain_Other;
PyObject *const_str_digest_32443bc4f4f943495c70a97365139242;
PyObject *const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[657];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ExifTags"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 657) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 657 values, got %d\n",
                    UN_TRANSLATE("PIL.ExifTags"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712", mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_IntEnum_tuple", mod_consts.const_tuple_str_plain_IntEnum_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntEnum_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IntEnum", mod_consts.const_str_plain_IntEnum);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Base", mod_consts.const_str_plain_Base);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898", mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropIndex", mod_consts.const_str_plain_InteropIndex);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteropIndex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_11", mod_consts.const_int_pos_11);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProcessingSoftware", mod_consts.const_str_plain_ProcessingSoftware);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProcessingSoftware);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NewSubfileType", mod_consts.const_str_plain_NewSubfileType);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_NewSubfileType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubfileType", mod_consts.const_str_plain_SubfileType);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubfileType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageWidth", mod_consts.const_str_plain_ImageWidth);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_257", mod_consts.const_int_pos_257);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_257);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageLength", mod_consts.const_str_plain_ImageLength);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_258", mod_consts.const_int_pos_258);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_258);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitsPerSample", mod_consts.const_str_plain_BitsPerSample);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_BitsPerSample);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_259", mod_consts.const_int_pos_259);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_259);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Compression", mod_consts.const_str_plain_Compression);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Compression);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_262", mod_consts.const_int_pos_262);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_262);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotometricInterpretation", mod_consts.const_str_plain_PhotometricInterpretation);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_PhotometricInterpretation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_263", mod_consts.const_int_pos_263);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_263);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Thresholding", mod_consts.const_str_plain_Thresholding);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Thresholding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_264", mod_consts.const_int_pos_264);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_264);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellWidth", mod_consts.const_str_plain_CellWidth);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_CellWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_265", mod_consts.const_int_pos_265);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_265);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellLength", mod_consts.const_str_plain_CellLength);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_CellLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_266", mod_consts.const_int_pos_266);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_266);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FillOrder", mod_consts.const_str_plain_FillOrder);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_FillOrder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_269", mod_consts.const_int_pos_269);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_269);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DocumentName", mod_consts.const_str_plain_DocumentName);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocumentName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_270", mod_consts.const_int_pos_270);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_270);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageDescription", mod_consts.const_str_plain_ImageDescription);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageDescription);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_271", mod_consts.const_int_pos_271);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_271);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Make", mod_consts.const_str_plain_Make);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Make);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_272", mod_consts.const_int_pos_272);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_272);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Model", mod_consts.const_str_plain_Model);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_Model);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_273", mod_consts.const_int_pos_273);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_273);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripOffsets", mod_consts.const_str_plain_StripOffsets);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_StripOffsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_274", mod_consts.const_int_pos_274);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_277", mod_consts.const_int_pos_277);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_277);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SamplesPerPixel", mod_consts.const_str_plain_SamplesPerPixel);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_SamplesPerPixel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_278", mod_consts.const_int_pos_278);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_278);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RowsPerStrip", mod_consts.const_str_plain_RowsPerStrip);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_RowsPerStrip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_279", mod_consts.const_int_pos_279);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_279);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripByteCounts", mod_consts.const_str_plain_StripByteCounts);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_StripByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_280", mod_consts.const_int_pos_280);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_280);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MinSampleValue", mod_consts.const_str_plain_MinSampleValue);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_MinSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_281", mod_consts.const_int_pos_281);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_281);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxSampleValue", mod_consts.const_str_plain_MaxSampleValue);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_282", mod_consts.const_int_pos_282);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_282);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XResolution", mod_consts.const_str_plain_XResolution);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_XResolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_283", mod_consts.const_int_pos_283);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_283);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YResolution", mod_consts.const_str_plain_YResolution);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_YResolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_284", mod_consts.const_int_pos_284);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_284);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PlanarConfiguration", mod_consts.const_str_plain_PlanarConfiguration);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlanarConfiguration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_285", mod_consts.const_int_pos_285);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_285);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageName", mod_consts.const_str_plain_PageName);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_PageName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_288", mod_consts.const_int_pos_288);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_288);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeOffsets", mod_consts.const_str_plain_FreeOffsets);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreeOffsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_289", mod_consts.const_int_pos_289);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_289);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeByteCounts", mod_consts.const_str_plain_FreeByteCounts);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreeByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_290", mod_consts.const_int_pos_290);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_290);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseUnit", mod_consts.const_str_plain_GrayResponseUnit);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseUnit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_291", mod_consts.const_int_pos_291);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_291);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseCurve", mod_consts.const_str_plain_GrayResponseCurve);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseCurve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_292", mod_consts.const_int_pos_292);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_292);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T4Options", mod_consts.const_str_plain_T4Options);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_T4Options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_293", mod_consts.const_int_pos_293);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_293);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T6Options", mod_consts.const_str_plain_T6Options);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_T6Options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_296", mod_consts.const_int_pos_296);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_296);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResolutionUnit", mod_consts.const_str_plain_ResolutionUnit);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResolutionUnit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_297", mod_consts.const_int_pos_297);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_297);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageNumber", mod_consts.const_str_plain_PageNumber);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_PageNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_301", mod_consts.const_int_pos_301);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_int_pos_301);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferFunction", mod_consts.const_str_plain_TransferFunction);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransferFunction);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_305", mod_consts.const_int_pos_305);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_305);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Software", mod_consts.const_str_plain_Software);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Software);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_306", mod_consts.const_int_pos_306);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_306);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTime", mod_consts.const_str_plain_DateTime);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_DateTime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_315", mod_consts.const_int_pos_315);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_315);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Artist", mod_consts.const_str_plain_Artist);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_Artist);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_316", mod_consts.const_int_pos_316);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HostComputer", mod_consts.const_str_plain_HostComputer);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_HostComputer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_317", mod_consts.const_int_pos_317);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_317);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Predictor", mod_consts.const_str_plain_Predictor);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Predictor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_318", mod_consts.const_int_pos_318);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_318);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhitePoint", mod_consts.const_str_plain_WhitePoint);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_WhitePoint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_319", mod_consts.const_int_pos_319);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_319);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrimaryChromaticities", mod_consts.const_str_plain_PrimaryChromaticities);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrimaryChromaticities);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_320", mod_consts.const_int_pos_320);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_320);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMap", mod_consts.const_str_plain_ColorMap);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_321", mod_consts.const_int_pos_321);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_321);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HalftoneHints", mod_consts.const_str_plain_HalftoneHints);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_HalftoneHints);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_322", mod_consts.const_int_pos_322);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_322);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileWidth", mod_consts.const_str_plain_TileWidth);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_323", mod_consts.const_int_pos_323);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_323);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileLength", mod_consts.const_str_plain_TileLength);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_324);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileOffsets", mod_consts.const_str_plain_TileOffsets);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileOffsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_325", mod_consts.const_int_pos_325);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_325);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileByteCounts", mod_consts.const_str_plain_TileByteCounts);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_TileByteCounts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_330", mod_consts.const_int_pos_330);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_330);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubIFDs", mod_consts.const_str_plain_SubIFDs);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubIFDs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_332", mod_consts.const_int_pos_332);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_332);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkSet", mod_consts.const_str_plain_InkSet);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_InkSet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_333", mod_consts.const_int_pos_333);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_333);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkNames", mod_consts.const_str_plain_InkNames);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_InkNames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_334", mod_consts.const_int_pos_334);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_334);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NumberOfInks", mod_consts.const_str_plain_NumberOfInks);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_NumberOfInks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_336", mod_consts.const_int_pos_336);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_336);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DotRange", mod_consts.const_str_plain_DotRange);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_DotRange);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_337", mod_consts.const_int_pos_337);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_337);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TargetPrinter", mod_consts.const_str_plain_TargetPrinter);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_TargetPrinter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_338", mod_consts.const_int_pos_338);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_338);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtraSamples", mod_consts.const_str_plain_ExtraSamples);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtraSamples);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_339", mod_consts.const_int_pos_339);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_339);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SampleFormat", mod_consts.const_str_plain_SampleFormat);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_SampleFormat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_340", mod_consts.const_int_pos_340);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_340);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMinSampleValue", mod_consts.const_str_plain_SMinSampleValue);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMinSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_341", mod_consts.const_int_pos_341);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_341);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMaxSampleValue", mod_consts.const_str_plain_SMaxSampleValue);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMaxSampleValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_342", mod_consts.const_int_pos_342);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_342);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferRange", mod_consts.const_str_plain_TransferRange);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransferRange);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_343", mod_consts.const_int_pos_343);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_343);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ClipPath", mod_consts.const_str_plain_ClipPath);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClipPath);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_344", mod_consts.const_int_pos_344);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_344);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XClipPathUnits", mod_consts.const_str_plain_XClipPathUnits);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_XClipPathUnits);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_345", mod_consts.const_int_pos_345);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_345);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YClipPathUnits", mod_consts.const_str_plain_YClipPathUnits);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_YClipPathUnits);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_346", mod_consts.const_int_pos_346);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_int_pos_346);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Indexed", mod_consts.const_str_plain_Indexed);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_Indexed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_347", mod_consts.const_int_pos_347);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_int_pos_347);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGTables", mod_consts.const_str_plain_JPEGTables);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_351", mod_consts.const_int_pos_351);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_351);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPIProxy", mod_consts.const_str_plain_OPIProxy);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPIProxy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGProc", mod_consts.const_str_plain_JPEGProc);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGProc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_513", mod_consts.const_int_pos_513);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_513);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegIFOffset", mod_consts.const_str_plain_JpegIFOffset);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegIFOffset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_514", mod_consts.const_int_pos_514);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_514);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegIFByteCount", mod_consts.const_str_plain_JpegIFByteCount);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegIFByteCount);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_515", mod_consts.const_int_pos_515);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_515);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegRestartInterval", mod_consts.const_str_plain_JpegRestartInterval);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegRestartInterval);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_517", mod_consts.const_int_pos_517);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_517);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegLosslessPredictors", mod_consts.const_str_plain_JpegLosslessPredictors);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegLosslessPredictors);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_518", mod_consts.const_int_pos_518);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_518);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegPointTransforms", mod_consts.const_str_plain_JpegPointTransforms);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegPointTransforms);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_519", mod_consts.const_int_pos_519);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_519);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegQTables", mod_consts.const_str_plain_JpegQTables);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegQTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_520", mod_consts.const_int_pos_520);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_int_pos_520);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegDCTables", mod_consts.const_str_plain_JpegDCTables);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegDCTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_521", mod_consts.const_int_pos_521);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_521);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegACTables", mod_consts.const_str_plain_JpegACTables);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_JpegACTables);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_529", mod_consts.const_int_pos_529);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_529);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrCoefficients", mod_consts.const_str_plain_YCbCrCoefficients);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrCoefficients);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_530", mod_consts.const_int_pos_530);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_530);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrSubSampling", mod_consts.const_str_plain_YCbCrSubSampling);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrSubSampling);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_531", mod_consts.const_int_pos_531);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_531);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrPositioning", mod_consts.const_str_plain_YCbCrPositioning);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrPositioning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_532", mod_consts.const_int_pos_532);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_532);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReferenceBlackWhite", mod_consts.const_str_plain_ReferenceBlackWhite);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReferenceBlackWhite);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_700", mod_consts.const_int_pos_700);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_700);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XMLPacket", mod_consts.const_str_plain_XMLPacket);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_XMLPacket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageFileFormat", mod_consts.const_str_plain_RelatedImageFileFormat);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageFileFormat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4097", mod_consts.const_int_pos_4097);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_4097);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageWidth", mod_consts.const_str_plain_RelatedImageWidth);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4098", mod_consts.const_int_pos_4098);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_4098);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageLength", mod_consts.const_str_plain_RelatedImageLength);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18246", mod_consts.const_int_pos_18246);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_int_pos_18246);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Rating", mod_consts.const_str_plain_Rating);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_Rating);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18249", mod_consts.const_int_pos_18249);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_18249);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RatingPercent", mod_consts.const_str_plain_RatingPercent);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_RatingPercent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32781", mod_consts.const_int_pos_32781);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_32781);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageID", mod_consts.const_str_plain_ImageID);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33421", mod_consts.const_int_pos_33421);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_int_pos_33421);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFARepeatPatternDim", mod_consts.const_str_plain_CFARepeatPatternDim);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFARepeatPatternDim);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33423", mod_consts.const_int_pos_33423);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_33423);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BatteryLevel", mod_consts.const_str_plain_BatteryLevel);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_BatteryLevel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33432", mod_consts.const_int_pos_33432);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_33432);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Copyright", mod_consts.const_str_plain_Copyright);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_Copyright);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33434", mod_consts.const_int_pos_33434);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_33434);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureTime", mod_consts.const_str_plain_ExposureTime);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureTime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33437", mod_consts.const_int_pos_33437);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_int_pos_33437);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FNumber", mod_consts.const_str_plain_FNumber);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_FNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33723", mod_consts.const_int_pos_33723);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_int_pos_33723);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IPTCNAA", mod_consts.const_str_plain_IPTCNAA);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPTCNAA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34377", mod_consts.const_int_pos_34377);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_int_pos_34377);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageResources", mod_consts.const_str_plain_ImageResources);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageResources);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34665", mod_consts.const_int_pos_34665);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_int_pos_34665);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifOffset", mod_consts.const_str_plain_ExifOffset);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifOffset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34675", mod_consts.const_int_pos_34675);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_int_pos_34675);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InterColorProfile", mod_consts.const_str_plain_InterColorProfile);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_InterColorProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34850", mod_consts.const_int_pos_34850);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_int_pos_34850);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureProgram", mod_consts.const_str_plain_ExposureProgram);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureProgram);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34852", mod_consts.const_int_pos_34852);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_int_pos_34852);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SpectralSensitivity", mod_consts.const_str_plain_SpectralSensitivity);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_SpectralSensitivity);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34853", mod_consts.const_int_pos_34853);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_int_pos_34853);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSInfo", mod_consts.const_str_plain_GPSInfo);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34855", mod_consts.const_int_pos_34855);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_int_pos_34855);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeedRatings", mod_consts.const_str_plain_ISOSpeedRatings);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeedRatings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34856", mod_consts.const_int_pos_34856);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_int_pos_34856);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OECF", mod_consts.const_str_plain_OECF);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_OECF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34857", mod_consts.const_int_pos_34857);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_int_pos_34857);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Interlace", mod_consts.const_str_plain_Interlace);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_Interlace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34858", mod_consts.const_int_pos_34858);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_int_pos_34858);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TimeZoneOffset", mod_consts.const_str_plain_TimeZoneOffset);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeZoneOffset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34859", mod_consts.const_int_pos_34859);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_int_pos_34859);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SelfTimerMode", mod_consts.const_str_plain_SelfTimerMode);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelfTimerMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34864", mod_consts.const_int_pos_34864);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_int_pos_34864);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SensitivityType", mod_consts.const_str_plain_SensitivityType);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_SensitivityType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34865", mod_consts.const_int_pos_34865);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_int_pos_34865);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardOutputSensitivity", mod_consts.const_str_plain_StandardOutputSensitivity);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_StandardOutputSensitivity);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34866", mod_consts.const_int_pos_34866);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_int_pos_34866);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RecommendedExposureIndex", mod_consts.const_str_plain_RecommendedExposureIndex);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_RecommendedExposureIndex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34867", mod_consts.const_int_pos_34867);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_int_pos_34867);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeed", mod_consts.const_str_plain_ISOSpeed);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34868", mod_consts.const_int_pos_34868);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_int_pos_34868);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeedLatitudeyyy", mod_consts.const_str_plain_ISOSpeedLatitudeyyy);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeedLatitudeyyy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34869", mod_consts.const_int_pos_34869);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_int_pos_34869);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeedLatitudezzz", mod_consts.const_str_plain_ISOSpeedLatitudezzz);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeedLatitudezzz);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36864", mod_consts.const_int_pos_36864);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_int_pos_36864);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifVersion", mod_consts.const_str_plain_ExifVersion);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36867", mod_consts.const_int_pos_36867);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_int_pos_36867);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTimeOriginal", mod_consts.const_str_plain_DateTimeOriginal);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_DateTimeOriginal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36868", mod_consts.const_int_pos_36868);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_int_pos_36868);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTimeDigitized", mod_consts.const_str_plain_DateTimeDigitized);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_DateTimeDigitized);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36880", mod_consts.const_int_pos_36880);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_int_pos_36880);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OffsetTime", mod_consts.const_str_plain_OffsetTime);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetTime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36881", mod_consts.const_int_pos_36881);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_int_pos_36881);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OffsetTimeOriginal", mod_consts.const_str_plain_OffsetTimeOriginal);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetTimeOriginal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36882", mod_consts.const_int_pos_36882);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_int_pos_36882);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OffsetTimeDigitized", mod_consts.const_str_plain_OffsetTimeDigitized);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetTimeDigitized);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37121", mod_consts.const_int_pos_37121);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_int_pos_37121);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ComponentsConfiguration", mod_consts.const_str_plain_ComponentsConfiguration);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_plain_ComponentsConfiguration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37122", mod_consts.const_int_pos_37122);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_int_pos_37122);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompressedBitsPerPixel", mod_consts.const_str_plain_CompressedBitsPerPixel);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompressedBitsPerPixel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37377", mod_consts.const_int_pos_37377);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_int_pos_37377);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ShutterSpeedValue", mod_consts.const_str_plain_ShutterSpeedValue);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShutterSpeedValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37378", mod_consts.const_int_pos_37378);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_int_pos_37378);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ApertureValue", mod_consts.const_str_plain_ApertureValue);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_plain_ApertureValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37379", mod_consts.const_int_pos_37379);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_int_pos_37379);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrightnessValue", mod_consts.const_str_plain_BrightnessValue);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_plain_BrightnessValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37380", mod_consts.const_int_pos_37380);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_int_pos_37380);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureBiasValue", mod_consts.const_str_plain_ExposureBiasValue);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureBiasValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37381", mod_consts.const_int_pos_37381);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_int_pos_37381);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxApertureValue", mod_consts.const_str_plain_MaxApertureValue);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxApertureValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37382", mod_consts.const_int_pos_37382);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_int_pos_37382);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectDistance", mod_consts.const_str_plain_SubjectDistance);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectDistance);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37383", mod_consts.const_int_pos_37383);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_int_pos_37383);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MeteringMode", mod_consts.const_str_plain_MeteringMode);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_plain_MeteringMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37384", mod_consts.const_int_pos_37384);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_int_pos_37384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LightSource", mod_consts.const_str_plain_LightSource);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_plain_LightSource);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37385", mod_consts.const_int_pos_37385);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_int_pos_37385);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Flash", mod_consts.const_str_plain_Flash);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_plain_Flash);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37386", mod_consts.const_int_pos_37386);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_int_pos_37386);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalLength", mod_consts.const_str_plain_FocalLength);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_plain_FocalLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37389", mod_consts.const_int_pos_37389);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_int_pos_37389);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Noise", mod_consts.const_str_plain_Noise);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_plain_Noise);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37393", mod_consts.const_int_pos_37393);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_int_pos_37393);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageNumber", mod_consts.const_str_plain_ImageNumber);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37394", mod_consts.const_int_pos_37394);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_int_pos_37394);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SecurityClassification", mod_consts.const_str_plain_SecurityClassification);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityClassification);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37395", mod_consts.const_int_pos_37395);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_int_pos_37395);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageHistory", mod_consts.const_str_plain_ImageHistory);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageHistory);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37398", mod_consts.const_int_pos_37398);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_int_pos_37398);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TIFFEPStandardID", mod_consts.const_str_plain_TIFFEPStandardID);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_plain_TIFFEPStandardID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37500", mod_consts.const_int_pos_37500);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_int_pos_37500);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MakerNote", mod_consts.const_str_plain_MakerNote);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_plain_MakerNote);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37510", mod_consts.const_int_pos_37510);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_int_pos_37510);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UserComment", mod_consts.const_str_plain_UserComment);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserComment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37520", mod_consts.const_int_pos_37520);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_int_pos_37520);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubsecTime", mod_consts.const_str_plain_SubsecTime);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubsecTime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37521", mod_consts.const_int_pos_37521);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_int_pos_37521);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubsecTimeOriginal", mod_consts.const_str_plain_SubsecTimeOriginal);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubsecTimeOriginal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37522", mod_consts.const_int_pos_37522);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_int_pos_37522);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubsecTimeDigitized", mod_consts.const_str_plain_SubsecTimeDigitized);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubsecTimeDigitized);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37888", mod_consts.const_int_pos_37888);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_int_pos_37888);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AmbientTemperature", mod_consts.const_str_plain_AmbientTemperature);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_str_plain_AmbientTemperature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37889", mod_consts.const_int_pos_37889);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_int_pos_37889);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Humidity", mod_consts.const_str_plain_Humidity);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_str_plain_Humidity);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37890", mod_consts.const_int_pos_37890);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_int_pos_37890);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Pressure", mod_consts.const_str_plain_Pressure);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pressure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37891", mod_consts.const_int_pos_37891);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_int_pos_37891);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WaterDepth", mod_consts.const_str_plain_WaterDepth);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaterDepth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37892", mod_consts.const_int_pos_37892);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_int_pos_37892);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Acceleration", mod_consts.const_str_plain_Acceleration);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_str_plain_Acceleration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37893", mod_consts.const_int_pos_37893);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_int_pos_37893);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraElevationAngle", mod_consts.const_str_plain_CameraElevationAngle);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_str_plain_CameraElevationAngle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40091", mod_consts.const_int_pos_40091);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_int_pos_40091);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPTitle", mod_consts.const_str_plain_XPTitle);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_str_plain_XPTitle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40092", mod_consts.const_int_pos_40092);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_int_pos_40092);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPComment", mod_consts.const_str_plain_XPComment);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_str_plain_XPComment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40093", mod_consts.const_int_pos_40093);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_int_pos_40093);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPAuthor", mod_consts.const_str_plain_XPAuthor);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_str_plain_XPAuthor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40094", mod_consts.const_int_pos_40094);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_int_pos_40094);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPKeywords", mod_consts.const_str_plain_XPKeywords);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_str_plain_XPKeywords);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40095", mod_consts.const_int_pos_40095);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_int_pos_40095);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPSubject", mod_consts.const_str_plain_XPSubject);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_str_plain_XPSubject);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40960", mod_consts.const_int_pos_40960);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_int_pos_40960);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FlashPixVersion", mod_consts.const_str_plain_FlashPixVersion);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_str_plain_FlashPixVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40961", mod_consts.const_int_pos_40961);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_int_pos_40961);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorSpace", mod_consts.const_str_plain_ColorSpace);
mod_consts_hash[315] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorSpace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40962", mod_consts.const_int_pos_40962);
mod_consts_hash[316] = DEEP_HASH(tstate, mod_consts.const_int_pos_40962);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifImageWidth", mod_consts.const_str_plain_ExifImageWidth);
mod_consts_hash[317] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifImageWidth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40963", mod_consts.const_int_pos_40963);
mod_consts_hash[318] = DEEP_HASH(tstate, mod_consts.const_int_pos_40963);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifImageHeight", mod_consts.const_str_plain_ExifImageHeight);
mod_consts_hash[319] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifImageHeight);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40964", mod_consts.const_int_pos_40964);
mod_consts_hash[320] = DEEP_HASH(tstate, mod_consts.const_int_pos_40964);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedSoundFile", mod_consts.const_str_plain_RelatedSoundFile);
mod_consts_hash[321] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedSoundFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40965", mod_consts.const_int_pos_40965);
mod_consts_hash[322] = DEEP_HASH(tstate, mod_consts.const_int_pos_40965);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifInteroperabilityOffset", mod_consts.const_str_plain_ExifInteroperabilityOffset);
mod_consts_hash[323] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifInteroperabilityOffset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41483", mod_consts.const_int_pos_41483);
mod_consts_hash[324] = DEEP_HASH(tstate, mod_consts.const_int_pos_41483);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FlashEnergy", mod_consts.const_str_plain_FlashEnergy);
mod_consts_hash[325] = DEEP_HASH(tstate, mod_consts.const_str_plain_FlashEnergy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41484", mod_consts.const_int_pos_41484);
mod_consts_hash[326] = DEEP_HASH(tstate, mod_consts.const_int_pos_41484);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SpatialFrequencyResponse", mod_consts.const_str_plain_SpatialFrequencyResponse);
mod_consts_hash[327] = DEEP_HASH(tstate, mod_consts.const_str_plain_SpatialFrequencyResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41486", mod_consts.const_int_pos_41486);
mod_consts_hash[328] = DEEP_HASH(tstate, mod_consts.const_int_pos_41486);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalPlaneXResolution", mod_consts.const_str_plain_FocalPlaneXResolution);
mod_consts_hash[329] = DEEP_HASH(tstate, mod_consts.const_str_plain_FocalPlaneXResolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41487", mod_consts.const_int_pos_41487);
mod_consts_hash[330] = DEEP_HASH(tstate, mod_consts.const_int_pos_41487);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalPlaneYResolution", mod_consts.const_str_plain_FocalPlaneYResolution);
mod_consts_hash[331] = DEEP_HASH(tstate, mod_consts.const_str_plain_FocalPlaneYResolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41488", mod_consts.const_int_pos_41488);
mod_consts_hash[332] = DEEP_HASH(tstate, mod_consts.const_int_pos_41488);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalPlaneResolutionUnit", mod_consts.const_str_plain_FocalPlaneResolutionUnit);
mod_consts_hash[333] = DEEP_HASH(tstate, mod_consts.const_str_plain_FocalPlaneResolutionUnit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41492", mod_consts.const_int_pos_41492);
mod_consts_hash[334] = DEEP_HASH(tstate, mod_consts.const_int_pos_41492);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectLocation", mod_consts.const_str_plain_SubjectLocation);
mod_consts_hash[335] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectLocation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41493", mod_consts.const_int_pos_41493);
mod_consts_hash[336] = DEEP_HASH(tstate, mod_consts.const_int_pos_41493);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureIndex", mod_consts.const_str_plain_ExposureIndex);
mod_consts_hash[337] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureIndex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41495", mod_consts.const_int_pos_41495);
mod_consts_hash[338] = DEEP_HASH(tstate, mod_consts.const_int_pos_41495);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SensingMethod", mod_consts.const_str_plain_SensingMethod);
mod_consts_hash[339] = DEEP_HASH(tstate, mod_consts.const_str_plain_SensingMethod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41728", mod_consts.const_int_pos_41728);
mod_consts_hash[340] = DEEP_HASH(tstate, mod_consts.const_int_pos_41728);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FileSource", mod_consts.const_str_plain_FileSource);
mod_consts_hash[341] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileSource);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41729", mod_consts.const_int_pos_41729);
mod_consts_hash[342] = DEEP_HASH(tstate, mod_consts.const_int_pos_41729);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SceneType", mod_consts.const_str_plain_SceneType);
mod_consts_hash[343] = DEEP_HASH(tstate, mod_consts.const_str_plain_SceneType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41730", mod_consts.const_int_pos_41730);
mod_consts_hash[344] = DEEP_HASH(tstate, mod_consts.const_int_pos_41730);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFAPattern", mod_consts.const_str_plain_CFAPattern);
mod_consts_hash[345] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFAPattern);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41985", mod_consts.const_int_pos_41985);
mod_consts_hash[346] = DEEP_HASH(tstate, mod_consts.const_int_pos_41985);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CustomRendered", mod_consts.const_str_plain_CustomRendered);
mod_consts_hash[347] = DEEP_HASH(tstate, mod_consts.const_str_plain_CustomRendered);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41986", mod_consts.const_int_pos_41986);
mod_consts_hash[348] = DEEP_HASH(tstate, mod_consts.const_int_pos_41986);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureMode", mod_consts.const_str_plain_ExposureMode);
mod_consts_hash[349] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41987", mod_consts.const_int_pos_41987);
mod_consts_hash[350] = DEEP_HASH(tstate, mod_consts.const_int_pos_41987);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhiteBalance", mod_consts.const_str_plain_WhiteBalance);
mod_consts_hash[351] = DEEP_HASH(tstate, mod_consts.const_str_plain_WhiteBalance);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41988", mod_consts.const_int_pos_41988);
mod_consts_hash[352] = DEEP_HASH(tstate, mod_consts.const_int_pos_41988);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DigitalZoomRatio", mod_consts.const_str_plain_DigitalZoomRatio);
mod_consts_hash[353] = DEEP_HASH(tstate, mod_consts.const_str_plain_DigitalZoomRatio);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41989", mod_consts.const_int_pos_41989);
mod_consts_hash[354] = DEEP_HASH(tstate, mod_consts.const_int_pos_41989);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalLengthIn35mmFilm", mod_consts.const_str_plain_FocalLengthIn35mmFilm);
mod_consts_hash[355] = DEEP_HASH(tstate, mod_consts.const_str_plain_FocalLengthIn35mmFilm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41990", mod_consts.const_int_pos_41990);
mod_consts_hash[356] = DEEP_HASH(tstate, mod_consts.const_int_pos_41990);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SceneCaptureType", mod_consts.const_str_plain_SceneCaptureType);
mod_consts_hash[357] = DEEP_HASH(tstate, mod_consts.const_str_plain_SceneCaptureType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41991", mod_consts.const_int_pos_41991);
mod_consts_hash[358] = DEEP_HASH(tstate, mod_consts.const_int_pos_41991);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GainControl", mod_consts.const_str_plain_GainControl);
mod_consts_hash[359] = DEEP_HASH(tstate, mod_consts.const_str_plain_GainControl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41992", mod_consts.const_int_pos_41992);
mod_consts_hash[360] = DEEP_HASH(tstate, mod_consts.const_int_pos_41992);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Contrast", mod_consts.const_str_plain_Contrast);
mod_consts_hash[361] = DEEP_HASH(tstate, mod_consts.const_str_plain_Contrast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41993", mod_consts.const_int_pos_41993);
mod_consts_hash[362] = DEEP_HASH(tstate, mod_consts.const_int_pos_41993);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Saturation", mod_consts.const_str_plain_Saturation);
mod_consts_hash[363] = DEEP_HASH(tstate, mod_consts.const_str_plain_Saturation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41994", mod_consts.const_int_pos_41994);
mod_consts_hash[364] = DEEP_HASH(tstate, mod_consts.const_int_pos_41994);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Sharpness", mod_consts.const_str_plain_Sharpness);
mod_consts_hash[365] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sharpness);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41995", mod_consts.const_int_pos_41995);
mod_consts_hash[366] = DEEP_HASH(tstate, mod_consts.const_int_pos_41995);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeviceSettingDescription", mod_consts.const_str_plain_DeviceSettingDescription);
mod_consts_hash[367] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeviceSettingDescription);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41996", mod_consts.const_int_pos_41996);
mod_consts_hash[368] = DEEP_HASH(tstate, mod_consts.const_int_pos_41996);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectDistanceRange", mod_consts.const_str_plain_SubjectDistanceRange);
mod_consts_hash[369] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectDistanceRange);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42016", mod_consts.const_int_pos_42016);
mod_consts_hash[370] = DEEP_HASH(tstate, mod_consts.const_int_pos_42016);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageUniqueID", mod_consts.const_str_plain_ImageUniqueID);
mod_consts_hash[371] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageUniqueID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42032", mod_consts.const_int_pos_42032);
mod_consts_hash[372] = DEEP_HASH(tstate, mod_consts.const_int_pos_42032);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraOwnerName", mod_consts.const_str_plain_CameraOwnerName);
mod_consts_hash[373] = DEEP_HASH(tstate, mod_consts.const_str_plain_CameraOwnerName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42033", mod_consts.const_int_pos_42033);
mod_consts_hash[374] = DEEP_HASH(tstate, mod_consts.const_int_pos_42033);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BodySerialNumber", mod_consts.const_str_plain_BodySerialNumber);
mod_consts_hash[375] = DEEP_HASH(tstate, mod_consts.const_str_plain_BodySerialNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42034", mod_consts.const_int_pos_42034);
mod_consts_hash[376] = DEEP_HASH(tstate, mod_consts.const_int_pos_42034);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensSpecification", mod_consts.const_str_plain_LensSpecification);
mod_consts_hash[377] = DEEP_HASH(tstate, mod_consts.const_str_plain_LensSpecification);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42035", mod_consts.const_int_pos_42035);
mod_consts_hash[378] = DEEP_HASH(tstate, mod_consts.const_int_pos_42035);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensMake", mod_consts.const_str_plain_LensMake);
mod_consts_hash[379] = DEEP_HASH(tstate, mod_consts.const_str_plain_LensMake);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42036", mod_consts.const_int_pos_42036);
mod_consts_hash[380] = DEEP_HASH(tstate, mod_consts.const_int_pos_42036);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensModel", mod_consts.const_str_plain_LensModel);
mod_consts_hash[381] = DEEP_HASH(tstate, mod_consts.const_str_plain_LensModel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42037", mod_consts.const_int_pos_42037);
mod_consts_hash[382] = DEEP_HASH(tstate, mod_consts.const_int_pos_42037);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensSerialNumber", mod_consts.const_str_plain_LensSerialNumber);
mod_consts_hash[383] = DEEP_HASH(tstate, mod_consts.const_str_plain_LensSerialNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42080", mod_consts.const_int_pos_42080);
mod_consts_hash[384] = DEEP_HASH(tstate, mod_consts.const_int_pos_42080);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompositeImage", mod_consts.const_str_plain_CompositeImage);
mod_consts_hash[385] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompositeImage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42081", mod_consts.const_int_pos_42081);
mod_consts_hash[386] = DEEP_HASH(tstate, mod_consts.const_int_pos_42081);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompositeImageCount", mod_consts.const_str_plain_CompositeImageCount);
mod_consts_hash[387] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompositeImageCount);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42082", mod_consts.const_int_pos_42082);
mod_consts_hash[388] = DEEP_HASH(tstate, mod_consts.const_int_pos_42082);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompositeImageExposureTimes", mod_consts.const_str_plain_CompositeImageExposureTimes);
mod_consts_hash[389] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompositeImageExposureTimes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42240", mod_consts.const_int_pos_42240);
mod_consts_hash[390] = DEEP_HASH(tstate, mod_consts.const_int_pos_42240);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Gamma", mod_consts.const_str_plain_Gamma);
mod_consts_hash[391] = DEEP_HASH(tstate, mod_consts.const_str_plain_Gamma);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50341", mod_consts.const_int_pos_50341);
mod_consts_hash[392] = DEEP_HASH(tstate, mod_consts.const_int_pos_50341);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrintImageMatching", mod_consts.const_str_plain_PrintImageMatching);
mod_consts_hash[393] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrintImageMatching);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50706", mod_consts.const_int_pos_50706);
mod_consts_hash[394] = DEEP_HASH(tstate, mod_consts.const_int_pos_50706);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNGVersion", mod_consts.const_str_plain_DNGVersion);
mod_consts_hash[395] = DEEP_HASH(tstate, mod_consts.const_str_plain_DNGVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50707", mod_consts.const_int_pos_50707);
mod_consts_hash[396] = DEEP_HASH(tstate, mod_consts.const_int_pos_50707);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNGBackwardVersion", mod_consts.const_str_plain_DNGBackwardVersion);
mod_consts_hash[397] = DEEP_HASH(tstate, mod_consts.const_str_plain_DNGBackwardVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50708", mod_consts.const_int_pos_50708);
mod_consts_hash[398] = DEEP_HASH(tstate, mod_consts.const_int_pos_50708);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UniqueCameraModel", mod_consts.const_str_plain_UniqueCameraModel);
mod_consts_hash[399] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueCameraModel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50709", mod_consts.const_int_pos_50709);
mod_consts_hash[400] = DEEP_HASH(tstate, mod_consts.const_int_pos_50709);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocalizedCameraModel", mod_consts.const_str_plain_LocalizedCameraModel);
mod_consts_hash[401] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalizedCameraModel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50710", mod_consts.const_int_pos_50710);
mod_consts_hash[402] = DEEP_HASH(tstate, mod_consts.const_int_pos_50710);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFAPlaneColor", mod_consts.const_str_plain_CFAPlaneColor);
mod_consts_hash[403] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFAPlaneColor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50711", mod_consts.const_int_pos_50711);
mod_consts_hash[404] = DEEP_HASH(tstate, mod_consts.const_int_pos_50711);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFALayout", mod_consts.const_str_plain_CFALayout);
mod_consts_hash[405] = DEEP_HASH(tstate, mod_consts.const_str_plain_CFALayout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50712", mod_consts.const_int_pos_50712);
mod_consts_hash[406] = DEEP_HASH(tstate, mod_consts.const_int_pos_50712);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LinearizationTable", mod_consts.const_str_plain_LinearizationTable);
mod_consts_hash[407] = DEEP_HASH(tstate, mod_consts.const_str_plain_LinearizationTable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50713", mod_consts.const_int_pos_50713);
mod_consts_hash[408] = DEEP_HASH(tstate, mod_consts.const_int_pos_50713);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevelRepeatDim", mod_consts.const_str_plain_BlackLevelRepeatDim);
mod_consts_hash[409] = DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevelRepeatDim);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50714", mod_consts.const_int_pos_50714);
mod_consts_hash[410] = DEEP_HASH(tstate, mod_consts.const_int_pos_50714);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevel", mod_consts.const_str_plain_BlackLevel);
mod_consts_hash[411] = DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50715", mod_consts.const_int_pos_50715);
mod_consts_hash[412] = DEEP_HASH(tstate, mod_consts.const_int_pos_50715);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevelDeltaH", mod_consts.const_str_plain_BlackLevelDeltaH);
mod_consts_hash[413] = DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevelDeltaH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50716", mod_consts.const_int_pos_50716);
mod_consts_hash[414] = DEEP_HASH(tstate, mod_consts.const_int_pos_50716);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevelDeltaV", mod_consts.const_str_plain_BlackLevelDeltaV);
mod_consts_hash[415] = DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevelDeltaV);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50717", mod_consts.const_int_pos_50717);
mod_consts_hash[416] = DEEP_HASH(tstate, mod_consts.const_int_pos_50717);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhiteLevel", mod_consts.const_str_plain_WhiteLevel);
mod_consts_hash[417] = DEEP_HASH(tstate, mod_consts.const_str_plain_WhiteLevel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50718", mod_consts.const_int_pos_50718);
mod_consts_hash[418] = DEEP_HASH(tstate, mod_consts.const_int_pos_50718);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DefaultScale", mod_consts.const_str_plain_DefaultScale);
mod_consts_hash[419] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultScale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50719", mod_consts.const_int_pos_50719);
mod_consts_hash[420] = DEEP_HASH(tstate, mod_consts.const_int_pos_50719);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DefaultCropOrigin", mod_consts.const_str_plain_DefaultCropOrigin);
mod_consts_hash[421] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultCropOrigin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50720", mod_consts.const_int_pos_50720);
mod_consts_hash[422] = DEEP_HASH(tstate, mod_consts.const_int_pos_50720);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DefaultCropSize", mod_consts.const_str_plain_DefaultCropSize);
mod_consts_hash[423] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultCropSize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50721", mod_consts.const_int_pos_50721);
mod_consts_hash[424] = DEEP_HASH(tstate, mod_consts.const_int_pos_50721);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMatrix1", mod_consts.const_str_plain_ColorMatrix1);
mod_consts_hash[425] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMatrix1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50722", mod_consts.const_int_pos_50722);
mod_consts_hash[426] = DEEP_HASH(tstate, mod_consts.const_int_pos_50722);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMatrix2", mod_consts.const_str_plain_ColorMatrix2);
mod_consts_hash[427] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMatrix2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50723", mod_consts.const_int_pos_50723);
mod_consts_hash[428] = DEEP_HASH(tstate, mod_consts.const_int_pos_50723);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraCalibration1", mod_consts.const_str_plain_CameraCalibration1);
mod_consts_hash[429] = DEEP_HASH(tstate, mod_consts.const_str_plain_CameraCalibration1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50724", mod_consts.const_int_pos_50724);
mod_consts_hash[430] = DEEP_HASH(tstate, mod_consts.const_int_pos_50724);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraCalibration2", mod_consts.const_str_plain_CameraCalibration2);
mod_consts_hash[431] = DEEP_HASH(tstate, mod_consts.const_str_plain_CameraCalibration2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50725", mod_consts.const_int_pos_50725);
mod_consts_hash[432] = DEEP_HASH(tstate, mod_consts.const_int_pos_50725);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReductionMatrix1", mod_consts.const_str_plain_ReductionMatrix1);
mod_consts_hash[433] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReductionMatrix1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50726", mod_consts.const_int_pos_50726);
mod_consts_hash[434] = DEEP_HASH(tstate, mod_consts.const_int_pos_50726);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReductionMatrix2", mod_consts.const_str_plain_ReductionMatrix2);
mod_consts_hash[435] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReductionMatrix2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50727", mod_consts.const_int_pos_50727);
mod_consts_hash[436] = DEEP_HASH(tstate, mod_consts.const_int_pos_50727);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AnalogBalance", mod_consts.const_str_plain_AnalogBalance);
mod_consts_hash[437] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnalogBalance);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50728", mod_consts.const_int_pos_50728);
mod_consts_hash[438] = DEEP_HASH(tstate, mod_consts.const_int_pos_50728);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotNeutral", mod_consts.const_str_plain_AsShotNeutral);
mod_consts_hash[439] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotNeutral);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50729", mod_consts.const_int_pos_50729);
mod_consts_hash[440] = DEEP_HASH(tstate, mod_consts.const_int_pos_50729);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotWhiteXY", mod_consts.const_str_plain_AsShotWhiteXY);
mod_consts_hash[441] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotWhiteXY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50730", mod_consts.const_int_pos_50730);
mod_consts_hash[442] = DEEP_HASH(tstate, mod_consts.const_int_pos_50730);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineExposure", mod_consts.const_str_plain_BaselineExposure);
mod_consts_hash[443] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineExposure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50731", mod_consts.const_int_pos_50731);
mod_consts_hash[444] = DEEP_HASH(tstate, mod_consts.const_int_pos_50731);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineNoise", mod_consts.const_str_plain_BaselineNoise);
mod_consts_hash[445] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineNoise);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50732", mod_consts.const_int_pos_50732);
mod_consts_hash[446] = DEEP_HASH(tstate, mod_consts.const_int_pos_50732);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineSharpness", mod_consts.const_str_plain_BaselineSharpness);
mod_consts_hash[447] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineSharpness);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50733", mod_consts.const_int_pos_50733);
mod_consts_hash[448] = DEEP_HASH(tstate, mod_consts.const_int_pos_50733);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BayerGreenSplit", mod_consts.const_str_plain_BayerGreenSplit);
mod_consts_hash[449] = DEEP_HASH(tstate, mod_consts.const_str_plain_BayerGreenSplit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50734", mod_consts.const_int_pos_50734);
mod_consts_hash[450] = DEEP_HASH(tstate, mod_consts.const_int_pos_50734);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LinearResponseLimit", mod_consts.const_str_plain_LinearResponseLimit);
mod_consts_hash[451] = DEEP_HASH(tstate, mod_consts.const_str_plain_LinearResponseLimit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50735", mod_consts.const_int_pos_50735);
mod_consts_hash[452] = DEEP_HASH(tstate, mod_consts.const_int_pos_50735);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraSerialNumber", mod_consts.const_str_plain_CameraSerialNumber);
mod_consts_hash[453] = DEEP_HASH(tstate, mod_consts.const_str_plain_CameraSerialNumber);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50736", mod_consts.const_int_pos_50736);
mod_consts_hash[454] = DEEP_HASH(tstate, mod_consts.const_int_pos_50736);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensInfo", mod_consts.const_str_plain_LensInfo);
mod_consts_hash[455] = DEEP_HASH(tstate, mod_consts.const_str_plain_LensInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50737", mod_consts.const_int_pos_50737);
mod_consts_hash[456] = DEEP_HASH(tstate, mod_consts.const_int_pos_50737);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ChromaBlurRadius", mod_consts.const_str_plain_ChromaBlurRadius);
mod_consts_hash[457] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChromaBlurRadius);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50738", mod_consts.const_int_pos_50738);
mod_consts_hash[458] = DEEP_HASH(tstate, mod_consts.const_int_pos_50738);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AntiAliasStrength", mod_consts.const_str_plain_AntiAliasStrength);
mod_consts_hash[459] = DEEP_HASH(tstate, mod_consts.const_str_plain_AntiAliasStrength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50739", mod_consts.const_int_pos_50739);
mod_consts_hash[460] = DEEP_HASH(tstate, mod_consts.const_int_pos_50739);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ShadowScale", mod_consts.const_str_plain_ShadowScale);
mod_consts_hash[461] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShadowScale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50740", mod_consts.const_int_pos_50740);
mod_consts_hash[462] = DEEP_HASH(tstate, mod_consts.const_int_pos_50740);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNGPrivateData", mod_consts.const_str_plain_DNGPrivateData);
mod_consts_hash[463] = DEEP_HASH(tstate, mod_consts.const_str_plain_DNGPrivateData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50741", mod_consts.const_int_pos_50741);
mod_consts_hash[464] = DEEP_HASH(tstate, mod_consts.const_int_pos_50741);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MakerNoteSafety", mod_consts.const_str_plain_MakerNoteSafety);
mod_consts_hash[465] = DEEP_HASH(tstate, mod_consts.const_str_plain_MakerNoteSafety);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50778", mod_consts.const_int_pos_50778);
mod_consts_hash[466] = DEEP_HASH(tstate, mod_consts.const_int_pos_50778);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CalibrationIlluminant1", mod_consts.const_str_plain_CalibrationIlluminant1);
mod_consts_hash[467] = DEEP_HASH(tstate, mod_consts.const_str_plain_CalibrationIlluminant1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50779", mod_consts.const_int_pos_50779);
mod_consts_hash[468] = DEEP_HASH(tstate, mod_consts.const_int_pos_50779);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CalibrationIlluminant2", mod_consts.const_str_plain_CalibrationIlluminant2);
mod_consts_hash[469] = DEEP_HASH(tstate, mod_consts.const_str_plain_CalibrationIlluminant2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50780", mod_consts.const_int_pos_50780);
mod_consts_hash[470] = DEEP_HASH(tstate, mod_consts.const_int_pos_50780);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BestQualityScale", mod_consts.const_str_plain_BestQualityScale);
mod_consts_hash[471] = DEEP_HASH(tstate, mod_consts.const_str_plain_BestQualityScale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50781", mod_consts.const_int_pos_50781);
mod_consts_hash[472] = DEEP_HASH(tstate, mod_consts.const_int_pos_50781);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RawDataUniqueID", mod_consts.const_str_plain_RawDataUniqueID);
mod_consts_hash[473] = DEEP_HASH(tstate, mod_consts.const_str_plain_RawDataUniqueID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50827", mod_consts.const_int_pos_50827);
mod_consts_hash[474] = DEEP_HASH(tstate, mod_consts.const_int_pos_50827);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OriginalRawFileName", mod_consts.const_str_plain_OriginalRawFileName);
mod_consts_hash[475] = DEEP_HASH(tstate, mod_consts.const_str_plain_OriginalRawFileName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50828", mod_consts.const_int_pos_50828);
mod_consts_hash[476] = DEEP_HASH(tstate, mod_consts.const_int_pos_50828);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OriginalRawFileData", mod_consts.const_str_plain_OriginalRawFileData);
mod_consts_hash[477] = DEEP_HASH(tstate, mod_consts.const_str_plain_OriginalRawFileData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50829", mod_consts.const_int_pos_50829);
mod_consts_hash[478] = DEEP_HASH(tstate, mod_consts.const_int_pos_50829);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ActiveArea", mod_consts.const_str_plain_ActiveArea);
mod_consts_hash[479] = DEEP_HASH(tstate, mod_consts.const_str_plain_ActiveArea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50830", mod_consts.const_int_pos_50830);
mod_consts_hash[480] = DEEP_HASH(tstate, mod_consts.const_int_pos_50830);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaskedAreas", mod_consts.const_str_plain_MaskedAreas);
mod_consts_hash[481] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaskedAreas);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50831", mod_consts.const_int_pos_50831);
mod_consts_hash[482] = DEEP_HASH(tstate, mod_consts.const_int_pos_50831);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotICCProfile", mod_consts.const_str_plain_AsShotICCProfile);
mod_consts_hash[483] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotICCProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50832", mod_consts.const_int_pos_50832);
mod_consts_hash[484] = DEEP_HASH(tstate, mod_consts.const_int_pos_50832);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotPreProfileMatrix", mod_consts.const_str_plain_AsShotPreProfileMatrix);
mod_consts_hash[485] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotPreProfileMatrix);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50833", mod_consts.const_int_pos_50833);
mod_consts_hash[486] = DEEP_HASH(tstate, mod_consts.const_int_pos_50833);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CurrentICCProfile", mod_consts.const_str_plain_CurrentICCProfile);
mod_consts_hash[487] = DEEP_HASH(tstate, mod_consts.const_str_plain_CurrentICCProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50834", mod_consts.const_int_pos_50834);
mod_consts_hash[488] = DEEP_HASH(tstate, mod_consts.const_int_pos_50834);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CurrentPreProfileMatrix", mod_consts.const_str_plain_CurrentPreProfileMatrix);
mod_consts_hash[489] = DEEP_HASH(tstate, mod_consts.const_str_plain_CurrentPreProfileMatrix);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50879", mod_consts.const_int_pos_50879);
mod_consts_hash[490] = DEEP_HASH(tstate, mod_consts.const_int_pos_50879);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorimetricReference", mod_consts.const_str_plain_ColorimetricReference);
mod_consts_hash[491] = DEEP_HASH(tstate, mod_consts.const_str_plain_ColorimetricReference);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50931", mod_consts.const_int_pos_50931);
mod_consts_hash[492] = DEEP_HASH(tstate, mod_consts.const_int_pos_50931);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraCalibrationSignature", mod_consts.const_str_plain_CameraCalibrationSignature);
mod_consts_hash[493] = DEEP_HASH(tstate, mod_consts.const_str_plain_CameraCalibrationSignature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50932", mod_consts.const_int_pos_50932);
mod_consts_hash[494] = DEEP_HASH(tstate, mod_consts.const_int_pos_50932);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileCalibrationSignature", mod_consts.const_str_plain_ProfileCalibrationSignature);
mod_consts_hash[495] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileCalibrationSignature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50934", mod_consts.const_int_pos_50934);
mod_consts_hash[496] = DEEP_HASH(tstate, mod_consts.const_int_pos_50934);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotProfileName", mod_consts.const_str_plain_AsShotProfileName);
mod_consts_hash[497] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotProfileName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50935", mod_consts.const_int_pos_50935);
mod_consts_hash[498] = DEEP_HASH(tstate, mod_consts.const_int_pos_50935);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NoiseReductionApplied", mod_consts.const_str_plain_NoiseReductionApplied);
mod_consts_hash[499] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoiseReductionApplied);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50936", mod_consts.const_int_pos_50936);
mod_consts_hash[500] = DEEP_HASH(tstate, mod_consts.const_int_pos_50936);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileName", mod_consts.const_str_plain_ProfileName);
mod_consts_hash[501] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50937", mod_consts.const_int_pos_50937);
mod_consts_hash[502] = DEEP_HASH(tstate, mod_consts.const_int_pos_50937);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileHueSatMapDims", mod_consts.const_str_plain_ProfileHueSatMapDims);
mod_consts_hash[503] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileHueSatMapDims);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50938", mod_consts.const_int_pos_50938);
mod_consts_hash[504] = DEEP_HASH(tstate, mod_consts.const_int_pos_50938);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileHueSatMapData1", mod_consts.const_str_plain_ProfileHueSatMapData1);
mod_consts_hash[505] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileHueSatMapData1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50939", mod_consts.const_int_pos_50939);
mod_consts_hash[506] = DEEP_HASH(tstate, mod_consts.const_int_pos_50939);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileHueSatMapData2", mod_consts.const_str_plain_ProfileHueSatMapData2);
mod_consts_hash[507] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileHueSatMapData2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50940", mod_consts.const_int_pos_50940);
mod_consts_hash[508] = DEEP_HASH(tstate, mod_consts.const_int_pos_50940);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileToneCurve", mod_consts.const_str_plain_ProfileToneCurve);
mod_consts_hash[509] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileToneCurve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50941", mod_consts.const_int_pos_50941);
mod_consts_hash[510] = DEEP_HASH(tstate, mod_consts.const_int_pos_50941);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileEmbedPolicy", mod_consts.const_str_plain_ProfileEmbedPolicy);
mod_consts_hash[511] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileEmbedPolicy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50942", mod_consts.const_int_pos_50942);
mod_consts_hash[512] = DEEP_HASH(tstate, mod_consts.const_int_pos_50942);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileCopyright", mod_consts.const_str_plain_ProfileCopyright);
mod_consts_hash[513] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileCopyright);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50964", mod_consts.const_int_pos_50964);
mod_consts_hash[514] = DEEP_HASH(tstate, mod_consts.const_int_pos_50964);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ForwardMatrix1", mod_consts.const_str_plain_ForwardMatrix1);
mod_consts_hash[515] = DEEP_HASH(tstate, mod_consts.const_str_plain_ForwardMatrix1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50965", mod_consts.const_int_pos_50965);
mod_consts_hash[516] = DEEP_HASH(tstate, mod_consts.const_int_pos_50965);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ForwardMatrix2", mod_consts.const_str_plain_ForwardMatrix2);
mod_consts_hash[517] = DEEP_HASH(tstate, mod_consts.const_str_plain_ForwardMatrix2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50966", mod_consts.const_int_pos_50966);
mod_consts_hash[518] = DEEP_HASH(tstate, mod_consts.const_int_pos_50966);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewApplicationName", mod_consts.const_str_plain_PreviewApplicationName);
mod_consts_hash[519] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewApplicationName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50967", mod_consts.const_int_pos_50967);
mod_consts_hash[520] = DEEP_HASH(tstate, mod_consts.const_int_pos_50967);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewApplicationVersion", mod_consts.const_str_plain_PreviewApplicationVersion);
mod_consts_hash[521] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewApplicationVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50968", mod_consts.const_int_pos_50968);
mod_consts_hash[522] = DEEP_HASH(tstate, mod_consts.const_int_pos_50968);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewSettingsName", mod_consts.const_str_plain_PreviewSettingsName);
mod_consts_hash[523] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewSettingsName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50969", mod_consts.const_int_pos_50969);
mod_consts_hash[524] = DEEP_HASH(tstate, mod_consts.const_int_pos_50969);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewSettingsDigest", mod_consts.const_str_plain_PreviewSettingsDigest);
mod_consts_hash[525] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewSettingsDigest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50970", mod_consts.const_int_pos_50970);
mod_consts_hash[526] = DEEP_HASH(tstate, mod_consts.const_int_pos_50970);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewColorSpace", mod_consts.const_str_plain_PreviewColorSpace);
mod_consts_hash[527] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewColorSpace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50971", mod_consts.const_int_pos_50971);
mod_consts_hash[528] = DEEP_HASH(tstate, mod_consts.const_int_pos_50971);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewDateTime", mod_consts.const_str_plain_PreviewDateTime);
mod_consts_hash[529] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewDateTime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50972", mod_consts.const_int_pos_50972);
mod_consts_hash[530] = DEEP_HASH(tstate, mod_consts.const_int_pos_50972);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RawImageDigest", mod_consts.const_str_plain_RawImageDigest);
mod_consts_hash[531] = DEEP_HASH(tstate, mod_consts.const_str_plain_RawImageDigest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50973", mod_consts.const_int_pos_50973);
mod_consts_hash[532] = DEEP_HASH(tstate, mod_consts.const_int_pos_50973);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OriginalRawFileDigest", mod_consts.const_str_plain_OriginalRawFileDigest);
mod_consts_hash[533] = DEEP_HASH(tstate, mod_consts.const_str_plain_OriginalRawFileDigest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50974", mod_consts.const_int_pos_50974);
mod_consts_hash[534] = DEEP_HASH(tstate, mod_consts.const_int_pos_50974);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubTileBlockSize", mod_consts.const_str_plain_SubTileBlockSize);
mod_consts_hash[535] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubTileBlockSize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50975", mod_consts.const_int_pos_50975);
mod_consts_hash[536] = DEEP_HASH(tstate, mod_consts.const_int_pos_50975);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RowInterleaveFactor", mod_consts.const_str_plain_RowInterleaveFactor);
mod_consts_hash[537] = DEEP_HASH(tstate, mod_consts.const_str_plain_RowInterleaveFactor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50981", mod_consts.const_int_pos_50981);
mod_consts_hash[538] = DEEP_HASH(tstate, mod_consts.const_int_pos_50981);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileLookTableDims", mod_consts.const_str_plain_ProfileLookTableDims);
mod_consts_hash[539] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileLookTableDims);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50982", mod_consts.const_int_pos_50982);
mod_consts_hash[540] = DEEP_HASH(tstate, mod_consts.const_int_pos_50982);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileLookTableData", mod_consts.const_str_plain_ProfileLookTableData);
mod_consts_hash[541] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileLookTableData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51008", mod_consts.const_int_pos_51008);
mod_consts_hash[542] = DEEP_HASH(tstate, mod_consts.const_int_pos_51008);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpcodeList1", mod_consts.const_str_plain_OpcodeList1);
mod_consts_hash[543] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpcodeList1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51009", mod_consts.const_int_pos_51009);
mod_consts_hash[544] = DEEP_HASH(tstate, mod_consts.const_int_pos_51009);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpcodeList2", mod_consts.const_str_plain_OpcodeList2);
mod_consts_hash[545] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpcodeList2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51022", mod_consts.const_int_pos_51022);
mod_consts_hash[546] = DEEP_HASH(tstate, mod_consts.const_int_pos_51022);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpcodeList3", mod_consts.const_str_plain_OpcodeList3);
mod_consts_hash[547] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpcodeList3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51041", mod_consts.const_int_pos_51041);
mod_consts_hash[548] = DEEP_HASH(tstate, mod_consts.const_int_pos_51041);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NoiseProfile", mod_consts.const_str_plain_NoiseProfile);
mod_consts_hash[549] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoiseProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51044", mod_consts.const_int_pos_51044);
mod_consts_hash[550] = DEEP_HASH(tstate, mod_consts.const_int_pos_51044);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FrameRate", mod_consts.const_str_plain_FrameRate);
mod_consts_hash[551] = DEEP_HASH(tstate, mod_consts.const_str_plain_FrameRate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[552] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[553] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[554] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b971225a09442fce603c448aedb82c94", mod_consts.const_dict_b971225a09442fce603c448aedb82c94);
mod_consts_hash[555] = DEEP_HASH(tstate, mod_consts.const_dict_b971225a09442fce603c448aedb82c94);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c", mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c);
mod_consts_hash[556] = DEEP_HASH(tstate, mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e", mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e);
mod_consts_hash[557] = DEEP_HASH(tstate, mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee", mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee);
mod_consts_hash[558] = DEEP_HASH(tstate, mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea", mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea);
mod_consts_hash[559] = DEEP_HASH(tstate, mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621", mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621);
mod_consts_hash[560] = DEEP_HASH(tstate, mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS", mod_consts.const_str_plain_TAGS);
mod_consts_hash[561] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPS", mod_consts.const_str_plain_GPS);
mod_consts_hash[562] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_307", mod_consts.const_int_pos_307);
mod_consts_hash[563] = DEEP_HASH(tstate, mod_consts.const_int_pos_307);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSVersionID", mod_consts.const_str_plain_GPSVersionID);
mod_consts_hash[564] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSVersionID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitudeRef", mod_consts.const_str_plain_GPSLatitudeRef);
mod_consts_hash[565] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[566] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitude", mod_consts.const_str_plain_GPSLatitude);
mod_consts_hash[567] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[568] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitudeRef", mod_consts.const_str_plain_GPSLongitudeRef);
mod_consts_hash[569] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[570] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitude", mod_consts.const_str_plain_GPSLongitude);
mod_consts_hash[571] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[572] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitudeRef", mod_consts.const_str_plain_GPSAltitudeRef);
mod_consts_hash[573] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[574] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitude", mod_consts.const_str_plain_GPSAltitude);
mod_consts_hash[575] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
mod_consts_hash[576] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTimeStamp", mod_consts.const_str_plain_GPSTimeStamp);
mod_consts_hash[577] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTimeStamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[578] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSatellites", mod_consts.const_str_plain_GPSSatellites);
mod_consts_hash[579] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSatellites);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
mod_consts_hash[580] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSStatus", mod_consts.const_str_plain_GPSStatus);
mod_consts_hash[581] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSStatus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
mod_consts_hash[582] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMeasureMode", mod_consts.const_str_plain_GPSMeasureMode);
mod_consts_hash[583] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMeasureMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDOP", mod_consts.const_str_plain_GPSDOP);
mod_consts_hash[584] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
mod_consts_hash[585] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeedRef", mod_consts.const_str_plain_GPSSpeedRef);
mod_consts_hash[586] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeedRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
mod_consts_hash[587] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeed", mod_consts.const_str_plain_GPSSpeed);
mod_consts_hash[588] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
mod_consts_hash[589] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrackRef", mod_consts.const_str_plain_GPSTrackRef);
mod_consts_hash[590] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrackRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_15", mod_consts.const_int_pos_15);
mod_consts_hash[591] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrack", mod_consts.const_str_plain_GPSTrack);
mod_consts_hash[592] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrack);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[593] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirectionRef", mod_consts.const_str_plain_GPSImgDirectionRef);
mod_consts_hash[594] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirectionRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
mod_consts_hash[595] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirection", mod_consts.const_str_plain_GPSImgDirection);
mod_consts_hash[596] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[597] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMapDatum", mod_consts.const_str_plain_GPSMapDatum);
mod_consts_hash[598] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMapDatum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19", mod_consts.const_int_pos_19);
mod_consts_hash[599] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitudeRef", mod_consts.const_str_plain_GPSDestLatitudeRef);
mod_consts_hash[600] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[601] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitude", mod_consts.const_str_plain_GPSDestLatitude);
mod_consts_hash[602] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
mod_consts_hash[603] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitudeRef", mod_consts.const_str_plain_GPSDestLongitudeRef);
mod_consts_hash[604] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitudeRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitude", mod_consts.const_str_plain_GPSDestLongitude);
mod_consts_hash[605] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitude);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_23", mod_consts.const_int_pos_23);
mod_consts_hash[606] = DEEP_HASH(tstate, mod_consts.const_int_pos_23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearingRef", mod_consts.const_str_plain_GPSDestBearingRef);
mod_consts_hash[607] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearingRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
mod_consts_hash[608] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearing", mod_consts.const_str_plain_GPSDestBearing);
mod_consts_hash[609] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
mod_consts_hash[610] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistanceRef", mod_consts.const_str_plain_GPSDestDistanceRef);
mod_consts_hash[611] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistanceRef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
mod_consts_hash[612] = DEEP_HASH(tstate, mod_consts.const_int_pos_26);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistance", mod_consts.const_str_plain_GPSDestDistance);
mod_consts_hash[613] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistance);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
mod_consts_hash[614] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSProcessingMethod", mod_consts.const_str_plain_GPSProcessingMethod);
mod_consts_hash[615] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSProcessingMethod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
mod_consts_hash[616] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAreaInformation", mod_consts.const_str_plain_GPSAreaInformation);
mod_consts_hash[617] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAreaInformation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_29", mod_consts.const_int_pos_29);
mod_consts_hash[618] = DEEP_HASH(tstate, mod_consts.const_int_pos_29);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDateStamp", mod_consts.const_str_plain_GPSDateStamp);
mod_consts_hash[619] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDateStamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
mod_consts_hash[620] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDifferential", mod_consts.const_str_plain_GPSDifferential);
mod_consts_hash[621] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDifferential);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
mod_consts_hash[622] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSHPositioningError", mod_consts.const_str_plain_GPSHPositioningError);
mod_consts_hash[623] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSHPositioningError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTAGS", mod_consts.const_str_plain_GPSTAGS);
mod_consts_hash[624] = DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTAGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Interop", mod_consts.const_str_plain_Interop);
mod_consts_hash[625] = DEEP_HASH(tstate, mod_consts.const_str_plain_Interop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropVersion", mod_consts.const_str_plain_InteropVersion);
mod_consts_hash[626] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteropVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageHeight", mod_consts.const_str_plain_RelatedImageHeight);
mod_consts_hash[627] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageHeight);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IFD", mod_consts.const_str_plain_IFD);
mod_consts_hash[628] = DEEP_HASH(tstate, mod_consts.const_str_plain_IFD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_354", mod_consts.const_int_pos_354);
mod_consts_hash[629] = DEEP_HASH(tstate, mod_consts.const_int_pos_354);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exif", mod_consts.const_str_plain_Exif);
mod_consts_hash[630] = DEEP_HASH(tstate, mod_consts.const_str_plain_Exif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Makernote", mod_consts.const_str_plain_Makernote);
mod_consts_hash[631] = DEEP_HASH(tstate, mod_consts.const_str_plain_Makernote);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IFD1", mod_consts.const_str_plain_IFD1);
mod_consts_hash[632] = DEEP_HASH(tstate, mod_consts.const_str_plain_IFD1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_363", mod_consts.const_int_pos_363);
mod_consts_hash[633] = DEEP_HASH(tstate, mod_consts.const_int_pos_363);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Unknown", mod_consts.const_str_plain_Unknown);
mod_consts_hash[634] = DEEP_HASH(tstate, mod_consts.const_str_plain_Unknown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Daylight", mod_consts.const_str_plain_Daylight);
mod_consts_hash[635] = DEEP_HASH(tstate, mod_consts.const_str_plain_Daylight);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fluorescent", mod_consts.const_str_plain_Fluorescent);
mod_consts_hash[636] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fluorescent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Tungsten", mod_consts.const_str_plain_Tungsten);
mod_consts_hash[637] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tungsten);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fine", mod_consts.const_str_plain_Fine);
mod_consts_hash[638] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fine);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cloudy", mod_consts.const_str_plain_Cloudy);
mod_consts_hash[639] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cloudy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Shade", mod_consts.const_str_plain_Shade);
mod_consts_hash[640] = DEEP_HASH(tstate, mod_consts.const_str_plain_Shade);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DaylightFluorescent", mod_consts.const_str_plain_DaylightFluorescent);
mod_consts_hash[641] = DEEP_HASH(tstate, mod_consts.const_str_plain_DaylightFluorescent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DayWhiteFluorescent", mod_consts.const_str_plain_DayWhiteFluorescent);
mod_consts_hash[642] = DEEP_HASH(tstate, mod_consts.const_str_plain_DayWhiteFluorescent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CoolWhiteFluorescent", mod_consts.const_str_plain_CoolWhiteFluorescent);
mod_consts_hash[643] = DEEP_HASH(tstate, mod_consts.const_str_plain_CoolWhiteFluorescent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhiteFluorescent", mod_consts.const_str_plain_WhiteFluorescent);
mod_consts_hash[644] = DEEP_HASH(tstate, mod_consts.const_str_plain_WhiteFluorescent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardLightA", mod_consts.const_str_plain_StandardLightA);
mod_consts_hash[645] = DEEP_HASH(tstate, mod_consts.const_str_plain_StandardLightA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardLightB", mod_consts.const_str_plain_StandardLightB);
mod_consts_hash[646] = DEEP_HASH(tstate, mod_consts.const_str_plain_StandardLightB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardLightC", mod_consts.const_str_plain_StandardLightC);
mod_consts_hash[647] = DEEP_HASH(tstate, mod_consts.const_str_plain_StandardLightC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D55", mod_consts.const_str_plain_D55);
mod_consts_hash[648] = DEEP_HASH(tstate, mod_consts.const_str_plain_D55);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D65", mod_consts.const_str_plain_D65);
mod_consts_hash[649] = DEEP_HASH(tstate, mod_consts.const_str_plain_D65);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D75", mod_consts.const_str_plain_D75);
mod_consts_hash[650] = DEEP_HASH(tstate, mod_consts.const_str_plain_D75);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D50", mod_consts.const_str_plain_D50);
mod_consts_hash[651] = DEEP_HASH(tstate, mod_consts.const_str_plain_D50);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISO", mod_consts.const_str_plain_ISO);
mod_consts_hash[652] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Other", mod_consts.const_str_plain_Other);
mod_consts_hash[653] = DEEP_HASH(tstate, mod_consts.const_str_plain_Other);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242", mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242);
mod_consts_hash[654] = DEEP_HASH(tstate, mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409", mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409);
mod_consts_hash[655] = DEEP_HASH(tstate, mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[656] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_PIL$ExifTags(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712", mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712) && "mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_IntEnum_tuple", mod_consts.const_tuple_str_plain_IntEnum_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntEnum_tuple) && "mod_consts.const_tuple_str_plain_IntEnum_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IntEnum", mod_consts.const_str_plain_IntEnum);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum) && "mod_consts.const_str_plain_IntEnum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Base", mod_consts.const_str_plain_Base);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base) && "mod_consts.const_str_plain_Base");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898", mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898) && "mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_22) && "mod_consts.const_int_pos_22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropIndex", mod_consts.const_str_plain_InteropIndex);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteropIndex) && "mod_consts.const_str_plain_InteropIndex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_11", mod_consts.const_int_pos_11);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_11) && "mod_consts.const_int_pos_11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProcessingSoftware", mod_consts.const_str_plain_ProcessingSoftware);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProcessingSoftware) && "mod_consts.const_str_plain_ProcessingSoftware");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_pos_254) && "mod_consts.const_int_pos_254");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NewSubfileType", mod_consts.const_str_plain_NewSubfileType);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_NewSubfileType) && "mod_consts.const_str_plain_NewSubfileType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubfileType", mod_consts.const_str_plain_SubfileType);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubfileType) && "mod_consts.const_str_plain_SubfileType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageWidth", mod_consts.const_str_plain_ImageWidth);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageWidth) && "mod_consts.const_str_plain_ImageWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_257", mod_consts.const_int_pos_257);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_257) && "mod_consts.const_int_pos_257");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageLength", mod_consts.const_str_plain_ImageLength);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageLength) && "mod_consts.const_str_plain_ImageLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_258", mod_consts.const_int_pos_258);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_258) && "mod_consts.const_int_pos_258");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitsPerSample", mod_consts.const_str_plain_BitsPerSample);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_BitsPerSample) && "mod_consts.const_str_plain_BitsPerSample");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_259", mod_consts.const_int_pos_259);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_259) && "mod_consts.const_int_pos_259");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Compression", mod_consts.const_str_plain_Compression);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Compression) && "mod_consts.const_str_plain_Compression");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_262", mod_consts.const_int_pos_262);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_262) && "mod_consts.const_int_pos_262");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotometricInterpretation", mod_consts.const_str_plain_PhotometricInterpretation);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_PhotometricInterpretation) && "mod_consts.const_str_plain_PhotometricInterpretation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_263", mod_consts.const_int_pos_263);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_263) && "mod_consts.const_int_pos_263");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Thresholding", mod_consts.const_str_plain_Thresholding);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Thresholding) && "mod_consts.const_str_plain_Thresholding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_264", mod_consts.const_int_pos_264);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_264) && "mod_consts.const_int_pos_264");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellWidth", mod_consts.const_str_plain_CellWidth);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_CellWidth) && "mod_consts.const_str_plain_CellWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_265", mod_consts.const_int_pos_265);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_265) && "mod_consts.const_int_pos_265");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CellLength", mod_consts.const_str_plain_CellLength);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_CellLength) && "mod_consts.const_str_plain_CellLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_266", mod_consts.const_int_pos_266);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_266) && "mod_consts.const_int_pos_266");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FillOrder", mod_consts.const_str_plain_FillOrder);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_FillOrder) && "mod_consts.const_str_plain_FillOrder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_269", mod_consts.const_int_pos_269);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_269) && "mod_consts.const_int_pos_269");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DocumentName", mod_consts.const_str_plain_DocumentName);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocumentName) && "mod_consts.const_str_plain_DocumentName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_270", mod_consts.const_int_pos_270);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_270) && "mod_consts.const_int_pos_270");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageDescription", mod_consts.const_str_plain_ImageDescription);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageDescription) && "mod_consts.const_str_plain_ImageDescription");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_271", mod_consts.const_int_pos_271);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_271) && "mod_consts.const_int_pos_271");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Make", mod_consts.const_str_plain_Make);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Make) && "mod_consts.const_str_plain_Make");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_272", mod_consts.const_int_pos_272);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_272) && "mod_consts.const_int_pos_272");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Model", mod_consts.const_str_plain_Model);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_Model) && "mod_consts.const_str_plain_Model");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_273", mod_consts.const_int_pos_273);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_273) && "mod_consts.const_int_pos_273");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripOffsets", mod_consts.const_str_plain_StripOffsets);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_StripOffsets) && "mod_consts.const_str_plain_StripOffsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_274", mod_consts.const_int_pos_274);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_274) && "mod_consts.const_int_pos_274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation) && "mod_consts.const_str_plain_Orientation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_277", mod_consts.const_int_pos_277);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_277) && "mod_consts.const_int_pos_277");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SamplesPerPixel", mod_consts.const_str_plain_SamplesPerPixel);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_SamplesPerPixel) && "mod_consts.const_str_plain_SamplesPerPixel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_278", mod_consts.const_int_pos_278);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_278) && "mod_consts.const_int_pos_278");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RowsPerStrip", mod_consts.const_str_plain_RowsPerStrip);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_RowsPerStrip) && "mod_consts.const_str_plain_RowsPerStrip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_279", mod_consts.const_int_pos_279);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_279) && "mod_consts.const_int_pos_279");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StripByteCounts", mod_consts.const_str_plain_StripByteCounts);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_StripByteCounts) && "mod_consts.const_str_plain_StripByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_280", mod_consts.const_int_pos_280);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_280) && "mod_consts.const_int_pos_280");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MinSampleValue", mod_consts.const_str_plain_MinSampleValue);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_MinSampleValue) && "mod_consts.const_str_plain_MinSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_281", mod_consts.const_int_pos_281);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_281) && "mod_consts.const_int_pos_281");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxSampleValue", mod_consts.const_str_plain_MaxSampleValue);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxSampleValue) && "mod_consts.const_str_plain_MaxSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_282", mod_consts.const_int_pos_282);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_282) && "mod_consts.const_int_pos_282");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XResolution", mod_consts.const_str_plain_XResolution);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_XResolution) && "mod_consts.const_str_plain_XResolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_283", mod_consts.const_int_pos_283);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_283) && "mod_consts.const_int_pos_283");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YResolution", mod_consts.const_str_plain_YResolution);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_YResolution) && "mod_consts.const_str_plain_YResolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_284", mod_consts.const_int_pos_284);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_284) && "mod_consts.const_int_pos_284");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PlanarConfiguration", mod_consts.const_str_plain_PlanarConfiguration);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlanarConfiguration) && "mod_consts.const_str_plain_PlanarConfiguration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_285", mod_consts.const_int_pos_285);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_285) && "mod_consts.const_int_pos_285");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageName", mod_consts.const_str_plain_PageName);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_PageName) && "mod_consts.const_str_plain_PageName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_288", mod_consts.const_int_pos_288);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_288) && "mod_consts.const_int_pos_288");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeOffsets", mod_consts.const_str_plain_FreeOffsets);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreeOffsets) && "mod_consts.const_str_plain_FreeOffsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_289", mod_consts.const_int_pos_289);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_289) && "mod_consts.const_int_pos_289");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FreeByteCounts", mod_consts.const_str_plain_FreeByteCounts);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreeByteCounts) && "mod_consts.const_str_plain_FreeByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_290", mod_consts.const_int_pos_290);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_290) && "mod_consts.const_int_pos_290");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseUnit", mod_consts.const_str_plain_GrayResponseUnit);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseUnit) && "mod_consts.const_str_plain_GrayResponseUnit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_291", mod_consts.const_int_pos_291);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_291) && "mod_consts.const_int_pos_291");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GrayResponseCurve", mod_consts.const_str_plain_GrayResponseCurve);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_GrayResponseCurve) && "mod_consts.const_str_plain_GrayResponseCurve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_292", mod_consts.const_int_pos_292);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_292) && "mod_consts.const_int_pos_292");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T4Options", mod_consts.const_str_plain_T4Options);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_T4Options) && "mod_consts.const_str_plain_T4Options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_293", mod_consts.const_int_pos_293);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_293) && "mod_consts.const_int_pos_293");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_T6Options", mod_consts.const_str_plain_T6Options);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_T6Options) && "mod_consts.const_str_plain_T6Options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_296", mod_consts.const_int_pos_296);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_296) && "mod_consts.const_int_pos_296");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResolutionUnit", mod_consts.const_str_plain_ResolutionUnit);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResolutionUnit) && "mod_consts.const_str_plain_ResolutionUnit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_297", mod_consts.const_int_pos_297);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_297) && "mod_consts.const_int_pos_297");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PageNumber", mod_consts.const_str_plain_PageNumber);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_PageNumber) && "mod_consts.const_str_plain_PageNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_301", mod_consts.const_int_pos_301);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_int_pos_301) && "mod_consts.const_int_pos_301");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferFunction", mod_consts.const_str_plain_TransferFunction);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransferFunction) && "mod_consts.const_str_plain_TransferFunction");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_305", mod_consts.const_int_pos_305);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_305) && "mod_consts.const_int_pos_305");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Software", mod_consts.const_str_plain_Software);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Software) && "mod_consts.const_str_plain_Software");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_306", mod_consts.const_int_pos_306);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_306) && "mod_consts.const_int_pos_306");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTime", mod_consts.const_str_plain_DateTime);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_DateTime) && "mod_consts.const_str_plain_DateTime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_315", mod_consts.const_int_pos_315);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_315) && "mod_consts.const_int_pos_315");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Artist", mod_consts.const_str_plain_Artist);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_Artist) && "mod_consts.const_str_plain_Artist");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_316", mod_consts.const_int_pos_316);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_316) && "mod_consts.const_int_pos_316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HostComputer", mod_consts.const_str_plain_HostComputer);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_HostComputer) && "mod_consts.const_str_plain_HostComputer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_317", mod_consts.const_int_pos_317);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_317) && "mod_consts.const_int_pos_317");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Predictor", mod_consts.const_str_plain_Predictor);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Predictor) && "mod_consts.const_str_plain_Predictor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_318", mod_consts.const_int_pos_318);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_318) && "mod_consts.const_int_pos_318");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhitePoint", mod_consts.const_str_plain_WhitePoint);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_WhitePoint) && "mod_consts.const_str_plain_WhitePoint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_319", mod_consts.const_int_pos_319);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_319) && "mod_consts.const_int_pos_319");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrimaryChromaticities", mod_consts.const_str_plain_PrimaryChromaticities);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrimaryChromaticities) && "mod_consts.const_str_plain_PrimaryChromaticities");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_320", mod_consts.const_int_pos_320);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_320) && "mod_consts.const_int_pos_320");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMap", mod_consts.const_str_plain_ColorMap);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMap) && "mod_consts.const_str_plain_ColorMap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_321", mod_consts.const_int_pos_321);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_321) && "mod_consts.const_int_pos_321");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HalftoneHints", mod_consts.const_str_plain_HalftoneHints);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_HalftoneHints) && "mod_consts.const_str_plain_HalftoneHints");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_322", mod_consts.const_int_pos_322);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_322) && "mod_consts.const_int_pos_322");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileWidth", mod_consts.const_str_plain_TileWidth);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileWidth) && "mod_consts.const_str_plain_TileWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_323", mod_consts.const_int_pos_323);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_323) && "mod_consts.const_int_pos_323");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileLength", mod_consts.const_str_plain_TileLength);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileLength) && "mod_consts.const_str_plain_TileLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_324) && "mod_consts.const_int_pos_324");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileOffsets", mod_consts.const_str_plain_TileOffsets);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileOffsets) && "mod_consts.const_str_plain_TileOffsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_325", mod_consts.const_int_pos_325);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_325) && "mod_consts.const_int_pos_325");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TileByteCounts", mod_consts.const_str_plain_TileByteCounts);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_TileByteCounts) && "mod_consts.const_str_plain_TileByteCounts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_330", mod_consts.const_int_pos_330);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_330) && "mod_consts.const_int_pos_330");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubIFDs", mod_consts.const_str_plain_SubIFDs);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubIFDs) && "mod_consts.const_str_plain_SubIFDs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_332", mod_consts.const_int_pos_332);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_332) && "mod_consts.const_int_pos_332");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkSet", mod_consts.const_str_plain_InkSet);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_InkSet) && "mod_consts.const_str_plain_InkSet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_333", mod_consts.const_int_pos_333);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_333) && "mod_consts.const_int_pos_333");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InkNames", mod_consts.const_str_plain_InkNames);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_InkNames) && "mod_consts.const_str_plain_InkNames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_334", mod_consts.const_int_pos_334);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_334) && "mod_consts.const_int_pos_334");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NumberOfInks", mod_consts.const_str_plain_NumberOfInks);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_NumberOfInks) && "mod_consts.const_str_plain_NumberOfInks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_336", mod_consts.const_int_pos_336);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_336) && "mod_consts.const_int_pos_336");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DotRange", mod_consts.const_str_plain_DotRange);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_DotRange) && "mod_consts.const_str_plain_DotRange");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_337", mod_consts.const_int_pos_337);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_337) && "mod_consts.const_int_pos_337");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TargetPrinter", mod_consts.const_str_plain_TargetPrinter);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_TargetPrinter) && "mod_consts.const_str_plain_TargetPrinter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_338", mod_consts.const_int_pos_338);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_338) && "mod_consts.const_int_pos_338");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExtraSamples", mod_consts.const_str_plain_ExtraSamples);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtraSamples) && "mod_consts.const_str_plain_ExtraSamples");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_339", mod_consts.const_int_pos_339);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_339) && "mod_consts.const_int_pos_339");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SampleFormat", mod_consts.const_str_plain_SampleFormat);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_SampleFormat) && "mod_consts.const_str_plain_SampleFormat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_340", mod_consts.const_int_pos_340);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_340) && "mod_consts.const_int_pos_340");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMinSampleValue", mod_consts.const_str_plain_SMinSampleValue);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMinSampleValue) && "mod_consts.const_str_plain_SMinSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_341", mod_consts.const_int_pos_341);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_341) && "mod_consts.const_int_pos_341");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SMaxSampleValue", mod_consts.const_str_plain_SMaxSampleValue);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMaxSampleValue) && "mod_consts.const_str_plain_SMaxSampleValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_342", mod_consts.const_int_pos_342);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_342) && "mod_consts.const_int_pos_342");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TransferRange", mod_consts.const_str_plain_TransferRange);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransferRange) && "mod_consts.const_str_plain_TransferRange");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_343", mod_consts.const_int_pos_343);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_343) && "mod_consts.const_int_pos_343");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ClipPath", mod_consts.const_str_plain_ClipPath);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClipPath) && "mod_consts.const_str_plain_ClipPath");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_344", mod_consts.const_int_pos_344);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_344) && "mod_consts.const_int_pos_344");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XClipPathUnits", mod_consts.const_str_plain_XClipPathUnits);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_XClipPathUnits) && "mod_consts.const_str_plain_XClipPathUnits");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_345", mod_consts.const_int_pos_345);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_345) && "mod_consts.const_int_pos_345");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YClipPathUnits", mod_consts.const_str_plain_YClipPathUnits);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_YClipPathUnits) && "mod_consts.const_str_plain_YClipPathUnits");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_346", mod_consts.const_int_pos_346);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_int_pos_346) && "mod_consts.const_int_pos_346");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Indexed", mod_consts.const_str_plain_Indexed);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_Indexed) && "mod_consts.const_str_plain_Indexed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_347", mod_consts.const_int_pos_347);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_int_pos_347) && "mod_consts.const_int_pos_347");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGTables", mod_consts.const_str_plain_JPEGTables);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGTables) && "mod_consts.const_str_plain_JPEGTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_351", mod_consts.const_int_pos_351);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_351) && "mod_consts.const_int_pos_351");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPIProxy", mod_consts.const_str_plain_OPIProxy);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPIProxy) && "mod_consts.const_str_plain_OPIProxy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_512) && "mod_consts.const_int_pos_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JPEGProc", mod_consts.const_str_plain_JPEGProc);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_JPEGProc) && "mod_consts.const_str_plain_JPEGProc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_513", mod_consts.const_int_pos_513);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_513) && "mod_consts.const_int_pos_513");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegIFOffset", mod_consts.const_str_plain_JpegIFOffset);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegIFOffset) && "mod_consts.const_str_plain_JpegIFOffset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_514", mod_consts.const_int_pos_514);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_514) && "mod_consts.const_int_pos_514");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegIFByteCount", mod_consts.const_str_plain_JpegIFByteCount);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegIFByteCount) && "mod_consts.const_str_plain_JpegIFByteCount");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_515", mod_consts.const_int_pos_515);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_515) && "mod_consts.const_int_pos_515");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegRestartInterval", mod_consts.const_str_plain_JpegRestartInterval);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegRestartInterval) && "mod_consts.const_str_plain_JpegRestartInterval");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_517", mod_consts.const_int_pos_517);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_517) && "mod_consts.const_int_pos_517");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegLosslessPredictors", mod_consts.const_str_plain_JpegLosslessPredictors);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegLosslessPredictors) && "mod_consts.const_str_plain_JpegLosslessPredictors");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_518", mod_consts.const_int_pos_518);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_518) && "mod_consts.const_int_pos_518");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegPointTransforms", mod_consts.const_str_plain_JpegPointTransforms);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegPointTransforms) && "mod_consts.const_str_plain_JpegPointTransforms");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_519", mod_consts.const_int_pos_519);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_519) && "mod_consts.const_int_pos_519");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegQTables", mod_consts.const_str_plain_JpegQTables);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegQTables) && "mod_consts.const_str_plain_JpegQTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_520", mod_consts.const_int_pos_520);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_int_pos_520) && "mod_consts.const_int_pos_520");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegDCTables", mod_consts.const_str_plain_JpegDCTables);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegDCTables) && "mod_consts.const_str_plain_JpegDCTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_521", mod_consts.const_int_pos_521);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_521) && "mod_consts.const_int_pos_521");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JpegACTables", mod_consts.const_str_plain_JpegACTables);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_JpegACTables) && "mod_consts.const_str_plain_JpegACTables");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_529", mod_consts.const_int_pos_529);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_529) && "mod_consts.const_int_pos_529");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrCoefficients", mod_consts.const_str_plain_YCbCrCoefficients);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrCoefficients) && "mod_consts.const_str_plain_YCbCrCoefficients");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_530", mod_consts.const_int_pos_530);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_530) && "mod_consts.const_int_pos_530");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrSubSampling", mod_consts.const_str_plain_YCbCrSubSampling);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrSubSampling) && "mod_consts.const_str_plain_YCbCrSubSampling");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_531", mod_consts.const_int_pos_531);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_531) && "mod_consts.const_int_pos_531");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_YCbCrPositioning", mod_consts.const_str_plain_YCbCrPositioning);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_YCbCrPositioning) && "mod_consts.const_str_plain_YCbCrPositioning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_532", mod_consts.const_int_pos_532);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_532) && "mod_consts.const_int_pos_532");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReferenceBlackWhite", mod_consts.const_str_plain_ReferenceBlackWhite);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReferenceBlackWhite) && "mod_consts.const_str_plain_ReferenceBlackWhite");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_700", mod_consts.const_int_pos_700);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_700) && "mod_consts.const_int_pos_700");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XMLPacket", mod_consts.const_str_plain_XMLPacket);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_XMLPacket) && "mod_consts.const_str_plain_XMLPacket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096) && "mod_consts.const_int_pos_4096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageFileFormat", mod_consts.const_str_plain_RelatedImageFileFormat);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageFileFormat) && "mod_consts.const_str_plain_RelatedImageFileFormat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4097", mod_consts.const_int_pos_4097);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_4097) && "mod_consts.const_int_pos_4097");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageWidth", mod_consts.const_str_plain_RelatedImageWidth);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageWidth) && "mod_consts.const_str_plain_RelatedImageWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4098", mod_consts.const_int_pos_4098);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_4098) && "mod_consts.const_int_pos_4098");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageLength", mod_consts.const_str_plain_RelatedImageLength);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageLength) && "mod_consts.const_str_plain_RelatedImageLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18246", mod_consts.const_int_pos_18246);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_int_pos_18246) && "mod_consts.const_int_pos_18246");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Rating", mod_consts.const_str_plain_Rating);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_Rating) && "mod_consts.const_str_plain_Rating");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18249", mod_consts.const_int_pos_18249);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_18249) && "mod_consts.const_int_pos_18249");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RatingPercent", mod_consts.const_str_plain_RatingPercent);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_RatingPercent) && "mod_consts.const_str_plain_RatingPercent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32781", mod_consts.const_int_pos_32781);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_32781) && "mod_consts.const_int_pos_32781");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageID", mod_consts.const_str_plain_ImageID);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageID) && "mod_consts.const_str_plain_ImageID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33421", mod_consts.const_int_pos_33421);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_int_pos_33421) && "mod_consts.const_int_pos_33421");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFARepeatPatternDim", mod_consts.const_str_plain_CFARepeatPatternDim);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFARepeatPatternDim) && "mod_consts.const_str_plain_CFARepeatPatternDim");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33423", mod_consts.const_int_pos_33423);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_33423) && "mod_consts.const_int_pos_33423");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BatteryLevel", mod_consts.const_str_plain_BatteryLevel);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_BatteryLevel) && "mod_consts.const_str_plain_BatteryLevel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33432", mod_consts.const_int_pos_33432);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_33432) && "mod_consts.const_int_pos_33432");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Copyright", mod_consts.const_str_plain_Copyright);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_Copyright) && "mod_consts.const_str_plain_Copyright");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33434", mod_consts.const_int_pos_33434);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_33434) && "mod_consts.const_int_pos_33434");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureTime", mod_consts.const_str_plain_ExposureTime);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureTime) && "mod_consts.const_str_plain_ExposureTime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33437", mod_consts.const_int_pos_33437);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_int_pos_33437) && "mod_consts.const_int_pos_33437");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FNumber", mod_consts.const_str_plain_FNumber);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_FNumber) && "mod_consts.const_str_plain_FNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33723", mod_consts.const_int_pos_33723);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_int_pos_33723) && "mod_consts.const_int_pos_33723");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IPTCNAA", mod_consts.const_str_plain_IPTCNAA);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPTCNAA) && "mod_consts.const_str_plain_IPTCNAA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34377", mod_consts.const_int_pos_34377);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_int_pos_34377) && "mod_consts.const_int_pos_34377");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageResources", mod_consts.const_str_plain_ImageResources);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageResources) && "mod_consts.const_str_plain_ImageResources");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34665", mod_consts.const_int_pos_34665);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_int_pos_34665) && "mod_consts.const_int_pos_34665");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifOffset", mod_consts.const_str_plain_ExifOffset);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifOffset) && "mod_consts.const_str_plain_ExifOffset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34675", mod_consts.const_int_pos_34675);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_int_pos_34675) && "mod_consts.const_int_pos_34675");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InterColorProfile", mod_consts.const_str_plain_InterColorProfile);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_InterColorProfile) && "mod_consts.const_str_plain_InterColorProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34850", mod_consts.const_int_pos_34850);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_int_pos_34850) && "mod_consts.const_int_pos_34850");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureProgram", mod_consts.const_str_plain_ExposureProgram);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureProgram) && "mod_consts.const_str_plain_ExposureProgram");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34852", mod_consts.const_int_pos_34852);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_int_pos_34852) && "mod_consts.const_int_pos_34852");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SpectralSensitivity", mod_consts.const_str_plain_SpectralSensitivity);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_SpectralSensitivity) && "mod_consts.const_str_plain_SpectralSensitivity");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34853", mod_consts.const_int_pos_34853);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_int_pos_34853) && "mod_consts.const_int_pos_34853");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSInfo", mod_consts.const_str_plain_GPSInfo);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSInfo) && "mod_consts.const_str_plain_GPSInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34855", mod_consts.const_int_pos_34855);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_int_pos_34855) && "mod_consts.const_int_pos_34855");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeedRatings", mod_consts.const_str_plain_ISOSpeedRatings);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeedRatings) && "mod_consts.const_str_plain_ISOSpeedRatings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34856", mod_consts.const_int_pos_34856);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_int_pos_34856) && "mod_consts.const_int_pos_34856");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OECF", mod_consts.const_str_plain_OECF);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_OECF) && "mod_consts.const_str_plain_OECF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34857", mod_consts.const_int_pos_34857);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_int_pos_34857) && "mod_consts.const_int_pos_34857");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Interlace", mod_consts.const_str_plain_Interlace);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_Interlace) && "mod_consts.const_str_plain_Interlace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34858", mod_consts.const_int_pos_34858);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_int_pos_34858) && "mod_consts.const_int_pos_34858");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TimeZoneOffset", mod_consts.const_str_plain_TimeZoneOffset);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeZoneOffset) && "mod_consts.const_str_plain_TimeZoneOffset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34859", mod_consts.const_int_pos_34859);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_int_pos_34859) && "mod_consts.const_int_pos_34859");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SelfTimerMode", mod_consts.const_str_plain_SelfTimerMode);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelfTimerMode) && "mod_consts.const_str_plain_SelfTimerMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34864", mod_consts.const_int_pos_34864);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_int_pos_34864) && "mod_consts.const_int_pos_34864");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SensitivityType", mod_consts.const_str_plain_SensitivityType);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_SensitivityType) && "mod_consts.const_str_plain_SensitivityType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34865", mod_consts.const_int_pos_34865);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_int_pos_34865) && "mod_consts.const_int_pos_34865");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardOutputSensitivity", mod_consts.const_str_plain_StandardOutputSensitivity);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_StandardOutputSensitivity) && "mod_consts.const_str_plain_StandardOutputSensitivity");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34866", mod_consts.const_int_pos_34866);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_int_pos_34866) && "mod_consts.const_int_pos_34866");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RecommendedExposureIndex", mod_consts.const_str_plain_RecommendedExposureIndex);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_RecommendedExposureIndex) && "mod_consts.const_str_plain_RecommendedExposureIndex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34867", mod_consts.const_int_pos_34867);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_int_pos_34867) && "mod_consts.const_int_pos_34867");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeed", mod_consts.const_str_plain_ISOSpeed);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeed) && "mod_consts.const_str_plain_ISOSpeed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34868", mod_consts.const_int_pos_34868);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_int_pos_34868) && "mod_consts.const_int_pos_34868");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeedLatitudeyyy", mod_consts.const_str_plain_ISOSpeedLatitudeyyy);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeedLatitudeyyy) && "mod_consts.const_str_plain_ISOSpeedLatitudeyyy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34869", mod_consts.const_int_pos_34869);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_int_pos_34869) && "mod_consts.const_int_pos_34869");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISOSpeedLatitudezzz", mod_consts.const_str_plain_ISOSpeedLatitudezzz);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISOSpeedLatitudezzz) && "mod_consts.const_str_plain_ISOSpeedLatitudezzz");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36864", mod_consts.const_int_pos_36864);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_int_pos_36864) && "mod_consts.const_int_pos_36864");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifVersion", mod_consts.const_str_plain_ExifVersion);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifVersion) && "mod_consts.const_str_plain_ExifVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36867", mod_consts.const_int_pos_36867);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_int_pos_36867) && "mod_consts.const_int_pos_36867");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTimeOriginal", mod_consts.const_str_plain_DateTimeOriginal);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_DateTimeOriginal) && "mod_consts.const_str_plain_DateTimeOriginal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36868", mod_consts.const_int_pos_36868);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_int_pos_36868) && "mod_consts.const_int_pos_36868");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DateTimeDigitized", mod_consts.const_str_plain_DateTimeDigitized);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_DateTimeDigitized) && "mod_consts.const_str_plain_DateTimeDigitized");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36880", mod_consts.const_int_pos_36880);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_int_pos_36880) && "mod_consts.const_int_pos_36880");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OffsetTime", mod_consts.const_str_plain_OffsetTime);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetTime) && "mod_consts.const_str_plain_OffsetTime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36881", mod_consts.const_int_pos_36881);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_int_pos_36881) && "mod_consts.const_int_pos_36881");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OffsetTimeOriginal", mod_consts.const_str_plain_OffsetTimeOriginal);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetTimeOriginal) && "mod_consts.const_str_plain_OffsetTimeOriginal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36882", mod_consts.const_int_pos_36882);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_int_pos_36882) && "mod_consts.const_int_pos_36882");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OffsetTimeDigitized", mod_consts.const_str_plain_OffsetTimeDigitized);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetTimeDigitized) && "mod_consts.const_str_plain_OffsetTimeDigitized");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37121", mod_consts.const_int_pos_37121);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_int_pos_37121) && "mod_consts.const_int_pos_37121");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ComponentsConfiguration", mod_consts.const_str_plain_ComponentsConfiguration);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_plain_ComponentsConfiguration) && "mod_consts.const_str_plain_ComponentsConfiguration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37122", mod_consts.const_int_pos_37122);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_int_pos_37122) && "mod_consts.const_int_pos_37122");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompressedBitsPerPixel", mod_consts.const_str_plain_CompressedBitsPerPixel);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompressedBitsPerPixel) && "mod_consts.const_str_plain_CompressedBitsPerPixel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37377", mod_consts.const_int_pos_37377);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_int_pos_37377) && "mod_consts.const_int_pos_37377");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ShutterSpeedValue", mod_consts.const_str_plain_ShutterSpeedValue);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShutterSpeedValue) && "mod_consts.const_str_plain_ShutterSpeedValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37378", mod_consts.const_int_pos_37378);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_int_pos_37378) && "mod_consts.const_int_pos_37378");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ApertureValue", mod_consts.const_str_plain_ApertureValue);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_plain_ApertureValue) && "mod_consts.const_str_plain_ApertureValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37379", mod_consts.const_int_pos_37379);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_int_pos_37379) && "mod_consts.const_int_pos_37379");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrightnessValue", mod_consts.const_str_plain_BrightnessValue);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_plain_BrightnessValue) && "mod_consts.const_str_plain_BrightnessValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37380", mod_consts.const_int_pos_37380);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_int_pos_37380) && "mod_consts.const_int_pos_37380");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureBiasValue", mod_consts.const_str_plain_ExposureBiasValue);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureBiasValue) && "mod_consts.const_str_plain_ExposureBiasValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37381", mod_consts.const_int_pos_37381);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_int_pos_37381) && "mod_consts.const_int_pos_37381");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxApertureValue", mod_consts.const_str_plain_MaxApertureValue);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxApertureValue) && "mod_consts.const_str_plain_MaxApertureValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37382", mod_consts.const_int_pos_37382);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_int_pos_37382) && "mod_consts.const_int_pos_37382");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectDistance", mod_consts.const_str_plain_SubjectDistance);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectDistance) && "mod_consts.const_str_plain_SubjectDistance");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37383", mod_consts.const_int_pos_37383);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_int_pos_37383) && "mod_consts.const_int_pos_37383");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MeteringMode", mod_consts.const_str_plain_MeteringMode);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_plain_MeteringMode) && "mod_consts.const_str_plain_MeteringMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37384", mod_consts.const_int_pos_37384);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_int_pos_37384) && "mod_consts.const_int_pos_37384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LightSource", mod_consts.const_str_plain_LightSource);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_plain_LightSource) && "mod_consts.const_str_plain_LightSource");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37385", mod_consts.const_int_pos_37385);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_int_pos_37385) && "mod_consts.const_int_pos_37385");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Flash", mod_consts.const_str_plain_Flash);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_plain_Flash) && "mod_consts.const_str_plain_Flash");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37386", mod_consts.const_int_pos_37386);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_int_pos_37386) && "mod_consts.const_int_pos_37386");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalLength", mod_consts.const_str_plain_FocalLength);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_plain_FocalLength) && "mod_consts.const_str_plain_FocalLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37389", mod_consts.const_int_pos_37389);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_int_pos_37389) && "mod_consts.const_int_pos_37389");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Noise", mod_consts.const_str_plain_Noise);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_plain_Noise) && "mod_consts.const_str_plain_Noise");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37393", mod_consts.const_int_pos_37393);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_int_pos_37393) && "mod_consts.const_int_pos_37393");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageNumber", mod_consts.const_str_plain_ImageNumber);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageNumber) && "mod_consts.const_str_plain_ImageNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37394", mod_consts.const_int_pos_37394);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_int_pos_37394) && "mod_consts.const_int_pos_37394");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SecurityClassification", mod_consts.const_str_plain_SecurityClassification);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityClassification) && "mod_consts.const_str_plain_SecurityClassification");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37395", mod_consts.const_int_pos_37395);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_int_pos_37395) && "mod_consts.const_int_pos_37395");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageHistory", mod_consts.const_str_plain_ImageHistory);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageHistory) && "mod_consts.const_str_plain_ImageHistory");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37398", mod_consts.const_int_pos_37398);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_int_pos_37398) && "mod_consts.const_int_pos_37398");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TIFFEPStandardID", mod_consts.const_str_plain_TIFFEPStandardID);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_plain_TIFFEPStandardID) && "mod_consts.const_str_plain_TIFFEPStandardID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37500", mod_consts.const_int_pos_37500);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_int_pos_37500) && "mod_consts.const_int_pos_37500");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MakerNote", mod_consts.const_str_plain_MakerNote);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_plain_MakerNote) && "mod_consts.const_str_plain_MakerNote");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37510", mod_consts.const_int_pos_37510);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_int_pos_37510) && "mod_consts.const_int_pos_37510");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UserComment", mod_consts.const_str_plain_UserComment);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserComment) && "mod_consts.const_str_plain_UserComment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37520", mod_consts.const_int_pos_37520);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_int_pos_37520) && "mod_consts.const_int_pos_37520");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubsecTime", mod_consts.const_str_plain_SubsecTime);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubsecTime) && "mod_consts.const_str_plain_SubsecTime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37521", mod_consts.const_int_pos_37521);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_int_pos_37521) && "mod_consts.const_int_pos_37521");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubsecTimeOriginal", mod_consts.const_str_plain_SubsecTimeOriginal);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubsecTimeOriginal) && "mod_consts.const_str_plain_SubsecTimeOriginal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37522", mod_consts.const_int_pos_37522);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_int_pos_37522) && "mod_consts.const_int_pos_37522");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubsecTimeDigitized", mod_consts.const_str_plain_SubsecTimeDigitized);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubsecTimeDigitized) && "mod_consts.const_str_plain_SubsecTimeDigitized");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37888", mod_consts.const_int_pos_37888);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_int_pos_37888) && "mod_consts.const_int_pos_37888");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AmbientTemperature", mod_consts.const_str_plain_AmbientTemperature);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_str_plain_AmbientTemperature) && "mod_consts.const_str_plain_AmbientTemperature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37889", mod_consts.const_int_pos_37889);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_int_pos_37889) && "mod_consts.const_int_pos_37889");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Humidity", mod_consts.const_str_plain_Humidity);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_str_plain_Humidity) && "mod_consts.const_str_plain_Humidity");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37890", mod_consts.const_int_pos_37890);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_int_pos_37890) && "mod_consts.const_int_pos_37890");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Pressure", mod_consts.const_str_plain_Pressure);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pressure) && "mod_consts.const_str_plain_Pressure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37891", mod_consts.const_int_pos_37891);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_int_pos_37891) && "mod_consts.const_int_pos_37891");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WaterDepth", mod_consts.const_str_plain_WaterDepth);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaterDepth) && "mod_consts.const_str_plain_WaterDepth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37892", mod_consts.const_int_pos_37892);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_int_pos_37892) && "mod_consts.const_int_pos_37892");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Acceleration", mod_consts.const_str_plain_Acceleration);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_str_plain_Acceleration) && "mod_consts.const_str_plain_Acceleration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37893", mod_consts.const_int_pos_37893);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_int_pos_37893) && "mod_consts.const_int_pos_37893");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraElevationAngle", mod_consts.const_str_plain_CameraElevationAngle);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_str_plain_CameraElevationAngle) && "mod_consts.const_str_plain_CameraElevationAngle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40091", mod_consts.const_int_pos_40091);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_int_pos_40091) && "mod_consts.const_int_pos_40091");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPTitle", mod_consts.const_str_plain_XPTitle);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_str_plain_XPTitle) && "mod_consts.const_str_plain_XPTitle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40092", mod_consts.const_int_pos_40092);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_int_pos_40092) && "mod_consts.const_int_pos_40092");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPComment", mod_consts.const_str_plain_XPComment);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_str_plain_XPComment) && "mod_consts.const_str_plain_XPComment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40093", mod_consts.const_int_pos_40093);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_int_pos_40093) && "mod_consts.const_int_pos_40093");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPAuthor", mod_consts.const_str_plain_XPAuthor);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_str_plain_XPAuthor) && "mod_consts.const_str_plain_XPAuthor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40094", mod_consts.const_int_pos_40094);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_int_pos_40094) && "mod_consts.const_int_pos_40094");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPKeywords", mod_consts.const_str_plain_XPKeywords);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_str_plain_XPKeywords) && "mod_consts.const_str_plain_XPKeywords");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40095", mod_consts.const_int_pos_40095);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_int_pos_40095) && "mod_consts.const_int_pos_40095");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XPSubject", mod_consts.const_str_plain_XPSubject);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_str_plain_XPSubject) && "mod_consts.const_str_plain_XPSubject");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40960", mod_consts.const_int_pos_40960);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_int_pos_40960) && "mod_consts.const_int_pos_40960");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FlashPixVersion", mod_consts.const_str_plain_FlashPixVersion);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_str_plain_FlashPixVersion) && "mod_consts.const_str_plain_FlashPixVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40961", mod_consts.const_int_pos_40961);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_int_pos_40961) && "mod_consts.const_int_pos_40961");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorSpace", mod_consts.const_str_plain_ColorSpace);
assert(mod_consts_hash[315] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorSpace) && "mod_consts.const_str_plain_ColorSpace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40962", mod_consts.const_int_pos_40962);
assert(mod_consts_hash[316] == DEEP_HASH(tstate, mod_consts.const_int_pos_40962) && "mod_consts.const_int_pos_40962");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifImageWidth", mod_consts.const_str_plain_ExifImageWidth);
assert(mod_consts_hash[317] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifImageWidth) && "mod_consts.const_str_plain_ExifImageWidth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40963", mod_consts.const_int_pos_40963);
assert(mod_consts_hash[318] == DEEP_HASH(tstate, mod_consts.const_int_pos_40963) && "mod_consts.const_int_pos_40963");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifImageHeight", mod_consts.const_str_plain_ExifImageHeight);
assert(mod_consts_hash[319] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifImageHeight) && "mod_consts.const_str_plain_ExifImageHeight");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40964", mod_consts.const_int_pos_40964);
assert(mod_consts_hash[320] == DEEP_HASH(tstate, mod_consts.const_int_pos_40964) && "mod_consts.const_int_pos_40964");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedSoundFile", mod_consts.const_str_plain_RelatedSoundFile);
assert(mod_consts_hash[321] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedSoundFile) && "mod_consts.const_str_plain_RelatedSoundFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40965", mod_consts.const_int_pos_40965);
assert(mod_consts_hash[322] == DEEP_HASH(tstate, mod_consts.const_int_pos_40965) && "mod_consts.const_int_pos_40965");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifInteroperabilityOffset", mod_consts.const_str_plain_ExifInteroperabilityOffset);
assert(mod_consts_hash[323] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifInteroperabilityOffset) && "mod_consts.const_str_plain_ExifInteroperabilityOffset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41483", mod_consts.const_int_pos_41483);
assert(mod_consts_hash[324] == DEEP_HASH(tstate, mod_consts.const_int_pos_41483) && "mod_consts.const_int_pos_41483");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FlashEnergy", mod_consts.const_str_plain_FlashEnergy);
assert(mod_consts_hash[325] == DEEP_HASH(tstate, mod_consts.const_str_plain_FlashEnergy) && "mod_consts.const_str_plain_FlashEnergy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41484", mod_consts.const_int_pos_41484);
assert(mod_consts_hash[326] == DEEP_HASH(tstate, mod_consts.const_int_pos_41484) && "mod_consts.const_int_pos_41484");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SpatialFrequencyResponse", mod_consts.const_str_plain_SpatialFrequencyResponse);
assert(mod_consts_hash[327] == DEEP_HASH(tstate, mod_consts.const_str_plain_SpatialFrequencyResponse) && "mod_consts.const_str_plain_SpatialFrequencyResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41486", mod_consts.const_int_pos_41486);
assert(mod_consts_hash[328] == DEEP_HASH(tstate, mod_consts.const_int_pos_41486) && "mod_consts.const_int_pos_41486");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalPlaneXResolution", mod_consts.const_str_plain_FocalPlaneXResolution);
assert(mod_consts_hash[329] == DEEP_HASH(tstate, mod_consts.const_str_plain_FocalPlaneXResolution) && "mod_consts.const_str_plain_FocalPlaneXResolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41487", mod_consts.const_int_pos_41487);
assert(mod_consts_hash[330] == DEEP_HASH(tstate, mod_consts.const_int_pos_41487) && "mod_consts.const_int_pos_41487");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalPlaneYResolution", mod_consts.const_str_plain_FocalPlaneYResolution);
assert(mod_consts_hash[331] == DEEP_HASH(tstate, mod_consts.const_str_plain_FocalPlaneYResolution) && "mod_consts.const_str_plain_FocalPlaneYResolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41488", mod_consts.const_int_pos_41488);
assert(mod_consts_hash[332] == DEEP_HASH(tstate, mod_consts.const_int_pos_41488) && "mod_consts.const_int_pos_41488");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalPlaneResolutionUnit", mod_consts.const_str_plain_FocalPlaneResolutionUnit);
assert(mod_consts_hash[333] == DEEP_HASH(tstate, mod_consts.const_str_plain_FocalPlaneResolutionUnit) && "mod_consts.const_str_plain_FocalPlaneResolutionUnit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41492", mod_consts.const_int_pos_41492);
assert(mod_consts_hash[334] == DEEP_HASH(tstate, mod_consts.const_int_pos_41492) && "mod_consts.const_int_pos_41492");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectLocation", mod_consts.const_str_plain_SubjectLocation);
assert(mod_consts_hash[335] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectLocation) && "mod_consts.const_str_plain_SubjectLocation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41493", mod_consts.const_int_pos_41493);
assert(mod_consts_hash[336] == DEEP_HASH(tstate, mod_consts.const_int_pos_41493) && "mod_consts.const_int_pos_41493");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureIndex", mod_consts.const_str_plain_ExposureIndex);
assert(mod_consts_hash[337] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureIndex) && "mod_consts.const_str_plain_ExposureIndex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41495", mod_consts.const_int_pos_41495);
assert(mod_consts_hash[338] == DEEP_HASH(tstate, mod_consts.const_int_pos_41495) && "mod_consts.const_int_pos_41495");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SensingMethod", mod_consts.const_str_plain_SensingMethod);
assert(mod_consts_hash[339] == DEEP_HASH(tstate, mod_consts.const_str_plain_SensingMethod) && "mod_consts.const_str_plain_SensingMethod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41728", mod_consts.const_int_pos_41728);
assert(mod_consts_hash[340] == DEEP_HASH(tstate, mod_consts.const_int_pos_41728) && "mod_consts.const_int_pos_41728");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FileSource", mod_consts.const_str_plain_FileSource);
assert(mod_consts_hash[341] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileSource) && "mod_consts.const_str_plain_FileSource");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41729", mod_consts.const_int_pos_41729);
assert(mod_consts_hash[342] == DEEP_HASH(tstate, mod_consts.const_int_pos_41729) && "mod_consts.const_int_pos_41729");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SceneType", mod_consts.const_str_plain_SceneType);
assert(mod_consts_hash[343] == DEEP_HASH(tstate, mod_consts.const_str_plain_SceneType) && "mod_consts.const_str_plain_SceneType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41730", mod_consts.const_int_pos_41730);
assert(mod_consts_hash[344] == DEEP_HASH(tstate, mod_consts.const_int_pos_41730) && "mod_consts.const_int_pos_41730");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFAPattern", mod_consts.const_str_plain_CFAPattern);
assert(mod_consts_hash[345] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFAPattern) && "mod_consts.const_str_plain_CFAPattern");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41985", mod_consts.const_int_pos_41985);
assert(mod_consts_hash[346] == DEEP_HASH(tstate, mod_consts.const_int_pos_41985) && "mod_consts.const_int_pos_41985");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CustomRendered", mod_consts.const_str_plain_CustomRendered);
assert(mod_consts_hash[347] == DEEP_HASH(tstate, mod_consts.const_str_plain_CustomRendered) && "mod_consts.const_str_plain_CustomRendered");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41986", mod_consts.const_int_pos_41986);
assert(mod_consts_hash[348] == DEEP_HASH(tstate, mod_consts.const_int_pos_41986) && "mod_consts.const_int_pos_41986");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExposureMode", mod_consts.const_str_plain_ExposureMode);
assert(mod_consts_hash[349] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExposureMode) && "mod_consts.const_str_plain_ExposureMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41987", mod_consts.const_int_pos_41987);
assert(mod_consts_hash[350] == DEEP_HASH(tstate, mod_consts.const_int_pos_41987) && "mod_consts.const_int_pos_41987");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhiteBalance", mod_consts.const_str_plain_WhiteBalance);
assert(mod_consts_hash[351] == DEEP_HASH(tstate, mod_consts.const_str_plain_WhiteBalance) && "mod_consts.const_str_plain_WhiteBalance");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41988", mod_consts.const_int_pos_41988);
assert(mod_consts_hash[352] == DEEP_HASH(tstate, mod_consts.const_int_pos_41988) && "mod_consts.const_int_pos_41988");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DigitalZoomRatio", mod_consts.const_str_plain_DigitalZoomRatio);
assert(mod_consts_hash[353] == DEEP_HASH(tstate, mod_consts.const_str_plain_DigitalZoomRatio) && "mod_consts.const_str_plain_DigitalZoomRatio");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41989", mod_consts.const_int_pos_41989);
assert(mod_consts_hash[354] == DEEP_HASH(tstate, mod_consts.const_int_pos_41989) && "mod_consts.const_int_pos_41989");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FocalLengthIn35mmFilm", mod_consts.const_str_plain_FocalLengthIn35mmFilm);
assert(mod_consts_hash[355] == DEEP_HASH(tstate, mod_consts.const_str_plain_FocalLengthIn35mmFilm) && "mod_consts.const_str_plain_FocalLengthIn35mmFilm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41990", mod_consts.const_int_pos_41990);
assert(mod_consts_hash[356] == DEEP_HASH(tstate, mod_consts.const_int_pos_41990) && "mod_consts.const_int_pos_41990");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SceneCaptureType", mod_consts.const_str_plain_SceneCaptureType);
assert(mod_consts_hash[357] == DEEP_HASH(tstate, mod_consts.const_str_plain_SceneCaptureType) && "mod_consts.const_str_plain_SceneCaptureType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41991", mod_consts.const_int_pos_41991);
assert(mod_consts_hash[358] == DEEP_HASH(tstate, mod_consts.const_int_pos_41991) && "mod_consts.const_int_pos_41991");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GainControl", mod_consts.const_str_plain_GainControl);
assert(mod_consts_hash[359] == DEEP_HASH(tstate, mod_consts.const_str_plain_GainControl) && "mod_consts.const_str_plain_GainControl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41992", mod_consts.const_int_pos_41992);
assert(mod_consts_hash[360] == DEEP_HASH(tstate, mod_consts.const_int_pos_41992) && "mod_consts.const_int_pos_41992");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Contrast", mod_consts.const_str_plain_Contrast);
assert(mod_consts_hash[361] == DEEP_HASH(tstate, mod_consts.const_str_plain_Contrast) && "mod_consts.const_str_plain_Contrast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41993", mod_consts.const_int_pos_41993);
assert(mod_consts_hash[362] == DEEP_HASH(tstate, mod_consts.const_int_pos_41993) && "mod_consts.const_int_pos_41993");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Saturation", mod_consts.const_str_plain_Saturation);
assert(mod_consts_hash[363] == DEEP_HASH(tstate, mod_consts.const_str_plain_Saturation) && "mod_consts.const_str_plain_Saturation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41994", mod_consts.const_int_pos_41994);
assert(mod_consts_hash[364] == DEEP_HASH(tstate, mod_consts.const_int_pos_41994) && "mod_consts.const_int_pos_41994");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Sharpness", mod_consts.const_str_plain_Sharpness);
assert(mod_consts_hash[365] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sharpness) && "mod_consts.const_str_plain_Sharpness");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41995", mod_consts.const_int_pos_41995);
assert(mod_consts_hash[366] == DEEP_HASH(tstate, mod_consts.const_int_pos_41995) && "mod_consts.const_int_pos_41995");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeviceSettingDescription", mod_consts.const_str_plain_DeviceSettingDescription);
assert(mod_consts_hash[367] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeviceSettingDescription) && "mod_consts.const_str_plain_DeviceSettingDescription");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41996", mod_consts.const_int_pos_41996);
assert(mod_consts_hash[368] == DEEP_HASH(tstate, mod_consts.const_int_pos_41996) && "mod_consts.const_int_pos_41996");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubjectDistanceRange", mod_consts.const_str_plain_SubjectDistanceRange);
assert(mod_consts_hash[369] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectDistanceRange) && "mod_consts.const_str_plain_SubjectDistanceRange");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42016", mod_consts.const_int_pos_42016);
assert(mod_consts_hash[370] == DEEP_HASH(tstate, mod_consts.const_int_pos_42016) && "mod_consts.const_int_pos_42016");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageUniqueID", mod_consts.const_str_plain_ImageUniqueID);
assert(mod_consts_hash[371] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageUniqueID) && "mod_consts.const_str_plain_ImageUniqueID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42032", mod_consts.const_int_pos_42032);
assert(mod_consts_hash[372] == DEEP_HASH(tstate, mod_consts.const_int_pos_42032) && "mod_consts.const_int_pos_42032");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraOwnerName", mod_consts.const_str_plain_CameraOwnerName);
assert(mod_consts_hash[373] == DEEP_HASH(tstate, mod_consts.const_str_plain_CameraOwnerName) && "mod_consts.const_str_plain_CameraOwnerName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42033", mod_consts.const_int_pos_42033);
assert(mod_consts_hash[374] == DEEP_HASH(tstate, mod_consts.const_int_pos_42033) && "mod_consts.const_int_pos_42033");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BodySerialNumber", mod_consts.const_str_plain_BodySerialNumber);
assert(mod_consts_hash[375] == DEEP_HASH(tstate, mod_consts.const_str_plain_BodySerialNumber) && "mod_consts.const_str_plain_BodySerialNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42034", mod_consts.const_int_pos_42034);
assert(mod_consts_hash[376] == DEEP_HASH(tstate, mod_consts.const_int_pos_42034) && "mod_consts.const_int_pos_42034");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensSpecification", mod_consts.const_str_plain_LensSpecification);
assert(mod_consts_hash[377] == DEEP_HASH(tstate, mod_consts.const_str_plain_LensSpecification) && "mod_consts.const_str_plain_LensSpecification");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42035", mod_consts.const_int_pos_42035);
assert(mod_consts_hash[378] == DEEP_HASH(tstate, mod_consts.const_int_pos_42035) && "mod_consts.const_int_pos_42035");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensMake", mod_consts.const_str_plain_LensMake);
assert(mod_consts_hash[379] == DEEP_HASH(tstate, mod_consts.const_str_plain_LensMake) && "mod_consts.const_str_plain_LensMake");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42036", mod_consts.const_int_pos_42036);
assert(mod_consts_hash[380] == DEEP_HASH(tstate, mod_consts.const_int_pos_42036) && "mod_consts.const_int_pos_42036");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensModel", mod_consts.const_str_plain_LensModel);
assert(mod_consts_hash[381] == DEEP_HASH(tstate, mod_consts.const_str_plain_LensModel) && "mod_consts.const_str_plain_LensModel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42037", mod_consts.const_int_pos_42037);
assert(mod_consts_hash[382] == DEEP_HASH(tstate, mod_consts.const_int_pos_42037) && "mod_consts.const_int_pos_42037");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensSerialNumber", mod_consts.const_str_plain_LensSerialNumber);
assert(mod_consts_hash[383] == DEEP_HASH(tstate, mod_consts.const_str_plain_LensSerialNumber) && "mod_consts.const_str_plain_LensSerialNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42080", mod_consts.const_int_pos_42080);
assert(mod_consts_hash[384] == DEEP_HASH(tstate, mod_consts.const_int_pos_42080) && "mod_consts.const_int_pos_42080");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompositeImage", mod_consts.const_str_plain_CompositeImage);
assert(mod_consts_hash[385] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompositeImage) && "mod_consts.const_str_plain_CompositeImage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42081", mod_consts.const_int_pos_42081);
assert(mod_consts_hash[386] == DEEP_HASH(tstate, mod_consts.const_int_pos_42081) && "mod_consts.const_int_pos_42081");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompositeImageCount", mod_consts.const_str_plain_CompositeImageCount);
assert(mod_consts_hash[387] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompositeImageCount) && "mod_consts.const_str_plain_CompositeImageCount");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42082", mod_consts.const_int_pos_42082);
assert(mod_consts_hash[388] == DEEP_HASH(tstate, mod_consts.const_int_pos_42082) && "mod_consts.const_int_pos_42082");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompositeImageExposureTimes", mod_consts.const_str_plain_CompositeImageExposureTimes);
assert(mod_consts_hash[389] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompositeImageExposureTimes) && "mod_consts.const_str_plain_CompositeImageExposureTimes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42240", mod_consts.const_int_pos_42240);
assert(mod_consts_hash[390] == DEEP_HASH(tstate, mod_consts.const_int_pos_42240) && "mod_consts.const_int_pos_42240");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Gamma", mod_consts.const_str_plain_Gamma);
assert(mod_consts_hash[391] == DEEP_HASH(tstate, mod_consts.const_str_plain_Gamma) && "mod_consts.const_str_plain_Gamma");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50341", mod_consts.const_int_pos_50341);
assert(mod_consts_hash[392] == DEEP_HASH(tstate, mod_consts.const_int_pos_50341) && "mod_consts.const_int_pos_50341");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PrintImageMatching", mod_consts.const_str_plain_PrintImageMatching);
assert(mod_consts_hash[393] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrintImageMatching) && "mod_consts.const_str_plain_PrintImageMatching");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50706", mod_consts.const_int_pos_50706);
assert(mod_consts_hash[394] == DEEP_HASH(tstate, mod_consts.const_int_pos_50706) && "mod_consts.const_int_pos_50706");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNGVersion", mod_consts.const_str_plain_DNGVersion);
assert(mod_consts_hash[395] == DEEP_HASH(tstate, mod_consts.const_str_plain_DNGVersion) && "mod_consts.const_str_plain_DNGVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50707", mod_consts.const_int_pos_50707);
assert(mod_consts_hash[396] == DEEP_HASH(tstate, mod_consts.const_int_pos_50707) && "mod_consts.const_int_pos_50707");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNGBackwardVersion", mod_consts.const_str_plain_DNGBackwardVersion);
assert(mod_consts_hash[397] == DEEP_HASH(tstate, mod_consts.const_str_plain_DNGBackwardVersion) && "mod_consts.const_str_plain_DNGBackwardVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50708", mod_consts.const_int_pos_50708);
assert(mod_consts_hash[398] == DEEP_HASH(tstate, mod_consts.const_int_pos_50708) && "mod_consts.const_int_pos_50708");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UniqueCameraModel", mod_consts.const_str_plain_UniqueCameraModel);
assert(mod_consts_hash[399] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueCameraModel) && "mod_consts.const_str_plain_UniqueCameraModel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50709", mod_consts.const_int_pos_50709);
assert(mod_consts_hash[400] == DEEP_HASH(tstate, mod_consts.const_int_pos_50709) && "mod_consts.const_int_pos_50709");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocalizedCameraModel", mod_consts.const_str_plain_LocalizedCameraModel);
assert(mod_consts_hash[401] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalizedCameraModel) && "mod_consts.const_str_plain_LocalizedCameraModel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50710", mod_consts.const_int_pos_50710);
assert(mod_consts_hash[402] == DEEP_HASH(tstate, mod_consts.const_int_pos_50710) && "mod_consts.const_int_pos_50710");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFAPlaneColor", mod_consts.const_str_plain_CFAPlaneColor);
assert(mod_consts_hash[403] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFAPlaneColor) && "mod_consts.const_str_plain_CFAPlaneColor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50711", mod_consts.const_int_pos_50711);
assert(mod_consts_hash[404] == DEEP_HASH(tstate, mod_consts.const_int_pos_50711) && "mod_consts.const_int_pos_50711");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CFALayout", mod_consts.const_str_plain_CFALayout);
assert(mod_consts_hash[405] == DEEP_HASH(tstate, mod_consts.const_str_plain_CFALayout) && "mod_consts.const_str_plain_CFALayout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50712", mod_consts.const_int_pos_50712);
assert(mod_consts_hash[406] == DEEP_HASH(tstate, mod_consts.const_int_pos_50712) && "mod_consts.const_int_pos_50712");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LinearizationTable", mod_consts.const_str_plain_LinearizationTable);
assert(mod_consts_hash[407] == DEEP_HASH(tstate, mod_consts.const_str_plain_LinearizationTable) && "mod_consts.const_str_plain_LinearizationTable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50713", mod_consts.const_int_pos_50713);
assert(mod_consts_hash[408] == DEEP_HASH(tstate, mod_consts.const_int_pos_50713) && "mod_consts.const_int_pos_50713");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevelRepeatDim", mod_consts.const_str_plain_BlackLevelRepeatDim);
assert(mod_consts_hash[409] == DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevelRepeatDim) && "mod_consts.const_str_plain_BlackLevelRepeatDim");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50714", mod_consts.const_int_pos_50714);
assert(mod_consts_hash[410] == DEEP_HASH(tstate, mod_consts.const_int_pos_50714) && "mod_consts.const_int_pos_50714");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevel", mod_consts.const_str_plain_BlackLevel);
assert(mod_consts_hash[411] == DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevel) && "mod_consts.const_str_plain_BlackLevel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50715", mod_consts.const_int_pos_50715);
assert(mod_consts_hash[412] == DEEP_HASH(tstate, mod_consts.const_int_pos_50715) && "mod_consts.const_int_pos_50715");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevelDeltaH", mod_consts.const_str_plain_BlackLevelDeltaH);
assert(mod_consts_hash[413] == DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevelDeltaH) && "mod_consts.const_str_plain_BlackLevelDeltaH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50716", mod_consts.const_int_pos_50716);
assert(mod_consts_hash[414] == DEEP_HASH(tstate, mod_consts.const_int_pos_50716) && "mod_consts.const_int_pos_50716");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BlackLevelDeltaV", mod_consts.const_str_plain_BlackLevelDeltaV);
assert(mod_consts_hash[415] == DEEP_HASH(tstate, mod_consts.const_str_plain_BlackLevelDeltaV) && "mod_consts.const_str_plain_BlackLevelDeltaV");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50717", mod_consts.const_int_pos_50717);
assert(mod_consts_hash[416] == DEEP_HASH(tstate, mod_consts.const_int_pos_50717) && "mod_consts.const_int_pos_50717");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhiteLevel", mod_consts.const_str_plain_WhiteLevel);
assert(mod_consts_hash[417] == DEEP_HASH(tstate, mod_consts.const_str_plain_WhiteLevel) && "mod_consts.const_str_plain_WhiteLevel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50718", mod_consts.const_int_pos_50718);
assert(mod_consts_hash[418] == DEEP_HASH(tstate, mod_consts.const_int_pos_50718) && "mod_consts.const_int_pos_50718");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DefaultScale", mod_consts.const_str_plain_DefaultScale);
assert(mod_consts_hash[419] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultScale) && "mod_consts.const_str_plain_DefaultScale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50719", mod_consts.const_int_pos_50719);
assert(mod_consts_hash[420] == DEEP_HASH(tstate, mod_consts.const_int_pos_50719) && "mod_consts.const_int_pos_50719");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DefaultCropOrigin", mod_consts.const_str_plain_DefaultCropOrigin);
assert(mod_consts_hash[421] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultCropOrigin) && "mod_consts.const_str_plain_DefaultCropOrigin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50720", mod_consts.const_int_pos_50720);
assert(mod_consts_hash[422] == DEEP_HASH(tstate, mod_consts.const_int_pos_50720) && "mod_consts.const_int_pos_50720");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DefaultCropSize", mod_consts.const_str_plain_DefaultCropSize);
assert(mod_consts_hash[423] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultCropSize) && "mod_consts.const_str_plain_DefaultCropSize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50721", mod_consts.const_int_pos_50721);
assert(mod_consts_hash[424] == DEEP_HASH(tstate, mod_consts.const_int_pos_50721) && "mod_consts.const_int_pos_50721");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMatrix1", mod_consts.const_str_plain_ColorMatrix1);
assert(mod_consts_hash[425] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMatrix1) && "mod_consts.const_str_plain_ColorMatrix1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50722", mod_consts.const_int_pos_50722);
assert(mod_consts_hash[426] == DEEP_HASH(tstate, mod_consts.const_int_pos_50722) && "mod_consts.const_int_pos_50722");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorMatrix2", mod_consts.const_str_plain_ColorMatrix2);
assert(mod_consts_hash[427] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorMatrix2) && "mod_consts.const_str_plain_ColorMatrix2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50723", mod_consts.const_int_pos_50723);
assert(mod_consts_hash[428] == DEEP_HASH(tstate, mod_consts.const_int_pos_50723) && "mod_consts.const_int_pos_50723");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraCalibration1", mod_consts.const_str_plain_CameraCalibration1);
assert(mod_consts_hash[429] == DEEP_HASH(tstate, mod_consts.const_str_plain_CameraCalibration1) && "mod_consts.const_str_plain_CameraCalibration1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50724", mod_consts.const_int_pos_50724);
assert(mod_consts_hash[430] == DEEP_HASH(tstate, mod_consts.const_int_pos_50724) && "mod_consts.const_int_pos_50724");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraCalibration2", mod_consts.const_str_plain_CameraCalibration2);
assert(mod_consts_hash[431] == DEEP_HASH(tstate, mod_consts.const_str_plain_CameraCalibration2) && "mod_consts.const_str_plain_CameraCalibration2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50725", mod_consts.const_int_pos_50725);
assert(mod_consts_hash[432] == DEEP_HASH(tstate, mod_consts.const_int_pos_50725) && "mod_consts.const_int_pos_50725");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReductionMatrix1", mod_consts.const_str_plain_ReductionMatrix1);
assert(mod_consts_hash[433] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReductionMatrix1) && "mod_consts.const_str_plain_ReductionMatrix1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50726", mod_consts.const_int_pos_50726);
assert(mod_consts_hash[434] == DEEP_HASH(tstate, mod_consts.const_int_pos_50726) && "mod_consts.const_int_pos_50726");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReductionMatrix2", mod_consts.const_str_plain_ReductionMatrix2);
assert(mod_consts_hash[435] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReductionMatrix2) && "mod_consts.const_str_plain_ReductionMatrix2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50727", mod_consts.const_int_pos_50727);
assert(mod_consts_hash[436] == DEEP_HASH(tstate, mod_consts.const_int_pos_50727) && "mod_consts.const_int_pos_50727");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AnalogBalance", mod_consts.const_str_plain_AnalogBalance);
assert(mod_consts_hash[437] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnalogBalance) && "mod_consts.const_str_plain_AnalogBalance");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50728", mod_consts.const_int_pos_50728);
assert(mod_consts_hash[438] == DEEP_HASH(tstate, mod_consts.const_int_pos_50728) && "mod_consts.const_int_pos_50728");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotNeutral", mod_consts.const_str_plain_AsShotNeutral);
assert(mod_consts_hash[439] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotNeutral) && "mod_consts.const_str_plain_AsShotNeutral");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50729", mod_consts.const_int_pos_50729);
assert(mod_consts_hash[440] == DEEP_HASH(tstate, mod_consts.const_int_pos_50729) && "mod_consts.const_int_pos_50729");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotWhiteXY", mod_consts.const_str_plain_AsShotWhiteXY);
assert(mod_consts_hash[441] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotWhiteXY) && "mod_consts.const_str_plain_AsShotWhiteXY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50730", mod_consts.const_int_pos_50730);
assert(mod_consts_hash[442] == DEEP_HASH(tstate, mod_consts.const_int_pos_50730) && "mod_consts.const_int_pos_50730");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineExposure", mod_consts.const_str_plain_BaselineExposure);
assert(mod_consts_hash[443] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineExposure) && "mod_consts.const_str_plain_BaselineExposure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50731", mod_consts.const_int_pos_50731);
assert(mod_consts_hash[444] == DEEP_HASH(tstate, mod_consts.const_int_pos_50731) && "mod_consts.const_int_pos_50731");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineNoise", mod_consts.const_str_plain_BaselineNoise);
assert(mod_consts_hash[445] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineNoise) && "mod_consts.const_str_plain_BaselineNoise");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50732", mod_consts.const_int_pos_50732);
assert(mod_consts_hash[446] == DEEP_HASH(tstate, mod_consts.const_int_pos_50732) && "mod_consts.const_int_pos_50732");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaselineSharpness", mod_consts.const_str_plain_BaselineSharpness);
assert(mod_consts_hash[447] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaselineSharpness) && "mod_consts.const_str_plain_BaselineSharpness");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50733", mod_consts.const_int_pos_50733);
assert(mod_consts_hash[448] == DEEP_HASH(tstate, mod_consts.const_int_pos_50733) && "mod_consts.const_int_pos_50733");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BayerGreenSplit", mod_consts.const_str_plain_BayerGreenSplit);
assert(mod_consts_hash[449] == DEEP_HASH(tstate, mod_consts.const_str_plain_BayerGreenSplit) && "mod_consts.const_str_plain_BayerGreenSplit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50734", mod_consts.const_int_pos_50734);
assert(mod_consts_hash[450] == DEEP_HASH(tstate, mod_consts.const_int_pos_50734) && "mod_consts.const_int_pos_50734");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LinearResponseLimit", mod_consts.const_str_plain_LinearResponseLimit);
assert(mod_consts_hash[451] == DEEP_HASH(tstate, mod_consts.const_str_plain_LinearResponseLimit) && "mod_consts.const_str_plain_LinearResponseLimit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50735", mod_consts.const_int_pos_50735);
assert(mod_consts_hash[452] == DEEP_HASH(tstate, mod_consts.const_int_pos_50735) && "mod_consts.const_int_pos_50735");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraSerialNumber", mod_consts.const_str_plain_CameraSerialNumber);
assert(mod_consts_hash[453] == DEEP_HASH(tstate, mod_consts.const_str_plain_CameraSerialNumber) && "mod_consts.const_str_plain_CameraSerialNumber");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50736", mod_consts.const_int_pos_50736);
assert(mod_consts_hash[454] == DEEP_HASH(tstate, mod_consts.const_int_pos_50736) && "mod_consts.const_int_pos_50736");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LensInfo", mod_consts.const_str_plain_LensInfo);
assert(mod_consts_hash[455] == DEEP_HASH(tstate, mod_consts.const_str_plain_LensInfo) && "mod_consts.const_str_plain_LensInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50737", mod_consts.const_int_pos_50737);
assert(mod_consts_hash[456] == DEEP_HASH(tstate, mod_consts.const_int_pos_50737) && "mod_consts.const_int_pos_50737");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ChromaBlurRadius", mod_consts.const_str_plain_ChromaBlurRadius);
assert(mod_consts_hash[457] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChromaBlurRadius) && "mod_consts.const_str_plain_ChromaBlurRadius");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50738", mod_consts.const_int_pos_50738);
assert(mod_consts_hash[458] == DEEP_HASH(tstate, mod_consts.const_int_pos_50738) && "mod_consts.const_int_pos_50738");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AntiAliasStrength", mod_consts.const_str_plain_AntiAliasStrength);
assert(mod_consts_hash[459] == DEEP_HASH(tstate, mod_consts.const_str_plain_AntiAliasStrength) && "mod_consts.const_str_plain_AntiAliasStrength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50739", mod_consts.const_int_pos_50739);
assert(mod_consts_hash[460] == DEEP_HASH(tstate, mod_consts.const_int_pos_50739) && "mod_consts.const_int_pos_50739");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ShadowScale", mod_consts.const_str_plain_ShadowScale);
assert(mod_consts_hash[461] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShadowScale) && "mod_consts.const_str_plain_ShadowScale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50740", mod_consts.const_int_pos_50740);
assert(mod_consts_hash[462] == DEEP_HASH(tstate, mod_consts.const_int_pos_50740) && "mod_consts.const_int_pos_50740");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DNGPrivateData", mod_consts.const_str_plain_DNGPrivateData);
assert(mod_consts_hash[463] == DEEP_HASH(tstate, mod_consts.const_str_plain_DNGPrivateData) && "mod_consts.const_str_plain_DNGPrivateData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50741", mod_consts.const_int_pos_50741);
assert(mod_consts_hash[464] == DEEP_HASH(tstate, mod_consts.const_int_pos_50741) && "mod_consts.const_int_pos_50741");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MakerNoteSafety", mod_consts.const_str_plain_MakerNoteSafety);
assert(mod_consts_hash[465] == DEEP_HASH(tstate, mod_consts.const_str_plain_MakerNoteSafety) && "mod_consts.const_str_plain_MakerNoteSafety");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50778", mod_consts.const_int_pos_50778);
assert(mod_consts_hash[466] == DEEP_HASH(tstate, mod_consts.const_int_pos_50778) && "mod_consts.const_int_pos_50778");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CalibrationIlluminant1", mod_consts.const_str_plain_CalibrationIlluminant1);
assert(mod_consts_hash[467] == DEEP_HASH(tstate, mod_consts.const_str_plain_CalibrationIlluminant1) && "mod_consts.const_str_plain_CalibrationIlluminant1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50779", mod_consts.const_int_pos_50779);
assert(mod_consts_hash[468] == DEEP_HASH(tstate, mod_consts.const_int_pos_50779) && "mod_consts.const_int_pos_50779");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CalibrationIlluminant2", mod_consts.const_str_plain_CalibrationIlluminant2);
assert(mod_consts_hash[469] == DEEP_HASH(tstate, mod_consts.const_str_plain_CalibrationIlluminant2) && "mod_consts.const_str_plain_CalibrationIlluminant2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50780", mod_consts.const_int_pos_50780);
assert(mod_consts_hash[470] == DEEP_HASH(tstate, mod_consts.const_int_pos_50780) && "mod_consts.const_int_pos_50780");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BestQualityScale", mod_consts.const_str_plain_BestQualityScale);
assert(mod_consts_hash[471] == DEEP_HASH(tstate, mod_consts.const_str_plain_BestQualityScale) && "mod_consts.const_str_plain_BestQualityScale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50781", mod_consts.const_int_pos_50781);
assert(mod_consts_hash[472] == DEEP_HASH(tstate, mod_consts.const_int_pos_50781) && "mod_consts.const_int_pos_50781");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RawDataUniqueID", mod_consts.const_str_plain_RawDataUniqueID);
assert(mod_consts_hash[473] == DEEP_HASH(tstate, mod_consts.const_str_plain_RawDataUniqueID) && "mod_consts.const_str_plain_RawDataUniqueID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50827", mod_consts.const_int_pos_50827);
assert(mod_consts_hash[474] == DEEP_HASH(tstate, mod_consts.const_int_pos_50827) && "mod_consts.const_int_pos_50827");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OriginalRawFileName", mod_consts.const_str_plain_OriginalRawFileName);
assert(mod_consts_hash[475] == DEEP_HASH(tstate, mod_consts.const_str_plain_OriginalRawFileName) && "mod_consts.const_str_plain_OriginalRawFileName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50828", mod_consts.const_int_pos_50828);
assert(mod_consts_hash[476] == DEEP_HASH(tstate, mod_consts.const_int_pos_50828) && "mod_consts.const_int_pos_50828");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OriginalRawFileData", mod_consts.const_str_plain_OriginalRawFileData);
assert(mod_consts_hash[477] == DEEP_HASH(tstate, mod_consts.const_str_plain_OriginalRawFileData) && "mod_consts.const_str_plain_OriginalRawFileData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50829", mod_consts.const_int_pos_50829);
assert(mod_consts_hash[478] == DEEP_HASH(tstate, mod_consts.const_int_pos_50829) && "mod_consts.const_int_pos_50829");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ActiveArea", mod_consts.const_str_plain_ActiveArea);
assert(mod_consts_hash[479] == DEEP_HASH(tstate, mod_consts.const_str_plain_ActiveArea) && "mod_consts.const_str_plain_ActiveArea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50830", mod_consts.const_int_pos_50830);
assert(mod_consts_hash[480] == DEEP_HASH(tstate, mod_consts.const_int_pos_50830) && "mod_consts.const_int_pos_50830");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaskedAreas", mod_consts.const_str_plain_MaskedAreas);
assert(mod_consts_hash[481] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaskedAreas) && "mod_consts.const_str_plain_MaskedAreas");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50831", mod_consts.const_int_pos_50831);
assert(mod_consts_hash[482] == DEEP_HASH(tstate, mod_consts.const_int_pos_50831) && "mod_consts.const_int_pos_50831");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotICCProfile", mod_consts.const_str_plain_AsShotICCProfile);
assert(mod_consts_hash[483] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotICCProfile) && "mod_consts.const_str_plain_AsShotICCProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50832", mod_consts.const_int_pos_50832);
assert(mod_consts_hash[484] == DEEP_HASH(tstate, mod_consts.const_int_pos_50832) && "mod_consts.const_int_pos_50832");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotPreProfileMatrix", mod_consts.const_str_plain_AsShotPreProfileMatrix);
assert(mod_consts_hash[485] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotPreProfileMatrix) && "mod_consts.const_str_plain_AsShotPreProfileMatrix");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50833", mod_consts.const_int_pos_50833);
assert(mod_consts_hash[486] == DEEP_HASH(tstate, mod_consts.const_int_pos_50833) && "mod_consts.const_int_pos_50833");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CurrentICCProfile", mod_consts.const_str_plain_CurrentICCProfile);
assert(mod_consts_hash[487] == DEEP_HASH(tstate, mod_consts.const_str_plain_CurrentICCProfile) && "mod_consts.const_str_plain_CurrentICCProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50834", mod_consts.const_int_pos_50834);
assert(mod_consts_hash[488] == DEEP_HASH(tstate, mod_consts.const_int_pos_50834) && "mod_consts.const_int_pos_50834");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CurrentPreProfileMatrix", mod_consts.const_str_plain_CurrentPreProfileMatrix);
assert(mod_consts_hash[489] == DEEP_HASH(tstate, mod_consts.const_str_plain_CurrentPreProfileMatrix) && "mod_consts.const_str_plain_CurrentPreProfileMatrix");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50879", mod_consts.const_int_pos_50879);
assert(mod_consts_hash[490] == DEEP_HASH(tstate, mod_consts.const_int_pos_50879) && "mod_consts.const_int_pos_50879");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ColorimetricReference", mod_consts.const_str_plain_ColorimetricReference);
assert(mod_consts_hash[491] == DEEP_HASH(tstate, mod_consts.const_str_plain_ColorimetricReference) && "mod_consts.const_str_plain_ColorimetricReference");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50931", mod_consts.const_int_pos_50931);
assert(mod_consts_hash[492] == DEEP_HASH(tstate, mod_consts.const_int_pos_50931) && "mod_consts.const_int_pos_50931");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CameraCalibrationSignature", mod_consts.const_str_plain_CameraCalibrationSignature);
assert(mod_consts_hash[493] == DEEP_HASH(tstate, mod_consts.const_str_plain_CameraCalibrationSignature) && "mod_consts.const_str_plain_CameraCalibrationSignature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50932", mod_consts.const_int_pos_50932);
assert(mod_consts_hash[494] == DEEP_HASH(tstate, mod_consts.const_int_pos_50932) && "mod_consts.const_int_pos_50932");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileCalibrationSignature", mod_consts.const_str_plain_ProfileCalibrationSignature);
assert(mod_consts_hash[495] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileCalibrationSignature) && "mod_consts.const_str_plain_ProfileCalibrationSignature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50934", mod_consts.const_int_pos_50934);
assert(mod_consts_hash[496] == DEEP_HASH(tstate, mod_consts.const_int_pos_50934) && "mod_consts.const_int_pos_50934");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsShotProfileName", mod_consts.const_str_plain_AsShotProfileName);
assert(mod_consts_hash[497] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsShotProfileName) && "mod_consts.const_str_plain_AsShotProfileName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50935", mod_consts.const_int_pos_50935);
assert(mod_consts_hash[498] == DEEP_HASH(tstate, mod_consts.const_int_pos_50935) && "mod_consts.const_int_pos_50935");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NoiseReductionApplied", mod_consts.const_str_plain_NoiseReductionApplied);
assert(mod_consts_hash[499] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoiseReductionApplied) && "mod_consts.const_str_plain_NoiseReductionApplied");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50936", mod_consts.const_int_pos_50936);
assert(mod_consts_hash[500] == DEEP_HASH(tstate, mod_consts.const_int_pos_50936) && "mod_consts.const_int_pos_50936");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileName", mod_consts.const_str_plain_ProfileName);
assert(mod_consts_hash[501] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileName) && "mod_consts.const_str_plain_ProfileName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50937", mod_consts.const_int_pos_50937);
assert(mod_consts_hash[502] == DEEP_HASH(tstate, mod_consts.const_int_pos_50937) && "mod_consts.const_int_pos_50937");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileHueSatMapDims", mod_consts.const_str_plain_ProfileHueSatMapDims);
assert(mod_consts_hash[503] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileHueSatMapDims) && "mod_consts.const_str_plain_ProfileHueSatMapDims");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50938", mod_consts.const_int_pos_50938);
assert(mod_consts_hash[504] == DEEP_HASH(tstate, mod_consts.const_int_pos_50938) && "mod_consts.const_int_pos_50938");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileHueSatMapData1", mod_consts.const_str_plain_ProfileHueSatMapData1);
assert(mod_consts_hash[505] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileHueSatMapData1) && "mod_consts.const_str_plain_ProfileHueSatMapData1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50939", mod_consts.const_int_pos_50939);
assert(mod_consts_hash[506] == DEEP_HASH(tstate, mod_consts.const_int_pos_50939) && "mod_consts.const_int_pos_50939");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileHueSatMapData2", mod_consts.const_str_plain_ProfileHueSatMapData2);
assert(mod_consts_hash[507] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileHueSatMapData2) && "mod_consts.const_str_plain_ProfileHueSatMapData2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50940", mod_consts.const_int_pos_50940);
assert(mod_consts_hash[508] == DEEP_HASH(tstate, mod_consts.const_int_pos_50940) && "mod_consts.const_int_pos_50940");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileToneCurve", mod_consts.const_str_plain_ProfileToneCurve);
assert(mod_consts_hash[509] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileToneCurve) && "mod_consts.const_str_plain_ProfileToneCurve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50941", mod_consts.const_int_pos_50941);
assert(mod_consts_hash[510] == DEEP_HASH(tstate, mod_consts.const_int_pos_50941) && "mod_consts.const_int_pos_50941");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileEmbedPolicy", mod_consts.const_str_plain_ProfileEmbedPolicy);
assert(mod_consts_hash[511] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileEmbedPolicy) && "mod_consts.const_str_plain_ProfileEmbedPolicy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50942", mod_consts.const_int_pos_50942);
assert(mod_consts_hash[512] == DEEP_HASH(tstate, mod_consts.const_int_pos_50942) && "mod_consts.const_int_pos_50942");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileCopyright", mod_consts.const_str_plain_ProfileCopyright);
assert(mod_consts_hash[513] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileCopyright) && "mod_consts.const_str_plain_ProfileCopyright");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50964", mod_consts.const_int_pos_50964);
assert(mod_consts_hash[514] == DEEP_HASH(tstate, mod_consts.const_int_pos_50964) && "mod_consts.const_int_pos_50964");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ForwardMatrix1", mod_consts.const_str_plain_ForwardMatrix1);
assert(mod_consts_hash[515] == DEEP_HASH(tstate, mod_consts.const_str_plain_ForwardMatrix1) && "mod_consts.const_str_plain_ForwardMatrix1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50965", mod_consts.const_int_pos_50965);
assert(mod_consts_hash[516] == DEEP_HASH(tstate, mod_consts.const_int_pos_50965) && "mod_consts.const_int_pos_50965");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ForwardMatrix2", mod_consts.const_str_plain_ForwardMatrix2);
assert(mod_consts_hash[517] == DEEP_HASH(tstate, mod_consts.const_str_plain_ForwardMatrix2) && "mod_consts.const_str_plain_ForwardMatrix2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50966", mod_consts.const_int_pos_50966);
assert(mod_consts_hash[518] == DEEP_HASH(tstate, mod_consts.const_int_pos_50966) && "mod_consts.const_int_pos_50966");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewApplicationName", mod_consts.const_str_plain_PreviewApplicationName);
assert(mod_consts_hash[519] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewApplicationName) && "mod_consts.const_str_plain_PreviewApplicationName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50967", mod_consts.const_int_pos_50967);
assert(mod_consts_hash[520] == DEEP_HASH(tstate, mod_consts.const_int_pos_50967) && "mod_consts.const_int_pos_50967");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewApplicationVersion", mod_consts.const_str_plain_PreviewApplicationVersion);
assert(mod_consts_hash[521] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewApplicationVersion) && "mod_consts.const_str_plain_PreviewApplicationVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50968", mod_consts.const_int_pos_50968);
assert(mod_consts_hash[522] == DEEP_HASH(tstate, mod_consts.const_int_pos_50968) && "mod_consts.const_int_pos_50968");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewSettingsName", mod_consts.const_str_plain_PreviewSettingsName);
assert(mod_consts_hash[523] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewSettingsName) && "mod_consts.const_str_plain_PreviewSettingsName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50969", mod_consts.const_int_pos_50969);
assert(mod_consts_hash[524] == DEEP_HASH(tstate, mod_consts.const_int_pos_50969) && "mod_consts.const_int_pos_50969");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewSettingsDigest", mod_consts.const_str_plain_PreviewSettingsDigest);
assert(mod_consts_hash[525] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewSettingsDigest) && "mod_consts.const_str_plain_PreviewSettingsDigest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50970", mod_consts.const_int_pos_50970);
assert(mod_consts_hash[526] == DEEP_HASH(tstate, mod_consts.const_int_pos_50970) && "mod_consts.const_int_pos_50970");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewColorSpace", mod_consts.const_str_plain_PreviewColorSpace);
assert(mod_consts_hash[527] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewColorSpace) && "mod_consts.const_str_plain_PreviewColorSpace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50971", mod_consts.const_int_pos_50971);
assert(mod_consts_hash[528] == DEEP_HASH(tstate, mod_consts.const_int_pos_50971) && "mod_consts.const_int_pos_50971");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreviewDateTime", mod_consts.const_str_plain_PreviewDateTime);
assert(mod_consts_hash[529] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreviewDateTime) && "mod_consts.const_str_plain_PreviewDateTime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50972", mod_consts.const_int_pos_50972);
assert(mod_consts_hash[530] == DEEP_HASH(tstate, mod_consts.const_int_pos_50972) && "mod_consts.const_int_pos_50972");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RawImageDigest", mod_consts.const_str_plain_RawImageDigest);
assert(mod_consts_hash[531] == DEEP_HASH(tstate, mod_consts.const_str_plain_RawImageDigest) && "mod_consts.const_str_plain_RawImageDigest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50973", mod_consts.const_int_pos_50973);
assert(mod_consts_hash[532] == DEEP_HASH(tstate, mod_consts.const_int_pos_50973) && "mod_consts.const_int_pos_50973");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OriginalRawFileDigest", mod_consts.const_str_plain_OriginalRawFileDigest);
assert(mod_consts_hash[533] == DEEP_HASH(tstate, mod_consts.const_str_plain_OriginalRawFileDigest) && "mod_consts.const_str_plain_OriginalRawFileDigest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50974", mod_consts.const_int_pos_50974);
assert(mod_consts_hash[534] == DEEP_HASH(tstate, mod_consts.const_int_pos_50974) && "mod_consts.const_int_pos_50974");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SubTileBlockSize", mod_consts.const_str_plain_SubTileBlockSize);
assert(mod_consts_hash[535] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubTileBlockSize) && "mod_consts.const_str_plain_SubTileBlockSize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50975", mod_consts.const_int_pos_50975);
assert(mod_consts_hash[536] == DEEP_HASH(tstate, mod_consts.const_int_pos_50975) && "mod_consts.const_int_pos_50975");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RowInterleaveFactor", mod_consts.const_str_plain_RowInterleaveFactor);
assert(mod_consts_hash[537] == DEEP_HASH(tstate, mod_consts.const_str_plain_RowInterleaveFactor) && "mod_consts.const_str_plain_RowInterleaveFactor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50981", mod_consts.const_int_pos_50981);
assert(mod_consts_hash[538] == DEEP_HASH(tstate, mod_consts.const_int_pos_50981) && "mod_consts.const_int_pos_50981");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileLookTableDims", mod_consts.const_str_plain_ProfileLookTableDims);
assert(mod_consts_hash[539] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileLookTableDims) && "mod_consts.const_str_plain_ProfileLookTableDims");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_50982", mod_consts.const_int_pos_50982);
assert(mod_consts_hash[540] == DEEP_HASH(tstate, mod_consts.const_int_pos_50982) && "mod_consts.const_int_pos_50982");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProfileLookTableData", mod_consts.const_str_plain_ProfileLookTableData);
assert(mod_consts_hash[541] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProfileLookTableData) && "mod_consts.const_str_plain_ProfileLookTableData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51008", mod_consts.const_int_pos_51008);
assert(mod_consts_hash[542] == DEEP_HASH(tstate, mod_consts.const_int_pos_51008) && "mod_consts.const_int_pos_51008");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpcodeList1", mod_consts.const_str_plain_OpcodeList1);
assert(mod_consts_hash[543] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpcodeList1) && "mod_consts.const_str_plain_OpcodeList1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51009", mod_consts.const_int_pos_51009);
assert(mod_consts_hash[544] == DEEP_HASH(tstate, mod_consts.const_int_pos_51009) && "mod_consts.const_int_pos_51009");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpcodeList2", mod_consts.const_str_plain_OpcodeList2);
assert(mod_consts_hash[545] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpcodeList2) && "mod_consts.const_str_plain_OpcodeList2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51022", mod_consts.const_int_pos_51022);
assert(mod_consts_hash[546] == DEEP_HASH(tstate, mod_consts.const_int_pos_51022) && "mod_consts.const_int_pos_51022");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpcodeList3", mod_consts.const_str_plain_OpcodeList3);
assert(mod_consts_hash[547] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpcodeList3) && "mod_consts.const_str_plain_OpcodeList3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51041", mod_consts.const_int_pos_51041);
assert(mod_consts_hash[548] == DEEP_HASH(tstate, mod_consts.const_int_pos_51041) && "mod_consts.const_int_pos_51041");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NoiseProfile", mod_consts.const_str_plain_NoiseProfile);
assert(mod_consts_hash[549] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoiseProfile) && "mod_consts.const_str_plain_NoiseProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_51044", mod_consts.const_int_pos_51044);
assert(mod_consts_hash[550] == DEEP_HASH(tstate, mod_consts.const_int_pos_51044) && "mod_consts.const_int_pos_51044");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FrameRate", mod_consts.const_str_plain_FrameRate);
assert(mod_consts_hash[551] == DEEP_HASH(tstate, mod_consts.const_str_plain_FrameRate) && "mod_consts.const_str_plain_FrameRate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[552] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[553] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[554] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b971225a09442fce603c448aedb82c94", mod_consts.const_dict_b971225a09442fce603c448aedb82c94);
assert(mod_consts_hash[555] == DEEP_HASH(tstate, mod_consts.const_dict_b971225a09442fce603c448aedb82c94) && "mod_consts.const_dict_b971225a09442fce603c448aedb82c94");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c", mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c);
assert(mod_consts_hash[556] == DEEP_HASH(tstate, mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c) && "mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e", mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e);
assert(mod_consts_hash[557] == DEEP_HASH(tstate, mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e) && "mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee", mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee);
assert(mod_consts_hash[558] == DEEP_HASH(tstate, mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee) && "mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea", mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea);
assert(mod_consts_hash[559] == DEEP_HASH(tstate, mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea) && "mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621", mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621);
assert(mod_consts_hash[560] == DEEP_HASH(tstate, mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621) && "mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAGS", mod_consts.const_str_plain_TAGS);
assert(mod_consts_hash[561] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAGS) && "mod_consts.const_str_plain_TAGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPS", mod_consts.const_str_plain_GPS);
assert(mod_consts_hash[562] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPS) && "mod_consts.const_str_plain_GPS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_307", mod_consts.const_int_pos_307);
assert(mod_consts_hash[563] == DEEP_HASH(tstate, mod_consts.const_int_pos_307) && "mod_consts.const_int_pos_307");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSVersionID", mod_consts.const_str_plain_GPSVersionID);
assert(mod_consts_hash[564] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSVersionID) && "mod_consts.const_str_plain_GPSVersionID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitudeRef", mod_consts.const_str_plain_GPSLatitudeRef);
assert(mod_consts_hash[565] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitudeRef) && "mod_consts.const_str_plain_GPSLatitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[566] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLatitude", mod_consts.const_str_plain_GPSLatitude);
assert(mod_consts_hash[567] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLatitude) && "mod_consts.const_str_plain_GPSLatitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[568] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitudeRef", mod_consts.const_str_plain_GPSLongitudeRef);
assert(mod_consts_hash[569] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitudeRef) && "mod_consts.const_str_plain_GPSLongitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[570] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSLongitude", mod_consts.const_str_plain_GPSLongitude);
assert(mod_consts_hash[571] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSLongitude) && "mod_consts.const_str_plain_GPSLongitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[572] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitudeRef", mod_consts.const_str_plain_GPSAltitudeRef);
assert(mod_consts_hash[573] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitudeRef) && "mod_consts.const_str_plain_GPSAltitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[574] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAltitude", mod_consts.const_str_plain_GPSAltitude);
assert(mod_consts_hash[575] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAltitude) && "mod_consts.const_str_plain_GPSAltitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
assert(mod_consts_hash[576] == DEEP_HASH(tstate, mod_consts.const_int_pos_7) && "mod_consts.const_int_pos_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTimeStamp", mod_consts.const_str_plain_GPSTimeStamp);
assert(mod_consts_hash[577] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTimeStamp) && "mod_consts.const_str_plain_GPSTimeStamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[578] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSatellites", mod_consts.const_str_plain_GPSSatellites);
assert(mod_consts_hash[579] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSatellites) && "mod_consts.const_str_plain_GPSSatellites");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
assert(mod_consts_hash[580] == DEEP_HASH(tstate, mod_consts.const_int_pos_9) && "mod_consts.const_int_pos_9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSStatus", mod_consts.const_str_plain_GPSStatus);
assert(mod_consts_hash[581] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSStatus) && "mod_consts.const_str_plain_GPSStatus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
assert(mod_consts_hash[582] == DEEP_HASH(tstate, mod_consts.const_int_pos_10) && "mod_consts.const_int_pos_10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMeasureMode", mod_consts.const_str_plain_GPSMeasureMode);
assert(mod_consts_hash[583] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMeasureMode) && "mod_consts.const_str_plain_GPSMeasureMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDOP", mod_consts.const_str_plain_GPSDOP);
assert(mod_consts_hash[584] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDOP) && "mod_consts.const_str_plain_GPSDOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
assert(mod_consts_hash[585] == DEEP_HASH(tstate, mod_consts.const_int_pos_12) && "mod_consts.const_int_pos_12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeedRef", mod_consts.const_str_plain_GPSSpeedRef);
assert(mod_consts_hash[586] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeedRef) && "mod_consts.const_str_plain_GPSSpeedRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
assert(mod_consts_hash[587] == DEEP_HASH(tstate, mod_consts.const_int_pos_13) && "mod_consts.const_int_pos_13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSSpeed", mod_consts.const_str_plain_GPSSpeed);
assert(mod_consts_hash[588] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSSpeed) && "mod_consts.const_str_plain_GPSSpeed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
assert(mod_consts_hash[589] == DEEP_HASH(tstate, mod_consts.const_int_pos_14) && "mod_consts.const_int_pos_14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrackRef", mod_consts.const_str_plain_GPSTrackRef);
assert(mod_consts_hash[590] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrackRef) && "mod_consts.const_str_plain_GPSTrackRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_15", mod_consts.const_int_pos_15);
assert(mod_consts_hash[591] == DEEP_HASH(tstate, mod_consts.const_int_pos_15) && "mod_consts.const_int_pos_15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTrack", mod_consts.const_str_plain_GPSTrack);
assert(mod_consts_hash[592] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTrack) && "mod_consts.const_str_plain_GPSTrack");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[593] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirectionRef", mod_consts.const_str_plain_GPSImgDirectionRef);
assert(mod_consts_hash[594] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirectionRef) && "mod_consts.const_str_plain_GPSImgDirectionRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
assert(mod_consts_hash[595] == DEEP_HASH(tstate, mod_consts.const_int_pos_17) && "mod_consts.const_int_pos_17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSImgDirection", mod_consts.const_str_plain_GPSImgDirection);
assert(mod_consts_hash[596] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSImgDirection) && "mod_consts.const_str_plain_GPSImgDirection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[597] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSMapDatum", mod_consts.const_str_plain_GPSMapDatum);
assert(mod_consts_hash[598] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSMapDatum) && "mod_consts.const_str_plain_GPSMapDatum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19", mod_consts.const_int_pos_19);
assert(mod_consts_hash[599] == DEEP_HASH(tstate, mod_consts.const_int_pos_19) && "mod_consts.const_int_pos_19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitudeRef", mod_consts.const_str_plain_GPSDestLatitudeRef);
assert(mod_consts_hash[600] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitudeRef) && "mod_consts.const_str_plain_GPSDestLatitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[601] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLatitude", mod_consts.const_str_plain_GPSDestLatitude);
assert(mod_consts_hash[602] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLatitude) && "mod_consts.const_str_plain_GPSDestLatitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
assert(mod_consts_hash[603] == DEEP_HASH(tstate, mod_consts.const_int_pos_21) && "mod_consts.const_int_pos_21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitudeRef", mod_consts.const_str_plain_GPSDestLongitudeRef);
assert(mod_consts_hash[604] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitudeRef) && "mod_consts.const_str_plain_GPSDestLongitudeRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestLongitude", mod_consts.const_str_plain_GPSDestLongitude);
assert(mod_consts_hash[605] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestLongitude) && "mod_consts.const_str_plain_GPSDestLongitude");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_23", mod_consts.const_int_pos_23);
assert(mod_consts_hash[606] == DEEP_HASH(tstate, mod_consts.const_int_pos_23) && "mod_consts.const_int_pos_23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearingRef", mod_consts.const_str_plain_GPSDestBearingRef);
assert(mod_consts_hash[607] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearingRef) && "mod_consts.const_str_plain_GPSDestBearingRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
assert(mod_consts_hash[608] == DEEP_HASH(tstate, mod_consts.const_int_pos_24) && "mod_consts.const_int_pos_24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestBearing", mod_consts.const_str_plain_GPSDestBearing);
assert(mod_consts_hash[609] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestBearing) && "mod_consts.const_str_plain_GPSDestBearing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
assert(mod_consts_hash[610] == DEEP_HASH(tstate, mod_consts.const_int_pos_25) && "mod_consts.const_int_pos_25");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistanceRef", mod_consts.const_str_plain_GPSDestDistanceRef);
assert(mod_consts_hash[611] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistanceRef) && "mod_consts.const_str_plain_GPSDestDistanceRef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
assert(mod_consts_hash[612] == DEEP_HASH(tstate, mod_consts.const_int_pos_26) && "mod_consts.const_int_pos_26");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDestDistance", mod_consts.const_str_plain_GPSDestDistance);
assert(mod_consts_hash[613] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDestDistance) && "mod_consts.const_str_plain_GPSDestDistance");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
assert(mod_consts_hash[614] == DEEP_HASH(tstate, mod_consts.const_int_pos_27) && "mod_consts.const_int_pos_27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSProcessingMethod", mod_consts.const_str_plain_GPSProcessingMethod);
assert(mod_consts_hash[615] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSProcessingMethod) && "mod_consts.const_str_plain_GPSProcessingMethod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
assert(mod_consts_hash[616] == DEEP_HASH(tstate, mod_consts.const_int_pos_28) && "mod_consts.const_int_pos_28");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSAreaInformation", mod_consts.const_str_plain_GPSAreaInformation);
assert(mod_consts_hash[617] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSAreaInformation) && "mod_consts.const_str_plain_GPSAreaInformation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_29", mod_consts.const_int_pos_29);
assert(mod_consts_hash[618] == DEEP_HASH(tstate, mod_consts.const_int_pos_29) && "mod_consts.const_int_pos_29");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDateStamp", mod_consts.const_str_plain_GPSDateStamp);
assert(mod_consts_hash[619] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDateStamp) && "mod_consts.const_str_plain_GPSDateStamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
assert(mod_consts_hash[620] == DEEP_HASH(tstate, mod_consts.const_int_pos_30) && "mod_consts.const_int_pos_30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSDifferential", mod_consts.const_str_plain_GPSDifferential);
assert(mod_consts_hash[621] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSDifferential) && "mod_consts.const_str_plain_GPSDifferential");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
assert(mod_consts_hash[622] == DEEP_HASH(tstate, mod_consts.const_int_pos_31) && "mod_consts.const_int_pos_31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSHPositioningError", mod_consts.const_str_plain_GPSHPositioningError);
assert(mod_consts_hash[623] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSHPositioningError) && "mod_consts.const_str_plain_GPSHPositioningError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GPSTAGS", mod_consts.const_str_plain_GPSTAGS);
assert(mod_consts_hash[624] == DEEP_HASH(tstate, mod_consts.const_str_plain_GPSTAGS) && "mod_consts.const_str_plain_GPSTAGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Interop", mod_consts.const_str_plain_Interop);
assert(mod_consts_hash[625] == DEEP_HASH(tstate, mod_consts.const_str_plain_Interop) && "mod_consts.const_str_plain_Interop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InteropVersion", mod_consts.const_str_plain_InteropVersion);
assert(mod_consts_hash[626] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteropVersion) && "mod_consts.const_str_plain_InteropVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RelatedImageHeight", mod_consts.const_str_plain_RelatedImageHeight);
assert(mod_consts_hash[627] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedImageHeight) && "mod_consts.const_str_plain_RelatedImageHeight");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IFD", mod_consts.const_str_plain_IFD);
assert(mod_consts_hash[628] == DEEP_HASH(tstate, mod_consts.const_str_plain_IFD) && "mod_consts.const_str_plain_IFD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_354", mod_consts.const_int_pos_354);
assert(mod_consts_hash[629] == DEEP_HASH(tstate, mod_consts.const_int_pos_354) && "mod_consts.const_int_pos_354");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exif", mod_consts.const_str_plain_Exif);
assert(mod_consts_hash[630] == DEEP_HASH(tstate, mod_consts.const_str_plain_Exif) && "mod_consts.const_str_plain_Exif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Makernote", mod_consts.const_str_plain_Makernote);
assert(mod_consts_hash[631] == DEEP_HASH(tstate, mod_consts.const_str_plain_Makernote) && "mod_consts.const_str_plain_Makernote");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IFD1", mod_consts.const_str_plain_IFD1);
assert(mod_consts_hash[632] == DEEP_HASH(tstate, mod_consts.const_str_plain_IFD1) && "mod_consts.const_str_plain_IFD1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_363", mod_consts.const_int_pos_363);
assert(mod_consts_hash[633] == DEEP_HASH(tstate, mod_consts.const_int_pos_363) && "mod_consts.const_int_pos_363");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Unknown", mod_consts.const_str_plain_Unknown);
assert(mod_consts_hash[634] == DEEP_HASH(tstate, mod_consts.const_str_plain_Unknown) && "mod_consts.const_str_plain_Unknown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Daylight", mod_consts.const_str_plain_Daylight);
assert(mod_consts_hash[635] == DEEP_HASH(tstate, mod_consts.const_str_plain_Daylight) && "mod_consts.const_str_plain_Daylight");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fluorescent", mod_consts.const_str_plain_Fluorescent);
assert(mod_consts_hash[636] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fluorescent) && "mod_consts.const_str_plain_Fluorescent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Tungsten", mod_consts.const_str_plain_Tungsten);
assert(mod_consts_hash[637] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tungsten) && "mod_consts.const_str_plain_Tungsten");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fine", mod_consts.const_str_plain_Fine);
assert(mod_consts_hash[638] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fine) && "mod_consts.const_str_plain_Fine");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cloudy", mod_consts.const_str_plain_Cloudy);
assert(mod_consts_hash[639] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cloudy) && "mod_consts.const_str_plain_Cloudy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Shade", mod_consts.const_str_plain_Shade);
assert(mod_consts_hash[640] == DEEP_HASH(tstate, mod_consts.const_str_plain_Shade) && "mod_consts.const_str_plain_Shade");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DaylightFluorescent", mod_consts.const_str_plain_DaylightFluorescent);
assert(mod_consts_hash[641] == DEEP_HASH(tstate, mod_consts.const_str_plain_DaylightFluorescent) && "mod_consts.const_str_plain_DaylightFluorescent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DayWhiteFluorescent", mod_consts.const_str_plain_DayWhiteFluorescent);
assert(mod_consts_hash[642] == DEEP_HASH(tstate, mod_consts.const_str_plain_DayWhiteFluorescent) && "mod_consts.const_str_plain_DayWhiteFluorescent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CoolWhiteFluorescent", mod_consts.const_str_plain_CoolWhiteFluorescent);
assert(mod_consts_hash[643] == DEEP_HASH(tstate, mod_consts.const_str_plain_CoolWhiteFluorescent) && "mod_consts.const_str_plain_CoolWhiteFluorescent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WhiteFluorescent", mod_consts.const_str_plain_WhiteFluorescent);
assert(mod_consts_hash[644] == DEEP_HASH(tstate, mod_consts.const_str_plain_WhiteFluorescent) && "mod_consts.const_str_plain_WhiteFluorescent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardLightA", mod_consts.const_str_plain_StandardLightA);
assert(mod_consts_hash[645] == DEEP_HASH(tstate, mod_consts.const_str_plain_StandardLightA) && "mod_consts.const_str_plain_StandardLightA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardLightB", mod_consts.const_str_plain_StandardLightB);
assert(mod_consts_hash[646] == DEEP_HASH(tstate, mod_consts.const_str_plain_StandardLightB) && "mod_consts.const_str_plain_StandardLightB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StandardLightC", mod_consts.const_str_plain_StandardLightC);
assert(mod_consts_hash[647] == DEEP_HASH(tstate, mod_consts.const_str_plain_StandardLightC) && "mod_consts.const_str_plain_StandardLightC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D55", mod_consts.const_str_plain_D55);
assert(mod_consts_hash[648] == DEEP_HASH(tstate, mod_consts.const_str_plain_D55) && "mod_consts.const_str_plain_D55");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D65", mod_consts.const_str_plain_D65);
assert(mod_consts_hash[649] == DEEP_HASH(tstate, mod_consts.const_str_plain_D65) && "mod_consts.const_str_plain_D65");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D75", mod_consts.const_str_plain_D75);
assert(mod_consts_hash[650] == DEEP_HASH(tstate, mod_consts.const_str_plain_D75) && "mod_consts.const_str_plain_D75");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_D50", mod_consts.const_str_plain_D50);
assert(mod_consts_hash[651] == DEEP_HASH(tstate, mod_consts.const_str_plain_D50) && "mod_consts.const_str_plain_D50");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ISO", mod_consts.const_str_plain_ISO);
assert(mod_consts_hash[652] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO) && "mod_consts.const_str_plain_ISO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Other", mod_consts.const_str_plain_Other);
assert(mod_consts_hash[653] == DEEP_HASH(tstate, mod_consts.const_str_plain_Other) && "mod_consts.const_str_plain_Other");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242", mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242);
assert(mod_consts_hash[654] == DEEP_HASH(tstate, mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242) && "mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409", mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409);
assert(mod_consts_hash[655] == DEEP_HASH(tstate, mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409) && "mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[656] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_PIL$ExifTags$Base(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ExifTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ExifTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_Base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ExifTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_Base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_Base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Base);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ExifTags$GPS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ExifTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ExifTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_GPS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ExifTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GPS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GPS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GPS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GPS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_GPS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_GPS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GPS);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ExifTags$IntEnum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ExifTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ExifTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ExifTags->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntEnum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntEnum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntEnum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntEnum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ExifTags$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ExifTags->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ExifTags->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ExifTags->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0164a90cc2a83b50f4c3e496c2c8ad5e;
static PyCodeObject *code_objects_4af5be4fe025782a7d33f0722bc1bce1;
static PyCodeObject *code_objects_304980ba64e8dd6b7f8f9e1b416cfc3b;
static PyCodeObject *code_objects_6356f2c896650e1417c52a0501a568ac;
static PyCodeObject *code_objects_70e404f403689eb34e8f41972f85ca76;
static PyCodeObject *code_objects_5e34e19004881f0d02ae4f36e410d4c7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_32443bc4f4f943495c70a97365139242); CHECK_OBJECT(module_filename_obj);
code_objects_0164a90cc2a83b50f4c3e496c2c8ad5e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409, mod_consts.const_str_digest_20a96b8c2494c1d45d0f7e9157d4a409, NULL, NULL, 0, 0, 0);
code_objects_4af5be4fe025782a7d33f0722bc1bce1 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Base, mod_consts.const_str_plain_Base, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_304980ba64e8dd6b7f8f9e1b416cfc3b = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GPS, mod_consts.const_str_plain_GPS, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6356f2c896650e1417c52a0501a568ac = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_IFD, mod_consts.const_str_plain_IFD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_70e404f403689eb34e8f41972f85ca76 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Interop, mod_consts.const_str_plain_Interop, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5e34e19004881f0d02ae4f36e410d4c7 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_LightSource, mod_consts.const_str_plain_LightSource, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


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

static function_impl_code const function_table_PIL$ExifTags[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ExifTags);
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
        module_PIL$ExifTags,
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
        function_table_PIL$ExifTags,
        sizeof(function_table_PIL$ExifTags) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ExifTags";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ExifTags(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ExifTags");

    // Store the module for future use.
    module_PIL$ExifTags = module;

    moduledict_PIL$ExifTags = MODULE_DICT(module_PIL$ExifTags);

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
        PRINT_STRING("PIL$ExifTags: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ExifTags: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ExifTags: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ExifTags" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ExifTags\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ExifTags,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ExifTags,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ExifTags,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ExifTags,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ExifTags,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ExifTags);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ExifTags);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var_i = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var_i = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_dictcontraction_2__$0 = NULL;
PyObject *tmp_dictcontraction_2__contraction = NULL;
PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ExifTags;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_PIL$ExifTags$$$class__1_Base_22 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$ExifTags$$$class__1_Base_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
PyObject *locals_PIL$ExifTags$$$class__2_GPS_307 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ExifTags$$$class__2_GPS_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
PyObject *locals_PIL$ExifTags$$$class__3_Interop_346 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ExifTags$$$class__3_Interop_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_PIL$ExifTags$$$class__4_IFD_354 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ExifTags$$$class__4_IFD_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_PIL$ExifTags$$$class__5_LightSource_363 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ExifTags$$$class__5_LightSource_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_335afd2abc4b0cfecad09952efc0b712;
UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ExifTags = MAKE_MODULE_FRAME(code_objects_0164a90cc2a83b50f4c3e496c2c8ad5e, module_PIL$ExifTags);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ExifTags);
assert(Py_REFCNT(frame_frame_PIL$ExifTags) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ExifTags$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ExifTags$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ExifTags;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_IntEnum_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ExifTags->m_frame.f_lineno = 19;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ExifTags,
        mod_consts.const_str_plain_IntEnum,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IntEnum);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum, tmp_assign_source_6);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_PIL$ExifTags$IntEnum(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_8 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
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


exception_lineno = 22;

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


exception_lineno = 22;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_10;
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


exception_lineno = 22;

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
PyObject *tmp_assign_source_11;
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


exception_lineno = 22;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Base;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$ExifTags->m_frame.f_lineno = 22;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
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


exception_lineno = 22;

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
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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


exception_lineno = 22;

    goto try_except_handler_1;
}
frame_frame_PIL$ExifTags->m_frame.f_lineno = 22;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 22;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
branch_end_1:;
{
PyObject *tmp_assign_source_13;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$ExifTags$$$class__1_Base_22 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Base;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
frame_frame_PIL$ExifTags$$$class__1_Base_2 = MAKE_CLASS_FRAME(tstate, code_objects_4af5be4fe025782a7d33f0722bc1bce1, module_PIL$ExifTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ExifTags$$$class__1_Base_2, locals_PIL$ExifTags$$$class__1_Base_22);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ExifTags$$$class__1_Base_2);
assert(Py_REFCNT(frame_frame_PIL$ExifTags$$$class__1_Base_2) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_InteropIndex, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_11;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProcessingSoftware, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_254;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_NewSubfileType, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_255;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubfileType, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageWidth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_257;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageLength, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_258;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BitsPerSample, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_259;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Compression, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_262;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PhotometricInterpretation, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_263;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Thresholding, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_264;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CellWidth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_265;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CellLength, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_266;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FillOrder, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_269;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DocumentName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_270;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageDescription, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_271;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Make, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_272;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Model, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_273;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_StripOffsets, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_274;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Orientation, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_277;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SamplesPerPixel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_278;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RowsPerStrip, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_279;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_StripByteCounts, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_280;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MinSampleValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_281;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MaxSampleValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_282;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XResolution, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_283;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_YResolution, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_284;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PlanarConfiguration, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_285;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PageName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_288;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FreeOffsets, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_289;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FreeByteCounts, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_290;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_GrayResponseUnit, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_291;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_GrayResponseCurve, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_292;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_T4Options, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_293;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_T6Options, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_296;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ResolutionUnit, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_297;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PageNumber, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_301;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TransferFunction, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_305;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Software, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_306;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DateTime, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_315;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Artist, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_316;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_HostComputer, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_317;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Predictor, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_318;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_WhitePoint, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_319;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PrimaryChromaticities, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_320;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ColorMap, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_321;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_HalftoneHints, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_322;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TileWidth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_323;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TileLength, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_324;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TileOffsets, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_325;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TileByteCounts, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_330;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubIFDs, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_332;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_InkSet, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_333;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_InkNames, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_334;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_NumberOfInks, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_336;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DotRange, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_337;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TargetPrinter, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_338;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExtraSamples, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_339;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SampleFormat, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_340;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SMinSampleValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_341;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SMaxSampleValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_342;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TransferRange, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_343;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ClipPath, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_344;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XClipPathUnits, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_345;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_YClipPathUnits, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_346;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Indexed, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_347;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JPEGTables, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_351;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OPIProxy, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_512;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JPEGProc, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_513;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegIFOffset, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_514;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegIFByteCount, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_515;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegRestartInterval, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_517;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegLosslessPredictors, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_518;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegPointTransforms, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_519;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegQTables, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_520;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegDCTables, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_521;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_JpegACTables, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_529;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_YCbCrCoefficients, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_530;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_YCbCrSubSampling, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_531;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_YCbCrPositioning, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_532;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ReferenceBlackWhite, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_700;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XMLPacket, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_4096;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RelatedImageFileFormat, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_4097;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RelatedImageWidth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_4098;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RelatedImageLength, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_18246;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Rating, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_18249;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RatingPercent, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_32781;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageID, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_33421;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CFARepeatPatternDim, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_33423;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BatteryLevel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_33432;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Copyright, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_33434;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExposureTime, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_33437;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FNumber, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_33723;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_IPTCNAA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34377;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageResources, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34665;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExifOffset, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34675;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_InterColorProfile, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34850;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExposureProgram, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34852;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SpectralSensitivity, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34853;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_GPSInfo, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34855;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ISOSpeedRatings, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34856;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OECF, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34857;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Interlace, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34858;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TimeZoneOffset, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34859;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SelfTimerMode, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34864;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SensitivityType, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34865;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_StandardOutputSensitivity, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34866;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RecommendedExposureIndex, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34867;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ISOSpeed, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34868;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ISOSpeedLatitudeyyy, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_34869;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ISOSpeedLatitudezzz, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_36864;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExifVersion, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_36867;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DateTimeOriginal, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_36868;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DateTimeDigitized, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_36880;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OffsetTime, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_36881;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OffsetTimeOriginal, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_36882;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OffsetTimeDigitized, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37121;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ComponentsConfiguration, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37122;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CompressedBitsPerPixel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37377;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ShutterSpeedValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37378;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ApertureValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37379;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BrightnessValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37380;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExposureBiasValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37381;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MaxApertureValue, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37382;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubjectDistance, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37383;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MeteringMode, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37384;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LightSource, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37385;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Flash, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37386;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FocalLength, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37389;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Noise, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37393;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageNumber, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37394;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SecurityClassification, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37395;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageHistory, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37398;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_TIFFEPStandardID, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37500;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MakerNote, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37510;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_UserComment, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37520;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubsecTime, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37521;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubsecTimeOriginal, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37522;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubsecTimeDigitized, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37888;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AmbientTemperature, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37889;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Humidity, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37890;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Pressure, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37891;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_WaterDepth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37892;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Acceleration, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_37893;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CameraElevationAngle, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40091;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XPTitle, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40092;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XPComment, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40093;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XPAuthor, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40094;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XPKeywords, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40095;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_XPSubject, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40960;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FlashPixVersion, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40961;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ColorSpace, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40962;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExifImageWidth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40963;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExifImageHeight, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40964;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RelatedSoundFile, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_40965;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExifInteroperabilityOffset, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41483;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FlashEnergy, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41484;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SpatialFrequencyResponse, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41486;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FocalPlaneXResolution, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41487;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FocalPlaneYResolution, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41488;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FocalPlaneResolutionUnit, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41492;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubjectLocation, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41493;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExposureIndex, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41495;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SensingMethod, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41728;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FileSource, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41729;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SceneType, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41730;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CFAPattern, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41985;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CustomRendered, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41986;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ExposureMode, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41987;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_WhiteBalance, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41988;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DigitalZoomRatio, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41989;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FocalLengthIn35mmFilm, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41990;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SceneCaptureType, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41991;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_GainControl, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41992;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Contrast, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41993;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Saturation, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41994;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Sharpness, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41995;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DeviceSettingDescription, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_41996;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubjectDistanceRange, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42016;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ImageUniqueID, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42032;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CameraOwnerName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42033;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BodySerialNumber, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42034;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LensSpecification, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42035;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LensMake, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42036;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LensModel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42037;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LensSerialNumber, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42080;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CompositeImage, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42081;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CompositeImageCount, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42082;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CompositeImageExposureTimes, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_42240;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_Gamma, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50341;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PrintImageMatching, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50706;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DNGVersion, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50707;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DNGBackwardVersion, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50708;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_UniqueCameraModel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50709;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LocalizedCameraModel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50710;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CFAPlaneColor, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50711;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CFALayout, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50712;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LinearizationTable, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50713;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BlackLevelRepeatDim, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50714;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BlackLevel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50715;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BlackLevelDeltaH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50716;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BlackLevelDeltaV, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50717;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_WhiteLevel, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50718;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DefaultScale, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50719;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DefaultCropOrigin, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50720;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DefaultCropSize, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50721;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ColorMatrix1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50722;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ColorMatrix2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50723;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CameraCalibration1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50724;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CameraCalibration2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50725;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ReductionMatrix1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50726;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ReductionMatrix2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50727;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AnalogBalance, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50728;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AsShotNeutral, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50729;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AsShotWhiteXY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50730;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BaselineExposure, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50731;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BaselineNoise, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50732;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BaselineSharpness, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50733;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BayerGreenSplit, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50734;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LinearResponseLimit, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50735;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CameraSerialNumber, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50736;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_LensInfo, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50737;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ChromaBlurRadius, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50738;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AntiAliasStrength, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50739;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ShadowScale, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50740;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_DNGPrivateData, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50741;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MakerNoteSafety, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50778;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CalibrationIlluminant1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50779;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CalibrationIlluminant2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50780;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_BestQualityScale, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50781;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RawDataUniqueID, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50827;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OriginalRawFileName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50828;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OriginalRawFileData, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50829;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ActiveArea, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50830;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_MaskedAreas, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50831;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AsShotICCProfile, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50832;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AsShotPreProfileMatrix, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50833;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CurrentICCProfile, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50834;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CurrentPreProfileMatrix, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50879;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ColorimetricReference, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50931;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_CameraCalibrationSignature, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50932;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileCalibrationSignature, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50934;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_AsShotProfileName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50935;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_NoiseReductionApplied, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50936;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50937;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileHueSatMapDims, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50938;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileHueSatMapData1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50939;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileHueSatMapData2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50940;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileToneCurve, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50941;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileEmbedPolicy, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50942;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileCopyright, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50964;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ForwardMatrix1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50965;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ForwardMatrix2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50966;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PreviewApplicationName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50967;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PreviewApplicationVersion, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50968;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PreviewSettingsName, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50969;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PreviewSettingsDigest, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50970;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PreviewColorSpace, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50971;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_PreviewDateTime, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50972;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RawImageDigest, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50973;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OriginalRawFileDigest, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50974;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_SubTileBlockSize, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50975;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_RowInterleaveFactor, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50981;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileLookTableDims, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_50982;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_ProfileLookTableData, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_51008;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OpcodeList1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_51009;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OpcodeList2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_51022;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_OpcodeList3, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_51041;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_NoiseProfile, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_51044;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain_FrameRate, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__1_Base_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ExifTags$$$class__1_Base_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ExifTags$$$class__1_Base_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ExifTags$$$class__1_Base_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ExifTags$$$class__1_Base_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$ExifTags$$$class__1_Base_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__1_Base_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

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


exception_lineno = 22;

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
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__1_Base_22, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_3;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = mod_consts.const_str_plain_Base;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$ExifTags$$$class__1_Base_22;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_3, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_13 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_PIL$ExifTags$$$class__1_Base_22);
locals_PIL$ExifTags$$$class__1_Base_22 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ExifTags$$$class__1_Base_22);
locals_PIL$ExifTags$$$class__1_Base_22 = NULL;
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
exception_lineno = 22;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_Base, tmp_assign_source_13);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_4;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_PIL$ExifTags$Base(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Base);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;

    goto try_except_handler_4;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction_1__$0;
    tmp_dictcontraction_1__$0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_dictcontraction_1__contraction;
    tmp_dictcontraction_1__contraction = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 297;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_assign_source_19 = tmp_dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_1_var_i;
    outline_1_var_i = tmp_assign_source_19;
    Py_INCREF(outline_1_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_1_var_i);
tmp_expression_value_7 = outline_1_var_i;
tmp_dictset38_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_value);
if (tmp_dictset38_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_5;
}
CHECK_OBJECT(outline_1_var_i);
tmp_expression_value_8 = outline_1_var_i;
tmp_dictset38_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_name);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset38_key_1);

exception_lineno = 297;

    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_tuple_element_4 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_tuple_element_4);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_i);
outline_1_var_i = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_i);
outline_1_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 297;
goto frame_exception_exit_1;
outline_result_3:;
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_b971225a09442fce603c448aedb82c94);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_a6759c25feeaa2f87cd476dae51c6e8c);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_4654160741f1f9a47928576bb1777e1e);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_1f33aedb98bda16b7e452ebe83f255ee);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 4, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_25eb2efb1f48f02ed218c540d754a2ea);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 5, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_COPY(tstate, mod_consts.const_dict_177fa3f1c4078c6e45f6d1d852669621);
PyTuple_SET_ITEM(tmp_direct_call_arg1_2, 6, tmp_tuple_element_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_15 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_TAGS, tmp_assign_source_15);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_PIL$ExifTags$IntEnum(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntEnum);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;

    goto try_except_handler_6;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
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
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_23;
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


exception_lineno = 307;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_GPS;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_PIL$ExifTags->m_frame.f_lineno = 307;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_24;
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


exception_lineno = 307;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_6;
}
frame_frame_PIL$ExifTags->m_frame.f_lineno = 307;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 307;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_25;
}
branch_end_4:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_PIL$ExifTags$$$class__2_GPS_307 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_GPS;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_307;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_8;
}
frame_frame_PIL$ExifTags$$$class__2_GPS_3 = MAKE_CLASS_FRAME(tstate, code_objects_304980ba64e8dd6b7f8f9e1b416cfc3b, module_PIL$ExifTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ExifTags$$$class__2_GPS_3, locals_PIL$ExifTags$$$class__2_GPS_307);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ExifTags$$$class__2_GPS_3);
assert(Py_REFCNT(frame_frame_PIL$ExifTags$$$class__2_GPS_3) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSVersionID, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSLatitudeRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSLatitude, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSLongitudeRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSLongitude, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_5;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSAltitudeRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_6;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSAltitude, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_7;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSTimeStamp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSSatellites, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_9;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSStatus, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_10;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSMeasureMode, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_11;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDOP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSSpeedRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_13;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSSpeed, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSTrackRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSTrack, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSImgDirectionRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSImgDirection, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSMapDatum, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_19;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestLatitudeRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestLatitude, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_21;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestLongitudeRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestLongitude, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_23;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestBearingRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_24;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestBearing, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_25;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestDistanceRef, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_26;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDestDistance, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSProcessingMethod, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSAreaInformation, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_29;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDateStamp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSDifferential, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_31;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain_GPSHPositioningError, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__2_GPS_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ExifTags$$$class__2_GPS_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ExifTags$$$class__2_GPS_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ExifTags$$$class__2_GPS_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ExifTags$$$class__2_GPS_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_PIL$ExifTags$$$class__2_GPS_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__2_GPS_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_8;
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


exception_lineno = 307;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__2_GPS_307, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_5;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = mod_consts.const_str_plain_GPS;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_PIL$ExifTags$$$class__2_GPS_307;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_5, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto try_except_handler_8;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_26 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_PIL$ExifTags$$$class__2_GPS_307);
locals_PIL$ExifTags$$$class__2_GPS_307 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ExifTags$$$class__2_GPS_307);
locals_PIL$ExifTags$$$class__2_GPS_307 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 307;
goto try_except_handler_6;
outline_result_5:;
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_GPS, tmp_assign_source_26);
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

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
goto outline_result_4;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_assign_source_28;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = module_var_accessor_PIL$ExifTags$GPS(tstate);
if (unlikely(tmp_iter_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GPS);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;

    goto try_except_handler_9;
}
tmp_assign_source_29 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;

    goto try_except_handler_9;
}
{
    PyObject *old = tmp_dictcontraction_2__$0;
    tmp_dictcontraction_2__$0 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_dictcontraction_2__contraction;
    tmp_dictcontraction_2__contraction = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
tmp_next_source_2 = tmp_dictcontraction_2__$0;
tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_31 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 343;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_dictcontraction_2__iter_value_0;
    tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
tmp_assign_source_32 = tmp_dictcontraction_2__iter_value_0;
{
    PyObject *old = outline_3_var_i;
    outline_3_var_i = tmp_assign_source_32;
    Py_INCREF(outline_3_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_dictset38_value_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_dictset38_dict_2;
CHECK_OBJECT(outline_3_var_i);
tmp_expression_value_15 = outline_3_var_i;
tmp_dictset38_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_value);
if (tmp_dictset38_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;

    goto try_except_handler_10;
}
CHECK_OBJECT(outline_3_var_i);
tmp_expression_value_16 = outline_3_var_i;
tmp_dictset38_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_name);
if (tmp_dictset38_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset38_key_2);

exception_lineno = 343;

    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_2));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

CHECK_OBJECT(tmp_dictset38_value_2);
Py_DECREF(tmp_dictset38_value_2);
CHECK_OBJECT(tmp_dictset38_key_2);
Py_DECREF(tmp_dictset38_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;

    goto try_except_handler_10;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;

    goto try_except_handler_10;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_assign_source_28 = tmp_dictcontraction_2__contraction;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_3_var_i);
outline_3_var_i = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_i);
outline_3_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 343;
goto frame_exception_exit_1;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_GPSTAGS, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_PIL$ExifTags$IntEnum(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntEnum);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;

    goto try_except_handler_11;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

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
tmp_expression_value_17 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

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
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_Interop;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_PIL$ExifTags->m_frame.f_lineno = 346;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
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


exception_lineno = 346;

    goto try_except_handler_11;
}
frame_frame_PIL$ExifTags->m_frame.f_lineno = 346;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 346;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_38;
}
branch_end_7:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_PIL$ExifTags$$$class__3_Interop_346 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_Interop;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_346;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_13;
}
frame_frame_PIL$ExifTags$$$class__3_Interop_4 = MAKE_CLASS_FRAME(tstate, code_objects_70e404f403689eb34e8f41972f85ca76, module_PIL$ExifTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ExifTags$$$class__3_Interop_4, locals_PIL$ExifTags$$$class__3_Interop_346);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ExifTags$$$class__3_Interop_4);
assert(Py_REFCNT(frame_frame_PIL$ExifTags$$$class__3_Interop_4) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain_InteropIndex, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain_InteropVersion, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_4096;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain_RelatedImageFileFormat, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_4097;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain_RelatedImageWidth, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_4098;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain_RelatedImageHeight, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__3_Interop_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ExifTags$$$class__3_Interop_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ExifTags$$$class__3_Interop_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ExifTags$$$class__3_Interop_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ExifTags$$$class__3_Interop_4,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_PIL$ExifTags$$$class__3_Interop_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__3_Interop_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

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


exception_lineno = 346;

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
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__3_Interop_346, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = mod_consts.const_str_plain_Interop;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_PIL$ExifTags$$$class__3_Interop_346;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto try_except_handler_13;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_39 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_PIL$ExifTags$$$class__3_Interop_346);
locals_PIL$ExifTags$$$class__3_Interop_346 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ExifTags$$$class__3_Interop_346);
locals_PIL$ExifTags$$$class__3_Interop_346 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 346;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_Interop, tmp_assign_source_39);
}
goto try_end_3;
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
try_end_3:;
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
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_PIL$ExifTags$IntEnum(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntEnum);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_23 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_IFD;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_PIL$ExifTags->m_frame.f_lineno = 354;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_26 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_27;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_8, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_14;
}
frame_frame_PIL$ExifTags->m_frame.f_lineno = 354;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 354;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_46;
}
branch_end_10:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_PIL$ExifTags$$$class__4_IFD_354 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_IFD;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_354;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
frame_frame_PIL$ExifTags$$$class__4_IFD_5 = MAKE_CLASS_FRAME(tstate, code_objects_6356f2c896650e1417c52a0501a568ac, module_PIL$ExifTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ExifTags$$$class__4_IFD_5, locals_PIL$ExifTags$$$class__4_IFD_354);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ExifTags$$$class__4_IFD_5);
assert(Py_REFCNT(frame_frame_PIL$ExifTags$$$class__4_IFD_5) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_34665;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain_Exif, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_34853;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain_GPSInfo, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_37500;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain_MakerNote, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_37500;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain_Makernote, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_40965;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain_Interop, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = const_int_neg_1;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain_IFD1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__4_IFD_5);


goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ExifTags$$$class__4_IFD_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ExifTags$$$class__4_IFD_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ExifTags$$$class__4_IFD_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ExifTags$$$class__4_IFD_5,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_PIL$ExifTags$$$class__4_IFD_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__4_IFD_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_16;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__4_IFD_354, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
branch_no_12:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_8;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_8;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain_IFD;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_4 = locals_PIL$ExifTags$$$class__4_IFD_354;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_8, tmp_dict_arg_value_4);
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_metaclass_value_8, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_16;
}
{
    PyObject *old = outline_5_var___class__;
    outline_5_var___class__ = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_47 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_PIL$ExifTags$$$class__4_IFD_354);
locals_PIL$ExifTags$$$class__4_IFD_354 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ExifTags$$$class__4_IFD_354);
locals_PIL$ExifTags$$$class__4_IFD_354 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 354;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_IFD, tmp_assign_source_47);
}
goto try_end_4;
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
try_end_4:;
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
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_PIL$ExifTags$IntEnum(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntEnum);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_29 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_LightSource;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_PIL$ExifTags->m_frame.f_lineno = 363;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_32 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_33;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_10, tmp_default_value_5);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_17;
}
frame_frame_PIL$ExifTags->m_frame.f_lineno = 363;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 363;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_54;
}
branch_end_13:;
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_PIL$ExifTags$$$class__5_LightSource_363 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff15ba11b29b80abac876e78a6df1898;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_LightSource;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_363;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
frame_frame_PIL$ExifTags$$$class__5_LightSource_6 = MAKE_CLASS_FRAME(tstate, code_objects_5e34e19004881f0d02ae4f36e410d4c7, module_PIL$ExifTags, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ExifTags$$$class__5_LightSource_6, locals_PIL$ExifTags$$$class__5_LightSource_363);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ExifTags$$$class__5_LightSource_6);
assert(Py_REFCNT(frame_frame_PIL$ExifTags$$$class__5_LightSource_6) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Unknown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Daylight, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Fluorescent, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Tungsten, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Flash, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_9;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Fine, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_10;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Cloudy, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_11;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Shade, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_DaylightFluorescent, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_13;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_DayWhiteFluorescent, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_CoolWhiteFluorescent, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_WhiteFluorescent, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_StandardLightA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_StandardLightB, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_19;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_StandardLightC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_D55, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_21;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_D65, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_D75, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_23;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_D50, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_24;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_ISO, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_255;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain_Other, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_2 = "o";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__5_LightSource_6);


goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ExifTags$$$class__5_LightSource_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ExifTags$$$class__5_LightSource_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ExifTags$$$class__5_LightSource_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ExifTags$$$class__5_LightSource_6,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_PIL$ExifTags$$$class__5_LightSource_6);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ExifTags$$$class__5_LightSource_6);


// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_19;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$ExifTags$$$class__5_LightSource_363, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
branch_no_15:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain_LightSource;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_5__bases;
tmp_dict_arg_value_5 = locals_PIL$ExifTags$$$class__5_LightSource_363;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_19;
}
{
    PyObject *old = outline_6_var___class__;
    outline_6_var___class__ = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_55 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_PIL$ExifTags$$$class__5_LightSource_363);
locals_PIL$ExifTags$$$class__5_LightSource_363 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ExifTags$$$class__5_LightSource_363);
locals_PIL$ExifTags$$$class__5_LightSource_363 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 363;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_PIL$ExifTags, (Nuitka_StringObject *)mod_consts.const_str_plain_LightSource, tmp_assign_source_55);
}
goto try_end_5;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ExifTags, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ExifTags->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ExifTags, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ExifTags);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ExifTags", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ExifTags" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ExifTags);
    return module_PIL$ExifTags;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ExifTags, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ExifTags", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
