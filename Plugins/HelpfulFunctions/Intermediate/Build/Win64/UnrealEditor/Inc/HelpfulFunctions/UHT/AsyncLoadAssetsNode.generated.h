// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncLoadAssetsNode.h"

#ifdef HELPFULFUNCTIONS_AsyncLoadAssetsNode_generated_h
#error "AsyncLoadAssetsNode.generated.h already included, missing '#pragma once' in AsyncLoadAssetsNode.h"
#endif
#define HELPFULFUNCTIONS_AsyncLoadAssetsNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncLoadAssetsNode;
class UObject;

// ********** Begin Delegate FOnAssetsLoaded *******************************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_10_DELEGATE \
HELPFULFUNCTIONS_API void FOnAssetsLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAssetsLoaded, TArray<UObject*> const& LoadedAssets);


// ********** End Delegate FOnAssetsLoaded *********************************************************

// ********** Begin Class UAsyncLoadAssetsNode *****************************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadAssetArray);


HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncLoadAssetsNode_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadAssetsNode(); \
	friend struct Z_Construct_UClass_UAsyncLoadAssetsNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAsyncLoadAssetsNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoadAssetsNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_UAsyncLoadAssetsNode_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoadAssetsNode)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoadAssetsNode(UAsyncLoadAssetsNode&&) = delete; \
	UAsyncLoadAssetsNode(const UAsyncLoadAssetsNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadAssetsNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadAssetsNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncLoadAssetsNode) \
	NO_API virtual ~UAsyncLoadAssetsNode();


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_15_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoadAssetsNode;

// ********** End Class UAsyncLoadAssetsNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AsyncLoadAssetsNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
