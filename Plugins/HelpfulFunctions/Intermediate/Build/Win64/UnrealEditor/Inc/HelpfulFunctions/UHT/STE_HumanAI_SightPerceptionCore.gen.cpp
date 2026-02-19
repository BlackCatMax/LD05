// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STE_HumanAI_SightPerceptionCore.h"
#include "ALS_StructuresAndEnumsCpp.h"
#include "GameplayTagContainer.h"
#include "StateTreePropertyRef.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTE_HumanAI_SightPerceptionCore() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_FightingMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_MainBehaviorMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_SightStatus();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAGLS_HumanAI_EnemyTags();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function CheckShouldRefresh *************
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics
{
	struct STE_HumanAI_SightPerceptionCore_eventCheckShouldRefresh_Parms
	{
		float dt;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Optimalization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEFAULT CODE:\n\x09\x09""CurrentElapsedTime = CurrentElapsedTime + dt;\n\x09if (CurrentElapsedTime > CurrentTickInterval)\n\x09{\n\x09\x09""CurrentElapsedTime = 0.0;\n\x09\x09if (RefresingPerceptionIntervalsMap.Num() > 0)\n\x09\x09{\n\x09\x09\x09if (float* d = RefresingPerceptionIntervalsMap.Find(CurrentLOD))\n\x09\x09\x09{\n\x09\x09\x09\x09""CurrentTickInterval = *d;\n\x09\x09\x09\x09return true; }\n\x09\x09\x09""else\n\x09\x09\x09{ return true; }\n\x09\x09} }\n\x09return false;\n\x09*/" },
#endif
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEFAULT CODE:\n              CurrentElapsedTime = CurrentElapsedTime + dt;\n      if (CurrentElapsedTime > CurrentTickInterval)\n      {\n              CurrentElapsedTime = 0.0;\n              if (RefresingPerceptionIntervalsMap.Num() > 0)\n              {\n                      if (float* d = RefresingPerceptionIntervalsMap.Find(CurrentLOD))\n                      {\n                              CurrentTickInterval = *d;\n                              return true; }\n                      else\n                      { return true; }\n              } }\n      return false;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dt;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventCheckShouldRefresh_Parms, dt), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventCheckShouldRefresh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventCheckShouldRefresh_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::NewProp_dt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "CheckShouldRefresh", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::STE_HumanAI_SightPerceptionCore_eventCheckShouldRefresh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::STE_HumanAI_SightPerceptionCore_eventCheckShouldRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execCheckShouldRefresh)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckShouldRefresh(Z_Param_dt);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function CheckShouldRefresh ***************

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function DrawDebugAboutResultOnTick *****
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Debug" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "DrawDebugAboutResultOnTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execDrawDebugAboutResultOnTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugAboutResultOnTick();
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function DrawDebugAboutResultOnTick *******

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function DrawPerEnemyDebugInfo **********
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics
{
	struct STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms
	{
		ACharacter* InEnemy;
		float WeightDistance;
		float WeightPlayer;
		float WeightTags;
		float WeightSee;
		float Total;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Debug" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnemy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightSee;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Total;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_InEnemy = { "InEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms, InEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightDistance = { "WeightDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms, WeightDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightPlayer = { "WeightPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms, WeightPlayer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightTags = { "WeightTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms, WeightTags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightSee = { "WeightSee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms, WeightSee), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms, Total), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_InEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_WeightSee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::NewProp_Total,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "DrawPerEnemyDebugInfo", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::STE_HumanAI_SightPerceptionCore_eventDrawPerEnemyDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execDrawPerEnemyDebugInfo)
{
	P_GET_OBJECT(ACharacter,Z_Param_InEnemy);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightPlayer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightTags);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightSee);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Total);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawPerEnemyDebugInfo(Z_Param_InEnemy,Z_Param_WeightDistance,Z_Param_WeightPlayer,Z_Param_WeightTags,Z_Param_WeightSee,Z_Param_Total);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function DrawPerEnemyDebugInfo ************

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function ForceSetPropertiesIgnoringSightComponent 
struct STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms
{
	ACharacter* SourceActor;
	AGLS_HumanAI_MainBehaviorMode SourceBehaviorMode;
	AGLS_HumanAI_FightingMode SourceFightingMode;
	FAGLS_HumanAI_EnemyTags SourceSightProperties;
	float WaitTime;
	float Chance;
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent = FName(TEXT("ForceSetPropertiesIgnoringSightComponent"));
void USTE_HumanAI_SightPerceptionCore::ForceSetPropertiesIgnoringSightComponent(ACharacter* SourceActor, AGLS_HumanAI_MainBehaviorMode SourceBehaviorMode, AGLS_HumanAI_FightingMode SourceFightingMode, FAGLS_HumanAI_EnemyTags SourceSightProperties, float WaitTime, float Chance)
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms Parms;
		Parms.SourceActor=SourceActor;
		Parms.SourceBehaviorMode=SourceBehaviorMode;
		Parms.SourceFightingMode=SourceFightingMode;
		Parms.SourceSightProperties=SourceSightProperties;
		Parms.WaitTime=WaitTime;
		Parms.Chance=Chance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ForceSetPropertiesIgnoringSightComponent_Implementation(SourceActor, SourceBehaviorMode, SourceFightingMode, SourceSightProperties, WaitTime, Chance);
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Core" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceBehaviorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceBehaviorMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceFightingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceFightingMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSightProperties;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Chance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms, SourceActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceBehaviorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceBehaviorMode = { "SourceBehaviorMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms, SourceBehaviorMode), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_MainBehaviorMode, METADATA_PARAMS(0, nullptr) }; // 715888626
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceFightingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceFightingMode = { "SourceFightingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms, SourceFightingMode), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_FightingMode, METADATA_PARAMS(0, nullptr) }; // 3024899547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceSightProperties = { "SourceSightProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms, SourceSightProperties), Z_Construct_UScriptStruct_FAGLS_HumanAI_EnemyTags, METADATA_PARAMS(0, nullptr) }; // 3925701258
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms, WaitTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms, Chance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceBehaviorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceBehaviorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceFightingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceFightingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_SourceSightProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_WaitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::NewProp_Chance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "ForceSetPropertiesIgnoringSightComponent", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventForceSetPropertiesIgnoringSightComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execForceSetPropertiesIgnoringSightComponent)
{
	P_GET_OBJECT(ACharacter,Z_Param_SourceActor);
	P_GET_ENUM(AGLS_HumanAI_MainBehaviorMode,Z_Param_SourceBehaviorMode);
	P_GET_ENUM(AGLS_HumanAI_FightingMode,Z_Param_SourceFightingMode);
	P_GET_STRUCT(FAGLS_HumanAI_EnemyTags,Z_Param_SourceSightProperties);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WaitTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Chance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceSetPropertiesIgnoringSightComponent_Implementation(Z_Param_SourceActor,AGLS_HumanAI_MainBehaviorMode(Z_Param_SourceBehaviorMode),AGLS_HumanAI_FightingMode(Z_Param_SourceFightingMode),Z_Param_SourceSightProperties,Z_Param_WaitTime,Z_Param_Chance);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function ForceSetPropertiesIgnoringSightComponent 

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function GetCharacterIsDead *************
struct STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms
{
	ACharacter* InCharacter;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead = FName(TEXT("GetCharacterIsDead"));
bool USTE_HumanAI_SightPerceptionCore::GetCharacterIsDead(ACharacter* InCharacter)
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms Parms;
		Parms.InCharacter=InCharacter;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return GetCharacterIsDead_Implementation(InCharacter);
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::NewProp_InCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "GetCharacterIsDead", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventGetCharacterIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execGetCharacterIsDead)
{
	P_GET_OBJECT(ACharacter,Z_Param_InCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCharacterIsDead_Implementation(Z_Param_InCharacter);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function GetCharacterIsDead ***************

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function GetSightParametersFromData *****
struct STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms
{
	float EnemySpottedEnemyReductionSpeed;
	float SeeReactionIncreaseSpeed;
	float SeeReactionReduceSpeed;
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData = FName(TEXT("GetSightParametersFromData"));
void USTE_HumanAI_SightPerceptionCore::GetSightParametersFromData(float& EnemySpottedEnemyReductionSpeed, float& SeeReactionIncreaseSpeed, float& SeeReactionReduceSpeed)
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms Parms;
		Parms.EnemySpottedEnemyReductionSpeed=EnemySpottedEnemyReductionSpeed;
		Parms.SeeReactionIncreaseSpeed=SeeReactionIncreaseSpeed;
		Parms.SeeReactionReduceSpeed=SeeReactionReduceSpeed;
	ProcessEvent(Func,&Parms);
		EnemySpottedEnemyReductionSpeed=Parms.EnemySpottedEnemyReductionSpeed;
		SeeReactionIncreaseSpeed=Parms.SeeReactionIncreaseSpeed;
		SeeReactionReduceSpeed=Parms.SeeReactionReduceSpeed;
	}
	else
	{
		GetSightParametersFromData_Implementation(EnemySpottedEnemyReductionSpeed, SeeReactionIncreaseSpeed, SeeReactionReduceSpeed);
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Core" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemySpottedEnemyReductionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeeReactionIncreaseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeeReactionReduceSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::NewProp_EnemySpottedEnemyReductionSpeed = { "EnemySpottedEnemyReductionSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms, EnemySpottedEnemyReductionSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::NewProp_SeeReactionIncreaseSpeed = { "SeeReactionIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms, SeeReactionIncreaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::NewProp_SeeReactionReduceSpeed = { "SeeReactionReduceSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms, SeeReactionReduceSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::NewProp_EnemySpottedEnemyReductionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::NewProp_SeeReactionIncreaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::NewProp_SeeReactionReduceSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "GetSightParametersFromData", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightParametersFromData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execGetSightParametersFromData)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_EnemySpottedEnemyReductionSpeed);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SeeReactionIncreaseSpeed);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SeeReactionReduceSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSightParametersFromData_Implementation(Z_Param_Out_EnemySpottedEnemyReductionSpeed,Z_Param_Out_SeeReactionIncreaseSpeed,Z_Param_Out_SeeReactionReduceSpeed);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function GetSightParametersFromData *******

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function GetSightPerceptionTagsFromCharacter 
struct STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms
{
	bool IsZombie;
	bool EnemySpottedHim;
	bool ShouldHideSelf;
	ACharacter* InEnemy;
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter = FName(TEXT("GetSightPerceptionTagsFromCharacter"));
void USTE_HumanAI_SightPerceptionCore::GetSightPerceptionTagsFromCharacter(bool& IsZombie, bool& EnemySpottedHim, bool& ShouldHideSelf, ACharacter* InEnemy)
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms Parms;
		Parms.IsZombie=IsZombie ? true : false;
		Parms.EnemySpottedHim=EnemySpottedHim ? true : false;
		Parms.ShouldHideSelf=ShouldHideSelf ? true : false;
		Parms.InEnemy=InEnemy;
	ProcessEvent(Func,&Parms);
		IsZombie=Parms.IsZombie;
		EnemySpottedHim=Parms.EnemySpottedHim;
		ShouldHideSelf=Parms.ShouldHideSelf;
	}
	else
	{
		GetSightPerceptionTagsFromCharacter_Implementation(IsZombie, EnemySpottedHim, ShouldHideSelf, InEnemy);
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsZombie_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsZombie;
	static void NewProp_EnemySpottedHim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnemySpottedHim;
	static void NewProp_ShouldHideSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldHideSelf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_IsZombie_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms*)Obj)->IsZombie = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_IsZombie = { "IsZombie", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_IsZombie_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_EnemySpottedHim_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms*)Obj)->EnemySpottedHim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_EnemySpottedHim = { "EnemySpottedHim", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_EnemySpottedHim_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_ShouldHideSelf_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms*)Obj)->ShouldHideSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_ShouldHideSelf = { "ShouldHideSelf", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_ShouldHideSelf_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_InEnemy = { "InEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms, InEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_IsZombie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_EnemySpottedHim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_ShouldHideSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::NewProp_InEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "GetSightPerceptionTagsFromCharacter", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventGetSightPerceptionTagsFromCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execGetSightPerceptionTagsFromCharacter)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsZombie);
	P_GET_UBOOL_REF(Z_Param_Out_EnemySpottedHim);
	P_GET_UBOOL_REF(Z_Param_Out_ShouldHideSelf);
	P_GET_OBJECT(ACharacter,Z_Param_InEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSightPerceptionTagsFromCharacter_Implementation(Z_Param_Out_IsZombie,Z_Param_Out_EnemySpottedHim,Z_Param_Out_ShouldHideSelf,Z_Param_InEnemy);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function GetSightPerceptionTagsFromCharacter 

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function GetWhenCurrentNOTSeeInterpSpeed 
struct STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentNOTSeeInterpSpeed_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentNOTSeeInterpSpeed_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed = FName(TEXT("GetWhenCurrentNOTSeeInterpSpeed"));
float USTE_HumanAI_SightPerceptionCore::GetWhenCurrentNOTSeeInterpSpeed()
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentNOTSeeInterpSpeed_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetWhenCurrentNOTSeeInterpSpeed_Implementation();
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Default CODE:\n\x09\x09if (!Char) { return 0.1; }\n\x09""float ByDistanceSpeedBias = 0.0;\n\x09""float ByDeadSpeedBias = 0.0;\n\x09if (SIGHTPROPERTIES.EnemyCharacter)\n\x09{\n\x09\x09if (float DistTo = FVector::Distance(SIGHTPROPERTIES.EnemyCharacter->GetActorLocation(), Char->GetActorLocation()) > 300)\n\x09\x09{ ByDistanceSpeedBias = KML::MapRangeClamped(DistTo, 300, 3000, 0, 0.5); }\n\x09\x09""const bool EnemyIsDead = GetCharacterIsDead(SIGHTPROPERTIES.EnemyCharacter);\n\x09\x09if (EnemyIsDead) { ByDeadSpeedBias = 0.2; }\n\x09}\n\x09if (DeltaTimesWhenNotSeePerState.Num() == 0) { return 0.2 + ByDistanceSpeedBias; }\n\x09""float* MapValue = DeltaTimesWhenNotSeePerState.Find(DesiresSightState);\n\x09return KML::FClamp(*MapValue + ByDistanceSpeedBias + ByDeadSpeedBias, 0.005, 2.0);\n\x09*/" },
#endif
		{ "CompactNodeTitle", "WhenNotSeeInterpSpeed" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default CODE:\n              if (!Char) { return 0.1; }\n      float ByDistanceSpeedBias = 0.0;\n      float ByDeadSpeedBias = 0.0;\n      if (SIGHTPROPERTIES.EnemyCharacter)\n      {\n              if (float DistTo = FVector::Distance(SIGHTPROPERTIES.EnemyCharacter->GetActorLocation(), Char->GetActorLocation()) > 300)\n              { ByDistanceSpeedBias = KML::MapRangeClamped(DistTo, 300, 3000, 0, 0.5); }\n              const bool EnemyIsDead = GetCharacterIsDead(SIGHTPROPERTIES.EnemyCharacter);\n              if (EnemyIsDead) { ByDeadSpeedBias = 0.2; }\n      }\n      if (DeltaTimesWhenNotSeePerState.Num() == 0) { return 0.2 + ByDistanceSpeedBias; }\n      float* MapValue = DeltaTimesWhenNotSeePerState.Find(DesiresSightState);\n      return KML::FClamp(*MapValue + ByDistanceSpeedBias + ByDeadSpeedBias, 0.005, 2.0);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentNOTSeeInterpSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "GetWhenCurrentNOTSeeInterpSpeed", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentNOTSeeInterpSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentNOTSeeInterpSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execGetWhenCurrentNOTSeeInterpSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWhenCurrentNOTSeeInterpSpeed_Implementation();
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function GetWhenCurrentNOTSeeInterpSpeed **

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function GetWhenCurrentSeeInterpSpeed ***
struct STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentSeeInterpSpeed_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentSeeInterpSpeed_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed = FName(TEXT("GetWhenCurrentSeeInterpSpeed"));
float USTE_HumanAI_SightPerceptionCore::GetWhenCurrentSeeInterpSpeed()
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentSeeInterpSpeed_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetWhenCurrentSeeInterpSpeed_Implementation();
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Default CODE:\n\x09\x09if (!Char) { return 0.1; }\n\x09""float ByDistanceSpeedBias = 0.0;\n\x09if (SIGHTPROPERTIES.EnemyCharacter)\n\x09{\n\x09\x09if (float DistTo = FVector::Distance(SIGHTPROPERTIES.EnemyCharacter->GetActorLocation(), Char->GetActorLocation()) < 300)\n\x09\x09{ ByDistanceSpeedBias = KML::MapRangeClamped(DistTo, 30, 300, 3, 0); }\n\x09}\n\x09""float ByAnimCurveBias = 0.0;\n\x09if (Char->GetMesh()->GetAnimInstance())\n\x09{ ByAnimCurveBias = Char->GetMesh()->GetAnimInstance()->GetCurveValue(\"WhenSeeDetectionSpeedBias\"); }\n\x09if (DeltaTimesWhenSeePerState.Num() == 0) { return 0.6 + ByDistanceSpeedBias + ByAnimCurveBias; }\n\x09""float* MapValue = DeltaTimesWhenSeePerState.Find(DesiresSightState);\n\x09return *MapValue + ByDistanceSpeedBias + ByAnimCurveBias;\n\x09*/" },
#endif
		{ "CompactNodeTitle", "WhenSeeInterpSpeed" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default CODE:\n              if (!Char) { return 0.1; }\n      float ByDistanceSpeedBias = 0.0;\n      if (SIGHTPROPERTIES.EnemyCharacter)\n      {\n              if (float DistTo = FVector::Distance(SIGHTPROPERTIES.EnemyCharacter->GetActorLocation(), Char->GetActorLocation()) < 300)\n              { ByDistanceSpeedBias = KML::MapRangeClamped(DistTo, 30, 300, 3, 0); }\n      }\n      float ByAnimCurveBias = 0.0;\n      if (Char->GetMesh()->GetAnimInstance())\n      { ByAnimCurveBias = Char->GetMesh()->GetAnimInstance()->GetCurveValue(\"WhenSeeDetectionSpeedBias\"); }\n      if (DeltaTimesWhenSeePerState.Num() == 0) { return 0.6 + ByDistanceSpeedBias + ByAnimCurveBias; }\n      float* MapValue = DeltaTimesWhenSeePerState.Find(DesiresSightState);\n      return *MapValue + ByDistanceSpeedBias + ByAnimCurveBias;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentSeeInterpSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "GetWhenCurrentSeeInterpSpeed", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentSeeInterpSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventGetWhenCurrentSeeInterpSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execGetWhenCurrentSeeInterpSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWhenCurrentSeeInterpSpeed_Implementation();
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function GetWhenCurrentSeeInterpSpeed *****

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function ModifySightForPlayerCompanion **
struct STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms
{
	ACharacter* InCharacter;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion = FName(TEXT("ModifySightForPlayerCompanion"));
bool USTE_HumanAI_SightPerceptionCore::ModifySightForPlayerCompanion(ACharacter* InCharacter)
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms Parms;
		Parms.InCharacter=InCharacter;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ModifySightForPlayerCompanion_Implementation(InCharacter);
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::NewProp_InCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "ModifySightForPlayerCompanion", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventModifySightForPlayerCompanion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execModifySightForPlayerCompanion)
{
	P_GET_OBJECT(ACharacter,Z_Param_InCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ModifySightForPlayerCompanion_Implementation(Z_Param_InCharacter);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function ModifySightForPlayerCompanion ****

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function SetBB_EnemyActor ***************
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics
{
	struct STE_HumanAI_SightPerceptionCore_eventSetBB_EnemyActor_Parms
	{
		ACharacter* InEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::NewProp_InEnemy = { "InEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventSetBB_EnemyActor_Parms, InEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::NewProp_InEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "SetBB_EnemyActor", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::STE_HumanAI_SightPerceptionCore_eventSetBB_EnemyActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::STE_HumanAI_SightPerceptionCore_eventSetBB_EnemyActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execSetBB_EnemyActor)
{
	P_GET_OBJECT(ACharacter,Z_Param_InEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBB_EnemyActor(Z_Param_InEnemy);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function SetBB_EnemyActor *****************

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function SetNewEnemyButRememberPrev *****
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics
{
	struct STE_HumanAI_SightPerceptionCore_eventSetNewEnemyButRememberPrev_Parms
	{
		ACharacter* NewEnemy;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Utilities" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewEnemy;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::NewProp_NewEnemy = { "NewEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventSetNewEnemyButRememberPrev_Parms, NewEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STE_HumanAI_SightPerceptionCore_eventSetNewEnemyButRememberPrev_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STE_HumanAI_SightPerceptionCore_eventSetNewEnemyButRememberPrev_Parms), &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::NewProp_NewEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "SetNewEnemyButRememberPrev", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::STE_HumanAI_SightPerceptionCore_eventSetNewEnemyButRememberPrev_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::STE_HumanAI_SightPerceptionCore_eventSetNewEnemyButRememberPrev_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execSetNewEnemyButRememberPrev)
{
	P_GET_OBJECT(ACharacter,Z_Param_NewEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNewEnemyButRememberPrev(Z_Param_NewEnemy);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function SetNewEnemyButRememberPrev *******

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function UpdatePerFrameSightValues ******
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics
{
	struct STE_HumanAI_SightPerceptionCore_eventUpdatePerFrameSightValues_Parms
	{
		float dt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Core" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_dt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventUpdatePerFrameSightValues_Parms, dt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::NewProp_dt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "UpdatePerFrameSightValues", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::STE_HumanAI_SightPerceptionCore_eventUpdatePerFrameSightValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::STE_HumanAI_SightPerceptionCore_eventUpdatePerFrameSightValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execUpdatePerFrameSightValues)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePerFrameSightValues(Z_Param_dt);
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function UpdatePerFrameSightValues ********

// ********** Begin Class USTE_HumanAI_SightPerceptionCore Function UpdateSightPerceptionValues ****
struct STE_HumanAI_SightPerceptionCore_eventUpdateSightPerceptionValues_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	STE_HumanAI_SightPerceptionCore_eventUpdateSightPerceptionValues_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues = FName(TEXT("UpdateSightPerceptionValues"));
float USTE_HumanAI_SightPerceptionCore::UpdateSightPerceptionValues()
{
	UFunction* Func = FindFunctionChecked(NAME_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		STE_HumanAI_SightPerceptionCore_eventUpdateSightPerceptionValues_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return UpdateSightPerceptionValues_Implementation();
	}
}
struct Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception Update|Core" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STE_HumanAI_SightPerceptionCore_eventUpdateSightPerceptionValues_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, nullptr, "UpdateSightPerceptionValues", Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::PropPointers), sizeof(STE_HumanAI_SightPerceptionCore_eventUpdateSightPerceptionValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(STE_HumanAI_SightPerceptionCore_eventUpdateSightPerceptionValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTE_HumanAI_SightPerceptionCore::execUpdateSightPerceptionValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->UpdateSightPerceptionValues_Implementation();
	P_NATIVE_END;
}
// ********** End Class USTE_HumanAI_SightPerceptionCore Function UpdateSightPerceptionValues ******

// ********** Begin Class USTE_HumanAI_SightPerceptionCore *****************************************
void USTE_HumanAI_SightPerceptionCore::StaticRegisterNativesUSTE_HumanAI_SightPerceptionCore()
{
	UClass* Class = USTE_HumanAI_SightPerceptionCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckShouldRefresh", &USTE_HumanAI_SightPerceptionCore::execCheckShouldRefresh },
		{ "DrawDebugAboutResultOnTick", &USTE_HumanAI_SightPerceptionCore::execDrawDebugAboutResultOnTick },
		{ "DrawPerEnemyDebugInfo", &USTE_HumanAI_SightPerceptionCore::execDrawPerEnemyDebugInfo },
		{ "ForceSetPropertiesIgnoringSightComponent", &USTE_HumanAI_SightPerceptionCore::execForceSetPropertiesIgnoringSightComponent },
		{ "GetCharacterIsDead", &USTE_HumanAI_SightPerceptionCore::execGetCharacterIsDead },
		{ "GetSightParametersFromData", &USTE_HumanAI_SightPerceptionCore::execGetSightParametersFromData },
		{ "GetSightPerceptionTagsFromCharacter", &USTE_HumanAI_SightPerceptionCore::execGetSightPerceptionTagsFromCharacter },
		{ "GetWhenCurrentNOTSeeInterpSpeed", &USTE_HumanAI_SightPerceptionCore::execGetWhenCurrentNOTSeeInterpSpeed },
		{ "GetWhenCurrentSeeInterpSpeed", &USTE_HumanAI_SightPerceptionCore::execGetWhenCurrentSeeInterpSpeed },
		{ "ModifySightForPlayerCompanion", &USTE_HumanAI_SightPerceptionCore::execModifySightForPlayerCompanion },
		{ "SetBB_EnemyActor", &USTE_HumanAI_SightPerceptionCore::execSetBB_EnemyActor },
		{ "SetNewEnemyButRememberPrev", &USTE_HumanAI_SightPerceptionCore::execSetNewEnemyButRememberPrev },
		{ "UpdatePerFrameSightValues", &USTE_HumanAI_SightPerceptionCore::execUpdatePerFrameSightValues },
		{ "UpdateSightPerceptionValues", &USTE_HumanAI_SightPerceptionCore::execUpdateSightPerceptionValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore;
UClass* USTE_HumanAI_SightPerceptionCore::GetPrivateStaticClass()
{
	using TClass = USTE_HumanAI_SightPerceptionCore;
	if (!Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STE_HumanAI_SightPerceptionCore"),
			Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore.InnerSingleton,
			StaticRegisterNativesUSTE_HumanAI_SightPerceptionCore,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore.InnerSingleton;
}
UClass* Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_NoRegister()
{
	return USTE_HumanAI_SightPerceptionCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n The Evaluator class code for StateTree updates the values \xe2\x80\x8b\xe2\x80\x8bof variables related to SightPerception. The entire implementation is designed specifically \n for HumanAI. The main result of this Evaluator is the correct completion of the SightPerceptionRef structure. \n Additionally, if BackboardData != nullptr, then values \xe2\x80\x8b\xe2\x80\x8b""are set for certain keys, e.g.:\n- (object)StateTreePerceptionEvaluatorRef,\n- (bool)EnemyIsPhysicallySeen,\n- (bool)IsCurrentlySeeEnemy,\n- (float)SeeEnemyTime,\n- (float)EnemySeeCheckerAlpha\n\nScheme for reading and writing data from an object of type FStateTreeBlueprintPropertyRef:\n\nbinds from ST __________________ working on copied values    _____________________  working on copied values   ______________________   [Next Tick]\n>-----------> ReadST PropertyRef --------------------------> UpdateSightProperties --------------------------> WriteTo ST_PropertyRef ------------->\n\x09\x09\x09 |_________________|                            |____________________|                            |_____________________|\n\nPL:\nKod klasy Evaluator dla StateTree, realizuj\xc4\x85""cy aktualizajc\xc4\x99 warto\xc5\x9b\xc4\x87 zmiennych zwi\xc4\x85zanych z SightPerception. Ca\xc5\x82""a implementacja jest przygotowana \ntylko pod dzia\xc5\x82""anie z HumanAI. G\xc5\x82\xc3\xb3wnym rezultatem dzia\xc5\x82""ania tego Evaluator jest prawid\xc5\x82owe wype\xc5\x82nienie struktury SightPerceptionRef. Dodatkowo \nje\xc5\xbc""eli BackboardData != nullptr, to wtedy ustawiane s\xc4\x85 warto\xc5\x9b""ci dla niekt\xc3\xb3rych kluczy np:\n- (object)StateTreePercpetionEvaluatorRef,\n- (bool)EnemyIsPhysicallySeen,\n- (bool)IsCurrentlySeeEnemy,\n- (float)SeeEnemyTime,\n- (float)EnemySeeCheckerAlpha\n */" },
#endif
		{ "IncludePath", "STE_HumanAI_SightPerceptionCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Evaluator class code for StateTree updates the values \xe2\x80\x8b\xe2\x80\x8bof variables related to SightPerception. The entire implementation is designed specifically\nfor HumanAI. The main result of this Evaluator is the correct completion of the SightPerceptionRef structure.\nAdditionally, if BackboardData != nullptr, then values \xe2\x80\x8b\xe2\x80\x8b""are set for certain keys, e.g.:\n- (object)StateTreePerceptionEvaluatorRef,\n- (bool)EnemyIsPhysicallySeen,\n- (bool)IsCurrentlySeeEnemy,\n- (float)SeeEnemyTime,\n- (float)EnemySeeCheckerAlpha\n\nScheme for reading and writing data from an object of type FStateTreeBlueprintPropertyRef:\n\nbinds from ST __________________ working on copied values    _____________________  working on copied values   ______________________   [Next Tick]\n>-----------> ReadST PropertyRef --------------------------> UpdateSightProperties --------------------------> WriteTo ST_PropertyRef ------------->\n                       |_________________|                            |____________________|                            |_____________________|\n\nPL:\nKod klasy Evaluator dla StateTree, realizuj\xc4\x85""cy aktualizajc\xc4\x99 warto\xc5\x9b\xc4\x87 zmiennych zwi\xc4\x85zanych z SightPerception. Ca\xc5\x82""a implementacja jest przygotowana\ntylko pod dzia\xc5\x82""anie z HumanAI. G\xc5\x82\xc3\xb3wnym rezultatem dzia\xc5\x82""ania tego Evaluator jest prawid\xc5\x82owe wype\xc5\x82nienie struktury SightPerceptionRef. Dodatkowo\nje\xc5\xbc""eli BackboardData != nullptr, to wtedy ustawiane s\xc4\x85 warto\xc5\x9b""ci dla niekt\xc3\xb3rych kluczy np:\n- (object)StateTreePercpetionEvaluatorRef,\n- (bool)EnemyIsPhysicallySeen,\n- (bool)IsCurrentlySeeEnemy,\n- (float)SeeEnemyTime,\n- (float)EnemySeeCheckerAlpha" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Char_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightPerceptionRef_MetaData[] = {
		{ "Category", "Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*A reference to a parameter declared in the StateTree. Its correct completion is crucial to the Evaluator's operation. \n\x09""For the code to function correctly, it's necessary to assign an appropriate pointer to this variable.*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
		{ "RefType", "/Script/HelpfulFunctions.AGLS_HumanAI_EnemyTags" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reference to a parameter declared in the StateTree. Its correct completion is crucial to the Evaluator's operation.\n       For the code to function correctly, it's necessary to assign an appropriate pointer to this variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainBehaviorModeRef_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
		{ "RefType", "/Script/HelpfulFunctions.AGLS_HumanAI_MainBehaviorMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLOD_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardData_MetaData[] = {
		{ "Category", "Binding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*An object that holds a reference to the Blackboard Component. By default, a Blackboard instance is created for the HumanAI Controller. \n\x09You should assign an appropriate pointer to this object here.*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An object that holds a reference to the Blackboard Component. By default, a Blackboard instance is created for the HumanAI Controller.\n       You should assign an appropriate pointer to this object here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFocusActor_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevEnemyChar_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunSourceLogicOnTick_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*The basic value responsible for whether the Evaluator should be actively running. If set to true, then, along with the Tick, \n\x09information about SightPerception is processed to fill the SightPerceptionRef structure.*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The basic value responsible for whether the Evaluator should be actively running. If set to true, then, along with the Tick,\n       information about SightPerception is processed to fill the SightPerceptionRef structure." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenseToUse_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Indication of what type of Perception class data about registered actors should be retrieved from*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indication of what type of Perception class data about registered actors should be retrieved from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefresingPerceptionIntervalsMap_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Data needed to configure the refresh rate of certain data. This determines how often data will be collected from the \n\x09PerceptionComponent. For higher LOD values, the refresh rate should be less frequent (a larger float value, e.g., for \n\x09LOD3, it might be 0.5s or 1.0s).*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data needed to configure the refresh rate of certain data. This determines how often data will be collected from the\n       PerceptionComponent. For higher LOD values, the refresh rate should be less frequent (a larger float value, e.g., for\n       LOD3, it might be 0.5s or 1.0s)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimesWhenSeePerState_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*A map defining the speed at which the reaction time to a detected enemy should be incremented. The higher the value, \n\x09the faster perception data will indicate the need to transition to a new state, e.g., CurrentlySeeEnemy. This value \n\x09is multiplied by DeltaTime.*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A map defining the speed at which the reaction time to a detected enemy should be incremented. The higher the value,\n       the faster perception data will indicate the need to transition to a new state, e.g., CurrentlySeeEnemy. This value\n       is multiplied by DeltaTime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimesWhenNotSeePerState_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Works similarly to DeltaTimesWhenSeePerState, but this data is retrieved when the AI \xe2\x80\x8b\xe2\x80\x8b""currently does not see any valid enemy.*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Works similarly to DeltaTimesWhenSeePerState, but this data is retrieved when the AI \xe2\x80\x8b\xe2\x80\x8b""currently does not see any valid enemy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActorBlackboardKey_MetaData[] = {
		{ "Category", "Perception Config" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionDistWeightCurve_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""ENG:\n\x09This curve is active when SightPerception determines the weight for registered enemies. If the perception component has \n\x09registered more than one character, a mechanism comes into play that determines the weight for each character. The higher \n\x09the final weight, the character assigned to that value becomes the active enemy. This curve is important for calculating \n\x09the weight of the distance between SightPerceptionOwner and the detected character.\n\x09PL:\n\x09Krzywa aktywna w momencie okreslania wagi dla zajerejestrowanych wrogow przez SightPerception. W przypadku kiedy komponent \n\x09percepcji zajerestrowal wiecej niz 1 charakter, do gry wkracza mechanizm okreslajacy dla kazdej postaci wage. Czym finalna \n\x09waga bedzie wyzsza, to wtedy aktywnym wrogiem staje sie charakter przypisany do tej wartosci. Krzywa ta jest istotna do \n\x09obliczania wagi odleglosci miedzy SightPerceptionOwner oraz wykrytym Charakterem.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENG:\nThis curve is active when SightPerception determines the weight for registered enemies. If the perception component has\nregistered more than one character, a mechanism comes into play that determines the weight for each character. The higher\nthe final weight, the character assigned to that value becomes the active enemy. This curve is important for calculating\nthe weight of the distance between SightPerceptionOwner and the detected character.\nPL:\nKrzywa aktywna w momencie okreslania wagi dla zajerejestrowanych wrogow przez SightPerception. W przypadku kiedy komponent\npercepcji zajerestrowal wiecej niz 1 charakter, do gry wkracza mechanizm okreslajacy dla kazdej postaci wage. Czym finalna\nwaga bedzie wyzsza, to wtedy aktywnym wrogiem staje sie charakter przypisany do tej wartosci. Krzywa ta jest istotna do\nobliczania wagi odleglosci miedzy SightPerceptionOwner oraz wykrytym Charakterem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LostSightTimeTreshold_MetaData[] = {
		{ "Category", "Perception Config" },
		{ "ClampMax", "0.94" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*An important parameter that determines the perception status (enum AGLS_HumanAI_SightStatus). It affects the change from \n\x09'CurrentlySeeEnemy' to 'LostSight'. The higher the value, the faster the AI \xe2\x80\x8b\xe2\x80\x8bwill switch to LostSight after losing sight of \n\x09""enemies.*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An important parameter that determines the perception status (enum AGLS_HumanAI_SightStatus). It affects the change from\n       'CurrentlySeeEnemy' to 'LostSight'. The higher the value, the faster the AI \xe2\x80\x8b\xe2\x80\x8bwill switch to LostSight after losing sight of\n       enemies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LostSightPointUpdateTimeTreshold_MetaData[] = {
		{ "Category", "Perception Config" },
		{ "ClampMax", "0.98" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Determines how long the LostSightLocation value will be updated after enemies are lost from sight.*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how long the LostSightLocation value will be updated after enemies are lost from sight." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageCollisionChannel_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*The collision channel is needed to determine whether an enemy is hiding in the Foliage. For this condition to be met, \n\x09proper preparation of Foliage-related data is necessary. By default, for AGLS, this channel is named 'Lost_AI_Sight'*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The collision channel is needed to determine whether an enemy is hiding in the Foliage. For this condition to be met,\n       proper preparation of Foliage-related data is necessary. By default, for AGLS, this channel is named 'Lost_AI_Sight'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsThatEnemyShouldNotHave_MetaData[] = {
		{ "Category", "Perception Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*GameplayTags container, which are checked when determining the weight of Characters within the SightComponent's field of \n\x09view. If a given instance has any of these tags, a lower weight value is assigned to it - TotalWeight = TotalWeight * 0.5*/" },
#endif
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayTags container, which are checked when determining the weight of Characters within the SightComponent's field of\n       view. If a given instance has any of these tags, a lower weight value is assigned to it - TotalWeight = TotalWeight * 0.5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugMode_MetaData[] = {
		{ "Category", "Perception Config|Debuging" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawingShapesDepth_MetaData[] = {
		{ "Category", "Perception Config|Debuging" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawingStringFontScale_MetaData[] = {
		{ "Category", "Perception Config|Debuging" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentElapsedTime_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTickInterval_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSightDetectionValue_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDetectionTime_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDetectionTime_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotencialySeeSomething_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiresSightState_MetaData[] = {
		{ "Category", "Task Runtime" },
		{ "ModuleRelativePath", "Public/STE_HumanAI_SightPerceptionCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Char;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SightPerceptionRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainBehaviorModeRef;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentLOD_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentLOD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFocusActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevEnemyChar;
	static void NewProp_bRunSourceLogicOnTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunSourceLogicOnTick;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefresingPerceptionIntervalsMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefresingPerceptionIntervalsMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RefresingPerceptionIntervalsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RefresingPerceptionIntervalsMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimesWhenSeePerState_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeltaTimesWhenSeePerState_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeltaTimesWhenSeePerState_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeltaTimesWhenSeePerState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimesWhenNotSeePerState_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeltaTimesWhenNotSeePerState_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeltaTimesWhenNotSeePerState_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeltaTimesWhenNotSeePerState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyActorBlackboardKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionDistWeightCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LostSightTimeTreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LostSightPointUpdateTimeTreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FoliageCollisionChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsThatEnemyShouldNotHave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDebugMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawingShapesDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawingStringFontScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentElapsedTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredSightDetectionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyDetectionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDetectionTime;
	static void NewProp_PotencialySeeSomething_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PotencialySeeSomething;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiresSightState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiresSightState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_CheckShouldRefresh, "CheckShouldRefresh" }, // 357242253
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawDebugAboutResultOnTick, "DrawDebugAboutResultOnTick" }, // 157233866
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_DrawPerEnemyDebugInfo, "DrawPerEnemyDebugInfo" }, // 3583139521
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ForceSetPropertiesIgnoringSightComponent, "ForceSetPropertiesIgnoringSightComponent" }, // 1028323892
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetCharacterIsDead, "GetCharacterIsDead" }, // 3484121592
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightParametersFromData, "GetSightParametersFromData" }, // 2455613125
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetSightPerceptionTagsFromCharacter, "GetSightPerceptionTagsFromCharacter" }, // 4230033677
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentNOTSeeInterpSpeed, "GetWhenCurrentNOTSeeInterpSpeed" }, // 3118656238
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_GetWhenCurrentSeeInterpSpeed, "GetWhenCurrentSeeInterpSpeed" }, // 2223524568
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_ModifySightForPlayerCompanion, "ModifySightForPlayerCompanion" }, // 2700504509
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetBB_EnemyActor, "SetBB_EnemyActor" }, // 2361171346
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_SetNewEnemyButRememberPrev, "SetNewEnemyButRememberPrev" }, // 433655517
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdatePerFrameSightValues, "UpdatePerFrameSightValues" }, // 745501154
		{ &Z_Construct_UFunction_USTE_HumanAI_SightPerceptionCore_UpdateSightPerceptionValues, "UpdateSightPerceptionValues" }, // 635892793
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTE_HumanAI_SightPerceptionCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, Char), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Char_MetaData), NewProp_Char_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_SightPerceptionRef = { "SightPerceptionRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, SightPerceptionRef), Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightPerceptionRef_MetaData), NewProp_SightPerceptionRef_MetaData) }; // 3023349094
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_MainBehaviorModeRef = { "MainBehaviorModeRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, MainBehaviorModeRef), Z_Construct_UScriptStruct_FStateTreeBlueprintPropertyRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainBehaviorModeRef_MetaData), NewProp_MainBehaviorModeRef_MetaData) }; // 3023349094
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentLOD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentLOD = { "CurrentLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, CurrentLOD), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLOD_MetaData), NewProp_CurrentLOD_MetaData) }; // 270714742
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_BlackboardData = { "BlackboardData", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, BlackboardData), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardData_MetaData), NewProp_BlackboardData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_TargetFocusActor = { "TargetFocusActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, TargetFocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFocusActor_MetaData), NewProp_TargetFocusActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PrevEnemyChar = { "PrevEnemyChar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, PrevEnemyChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevEnemyChar_MetaData), NewProp_PrevEnemyChar_MetaData) };
void Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_bRunSourceLogicOnTick_SetBit(void* Obj)
{
	((USTE_HumanAI_SightPerceptionCore*)Obj)->bRunSourceLogicOnTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_bRunSourceLogicOnTick = { "bRunSourceLogicOnTick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USTE_HumanAI_SightPerceptionCore), &Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_bRunSourceLogicOnTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunSourceLogicOnTick_MetaData), NewProp_bRunSourceLogicOnTick_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenseToUse_MetaData), NewProp_SenseToUse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap_ValueProp = { "RefresingPerceptionIntervalsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap_Key_KeyProp = { "RefresingPerceptionIntervalsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(0, nullptr) }; // 270714742
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap = { "RefresingPerceptionIntervalsMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, RefresingPerceptionIntervalsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefresingPerceptionIntervalsMap_MetaData), NewProp_RefresingPerceptionIntervalsMap_MetaData) }; // 270714742
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState_ValueProp = { "DeltaTimesWhenSeePerState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState_Key_KeyProp = { "DeltaTimesWhenSeePerState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_SightStatus, METADATA_PARAMS(0, nullptr) }; // 2873589976
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState = { "DeltaTimesWhenSeePerState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DeltaTimesWhenSeePerState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTimesWhenSeePerState_MetaData), NewProp_DeltaTimesWhenSeePerState_MetaData) }; // 2873589976
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState_ValueProp = { "DeltaTimesWhenNotSeePerState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState_Key_KeyProp = { "DeltaTimesWhenNotSeePerState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_SightStatus, METADATA_PARAMS(0, nullptr) }; // 2873589976
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState = { "DeltaTimesWhenNotSeePerState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DeltaTimesWhenNotSeePerState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTimesWhenNotSeePerState_MetaData), NewProp_DeltaTimesWhenNotSeePerState_MetaData) }; // 2873589976
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_EnemyActorBlackboardKey = { "EnemyActorBlackboardKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, EnemyActorBlackboardKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyActorBlackboardKey_MetaData), NewProp_EnemyActorBlackboardKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PerceptionDistWeightCurve = { "PerceptionDistWeightCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, PerceptionDistWeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionDistWeightCurve_MetaData), NewProp_PerceptionDistWeightCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_LostSightTimeTreshold = { "LostSightTimeTreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, LostSightTimeTreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LostSightTimeTreshold_MetaData), NewProp_LostSightTimeTreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_LostSightPointUpdateTimeTreshold = { "LostSightPointUpdateTimeTreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, LostSightPointUpdateTimeTreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LostSightPointUpdateTimeTreshold_MetaData), NewProp_LostSightPointUpdateTimeTreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_FoliageCollisionChannel = { "FoliageCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, FoliageCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageCollisionChannel_MetaData), NewProp_FoliageCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_TagsThatEnemyShouldNotHave = { "TagsThatEnemyShouldNotHave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, TagsThatEnemyShouldNotHave), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsThatEnemyShouldNotHave_MetaData), NewProp_TagsThatEnemyShouldNotHave_MetaData) }; // 2104890724
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DrawDebugMode = { "DrawDebugMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DrawDebugMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugMode_MetaData), NewProp_DrawDebugMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DrawingShapesDepth = { "DrawingShapesDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DrawingShapesDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawingShapesDepth_MetaData), NewProp_DrawingShapesDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DrawingStringFontScale = { "DrawingStringFontScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DrawingStringFontScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawingStringFontScale_MetaData), NewProp_DrawingStringFontScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentElapsedTime = { "CurrentElapsedTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, CurrentElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentElapsedTime_MetaData), NewProp_CurrentElapsedTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentTickInterval = { "CurrentTickInterval", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, CurrentTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTickInterval_MetaData), NewProp_CurrentTickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DesiredSightDetectionValue = { "DesiredSightDetectionValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DesiredSightDetectionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSightDetectionValue_MetaData), NewProp_DesiredSightDetectionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_EnemyDetectionTime = { "EnemyDetectionTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, EnemyDetectionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyDetectionTime_MetaData), NewProp_EnemyDetectionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_LastDetectionTime = { "LastDetectionTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, LastDetectionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDetectionTime_MetaData), NewProp_LastDetectionTime_MetaData) };
void Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PotencialySeeSomething_SetBit(void* Obj)
{
	((USTE_HumanAI_SightPerceptionCore*)Obj)->PotencialySeeSomething = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PotencialySeeSomething = { "PotencialySeeSomething", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USTE_HumanAI_SightPerceptionCore), &Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PotencialySeeSomething_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotencialySeeSomething_MetaData), NewProp_PotencialySeeSomething_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DesiresSightState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DesiresSightState = { "DesiresSightState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTE_HumanAI_SightPerceptionCore, DesiresSightState), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_SightStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiresSightState_MetaData), NewProp_DesiresSightState_MetaData) }; // 2873589976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_Char,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_SightPerceptionRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_MainBehaviorModeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentLOD_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_BlackboardData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_TargetFocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PrevEnemyChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_bRunSourceLogicOnTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_SenseToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_RefresingPerceptionIntervalsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenSeePerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DeltaTimesWhenNotSeePerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_EnemyActorBlackboardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PerceptionDistWeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_LostSightTimeTreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_LostSightPointUpdateTimeTreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_FoliageCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_TagsThatEnemyShouldNotHave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DrawDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DrawingShapesDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DrawingStringFontScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_CurrentTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DesiredSightDetectionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_EnemyDetectionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_LastDetectionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_PotencialySeeSomething,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DesiresSightState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::NewProp_DesiresSightState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::ClassParams = {
	&USTE_HumanAI_SightPerceptionCore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::Class_MetaDataParams), Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore()
{
	if (!Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore.OuterSingleton, Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore.OuterSingleton;
}
USTE_HumanAI_SightPerceptionCore::USTE_HumanAI_SightPerceptionCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTE_HumanAI_SightPerceptionCore);
USTE_HumanAI_SightPerceptionCore::~USTE_HumanAI_SightPerceptionCore() {}
// ********** End Class USTE_HumanAI_SightPerceptionCore *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTE_HumanAI_SightPerceptionCore, USTE_HumanAI_SightPerceptionCore::StaticClass, TEXT("USTE_HumanAI_SightPerceptionCore"), &Z_Registration_Info_UClass_USTE_HumanAI_SightPerceptionCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTE_HumanAI_SightPerceptionCore), 2777906110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h__Script_HelpfulFunctions_2502139292(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_STE_HumanAI_SightPerceptionCore_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
