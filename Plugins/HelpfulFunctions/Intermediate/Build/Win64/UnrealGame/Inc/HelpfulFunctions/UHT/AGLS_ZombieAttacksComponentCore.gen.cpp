// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS_ZombieAttacksComponentCore.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAGLS_ZombieAttacksComponentCore() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_APairedAttackSequenceData_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature();
HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPairedAttackSeqInteractionAnim ***********************************
static_assert(std::is_polymorphic<FPairedAttackSeqInteractionAnim>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPairedAttackSeqInteractionAnim cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim;
class UScriptStruct* FPairedAttackSeqInteractionAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("PairedAttackSeqInteractionAnim"));
	}
	return Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedAttack_MetaData[] = {
		{ "Category", "Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAnimation_MetaData[] = {
		{ "Category", "Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtiveAnimation_MetaData[] = {
		{ "Category", "Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTime_MetaData[] = {
		{ "Category", "Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddativeAnimStrength_MetaData[] = {
		{ "Category", "Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ActivatedAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivatedAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddtiveAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddativeAnimStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPairedAttackSeqInteractionAnim>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_ActivatedAttack_SetBit(void* Obj)
{
	((FPairedAttackSeqInteractionAnim*)Obj)->ActivatedAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_ActivatedAttack = { "ActivatedAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPairedAttackSeqInteractionAnim), &Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_ActivatedAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatedAttack_MetaData), NewProp_ActivatedAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_MainAnimation = { "MainAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPairedAttackSeqInteractionAnim, MainAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAnimation_MetaData), NewProp_MainAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_AddtiveAnimation = { "AddtiveAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPairedAttackSeqInteractionAnim, AddtiveAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtiveAnimation_MetaData), NewProp_AddtiveAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_AnimationTime = { "AnimationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPairedAttackSeqInteractionAnim, AnimationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTime_MetaData), NewProp_AnimationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_AddativeAnimStrength = { "AddativeAnimStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPairedAttackSeqInteractionAnim, AddativeAnimStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddativeAnimStrength_MetaData), NewProp_AddativeAnimStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_ActivatedAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_MainAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_AddtiveAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_AnimationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewProp_AddativeAnimStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PairedAttackSeqInteractionAnim",
	Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::PropPointers),
	sizeof(FPairedAttackSeqInteractionAnim),
	alignof(FPairedAttackSeqInteractionAnim),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim()
{
	if (!Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim.InnerSingleton, Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim.InnerSingleton;
}
// ********** End ScriptStruct FPairedAttackSeqInteractionAnim *************************************

// ********** Begin Delegate FOnAttackStarted ******************************************************
struct Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics
{
	struct _Script_HelpfulFunctions_eventOnAttackStarted_Parms
	{
		float ActionDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::NewProp_ActionDuration = { "ActionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HelpfulFunctions_eventOnAttackStarted_Parms, ActionDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::NewProp_ActionDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "OnAttackStarted__DelegateSignature", Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackStarted_DelegateWrapper(const FMulticastScriptDelegate& OnAttackStarted, float ActionDuration)
{
	struct _Script_HelpfulFunctions_eventOnAttackStarted_Parms
	{
		float ActionDuration;
	};
	_Script_HelpfulFunctions_eventOnAttackStarted_Parms Parms;
	Parms.ActionDuration=ActionDuration;
	OnAttackStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttackStarted ********************************************************

// ********** Begin Delegate FOnAttackEnded ********************************************************
struct Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics
{
	struct _Script_HelpfulFunctions_eventOnAttackEnded_Parms
	{
		float ActionElapsedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::NewProp_ActionElapsedTime = { "ActionElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HelpfulFunctions_eventOnAttackEnded_Parms, ActionElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::NewProp_ActionElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "OnAttackEnded__DelegateSignature", Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::_Script_HelpfulFunctions_eventOnAttackEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttackEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAttackEnded, float ActionElapsedTime)
{
	struct _Script_HelpfulFunctions_eventOnAttackEnded_Parms
	{
		float ActionElapsedTime;
	};
	_Script_HelpfulFunctions_eventOnAttackEnded_Parms Parms;
	Parms.ActionElapsedTime=ActionElapsedTime;
	OnAttackEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttackEnded **********************************************************

// ********** Begin Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackEnded **************
struct Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, nullptr, "CallOnAttackEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_ZombieAttacksComponentCore::execCallOnAttackEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnAttackEnded();
	P_NATIVE_END;
}
// ********** End Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackEnded ****************

// ********** Begin Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackStarted ************
struct Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, nullptr, "CallOnAttackStarted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_ZombieAttacksComponentCore::execCallOnAttackStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnAttackStarted();
	P_NATIVE_END;
}
// ********** End Class UAGLS_ZombieAttacksComponentCore Function CallOnAttackStarted **************

// ********** Begin Class UAGLS_ZombieAttacksComponentCore Function CorrectlySetAttackTimer ********
struct Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics
{
	struct AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms
	{
		bool StartAttacking;
		float InDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartAttacking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking_SetBit(void* Obj)
{
	((AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms*)Obj)->StartAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking = { "StartAttacking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms), &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms, InDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms), &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_StartAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_InDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, nullptr, "CorrectlySetAttackTimer", Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::AGLS_ZombieAttacksComponentCore_eventCorrectlySetAttackTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAGLS_ZombieAttacksComponentCore::execCorrectlySetAttackTimer)
{
	P_GET_UBOOL(Z_Param_StartAttacking);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CorrectlySetAttackTimer(Z_Param_StartAttacking,Z_Param_InDuration);
	P_NATIVE_END;
}
// ********** End Class UAGLS_ZombieAttacksComponentCore Function CorrectlySetAttackTimer **********

// ********** Begin Class UAGLS_ZombieAttacksComponentCore *****************************************
void UAGLS_ZombieAttacksComponentCore::StaticRegisterNativesUAGLS_ZombieAttacksComponentCore()
{
	UClass* Class = UAGLS_ZombieAttacksComponentCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallOnAttackEnded", &UAGLS_ZombieAttacksComponentCore::execCallOnAttackEnded },
		{ "CallOnAttackStarted", &UAGLS_ZombieAttacksComponentCore::execCallOnAttackStarted },
		{ "CorrectlySetAttackTimer", &UAGLS_ZombieAttacksComponentCore::execCorrectlySetAttackTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore;
UClass* UAGLS_ZombieAttacksComponentCore::GetPrivateStaticClass()
{
	using TClass = UAGLS_ZombieAttacksComponentCore;
	if (!Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AGLS_ZombieAttacksComponentCore"),
			Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.InnerSingleton,
			StaticRegisterNativesUAGLS_ZombieAttacksComponentCore,
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
	return Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.InnerSingleton;
}
UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_NoRegister()
{
	return UAGLS_ZombieAttacksComponentCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nImplements the attack system for the Character. If the component has been declarated in AGLS_ZombieCharacter \nthen in this case we have several functions at our disposal:\n- bool GetIsStartedAttack()\n- float GetAttackElapsedTime()\n- DELEGATE OnAttackStarted()\n- DELEGATE OnAttackEnded() */" },
#endif
		{ "IncludePath", "AGLS_ZombieAttacksComponentCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the attack system for the Character. If the component has been declarated in AGLS_ZombieCharacter\nthen in this case we have several functions at our disposal:\n- bool GetIsStartedAttack()\n- float GetAttackElapsedTime()\n- DELEGATE OnAttackStarted()\n- DELEGATE OnAttackEnded()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackStarted_MetaData[] = {
		{ "Category", "Attack Action" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackEnded_MetaData[] = {
		{ "Category", "Attack Action" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefChar_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefController_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttackStarted_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main Variable\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTotalDuration_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackElapsedTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core|Paired Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Paired Attacks Sequences (Dynamics)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paired Attacks Sequences (Dynamics)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PairedAttackHitData_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core|Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoosedPairedAttackClass_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core|Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PairedAttackAditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Zombie Attacks Core|Paired Attack" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTraces_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Showing Peformed Traces by this component (On Per Frame or For Duration)\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Showing Peformed Traces by this component (On Per Frame or For Duration)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShapes_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When it is enable during game component drawing Debug Shapes like: Spheres, Lines, Poins or Arrows\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When it is enable during game component drawing Debug Shapes like: Spheres, Lines, Poins or Arrows" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracesViewDurationMultiply_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
		{ "EditCondition", "bDrawDebugTraces" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapesViewDurationMultiply_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Debugging" },
		{ "EditCondition", "bDrawDebugShapes" },
		{ "ModuleRelativePath", "Public/AGLS_ZombieAttacksComponentCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackEnded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefChar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefController;
	static void NewProp_bAttackStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackStarted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTotalDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackElapsedTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PairedAttackHitData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChoosedPairedAttackClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PairedAttackAditionalData;
	static void NewProp_bDrawDebugTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTraces;
	static void NewProp_bDrawDebugShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShapes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TracesViewDurationMultiply;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapesViewDurationMultiply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackEnded, "CallOnAttackEnded" }, // 2252070631
		{ &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CallOnAttackStarted, "CallOnAttackStarted" }, // 3627153807
		{ &Z_Construct_UFunction_UAGLS_ZombieAttacksComponentCore_CorrectlySetAttackTimer, "CorrectlySetAttackTimer" }, // 3914300979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_ZombieAttacksComponentCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackStarted = { "OnAttackStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, OnAttackStarted), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackStarted_MetaData), NewProp_OnAttackStarted_MetaData) }; // 377046068
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackEnded = { "OnAttackEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, OnAttackEnded), Z_Construct_UDelegateFunction_HelpfulFunctions_OnAttackEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackEnded_MetaData), NewProp_OnAttackEnded_MetaData) }; // 1871359219
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefChar = { "RefChar", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, RefChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefChar_MetaData), NewProp_RefChar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefController = { "RefController", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, RefController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefController_MetaData), NewProp_RefController_MetaData) };
void Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted_SetBit(void* Obj)
{
	((UAGLS_ZombieAttacksComponentCore*)Obj)->bAttackStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted = { "bAttackStarted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_ZombieAttacksComponentCore), &Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttackStarted_MetaData), NewProp_bAttackStarted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackTotalDuration = { "AttackTotalDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, AttackTotalDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTotalDuration_MetaData), NewProp_AttackTotalDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackElapsedTime = { "AttackElapsedTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, AttackElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackElapsedTime_MetaData), NewProp_AttackElapsedTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_SequenceOrigin = { "SequenceOrigin", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, SequenceOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceOrigin_MetaData), NewProp_SequenceOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_PairedAttackHitData = { "PairedAttackHitData", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, PairedAttackHitData), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PairedAttackHitData_MetaData), NewProp_PairedAttackHitData_MetaData) }; // 267591329
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_ChoosedPairedAttackClass = { "ChoosedPairedAttackClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, ChoosedPairedAttackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APairedAttackSequenceData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoosedPairedAttackClass_MetaData), NewProp_ChoosedPairedAttackClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_PairedAttackAditionalData = { "PairedAttackAditionalData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, PairedAttackAditionalData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PairedAttackAditionalData_MetaData), NewProp_PairedAttackAditionalData_MetaData) };
void Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces_SetBit(void* Obj)
{
	((UAGLS_ZombieAttacksComponentCore*)Obj)->bDrawDebugTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces = { "bDrawDebugTraces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_ZombieAttacksComponentCore), &Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugTraces_MetaData), NewProp_bDrawDebugTraces_MetaData) };
void Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes_SetBit(void* Obj)
{
	((UAGLS_ZombieAttacksComponentCore*)Obj)->bDrawDebugShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes = { "bDrawDebugShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_ZombieAttacksComponentCore), &Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugShapes_MetaData), NewProp_bDrawDebugShapes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_TracesViewDurationMultiply = { "TracesViewDurationMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, TracesViewDurationMultiply), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracesViewDurationMultiply_MetaData), NewProp_TracesViewDurationMultiply_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_ShapesViewDurationMultiply = { "ShapesViewDurationMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAGLS_ZombieAttacksComponentCore, ShapesViewDurationMultiply), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapesViewDurationMultiply_MetaData), NewProp_ShapesViewDurationMultiply_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_OnAttackEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_RefController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bAttackStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackTotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_AttackElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_SequenceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_PairedAttackHitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_ChoosedPairedAttackClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_PairedAttackAditionalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_bDrawDebugShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_TracesViewDurationMultiply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::NewProp_ShapesViewDurationMultiply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::ClassParams = {
	&UAGLS_ZombieAttacksComponentCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore()
{
	if (!Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.OuterSingleton, Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_ZombieAttacksComponentCore);
UAGLS_ZombieAttacksComponentCore::~UAGLS_ZombieAttacksComponentCore() {}
// ********** End Class UAGLS_ZombieAttacksComponentCore *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h__Script_HelpfulFunctions_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPairedAttackSeqInteractionAnim::StaticStruct, Z_Construct_UScriptStruct_FPairedAttackSeqInteractionAnim_Statics::NewStructOps, TEXT("PairedAttackSeqInteractionAnim"), &Z_Registration_Info_UScriptStruct_FPairedAttackSeqInteractionAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPairedAttackSeqInteractionAnim), 490611846U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_ZombieAttacksComponentCore, UAGLS_ZombieAttacksComponentCore::StaticClass, TEXT("UAGLS_ZombieAttacksComponentCore"), &Z_Registration_Info_UClass_UAGLS_ZombieAttacksComponentCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_ZombieAttacksComponentCore), 2819277266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h__Script_HelpfulFunctions_152940767(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h__Script_HelpfulFunctions_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h__Script_HelpfulFunctions_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_6_AGLS_v1_6_0_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_ZombieAttacksComponentCore_h__Script_HelpfulFunctions_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
