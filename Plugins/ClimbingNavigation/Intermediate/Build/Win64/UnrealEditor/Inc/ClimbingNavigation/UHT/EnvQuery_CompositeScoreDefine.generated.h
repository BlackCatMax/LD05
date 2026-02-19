// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvQuery_CompositeScoreDefine.h"

#ifdef CLIMBINGNAVIGATION_EnvQuery_CompositeScoreDefine_generated_h
#error "EnvQuery_CompositeScoreDefine.generated.h already included, missing '#pragma once' in EnvQuery_CompositeScoreDefine.h"
#endif
#define CLIMBINGNAVIGATION_EnvQuery_CompositeScoreDefine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQuery_CompositeScoreDefine *******************************************
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQuery_CompositeScoreDefine(); \
	friend struct Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQuery_CompositeScoreDefine, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UEnvQuery_CompositeScoreDefine_NoRegister) \
	DECLARE_SERIALIZER(UEnvQuery_CompositeScoreDefine)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQuery_CompositeScoreDefine(UEnvQuery_CompositeScoreDefine&&) = delete; \
	UEnvQuery_CompositeScoreDefine(const UEnvQuery_CompositeScoreDefine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQuery_CompositeScoreDefine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQuery_CompositeScoreDefine); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQuery_CompositeScoreDefine) \
	NO_API virtual ~UEnvQuery_CompositeScoreDefine();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_29_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQuery_CompositeScoreDefine;

// ********** End Class UEnvQuery_CompositeScoreDefine *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQuery_CompositeScoreDefine_h

// ********** Begin Enum ECompositeScoreDistribution ***********************************************
#define FOREACH_ENUM_ECOMPOSITESCOREDISTRIBUTION(op) \
	op(ECompositeScoreDistribution::Linear) \
	op(ECompositeScoreDistribution::inverseLinear) \
	op(ECompositeScoreDistribution::Squared) \
	op(ECompositeScoreDistribution::Custom) 

enum class ECompositeScoreDistribution : uint8;
template<> struct TIsUEnumClass<ECompositeScoreDistribution> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<ECompositeScoreDistribution>();
// ********** End Enum ECompositeScoreDistribution *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
