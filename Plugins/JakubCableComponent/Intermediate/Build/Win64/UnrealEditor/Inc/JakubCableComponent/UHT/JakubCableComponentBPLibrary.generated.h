// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubCableComponentBPLibrary.h"

#ifdef JAKUBCABLECOMPONENT_JakubCableComponentBPLibrary_generated_h
#error "JakubCableComponentBPLibrary.generated.h already included, missing '#pragma once' in JakubCableComponentBPLibrary.h"
#endif
#define JAKUBCABLECOMPONENT_JakubCableComponentBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStaticMeshComponent;

// ********** Begin Class UJakubCableComponentBPLibrary ********************************************
#define FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_RPC_WRAPPERS \
	DECLARE_FUNCTION(execPerformPIDControl); \
	DECLARE_FUNCTION(execGetCollisionTraceFlag);


JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister();

#define FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUJakubCableComponentBPLibrary(); \
	friend struct Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UJakubCableComponentBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UJakubCableComponentBPLibrary)


#define FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubCableComponentBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubCableComponentBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubCableComponentBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubCableComponentBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJakubCableComponentBPLibrary(UJakubCableComponentBPLibrary&&) = delete; \
	UJakubCableComponentBPLibrary(const UJakubCableComponentBPLibrary&) = delete; \
	NO_API virtual ~UJakubCableComponentBPLibrary();


#define FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_8_PROLOG
#define FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_RPC_WRAPPERS \
	FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_INCLASS \
	FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJakubCableComponentBPLibrary;

// ********** End Class UJakubCableComponentBPLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
