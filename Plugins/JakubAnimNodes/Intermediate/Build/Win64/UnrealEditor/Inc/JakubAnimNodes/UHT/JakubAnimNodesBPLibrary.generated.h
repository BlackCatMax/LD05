// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubAnimNodesBPLibrary.h"

#ifdef JAKUBANIMNODES_JakubAnimNodesBPLibrary_generated_h
#error "JakubAnimNodesBPLibrary.generated.h already included, missing '#pragma once' in JakubAnimNodesBPLibrary.h"
#endif
#define JAKUBANIMNODES_JakubAnimNodesBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UJakubAnimNodesBPLibrary *************************************************
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execJakubAnimNodesSampleFunction);


JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJakubAnimNodesBPLibrary_NoRegister();

#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUJakubAnimNodesBPLibrary(); \
	friend struct Z_Construct_UClass_UJakubAnimNodesBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJakubAnimNodesBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UJakubAnimNodesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubAnimNodes"), Z_Construct_UClass_UJakubAnimNodesBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UJakubAnimNodesBPLibrary)


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubAnimNodesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubAnimNodesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubAnimNodesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubAnimNodesBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJakubAnimNodesBPLibrary(UJakubAnimNodesBPLibrary&&) = delete; \
	UJakubAnimNodesBPLibrary(const UJakubAnimNodesBPLibrary&) = delete; \
	NO_API virtual ~UJakubAnimNodesBPLibrary();


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_25_PROLOG
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_RPC_WRAPPERS \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_INCLASS \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJakubAnimNodesBPLibrary;

// ********** End Class UJakubAnimNodesBPLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JakubAnimNodesBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
