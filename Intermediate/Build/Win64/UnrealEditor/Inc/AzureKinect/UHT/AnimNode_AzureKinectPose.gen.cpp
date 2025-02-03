// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinect/Public/AnimNode_AzureKinectPose.h"
#include "AzureKinect/Public/AzureKinectDevice.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AzureKinectPose() {}

// Begin Cross Module References
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectBodyJoint();
AZUREKINECT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose();
AZUREKINECT_API UScriptStruct* Z_Construct_UScriptStruct_FAzureKinectSkeleton();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AzureKinect();
// End Cross Module References

// Begin ScriptStruct FAnimNode_AzureKinectPose
static_assert(std::is_polymorphic<FAnimNode_AzureKinectPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_AzureKinectPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose;
class UScriptStruct* FAnimNode_AzureKinectPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("AnimNode_AzureKinectPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose.OuterSingleton;
}
template<> AZUREKINECT_API UScriptStruct* StaticStruct<FAnimNode_AzureKinectPose>()
{
	return FAnimNode_AzureKinectPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_AzureKinectPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/AnimNode_AzureKinectPose.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToModify_MetaData[] = {
		{ "Category", "Bone Mapping" },
		{ "ModuleRelativePath", "Public/AnimNode_AzureKinectPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToModify_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BonesToModify_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BonesToModify_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BonesToModify;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AzureKinectPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AzureKinectPose, Skeleton), Z_Construct_UScriptStruct_FAzureKinectSkeleton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) }; // 635774544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify_ValueProp = { "BonesToModify", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify_Key_KeyProp = { "BonesToModify_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AzureKinect_EKinectBodyJoint, METADATA_PARAMS(0, nullptr) }; // 907464639
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify = { "BonesToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AzureKinectPose, BonesToModify), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToModify_MetaData), NewProp_BonesToModify_MetaData) }; // 907464639 4218265988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewProp_BonesToModify,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzureKinect,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_AzureKinectPose",
	Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::PropPointers),
	sizeof(FAnimNode_AzureKinectPose),
	alignof(FAnimNode_AzureKinectPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_AzureKinectPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AnimNode_AzureKinectPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_AzureKinectPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose_Statics::NewStructOps, TEXT("AnimNode_AzureKinectPose"), &Z_Registration_Info_UScriptStruct_AnimNode_AzureKinectPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AzureKinectPose), 3980508186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AnimNode_AzureKinectPose_h_3354841555(TEXT("/Script/AzureKinect"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AnimNode_AzureKinectPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AnimNode_AzureKinectPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
