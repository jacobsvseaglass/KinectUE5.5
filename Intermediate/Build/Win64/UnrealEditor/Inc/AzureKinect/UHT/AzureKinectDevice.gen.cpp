// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinect/Public/AzureKinectDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureKinectDevice() {}

// Begin Cross Module References
AZUREKINECT_API UClass* Z_Construct_UClass_UAzureKinectDevice();
AZUREKINECT_API UClass* Z_Construct_UClass_UAzureKinectDevice_NoRegister();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectColorResolution();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectDepthMode();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectFps();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectRemap();
AZUREKINECT_API UEnum* Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation();
AZUREKINECT_API UScriptStruct* Z_Construct_UScriptStruct_FAzureKinectSkeleton();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzureKinect();
// End Cross Module References

// Begin ScriptStruct FAzureKinectSkeleton
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzureKinectSkeleton;
class UScriptStruct* FAzureKinectSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzureKinectSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzureKinectSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureKinectSkeleton, (UObject*)Z_Construct_UPackage__Script_AzureKinect(), TEXT("AzureKinectSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_AzureKinectSkeleton.OuterSingleton;
}
template<> AZUREKINECT_API UScriptStruct* StaticStruct<FAzureKinectSkeleton>()
{
	return FAzureKinectSkeleton::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "AzureKinectSkeleton" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Joints_MetaData[] = {
		{ "Category", "AzureKinectSkeleton" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Joints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Joints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureKinectSkeleton>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzureKinectSkeleton, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewProp_Joints_Inner = { "Joints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewProp_Joints = { "Joints", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAzureKinectSkeleton, Joints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Joints_MetaData), NewProp_Joints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewProp_Joints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewProp_Joints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AzureKinect,
	nullptr,
	&NewStructOps,
	"AzureKinectSkeleton",
	Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::PropPointers),
	sizeof(FAzureKinectSkeleton),
	alignof(FAzureKinectSkeleton),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAzureKinectSkeleton()
{
	if (!Z_Registration_Info_UScriptStruct_AzureKinectSkeleton.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzureKinectSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AzureKinectSkeleton.InnerSingleton;
}
// End ScriptStruct FAzureKinectSkeleton

// Begin Class UAzureKinectDevice Function GetNumConnectedDevices
struct Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics
{
	struct AzureKinectDevice_eventGetNumConnectedDevices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IO" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AzureKinectDevice_eventGetNumConnectedDevices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "GetNumConnectedDevices", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::AzureKinectDevice_eventGetNumConnectedDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::AzureKinectDevice_eventGetNumConnectedDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execGetNumConnectedDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAzureKinectDevice::GetNumConnectedDevices();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function GetNumConnectedDevices

// Begin Class UAzureKinectDevice Function GetNumTrackedSkeletons
struct Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics
{
	struct AzureKinectDevice_eventGetNumTrackedSkeletons_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeletons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return a number of Skeletons currently aquired and stored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a number of Skeletons currently aquired and stored." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AzureKinectDevice_eventGetNumTrackedSkeletons_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "GetNumTrackedSkeletons", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::AzureKinectDevice_eventGetNumTrackedSkeletons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::AzureKinectDevice_eventGetNumTrackedSkeletons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execGetNumTrackedSkeletons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTrackedSkeletons();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function GetNumTrackedSkeletons

// Begin Class UAzureKinectDevice Function GetSkeleton
struct Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics
{
	struct AzureKinectDevice_eventGetSkeleton_Parms
	{
		int32 Index;
		FAzureKinectSkeleton ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeletons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return a Skeleton struct by Index (not Skeleton ID).\n\x09 * If given Index is out of range, return a null struct.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a Skeleton struct by Index (not Skeleton ID).\nIf given Index is out of range, return a null struct." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AzureKinectDevice_eventGetSkeleton_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AzureKinectDevice_eventGetSkeleton_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzureKinectSkeleton, METADATA_PARAMS(0, nullptr) }; // 635774544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "GetSkeleton", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::AzureKinectDevice_eventGetSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::AzureKinectDevice_eventGetSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execGetSkeleton)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAzureKinectSkeleton*)Z_Param__Result=P_THIS->GetSkeleton(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function GetSkeleton

// Begin Class UAzureKinectDevice Function GetSkeletons
struct Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics
{
	struct AzureKinectDevice_eventGetSkeletons_Parms
	{
		TArray<FAzureKinectSkeleton> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeletons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return an array of Skeletons currently aquired and stored.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return an array of Skeletons currently aquired and stored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAzureKinectSkeleton, METADATA_PARAMS(0, nullptr) }; // 635774544
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AzureKinectDevice_eventGetSkeletons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 635774544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "GetSkeletons", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::AzureKinectDevice_eventGetSkeletons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::AzureKinectDevice_eventGetSkeletons_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execGetSkeletons)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAzureKinectSkeleton>*)Z_Param__Result=P_THIS->GetSkeletons();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function GetSkeletons

// Begin Class UAzureKinectDevice Function IsOpen
struct Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics
{
	struct AzureKinectDevice_eventIsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if Kinect Device is open.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if Kinect Device is open." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AzureKinectDevice_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AzureKinectDevice_eventIsOpen_Parms), &Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "IsOpen", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::AzureKinectDevice_eventIsOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::AzureKinectDevice_eventIsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_IsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_IsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execIsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpen();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function IsOpen

// Begin Class UAzureKinectDevice Function LoadDevices
struct Z_Construct_UFunction_UAzureKinectDevice_LoadDevices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IO" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_LoadDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "LoadDevices", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_LoadDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_LoadDevices_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAzureKinectDevice_LoadDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_LoadDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execLoadDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadDevices();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function LoadDevices

// Begin Class UAzureKinectDevice Function StartDevice
struct Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics
{
	struct AzureKinectDevice_eventStartDevice_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Call \"open\" and \"start_camara\" to Native Kinect Device\n\x09 * and return result. Then start a thread for Kinect's data feed.\n\x09 * Device Index should be specified in advance;\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call \"open\" and \"start_camara\" to Native Kinect Device\nand return result. Then start a thread for Kinect's data feed.\nDevice Index should be specified in advance;" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AzureKinectDevice_eventStartDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AzureKinectDevice_eventStartDevice_Parms), &Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "StartDevice", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::AzureKinectDevice_eventStartDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::AzureKinectDevice_eventStartDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_StartDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_StartDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execStartDevice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartDevice();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function StartDevice

// Begin Class UAzureKinectDevice Function StopDevice
struct Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics
{
	struct AzureKinectDevice_eventStopDevice_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Call \"stop_camara\" and \"close\" to Native Kinect Device,\n\x09 * and release all instaces about Native Kinect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call \"stop_camara\" and \"close\" to Native Kinect Device,\nand release all instaces about Native Kinect." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AzureKinectDevice_eventStopDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AzureKinectDevice_eventStopDevice_Parms), &Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectDevice, nullptr, "StopDevice", nullptr, nullptr, Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::AzureKinectDevice_eventStopDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::AzureKinectDevice_eventStopDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzureKinectDevice_StopDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureKinectDevice_StopDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureKinectDevice::execStopDevice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StopDevice();
	P_NATIVE_END;
}
// End Class UAzureKinectDevice Function StopDevice

// Begin Class UAzureKinectDevice
void UAzureKinectDevice::StaticRegisterNativesUAzureKinectDevice()
{
	UClass* Class = UAzureKinectDevice::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumConnectedDevices", &UAzureKinectDevice::execGetNumConnectedDevices },
		{ "GetNumTrackedSkeletons", &UAzureKinectDevice::execGetNumTrackedSkeletons },
		{ "GetSkeleton", &UAzureKinectDevice::execGetSkeleton },
		{ "GetSkeletons", &UAzureKinectDevice::execGetSkeletons },
		{ "IsOpen", &UAzureKinectDevice::execIsOpen },
		{ "LoadDevices", &UAzureKinectDevice::execLoadDevices },
		{ "StartDevice", &UAzureKinectDevice::execStartDevice },
		{ "StopDevice", &UAzureKinectDevice::execStopDevice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzureKinectDevice);
UClass* Z_Construct_UClass_UAzureKinectDevice_NoRegister()
{
	return UAzureKinectDevice::StaticClass();
}
struct Z_Construct_UClass_UAzureKinectDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AzureKinectDevice.h" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthTexture_MetaData[] = {
		{ "Category", "IO" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTexture_MetaData[] = {
		{ "Category", "IO" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InflaredTexture_MetaData[] = {
		{ "Category", "IO" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyIndexTexture_MetaData[] = {
		{ "Category", "IO" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fps_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorOrientation_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceIndex_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkeletonTracking_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AzureKinectDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DepthTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InflaredTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyIndexTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DepthMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemapMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemapMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Fps_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Fps;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SensorOrientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SensorOrientation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceIndex;
	static void NewProp_bSkeletonTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkeletonTracking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureKinectDevice_GetNumConnectedDevices, "GetNumConnectedDevices" }, // 3535267366
		{ &Z_Construct_UFunction_UAzureKinectDevice_GetNumTrackedSkeletons, "GetNumTrackedSkeletons" }, // 2943335473
		{ &Z_Construct_UFunction_UAzureKinectDevice_GetSkeleton, "GetSkeleton" }, // 1013908563
		{ &Z_Construct_UFunction_UAzureKinectDevice_GetSkeletons, "GetSkeletons" }, // 1658975472
		{ &Z_Construct_UFunction_UAzureKinectDevice_IsOpen, "IsOpen" }, // 743331855
		{ &Z_Construct_UFunction_UAzureKinectDevice_LoadDevices, "LoadDevices" }, // 4060846692
		{ &Z_Construct_UFunction_UAzureKinectDevice_StartDevice, "StartDevice" }, // 1665910067
		{ &Z_Construct_UFunction_UAzureKinectDevice_StopDevice, "StopDevice" }, // 252437807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureKinectDevice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DepthTexture = { "DepthTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, DepthTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthTexture_MetaData), NewProp_DepthTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_ColorTexture = { "ColorTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, ColorTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTexture_MetaData), NewProp_ColorTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_InflaredTexture = { "InflaredTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, InflaredTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InflaredTexture_MetaData), NewProp_InflaredTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_BodyIndexTexture = { "BodyIndexTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, BodyIndexTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyIndexTexture_MetaData), NewProp_BodyIndexTexture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DepthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DepthMode = { "DepthMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, DepthMode), Z_Construct_UEnum_AzureKinect_EKinectDepthMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthMode_MetaData), NewProp_DepthMode_MetaData) }; // 1805014752
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_ColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_ColorMode = { "ColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, ColorMode), Z_Construct_UEnum_AzureKinect_EKinectColorResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMode_MetaData), NewProp_ColorMode_MetaData) }; // 3399917602
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_RemapMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_RemapMode = { "RemapMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, RemapMode), Z_Construct_UEnum_AzureKinect_EKinectRemap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapMode_MetaData), NewProp_RemapMode_MetaData) }; // 525772656
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_Fps_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_Fps = { "Fps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, Fps), Z_Construct_UEnum_AzureKinect_EKinectFps, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fps_MetaData), NewProp_Fps_MetaData) }; // 1923919397
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_SensorOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_SensorOrientation = { "SensorOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, SensorOrientation), Z_Construct_UEnum_AzureKinect_EKinectSensorOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorOrientation_MetaData), NewProp_SensorOrientation_MetaData) }; // 414538416
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DeviceIndex = { "DeviceIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzureKinectDevice, DeviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceIndex_MetaData), NewProp_DeviceIndex_MetaData) };
void Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_bSkeletonTracking_SetBit(void* Obj)
{
	((UAzureKinectDevice*)Obj)->bSkeletonTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_bSkeletonTracking = { "bSkeletonTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzureKinectDevice), &Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_bSkeletonTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkeletonTracking_MetaData), NewProp_bSkeletonTracking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzureKinectDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DepthTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_ColorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_InflaredTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_BodyIndexTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DepthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DepthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_ColorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_ColorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_RemapMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_RemapMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_Fps_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_Fps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_SensorOrientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_SensorOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_DeviceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectDevice_Statics::NewProp_bSkeletonTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectDevice_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAzureKinectDevice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AzureKinect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectDevice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureKinectDevice_Statics::ClassParams = {
	&UAzureKinectDevice::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzureKinectDevice_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectDevice_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectDevice_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzureKinectDevice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAzureKinectDevice()
{
	if (!Z_Registration_Info_UClass_UAzureKinectDevice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureKinectDevice.OuterSingleton, Z_Construct_UClass_UAzureKinectDevice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzureKinectDevice.OuterSingleton;
}
template<> AZUREKINECT_API UClass* StaticClass<UAzureKinectDevice>()
{
	return UAzureKinectDevice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureKinectDevice);
UAzureKinectDevice::~UAzureKinectDevice() {}
// End Class UAzureKinectDevice

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAzureKinectSkeleton::StaticStruct, Z_Construct_UScriptStruct_FAzureKinectSkeleton_Statics::NewStructOps, TEXT("AzureKinectSkeleton"), &Z_Registration_Info_UScriptStruct_AzureKinectSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzureKinectSkeleton), 635774544U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzureKinectDevice, UAzureKinectDevice::StaticClass, TEXT("UAzureKinectDevice"), &Z_Registration_Info_UClass_UAzureKinectDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureKinectDevice), 3976184203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_2041530596(TEXT("/Script/AzureKinect"),
	Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectDevice_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
