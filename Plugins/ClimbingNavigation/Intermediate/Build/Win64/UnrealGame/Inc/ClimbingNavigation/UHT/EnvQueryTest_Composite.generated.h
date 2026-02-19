// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvQueryTest_Composite.h"

#ifdef CLIMBINGNAVIGATION_EnvQueryTest_Composite_generated_h
#error "EnvQueryTest_Composite.generated.h already included, missing '#pragma once' in EnvQueryTest_Composite.h"
#endif
#define CLIMBINGNAVIGATION_EnvQueryTest_Composite_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryTest_Composite **************************************************
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_Composite_NoRegister();

#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Composite(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Composite_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_UEnvQueryTest_Composite_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryTest_Composite, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_UEnvQueryTest_Composite_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryTest_Composite)


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryTest_Composite(UEnvQueryTest_Composite&&) = delete; \
	UEnvQueryTest_Composite(const UEnvQueryTest_Composite&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Composite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Composite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Composite) \
	NO_API virtual ~UEnvQueryTest_Composite();


#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_22_PROLOG
#define FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryTest_Composite;

// ********** End Class UEnvQueryTest_Composite ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_EnvQueryTest_Composite_h

// ********** Begin Enum EScoreFoldingMethod *******************************************************
#define FOREACH_ENUM_ESCOREFOLDINGMETHOD(op) \
	op(EScoreFoldingMethod::Sum) \
	op(EScoreFoldingMethod::Multiply) 

enum class EScoreFoldingMethod : uint8;
template<> struct TIsUEnumClass<EScoreFoldingMethod> { enum { Value = true }; };
template<> CLIMBINGNAVIGATION_API UEnum* StaticEnum<EScoreFoldingMethod>();
// ********** End Enum EScoreFoldingMethod *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
