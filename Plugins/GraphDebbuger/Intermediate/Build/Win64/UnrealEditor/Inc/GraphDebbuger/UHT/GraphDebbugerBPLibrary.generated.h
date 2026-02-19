// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GraphDebbugerBPLibrary.h"

#ifdef GRAPHDEBBUGER_GraphDebbugerBPLibrary_generated_h
#error "GraphDebbugerBPLibrary.generated.h already included, missing '#pragma once' in GraphDebbugerBPLibrary.h"
#endif
#define GRAPHDEBBUGER_GraphDebbugerBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGraphDebbugerBPLibrary **************************************************
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary_NoRegister();

#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUGraphDebbugerBPLibrary(); \
	friend struct Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraphDebbugerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GraphDebbuger"), Z_Construct_UClass_UGraphDebbugerBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGraphDebbugerBPLibrary)


#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphDebbugerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphDebbugerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphDebbugerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphDebbugerBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphDebbugerBPLibrary(UGraphDebbugerBPLibrary&&) = delete; \
	UGraphDebbugerBPLibrary(const UGraphDebbugerBPLibrary&) = delete; \
	NO_API virtual ~UGraphDebbugerBPLibrary();


#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_26_PROLOG
#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_29_INCLASS \
	FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphDebbugerBPLibrary;

// ********** End Class UGraphDebbugerBPLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
