// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_DamageConfigData.h"

#ifdef HELPFULFUNCTIONS_ALS_DamageConfigData_generated_h
#error "ALS_DamageConfigData.generated.h already included, missing '#pragma once' in ALS_DamageConfigData.h"
#endif
#define HELPFULFUNCTIONS_ALS_DamageConfigData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FBoneAndWeight;
struct FRuntimeFloatCurve;

// ********** Begin ScriptStruct FBoneAndWeight ****************************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneAndWeight_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FBoneAndWeight;
// ********** End ScriptStruct FBoneAndWeight ******************************************************

// ********** Begin Class UALS_DamageConfigData ****************************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeightPerBoneC); \
	DECLARE_FUNCTION(execGetScalingCurveValueC);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUALS_DamageConfigData(); \
	friend struct Z_Construct_UClass_UALS_DamageConfigData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister(); \
public: \
	DECLARE_CLASS2(UALS_DamageConfigData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UALS_DamageConfigData_NoRegister) \
	DECLARE_SERIALIZER(UALS_DamageConfigData)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UALS_DamageConfigData(UALS_DamageConfigData&&) = delete; \
	UALS_DamageConfigData(const UALS_DamageConfigData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UALS_DamageConfigData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALS_DamageConfigData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UALS_DamageConfigData)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_38_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UALS_DamageConfigData;

// ********** End Class UALS_DamageConfigData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h

// ********** Begin Enum ECALS_WeaponType **********************************************************
#define FOREACH_ENUM_ECALS_WEAPONTYPE(op) \
	op(ECALS_WeaponType::None) \
	op(ECALS_WeaponType::Rifle) \
	op(ECALS_WeaponType::Pistol) \
	op(ECALS_WeaponType::Bow) \
	op(ECALS_WeaponType::Knife) 

enum class ECALS_WeaponType : uint8;
template<> struct TIsUEnumClass<ECALS_WeaponType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<ECALS_WeaponType>();
// ********** End Enum ECALS_WeaponType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
