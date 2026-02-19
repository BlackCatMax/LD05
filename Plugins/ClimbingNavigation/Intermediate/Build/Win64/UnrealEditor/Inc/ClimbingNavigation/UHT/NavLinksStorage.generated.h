// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinksStorage.h"

#ifdef CLIMBINGNAVIGATION_NavLinksStorage_generated_h
#error "NavLinksStorage.generated.h already included, missing '#pragma once' in NavLinksStorage.h"
#endif
#define CLIMBINGNAVIGATION_NavLinksStorage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANavLinksStorage *********************************************************
CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksStorage_NoRegister();

#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavLinksStorage(); \
	friend struct Z_Construct_UClass_ANavLinksStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIMBINGNAVIGATION_API UClass* Z_Construct_UClass_ANavLinksStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavLinksStorage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingNavigation"), Z_Construct_UClass_ANavLinksStorage_NoRegister) \
	DECLARE_SERIALIZER(ANavLinksStorage)


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavLinksStorage(ANavLinksStorage&&) = delete; \
	ANavLinksStorage(const ANavLinksStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavLinksStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavLinksStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavLinksStorage) \
	NO_API virtual ~ANavLinksStorage();


#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_14_PROLOG
#define FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_17_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavLinksStorage;

// ********** End Class ANavLinksStorage ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_ClimbingNavigation_Source_ClimbingNavigation_Public_NavLinksStorage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
