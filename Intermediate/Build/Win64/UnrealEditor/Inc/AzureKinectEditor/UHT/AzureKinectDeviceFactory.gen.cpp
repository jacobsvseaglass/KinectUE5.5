// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectEditor/Private/Factories/AzureKinectDeviceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureKinectDeviceFactory() {}

// Begin Cross Module References
AZUREKINECTEDITOR_API UClass* Z_Construct_UClass_UAzureKinectDeviceFactory();
AZUREKINECTEDITOR_API UClass* Z_Construct_UClass_UAzureKinectDeviceFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AzureKinectEditor();
// End Cross Module References

// Begin Class UAzureKinectDeviceFactory
void UAzureKinectDeviceFactory::StaticRegisterNativesUAzureKinectDeviceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzureKinectDeviceFactory);
UClass* Z_Construct_UClass_UAzureKinectDeviceFactory_NoRegister()
{
	return UAzureKinectDeviceFactory::StaticClass();
}
struct Z_Construct_UClass_UAzureKinectDeviceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory class of UAzureKinectDevice.\n * UAzureKinectDevice can be Asset Type due to this factory class.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AzureKinectDeviceFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/AzureKinectDeviceFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory class of UAzureKinectDevice.\nUAzureKinectDevice can be Asset Type due to this factory class." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureKinectDeviceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAzureKinectDeviceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectDeviceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureKinectDeviceFactory_Statics::ClassParams = {
	&UAzureKinectDeviceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectDeviceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzureKinectDeviceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAzureKinectDeviceFactory()
{
	if (!Z_Registration_Info_UClass_UAzureKinectDeviceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureKinectDeviceFactory.OuterSingleton, Z_Construct_UClass_UAzureKinectDeviceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzureKinectDeviceFactory.OuterSingleton;
}
template<> AZUREKINECTEDITOR_API UClass* StaticClass<UAzureKinectDeviceFactory>()
{
	return UAzureKinectDeviceFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureKinectDeviceFactory);
UAzureKinectDeviceFactory::~UAzureKinectDeviceFactory() {}
// End Class UAzureKinectDeviceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_Factories_AzureKinectDeviceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzureKinectDeviceFactory, UAzureKinectDeviceFactory::StaticClass, TEXT("UAzureKinectDeviceFactory"), &Z_Registration_Info_UClass_UAzureKinectDeviceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureKinectDeviceFactory), 1630387085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_Factories_AzureKinectDeviceFactory_h_2422513351(TEXT("/Script/AzureKinectEditor"),
	Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_Factories_AzureKinectDeviceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinectEditor_Private_Factories_AzureKinectDeviceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
