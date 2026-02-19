// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_EnumsAndStruct.h"

#ifdef IWALS_ABILITYSYSTEM_IWALS_EnumsAndStruct_generated_h
#error "IWALS_EnumsAndStruct.generated.h already included, missing '#pragma once' in IWALS_EnumsAndStruct.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_EnumsAndStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLeanAmoutC *******************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeanAmoutC_Statics; \
	IWALS_ABILITYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FLeanAmoutC;
// ********** End ScriptStruct FLeanAmoutC *********************************************************

// ********** Begin ScriptStruct FVelocityBlendC ***************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVelocityBlendC_Statics; \
	IWALS_ABILITYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FVelocityBlendC;
// ********** End ScriptStruct FVelocityBlendC *****************************************************

// ********** Begin ScriptStruct FTurnInPlaceAssetC ************************************************
#define FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics; \
	IWALS_ABILITYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FTurnInPlaceAssetC;
// ********** End ScriptStruct FTurnInPlaceAssetC **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h

// ********** Begin Enum HipsDirectionC ************************************************************
#define FOREACH_ENUM_HIPSDIRECTIONC(op) \
	op(HipsDirectionC::F) \
	op(HipsDirectionC::B) \
	op(HipsDirectionC::RF) \
	op(HipsDirectionC::RB) \
	op(HipsDirectionC::LF) \
	op(HipsDirectionC::LB) 

enum class HipsDirectionC : uint8;
template<> struct TIsUEnumClass<HipsDirectionC> { enum { Value = true }; };
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<HipsDirectionC>();
// ********** End Enum HipsDirectionC **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
