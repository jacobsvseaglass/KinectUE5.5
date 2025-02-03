// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzureKinectDevice.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAzureKinectSkeleton;
#ifdef AZUREKINECT_AzureKinectDevice_generated_h
#error "AzureKinectDevice.generated.h already included, missing '#pragma once' in AzureKinectDevice.h"
#endif
#define AZUREKINECT_AzureKinectDevice_generated_h

#define FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics; \
	AZUREKINECT_API static class UScriptStruct* StaticStruct();


template<> AZUREKINECT_API UScriptStruct* StaticStruct<struct FAzureKinectSkeleton>();

#define FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkeleton); \
	DECLARE_FUNCTION(execGetSkeletons); \
	DECLARE_FUNCTION(execGetNumTrackedSkeletons); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execStopDevice); \
	DECLARE_FUNCTION(execStartDevice); \
	DECLARE_FUNCTION(execLoadDevices); \
	DECLARE_FUNCTION(execGetNumConnectedDevices);


#define FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzureKinectDevice(); \
	friend struct Z_Construct_UClass_UAzureKinectDevice_Statics; \
public: \
	DECLARE_CLASS(UAzureKinectDevice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzureKinect"), NO_API) \
	DECLARE_SERIALIZER(UAzureKinectDevice)


#define FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAzureKinectDevice(UAzureKinectDevice&&); \
	UAzureKinectDevice(const UAzureKinectDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzureKinectDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzureKinectDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzureKinectDevice) \
	NO_API virtual ~UAzureKinectDevice();


#define FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_28_PROLOG
#define FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZUREKINECT_API UClass* StaticClass<class UAzureKinectDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
