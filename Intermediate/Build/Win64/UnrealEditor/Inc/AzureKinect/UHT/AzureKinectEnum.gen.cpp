// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinect/Public/AzureKinectEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureKinectEnum() {}

// Begin Cross Module References
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectBodyJoint();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectColorResolution();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectDepthMode();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectFps();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectRemap();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation();
UPackage* Z_Construct_UPackage__Script_AzureKinect();
// End Cross Module References

// Begin Enum EKinectDepthMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinectDepthMode;
static UEnum* EKinectDepthMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKinectDepthMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKinectDepthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureKinect_EKinectDepthMode, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("EKinectDepthMode"));
	}
	return Z_Registration_Info_UEnum_EKinectDepthMode.OuterSingleton;
}
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectDepthMode>()
{
	return EKinectDepthMode_StaticEnum();
}
struct Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Enums" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable enum defined based on k4a_depth_mode_t from k4atypes.h\n *\n * @note This should always have the same enum values as k4a_depth_mode_t\n */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectEnum.h" },
		{ "NFOV_2X2BINNED.Comment", "/**< Depth sensor will be turned off with this setting. */" },
		{ "NFOV_2X2BINNED.DisplayName", "NFOV 2x2 Binned (320x288)" },
		{ "NFOV_2X2BINNED.Name", "EKinectDepthMode::NFOV_2X2BINNED" },
		{ "NFOV_2X2BINNED.ToolTip", "< Depth sensor will be turned off with this setting." },
		{ "NFOV_UNBINNED.Comment", "/**< Depth captured at 320x288. Passive IR is also captured at 320x288. */" },
		{ "NFOV_UNBINNED.DisplayName", "NFOV Unbinned (640x576)" },
		{ "NFOV_UNBINNED.Name", "EKinectDepthMode::NFOV_UNBINNED" },
		{ "NFOV_UNBINNED.ToolTip", "< Depth captured at 320x288. Passive IR is also captured at 320x288." },
		{ "OFF.DisplayName", "Depth Mode Off" },
		{ "OFF.Name", "EKinectDepthMode::OFF" },
		{ "PASSIVE_IR.Comment", "/**< Depth captured at 1024x1024. Passive IR is also captured at 1024x1024. */" },
		{ "PASSIVE_IR.DisplayName", "Passive IR (1024x1024)" },
		{ "PASSIVE_IR.Name", "EKinectDepthMode::PASSIVE_IR" },
		{ "PASSIVE_IR.ToolTip", "< Depth captured at 1024x1024. Passive IR is also captured at 1024x1024." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable enum defined based on k4a_depth_mode_t from k4atypes.h\n\n@note This should always have the same enum values as k4a_depth_mode_t" },
#endif
		{ "WFOV_2X2BINNED.Comment", "/**< Depth captured at 640x576. Passive IR is also captured at 640x576. */" },
		{ "WFOV_2X2BINNED.DisplayName", "WFOV 2x2 Binned (512x512)" },
		{ "WFOV_2X2BINNED.Name", "EKinectDepthMode::WFOV_2X2BINNED" },
		{ "WFOV_2X2BINNED.ToolTip", "< Depth captured at 640x576. Passive IR is also captured at 640x576." },
		{ "WFOV_UNBINNED.Comment", "/**< Depth captured at 512x512. Passive IR is also captured at 512x512. */" },
		{ "WFOV_UNBINNED.DisplayName", "WFOV Unbinned (1024x1024)" },
		{ "WFOV_UNBINNED.Name", "EKinectDepthMode::WFOV_UNBINNED" },
		{ "WFOV_UNBINNED.ToolTip", "< Depth captured at 512x512. Passive IR is also captured at 512x512." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKinectDepthMode::OFF", (int64)EKinectDepthMode::OFF },
		{ "EKinectDepthMode::NFOV_2X2BINNED", (int64)EKinectDepthMode::NFOV_2X2BINNED },
		{ "EKinectDepthMode::NFOV_UNBINNED", (int64)EKinectDepthMode::NFOV_UNBINNED },
		{ "EKinectDepthMode::WFOV_2X2BINNED", (int64)EKinectDepthMode::WFOV_2X2BINNED },
		{ "EKinectDepthMode::WFOV_UNBINNED", (int64)EKinectDepthMode::WFOV_UNBINNED },
		{ "EKinectDepthMode::PASSIVE_IR", (int64)EKinectDepthMode::PASSIVE_IR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	"EKinectDepthMode",
	"EKinectDepthMode",
	Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzureKinect_EKinectDepthMode()
{
	if (!Z_Registration_Info_UEnum_EKinectDepthMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinectDepthMode.InnerSingleton, Z_Construct_UEnum_AzureKinect_EKinectDepthMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKinectDepthMode.InnerSingleton;
}
// End Enum EKinectDepthMode

// Begin Enum EKinectColorResolution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinectColorResolution;
static UEnum* EKinectColorResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKinectColorResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKinectColorResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureKinect_EKinectColorResolution, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("EKinectColorResolution"));
	}
	return Z_Registration_Info_UEnum_EKinectColorResolution.OuterSingleton;
}
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectColorResolution>()
{
	return EKinectColorResolution_StaticEnum();
}
struct Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Enums" },
		{ "ModuleRelativePath", "Public/AzureKinectEnum.h" },
		{ "RESOLUTION_1440P.Comment", "/**< Color captured at 1280 x 720. */" },
		{ "RESOLUTION_1440P.DisplayName", "2560 x 1440 [16:9]" },
		{ "RESOLUTION_1440P.Name", "EKinectColorResolution::RESOLUTION_1440P" },
		{ "RESOLUTION_1440P.ToolTip", "< Color captured at 1280 x 720." },
		{ "RESOLUTION_1536P.Comment", "/**< Color captured at 2560 x 1440. */" },
		{ "RESOLUTION_1536P.DisplayName", "2048 x 1536 [4:3]" },
		{ "RESOLUTION_1536P.Name", "EKinectColorResolution::RESOLUTION_1536P" },
		{ "RESOLUTION_1536P.ToolTip", "< Color captured at 2560 x 1440." },
		{ "RESOLUTION_2160P.Comment", "/**< Color captured at 2048 x 1536. */" },
		{ "RESOLUTION_2160P.DisplayName", "3840 x 2160 [16:9]" },
		{ "RESOLUTION_2160P.Name", "EKinectColorResolution::RESOLUTION_2160P" },
		{ "RESOLUTION_2160P.ToolTip", "< Color captured at 2048 x 1536." },
		{ "RESOLUTION_3072P.Comment", "/**< Color captured at 3840 x 2160. */" },
		{ "RESOLUTION_3072P.DisplayName", "4096 x 3072 [4:3]" },
		{ "RESOLUTION_3072P.Name", "EKinectColorResolution::RESOLUTION_3072P" },
		{ "RESOLUTION_3072P.ToolTip", "< Color captured at 3840 x 2160." },
		{ "RESOLUTION_720P.Comment", "/**< Color sensor will be turned off with this setting. */" },
		{ "RESOLUTION_720P.DisplayName", "1280 x 720  [16:9]" },
		{ "RESOLUTION_720P.Name", "EKinectColorResolution::RESOLUTION_720P" },
		{ "RESOLUTION_720P.ToolTip", "< Color sensor will be turned off with this setting." },
		{ "RESOLUTION_OFF.DisplayName", "Color Camera Turned Off" },
		{ "RESOLUTION_OFF.Name", "EKinectColorResolution::RESOLUTION_OFF" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKinectColorResolution::RESOLUTION_OFF", (int64)EKinectColorResolution::RESOLUTION_OFF },
		{ "EKinectColorResolution::RESOLUTION_720P", (int64)EKinectColorResolution::RESOLUTION_720P },
		{ "EKinectColorResolution::RESOLUTION_1440P", (int64)EKinectColorResolution::RESOLUTION_1440P },
		{ "EKinectColorResolution::RESOLUTION_1536P", (int64)EKinectColorResolution::RESOLUTION_1536P },
		{ "EKinectColorResolution::RESOLUTION_2160P", (int64)EKinectColorResolution::RESOLUTION_2160P },
		{ "EKinectColorResolution::RESOLUTION_3072P", (int64)EKinectColorResolution::RESOLUTION_3072P },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	"EKinectColorResolution",
	"EKinectColorResolution",
	Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzureKinect_EKinectColorResolution()
{
	if (!Z_Registration_Info_UEnum_EKinectColorResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinectColorResolution.InnerSingleton, Z_Construct_UEnum_AzureKinect_EKinectColorResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKinectColorResolution.InnerSingleton;
}
// End Enum EKinectColorResolution

// Begin Enum EKinectFps
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinectFps;
static UEnum* EKinectFps_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKinectFps.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKinectFps.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureKinect_EKinectFps, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("EKinectFps"));
	}
	return Z_Registration_Info_UEnum_EKinectFps.OuterSingleton;
}
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectFps>()
{
	return EKinectFps_StaticEnum();
}
struct Z_Construct_UEnum_AzureKinect_EKinectFps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Enums" },
		{ "ModuleRelativePath", "Public/AzureKinectEnum.h" },
		{ "PER_SECOND_15.DisplayName", "15 fps" },
		{ "PER_SECOND_15.Name", "EKinectFps::PER_SECOND_15" },
		{ "PER_SECOND_30.DisplayName", "30 fps" },
		{ "PER_SECOND_30.Name", "EKinectFps::PER_SECOND_30" },
		{ "PER_SECOND_5.DisplayName", "5 fps" },
		{ "PER_SECOND_5.Name", "EKinectFps::PER_SECOND_5" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKinectFps::PER_SECOND_5", (int64)EKinectFps::PER_SECOND_5 },
		{ "EKinectFps::PER_SECOND_15", (int64)EKinectFps::PER_SECOND_15 },
		{ "EKinectFps::PER_SECOND_30", (int64)EKinectFps::PER_SECOND_30 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureKinect_EKinectFps_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	"EKinectFps",
	"EKinectFps",
	Z_Construct_UEnum_AzureKinect_EKinectFps_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectFps_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectFps_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzureKinect_EKinectFps_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzureKinect_EKinectFps()
{
	if (!Z_Registration_Info_UEnum_EKinectFps.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinectFps.InnerSingleton, Z_Construct_UEnum_AzureKinect_EKinectFps_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKinectFps.InnerSingleton;
}
// End Enum EKinectFps

// Begin Enum EKinectRemap
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinectRemap;
static UEnum* EKinectRemap_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKinectRemap.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKinectRemap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureKinect_EKinectRemap, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("EKinectRemap"));
	}
	return Z_Registration_Info_UEnum_EKinectRemap.OuterSingleton;
}
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectRemap>()
{
	return EKinectRemap_StaticEnum();
}
struct Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Enums" },
		{ "COLOR_TO_DEPTH.DisplayName", "Color to Depth" },
		{ "COLOR_TO_DEPTH.Name", "EKinectRemap::COLOR_TO_DEPTH" },
		{ "DEPTH_TO_COLOR.DisplayName", "Depth to Color" },
		{ "DEPTH_TO_COLOR.Name", "EKinectRemap::DEPTH_TO_COLOR" },
		{ "ModuleRelativePath", "Public/AzureKinectEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKinectRemap::COLOR_TO_DEPTH", (int64)EKinectRemap::COLOR_TO_DEPTH },
		{ "EKinectRemap::DEPTH_TO_COLOR", (int64)EKinectRemap::DEPTH_TO_COLOR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	"EKinectRemap",
	"EKinectRemap",
	Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzureKinect_EKinectRemap()
{
	if (!Z_Registration_Info_UEnum_EKinectRemap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinectRemap.InnerSingleton, Z_Construct_UEnum_AzureKinect_EKinectRemap_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKinectRemap.InnerSingleton;
}
// End Enum EKinectRemap

// Begin Enum EKinectBodyJoint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinectBodyJoint;
static UEnum* EKinectBodyJoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKinectBodyJoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKinectBodyJoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureKinect_EKinectBodyJoint, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("EKinectBodyJoint"));
	}
	return Z_Registration_Info_UEnum_EKinectBodyJoint.OuterSingleton;
}
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectBodyJoint>()
{
	return EKinectBodyJoint_StaticEnum();
}
struct Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ANKLE_LEFT.DisplayName", "Ankle Left" },
		{ "ANKLE_LEFT.Name", "EKinectBodyJoint::ANKLE_LEFT" },
		{ "ANKLE_RIGHT.DisplayName", "Ankle Right" },
		{ "ANKLE_RIGHT.Name", "EKinectBodyJoint::ANKLE_RIGHT" },
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Enums" },
		{ "CLAVICLE_LEFT.DisplayName", "Clavicle Left" },
		{ "CLAVICLE_LEFT.Name", "EKinectBodyJoint::CLAVICLE_LEFT" },
		{ "CLAVICLE_RIGHT.DisplayName", "Clavicle Right" },
		{ "CLAVICLE_RIGHT.Name", "EKinectBodyJoint::CLAVICLE_RIGHT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable enum defined based on k4abt_joint_id_t from k4abttypes.h\n * This should always have the same enum values as k4abt_joint_id_t\n */" },
#endif
		{ "COUNT.DisplayName", "COUNT" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EKinectBodyJoint::COUNT" },
		{ "EAR_LEFT.DisplayName", "Ear Left" },
		{ "EAR_LEFT.Name", "EKinectBodyJoint::EAR_LEFT" },
		{ "EAR_RIGHT.DisplayName", "Ear Right" },
		{ "EAR_RIGHT.Name", "EKinectBodyJoint::EAR_RIGHT" },
		{ "ELBOW_LEFT.DisplayName", "Elbow Left" },
		{ "ELBOW_LEFT.Name", "EKinectBodyJoint::ELBOW_LEFT" },
		{ "ELBOW_RIGHT.DisplayName", "Elbow Right" },
		{ "ELBOW_RIGHT.Name", "EKinectBodyJoint::ELBOW_RIGHT" },
		{ "EYE_LEFT.DisplayName", "Eye Left" },
		{ "EYE_LEFT.Name", "EKinectBodyJoint::EYE_LEFT" },
		{ "EYE_RIGHT.DisplayName", "Eye Right" },
		{ "EYE_RIGHT.Name", "EKinectBodyJoint::EYE_RIGHT" },
		{ "FOOT_LEFT.DisplayName", "Foot Left" },
		{ "FOOT_LEFT.Name", "EKinectBodyJoint::FOOT_LEFT" },
		{ "FOOT_RIGHT.DisplayName", "Foot Right" },
		{ "FOOT_RIGHT.Name", "EKinectBodyJoint::FOOT_RIGHT" },
		{ "HAND_LEFT.DisplayName", "Hand Left" },
		{ "HAND_LEFT.Name", "EKinectBodyJoint::HAND_LEFT" },
		{ "HAND_RIGHT.DisplayName", "Hand Right" },
		{ "HAND_RIGHT.Name", "EKinectBodyJoint::HAND_RIGHT" },
		{ "HANDTIP_LEFT.DisplayName", "Hand Tip Left" },
		{ "HANDTIP_LEFT.Name", "EKinectBodyJoint::HANDTIP_LEFT" },
		{ "HANDTIP_RIGHT.DisplayName", "Hand Tip Right" },
		{ "HANDTIP_RIGHT.Name", "EKinectBodyJoint::HANDTIP_RIGHT" },
		{ "HEAD.DisplayName", "Head" },
		{ "HEAD.Name", "EKinectBodyJoint::HEAD" },
		{ "HIP_LEFT.DisplayName", "Hip Left" },
		{ "HIP_LEFT.Name", "EKinectBodyJoint::HIP_LEFT" },
		{ "HIP_RIGHT.DisplayName", "Hip Right" },
		{ "HIP_RIGHT.Name", "EKinectBodyJoint::HIP_RIGHT" },
		{ "KNEE_LEFT.DisplayName", "Knee Left" },
		{ "KNEE_LEFT.Name", "EKinectBodyJoint::KNEE_LEFT" },
		{ "KNEE_RIGHT.DisplayName", "Knee Right" },
		{ "KNEE_RIGHT.Name", "EKinectBodyJoint::KNEE_RIGHT" },
		{ "ModuleRelativePath", "Public/AzureKinectEnum.h" },
		{ "NECK.DisplayName", "Neck" },
		{ "NECK.Name", "EKinectBodyJoint::NECK" },
		{ "NOSE.DisplayName", "Nose" },
		{ "NOSE.Name", "EKinectBodyJoint::NOSE" },
		{ "PELVIS.DisplayName", "Pelvis" },
		{ "PELVIS.Name", "EKinectBodyJoint::PELVIS" },
		{ "SHOULDER_LEFT.DisplayName", "Shoulder Left" },
		{ "SHOULDER_LEFT.Name", "EKinectBodyJoint::SHOULDER_LEFT" },
		{ "SHOULDER_RIGHT.DisplayName", "Shoulder Right" },
		{ "SHOULDER_RIGHT.Name", "EKinectBodyJoint::SHOULDER_RIGHT" },
		{ "SPINE_CHEST.DisplayName", "Spine Chest" },
		{ "SPINE_CHEST.Name", "EKinectBodyJoint::SPINE_CHEST" },
		{ "SPINE_NAVEL.DisplayName", "Spine Navel" },
		{ "SPINE_NAVEL.Name", "EKinectBodyJoint::SPINE_NAVEL" },
		{ "THUMB_LEFT.DisplayName", "Thumb Left" },
		{ "THUMB_LEFT.Name", "EKinectBodyJoint::THUMB_LEFT" },
		{ "THUMB_RIGHT.DisplayName", "Thumb Right" },
		{ "THUMB_RIGHT.Name", "EKinectBodyJoint::THUMB_RIGHT" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable enum defined based on k4abt_joint_id_t from k4abttypes.h\nThis should always have the same enum values as k4abt_joint_id_t" },
#endif
		{ "WRIST_LEFT.DisplayName", "Wrist Left" },
		{ "WRIST_LEFT.Name", "EKinectBodyJoint::WRIST_LEFT" },
		{ "WRIST_RIGHT.DisplayName", "Wrist Right" },
		{ "WRIST_RIGHT.Name", "EKinectBodyJoint::WRIST_RIGHT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKinectBodyJoint::PELVIS", (int64)EKinectBodyJoint::PELVIS },
		{ "EKinectBodyJoint::SPINE_NAVEL", (int64)EKinectBodyJoint::SPINE_NAVEL },
		{ "EKinectBodyJoint::SPINE_CHEST", (int64)EKinectBodyJoint::SPINE_CHEST },
		{ "EKinectBodyJoint::NECK", (int64)EKinectBodyJoint::NECK },
		{ "EKinectBodyJoint::CLAVICLE_LEFT", (int64)EKinectBodyJoint::CLAVICLE_LEFT },
		{ "EKinectBodyJoint::SHOULDER_LEFT", (int64)EKinectBodyJoint::SHOULDER_LEFT },
		{ "EKinectBodyJoint::ELBOW_LEFT", (int64)EKinectBodyJoint::ELBOW_LEFT },
		{ "EKinectBodyJoint::WRIST_LEFT", (int64)EKinectBodyJoint::WRIST_LEFT },
		{ "EKinectBodyJoint::HAND_LEFT", (int64)EKinectBodyJoint::HAND_LEFT },
		{ "EKinectBodyJoint::HANDTIP_LEFT", (int64)EKinectBodyJoint::HANDTIP_LEFT },
		{ "EKinectBodyJoint::THUMB_LEFT", (int64)EKinectBodyJoint::THUMB_LEFT },
		{ "EKinectBodyJoint::CLAVICLE_RIGHT", (int64)EKinectBodyJoint::CLAVICLE_RIGHT },
		{ "EKinectBodyJoint::SHOULDER_RIGHT", (int64)EKinectBodyJoint::SHOULDER_RIGHT },
		{ "EKinectBodyJoint::ELBOW_RIGHT", (int64)EKinectBodyJoint::ELBOW_RIGHT },
		{ "EKinectBodyJoint::WRIST_RIGHT", (int64)EKinectBodyJoint::WRIST_RIGHT },
		{ "EKinectBodyJoint::HAND_RIGHT", (int64)EKinectBodyJoint::HAND_RIGHT },
		{ "EKinectBodyJoint::HANDTIP_RIGHT", (int64)EKinectBodyJoint::HANDTIP_RIGHT },
		{ "EKinectBodyJoint::THUMB_RIGHT", (int64)EKinectBodyJoint::THUMB_RIGHT },
		{ "EKinectBodyJoint::HIP_LEFT", (int64)EKinectBodyJoint::HIP_LEFT },
		{ "EKinectBodyJoint::KNEE_LEFT", (int64)EKinectBodyJoint::KNEE_LEFT },
		{ "EKinectBodyJoint::ANKLE_LEFT", (int64)EKinectBodyJoint::ANKLE_LEFT },
		{ "EKinectBodyJoint::FOOT_LEFT", (int64)EKinectBodyJoint::FOOT_LEFT },
		{ "EKinectBodyJoint::HIP_RIGHT", (int64)EKinectBodyJoint::HIP_RIGHT },
		{ "EKinectBodyJoint::KNEE_RIGHT", (int64)EKinectBodyJoint::KNEE_RIGHT },
		{ "EKinectBodyJoint::ANKLE_RIGHT", (int64)EKinectBodyJoint::ANKLE_RIGHT },
		{ "EKinectBodyJoint::FOOT_RIGHT", (int64)EKinectBodyJoint::FOOT_RIGHT },
		{ "EKinectBodyJoint::HEAD", (int64)EKinectBodyJoint::HEAD },
		{ "EKinectBodyJoint::NOSE", (int64)EKinectBodyJoint::NOSE },
		{ "EKinectBodyJoint::EYE_LEFT", (int64)EKinectBodyJoint::EYE_LEFT },
		{ "EKinectBodyJoint::EAR_LEFT", (int64)EKinectBodyJoint::EAR_LEFT },
		{ "EKinectBodyJoint::EYE_RIGHT", (int64)EKinectBodyJoint::EYE_RIGHT },
		{ "EKinectBodyJoint::EAR_RIGHT", (int64)EKinectBodyJoint::EAR_RIGHT },
		{ "EKinectBodyJoint::COUNT", (int64)EKinectBodyJoint::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	"EKinectBodyJoint",
	"EKinectBodyJoint",
	Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzureKinect_EKinectBodyJoint()
{
	if (!Z_Registration_Info_UEnum_EKinectBodyJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinectBodyJoint.InnerSingleton, Z_Construct_UEnum_AzureKinect_EKinectBodyJoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKinectBodyJoint.InnerSingleton;
}
// End Enum EKinectBodyJoint

// Begin Enum EKinectSensorOrientation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinectSensorOrientation;
static UEnum* EKinectSensorOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKinectSensorOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKinectSensorOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("EKinectSensorOrientation"));
	}
	return Z_Registration_Info_UEnum_EKinectSensorOrientation.OuterSingleton;
}
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectSensorOrientation>()
{
	return EKinectSensorOrientation_StaticEnum();
}
struct Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Enums" },
		{ "CLOCKWISE90.Comment", "/**< Mount the sensor at its default orientation */" },
		{ "CLOCKWISE90.DisplayName", "Clockwise 90" },
		{ "CLOCKWISE90.Name", "EKinectSensorOrientation::CLOCKWISE90" },
		{ "CLOCKWISE90.ToolTip", "< Mount the sensor at its default orientation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This should always have the same enum values as k4abt_sensor_orientation_t\n*/" },
#endif
		{ "COUNTERCLOCKWISE90.Comment", "/**< Clockwisely rotate the sensor 90 degree */" },
		{ "COUNTERCLOCKWISE90.DisplayName", "Conter-clockwise 90" },
		{ "COUNTERCLOCKWISE90.Name", "EKinectSensorOrientation::COUNTERCLOCKWISE90" },
		{ "COUNTERCLOCKWISE90.ToolTip", "< Clockwisely rotate the sensor 90 degree" },
		{ "DEFAULT.DisplayName", "Default" },
		{ "DEFAULT.Name", "EKinectSensorOrientation::DEFAULT" },
		{ "FLIP180.Comment", "/**< Counter-clockwisely rotate the sensor 90 degrees */" },
		{ "FLIP180.DisplayName", "Flip 180" },
		{ "FLIP180.Name", "EKinectSensorOrientation::FLIP180" },
		{ "FLIP180.ToolTip", "< Counter-clockwisely rotate the sensor 90 degrees" },
		{ "ModuleRelativePath", "Public/AzureKinectEnum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This should always have the same enum values as k4abt_sensor_orientation_t" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKinectSensorOrientation::DEFAULT", (int64)EKinectSensorOrientation::DEFAULT },
		{ "EKinectSensorOrientation::CLOCKWISE90", (int64)EKinectSensorOrientation::CLOCKWISE90 },
		{ "EKinectSensorOrientation::COUNTERCLOCKWISE90", (int64)EKinectSensorOrientation::COUNTERCLOCKWISE90 },
		{ "EKinectSensorOrientation::FLIP180", (int64)EKinectSensorOrientation::FLIP180 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	"EKinectSensorOrientation",
	"EKinectSensorOrientation",
	Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation()
{
	if (!Z_Registration_Info_UEnum_EKinectSensorOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinectSensorOrientation.InnerSingleton, Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKinectSensorOrientation.InnerSingleton;
}
// End Enum EKinectSensorOrientation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKinectDepthMode_StaticEnum, TEXT("EKinectDepthMode"), &Z_Registration_Info_UEnum_EKinectDepthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1805014752U) },
		{ EKinectColorResolution_StaticEnum, TEXT("EKinectColorResolution"), &Z_Registration_Info_UEnum_EKinectColorResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3399917602U) },
		{ EKinectFps_StaticEnum, TEXT("EKinectFps"), &Z_Registration_Info_UEnum_EKinectFps, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1923919397U) },
		{ EKinectRemap_StaticEnum, TEXT("EKinectRemap"), &Z_Registration_Info_UEnum_EKinectRemap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 525772656U) },
		{ EKinectBodyJoint_StaticEnum, TEXT("EKinectBodyJoint"), &Z_Registration_Info_UEnum_EKinectBodyJoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 907464639U) },
		{ EKinectSensorOrientation_StaticEnum, TEXT("EKinectSensorOrientation"), &Z_Registration_Info_UEnum_EKinectSensorOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 414538416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectEnum_h_552998391(TEXT("/Script/AzureKinect"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
