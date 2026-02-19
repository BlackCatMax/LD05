// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_BaseComponentsInterfaceCpp.h"

#ifdef HELPFULFUNCTIONS_ALS_BaseComponentsInterfaceCpp_generated_h
#error "ALS_BaseComponentsInterfaceCpp.generated.h already included, missing '#pragma once' in ALS_BaseComponentsInterfaceCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_BaseComponentsInterfaceCpp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UALS_BaseComponentsInterfaceCpp **************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPICpp_InputStanceAction_Implementation(bool Hold, bool Start) {}; \
	virtual void BPICpp_InputShotAction_Implementation(bool Hold, bool Start) {}; \
	virtual void BPICpp_InputAimAction_Implementation(bool Hold, bool Start) {}; \
	virtual void BPICpp_InputSprintAction_Implementation(bool Hold, bool Start) {}; \
	virtual void BPICpp_InputWalkAction_Implementation(bool Hold, bool Start) {}; \
	virtual void BPICpp_InputJumpAction_Implementation(bool Hold, bool Start) {}; \
	DECLARE_FUNCTION(execBPICpp_InputStanceAction); \
	DECLARE_FUNCTION(execBPICpp_InputShotAction); \
	DECLARE_FUNCTION(execBPICpp_InputAimAction); \
	DECLARE_FUNCTION(execBPICpp_InputSprintAction); \
	DECLARE_FUNCTION(execBPICpp_InputWalkAction); \
	DECLARE_FUNCTION(execBPICpp_InputJumpAction);


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UALS_BaseComponentsInterfaceCpp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UALS_BaseComponentsInterfaceCpp(UALS_BaseComponentsInterfaceCpp&&) = delete; \
	UALS_BaseComponentsInterfaceCpp(const UALS_BaseComponentsInterfaceCpp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UALS_BaseComponentsInterfaceCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UALS_BaseComponentsInterfaceCpp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UALS_BaseComponentsInterfaceCpp) \
	virtual ~UALS_BaseComponentsInterfaceCpp() = default;


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUALS_BaseComponentsInterfaceCpp(); \
	friend struct Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_NoRegister(); \
public: \
	DECLARE_CLASS2(UALS_BaseComponentsInterfaceCpp, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_NoRegister) \
	DECLARE_SERIALIZER(UALS_BaseComponentsInterfaceCpp)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_GENERATED_UINTERFACE_BODY() \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IALS_BaseComponentsInterfaceCpp() {} \
public: \
	typedef UALS_BaseComponentsInterfaceCpp UClassType; \
	typedef IALS_BaseComponentsInterfaceCpp ThisClass; \
	static void Execute_BPICpp_InputAimAction(UObject* O, bool Hold, bool Start); \
	static void Execute_BPICpp_InputJumpAction(UObject* O, bool Hold, bool Start); \
	static void Execute_BPICpp_InputShotAction(UObject* O, bool Hold, bool Start); \
	static void Execute_BPICpp_InputSprintAction(UObject* O, bool Hold, bool Start); \
	static void Execute_BPICpp_InputStanceAction(UObject* O, bool Hold, bool Start); \
	static void Execute_BPICpp_InputWalkAction(UObject* O, bool Hold, bool Start); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_10_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_CALLBACK_WRAPPERS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UALS_BaseComponentsInterfaceCpp;

// ********** End Interface UALS_BaseComponentsInterfaceCpp ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
