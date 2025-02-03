// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzureKinectEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AZUREKINECT_AzureKinectEnum_generated_h
#error "AzureKinectEnum.generated.h already included, missing '#pragma once' in AzureKinectEnum.h"
#endif
#define AZUREKINECT_AzureKinectEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jacob_Documents_Digipen_GAM390_MOMI_Strata_strata_Plugins_KinectUE5_5_Source_AzureKinect_Public_AzureKinectEnum_h


#define FOREACH_ENUM_EKINECTDEPTHMODE(op) \
	op(EKinectDepthMode::OFF) \
	op(EKinectDepthMode::NFOV_2X2BINNED) \
	op(EKinectDepthMode::NFOV_UNBINNED) \
	op(EKinectDepthMode::WFOV_2X2BINNED) \
	op(EKinectDepthMode::WFOV_UNBINNED) \
	op(EKinectDepthMode::PASSIVE_IR) 

enum class EKinectDepthMode : uint8;
template<> struct TIsUEnumClass<EKinectDepthMode> { enum { Value = true }; };
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectDepthMode>();

#define FOREACH_ENUM_EKINECTCOLORRESOLUTION(op) \
	op(EKinectColorResolution::RESOLUTION_OFF) \
	op(EKinectColorResolution::RESOLUTION_720P) \
	op(EKinectColorResolution::RESOLUTION_1440P) \
	op(EKinectColorResolution::RESOLUTION_1536P) \
	op(EKinectColorResolution::RESOLUTION_2160P) \
	op(EKinectColorResolution::RESOLUTION_3072P) 

enum class EKinectColorResolution : uint8;
template<> struct TIsUEnumClass<EKinectColorResolution> { enum { Value = true }; };
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectColorResolution>();

#define FOREACH_ENUM_EKINECTFPS(op) \
	op(EKinectFps::PER_SECOND_5) \
	op(EKinectFps::PER_SECOND_15) \
	op(EKinectFps::PER_SECOND_30) 

enum class EKinectFps : uint8;
template<> struct TIsUEnumClass<EKinectFps> { enum { Value = true }; };
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectFps>();

#define FOREACH_ENUM_EKINECTREMAP(op) \
	op(EKinectRemap::COLOR_TO_DEPTH) \
	op(EKinectRemap::DEPTH_TO_COLOR) 

enum class EKinectRemap : uint8;
template<> struct TIsUEnumClass<EKinectRemap> { enum { Value = true }; };
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectRemap>();

#define FOREACH_ENUM_EKINECTBODYJOINT(op) \
	op(EKinectBodyJoint::PELVIS) \
	op(EKinectBodyJoint::SPINE_NAVEL) \
	op(EKinectBodyJoint::SPINE_CHEST) \
	op(EKinectBodyJoint::NECK) \
	op(EKinectBodyJoint::CLAVICLE_LEFT) \
	op(EKinectBodyJoint::SHOULDER_LEFT) \
	op(EKinectBodyJoint::ELBOW_LEFT) \
	op(EKinectBodyJoint::WRIST_LEFT) \
	op(EKinectBodyJoint::HAND_LEFT) \
	op(EKinectBodyJoint::HANDTIP_LEFT) \
	op(EKinectBodyJoint::THUMB_LEFT) \
	op(EKinectBodyJoint::CLAVICLE_RIGHT) \
	op(EKinectBodyJoint::SHOULDER_RIGHT) \
	op(EKinectBodyJoint::ELBOW_RIGHT) \
	op(EKinectBodyJoint::WRIST_RIGHT) \
	op(EKinectBodyJoint::HAND_RIGHT) \
	op(EKinectBodyJoint::HANDTIP_RIGHT) \
	op(EKinectBodyJoint::THUMB_RIGHT) \
	op(EKinectBodyJoint::HIP_LEFT) \
	op(EKinectBodyJoint::KNEE_LEFT) \
	op(EKinectBodyJoint::ANKLE_LEFT) \
	op(EKinectBodyJoint::FOOT_LEFT) \
	op(EKinectBodyJoint::HIP_RIGHT) \
	op(EKinectBodyJoint::KNEE_RIGHT) \
	op(EKinectBodyJoint::ANKLE_RIGHT) \
	op(EKinectBodyJoint::FOOT_RIGHT) \
	op(EKinectBodyJoint::HEAD) \
	op(EKinectBodyJoint::NOSE) \
	op(EKinectBodyJoint::EYE_LEFT) \
	op(EKinectBodyJoint::EAR_LEFT) \
	op(EKinectBodyJoint::EYE_RIGHT) \
	op(EKinectBodyJoint::EAR_RIGHT) \
	op(EKinectBodyJoint::COUNT) 

enum class EKinectBodyJoint : uint8;
template<> struct TIsUEnumClass<EKinectBodyJoint> { enum { Value = true }; };
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectBodyJoint>();

#define FOREACH_ENUM_EKINECTSENSORORIENTATION(op) \
	op(EKinectSensorOrientation::DEFAULT) \
	op(EKinectSensorOrientation::CLOCKWISE90) \
	op(EKinectSensorOrientation::COUNTERCLOCKWISE90) \
	op(EKinectSensorOrientation::FLIP180) 

enum class EKinectSensorOrientation : uint8;
template<> struct TIsUEnumClass<EKinectSensorOrientation> { enum { Value = true }; };
template<> AZUREKINECT_API UEnum* StaticEnum<EKinectSensorOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
