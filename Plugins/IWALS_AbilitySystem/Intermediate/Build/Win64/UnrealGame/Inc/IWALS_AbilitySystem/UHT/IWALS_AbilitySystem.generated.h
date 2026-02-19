// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_AbilitySystem.h"

#ifdef IWALS_ABILITYSYSTEM_IWALS_AbilitySystem_generated_h
#error "IWALS_AbilitySystem.generated.h already included, missing '#pragma once' in IWALS_AbilitySystem.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_AbilitySystem_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h

// ********** Begin Enum EGASAbilityInputID ********************************************************
#define FOREACH_ENUM_EGASABILITYINPUTID(op) \
	op(EGASAbilityInputID::None) \
	op(EGASAbilityInputID::Confirm) \
	op(EGASAbilityInputID::Cancel) \
	op(EGASAbilityInputID::Apply) \
	op(EGASAbilityInputID::Interaction) 

enum class EGASAbilityInputID : uint8;
template<> struct TIsUEnumClass<EGASAbilityInputID> { enum { Value = true }; };
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<EGASAbilityInputID>();
// ********** End Enum EGASAbilityInputID **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
