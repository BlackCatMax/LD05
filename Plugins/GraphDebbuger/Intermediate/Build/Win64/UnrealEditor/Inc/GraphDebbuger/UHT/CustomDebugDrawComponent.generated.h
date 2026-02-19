// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomDebugDrawComponent.h"

#ifdef GRAPHDEBBUGER_CustomDebugDrawComponent_generated_h
#error "CustomDebugDrawComponent.generated.h already included, missing '#pragma once' in CustomDebugDrawComponent.h"
#endif
#define GRAPHDEBBUGER_CustomDebugDrawComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomDebugDrawComponent ************************************************
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UCustomDebugDrawComponent_NoRegister();

#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomDebugDrawComponent(); \
	friend struct Z_Construct_UClass_UCustomDebugDrawComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UCustomDebugDrawComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomDebugDrawComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphDebbuger"), Z_Construct_UClass_UCustomDebugDrawComponent_NoRegister) \
	DECLARE_SERIALIZER(UCustomDebugDrawComponent)


#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomDebugDrawComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomDebugDrawComponent(UCustomDebugDrawComponent&&) = delete; \
	UCustomDebugDrawComponent(const UCustomDebugDrawComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomDebugDrawComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomDebugDrawComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomDebugDrawComponent) \
	NO_API virtual ~UCustomDebugDrawComponent();


#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h_12_PROLOG
#define FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomDebugDrawComponent;

// ********** End Class UCustomDebugDrawComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_CustomDebugDrawComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
