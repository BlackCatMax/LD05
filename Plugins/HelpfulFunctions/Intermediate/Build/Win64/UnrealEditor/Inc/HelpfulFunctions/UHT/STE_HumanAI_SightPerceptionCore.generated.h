// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "STE_HumanAI_SightPerceptionCore.h"

#ifdef HELPFULFUNCTIONS_STE_HumanAI_SightPerceptionCore_generated_h
#error "STE_HumanAI_SightPerceptionCore.generated.h already included, missing '#pragma once' in STE_HumanAI_SightPerceptionCore.h"
#endif
#define HELPFULFUNCTIONS_STE_HumanAI_SightPerceptionCore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACharacter;
enum class AGLS_HumanAI_FightingMode : uint8;
enum class AGLS_HumanAI_MainBehaviorMode : uint8;
struct FAGLS_HumanAI_EnemyTags;

// ********** Begin Class USTE_HumanAI_SightPerceptionCore *****************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceSetPropertiesIgnoringSightComponent); \
	DECLARE_FUNCTION(execDrawPerEnemyDebugInfo); \
	DECLARE_FUNCTION(execDrawDebugAboutResultOnTick); \
	DECLARE_FUNCTION(execGetSightParametersFromData); \
	DECLARE_FUNCTION(execGetWhenCurrentNOTSeeInterpSpeed); \
	DECLARE_FUNCTION(execGetWhenCurrentSeeInterpSpeed); \
	DECLARE_FUNCTION(execUpdatePerFrameSightValues); \
	DECLARE_FUNCTION(execGetSightPerceptionTagsFromCharacter); \
	DECLARE_FUNCTION(execSetNewEnemyButRememberPrev); \
	DECLARE_FUNCTION(execSetBB_EnemyActor); \
	DECLARE_FUNCTION(execModifySightForPlayerCompanion); \
	DECLARE_FUNCTION(execGetCharacterIsDead); \
	DECLARE_FUNCTION(execUpdateSightPerceptionValues); \
	DECLARE_FUNCTION(execCheckShouldRefresh);


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_CALLBACK_WRAPPERS
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTE_HumanAI_SightPerceptionCore(); \
	friend struct Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_NoRegister(); \
public: \
	DECLARE_CLASS2(USTE_HumanAI_SightPerceptionCore, UStateTreeEvaluatorBlueprintBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_NoRegister) \
	DECLARE_SERIALIZER(USTE_HumanAI_SightPerceptionCore)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTE_HumanAI_SightPerceptionCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USTE_HumanAI_SightPerceptionCore(USTE_HumanAI_SightPerceptionCore&&) = delete; \
	USTE_HumanAI_SightPerceptionCore(const USTE_HumanAI_SightPerceptionCore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTE_HumanAI_SightPerceptionCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTE_HumanAI_SightPerceptionCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTE_HumanAI_SightPerceptionCore) \
	NO_API virtual ~USTE_HumanAI_SightPerceptionCore();


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_44_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_CALLBACK_WRAPPERS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USTE_HumanAI_SightPerceptionCore;

// ********** End Class USTE_HumanAI_SightPerceptionCore *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
