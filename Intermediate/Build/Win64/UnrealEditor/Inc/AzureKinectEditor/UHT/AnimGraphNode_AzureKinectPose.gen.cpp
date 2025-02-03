// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectEditor/Private/AnimNodes/AnimGraphNode_AzureKinectPose.h"
#include "AzureKinect/Public/AnimNode_AzureKinectPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AzureKinectPose() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
AZUREKINECT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose();
AZUREKINECTEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AzureKinectPose();
AZUREKINECTEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzureKinectEditor();
// End Cross Module References

// Begin Class UAnimGraphNode_AzureKinectPose
void UAnimGraphNode_AzureKinectPose::StaticRegisterNativesUAnimGraphNode_AzureKinectPose()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AzureKinectPose);
UClass* Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_NoRegister()
{
	return UAnimGraphNode_AzureKinectPose::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AnimNodes/AnimGraphNode_AzureKinectPose.h" },
		{ "Kerwords", "Azure Kinect" },
		{ "ModuleRelativePath", "Private/AnimNodes/AnimGraphNode_AzureKinectPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimNodes/AnimGraphNode_AzureKinectPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AzureKinectPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_AzureKinectPose, Node), Z_Construct_UScriptStruct_FAnimNode_AzureKinectPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3980508186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::ClassParams = {
	&UAnimGraphNode_AzureKinectPose::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_AzureKinectPose()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_AzureKinectPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AzureKinectPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AzureKinectPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_AzureKinectPose.OuterSingleton;
}
template<> AZUREKINECTEDITOR_API UClass* StaticClass<UAnimGraphNode_AzureKinectPose>()
{
	return UAnimGraphNode_AzureKinectPose::StaticClass();
}
UAnimGraphNode_AzureKinectPose::UAnimGraphNode_AzureKinectPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AzureKinectPose);
UAnimGraphNode_AzureKinectPose::~UAnimGraphNode_AzureKinectPose() {}
// End Class UAnimGraphNode_AzureKinectPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_AnimNodes_AnimGraphNode_AzureKinectPose_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AzureKinectPose, UAnimGraphNode_AzureKinectPose::StaticClass, TEXT("UAnimGraphNode_AzureKinectPose"), &Z_Registration_Info_UClass_UAnimGraphNode_AzureKinectPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AzureKinectPose), 3581250370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_AnimNodes_AnimGraphNode_AzureKinectPose_h_2615959242(TEXT("/Script/AzureKinectEditor"),
	Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_AnimNodes_AnimGraphNode_AzureKinectPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_AnimNodes_AnimGraphNode_AzureKinectPose_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
