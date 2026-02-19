// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGLS_Human_ControllerCoreAI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAGLS_Human_ControllerCoreAI() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeAIComponent_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_Human_ControllerCoreAI();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_FightingMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_MainBehaviorMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_PatrolingMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function AdvancedControlRotationForHumanAI **
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms
	{
		float DeltaTime;
		bool bUpdatePawn;
		TArray<FName> ShootingTargetsBonesName;
		FName GunMuzzleSocketName;
		float ShotDirectionIncludeVelocityAlpha;
		float BlendTraceStartWithWeaponMuzzle;
		FName SmartObjectRotationKey;
		float SpeedWhenGoToSmartObject;
		float SpeedWhenFocalPoint;
		float SpeedWhenBumpReaction;
		float SpeedWhenFocusOnEnemy;
		float SpeedWhenFocusActor;
		float SpeedWhenRecivedDamage;
		FVector2D SpeedRangeWhenDefault;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Human Controller Core|Rotation" },
		{ "CPP_Default_BlendTraceStartWithWeaponMuzzle", "0.000000" },
		{ "CPP_Default_GunMuzzleSocketName", "BulletStart" },
		{ "CPP_Default_ShotDirectionIncludeVelocityAlpha", "0.000000" },
		{ "CPP_Default_SmartObjectRotationKey", "DesiredSmartObjectRotation" },
		{ "CPP_Default_SpeedRangeWhenDefault", "(X=8.000,Y=2.000)" },
		{ "CPP_Default_SpeedWhenBumpReaction", "3.000000" },
		{ "CPP_Default_SpeedWhenFocalPoint", "8.000000" },
		{ "CPP_Default_SpeedWhenFocusActor", "8.000000" },
		{ "CPP_Default_SpeedWhenFocusOnEnemy", "8.000000" },
		{ "CPP_Default_SpeedWhenGoToSmartObject", "6.000000" },
		{ "CPP_Default_SpeedWhenRecivedDamage", "10.000000" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bUpdatePawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePawn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShootingTargetsBonesName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShootingTargetsBonesName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GunMuzzleSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotDirectionIncludeVelocityAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTraceStartWithWeaponMuzzle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SmartObjectRotationKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedWhenGoToSmartObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedWhenFocalPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedWhenBumpReaction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedWhenFocusOnEnemy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedWhenFocusActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedWhenRecivedDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedRangeWhenDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_bUpdatePawn_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms*)Obj)->bUpdatePawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_bUpdatePawn = { "bUpdatePawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_bUpdatePawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_ShootingTargetsBonesName_Inner = { "ShootingTargetsBonesName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_ShootingTargetsBonesName = { "ShootingTargetsBonesName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, ShootingTargetsBonesName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_GunMuzzleSocketName = { "GunMuzzleSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, GunMuzzleSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_ShotDirectionIncludeVelocityAlpha = { "ShotDirectionIncludeVelocityAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, ShotDirectionIncludeVelocityAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_BlendTraceStartWithWeaponMuzzle = { "BlendTraceStartWithWeaponMuzzle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, BlendTraceStartWithWeaponMuzzle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SmartObjectRotationKey = { "SmartObjectRotationKey", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SmartObjectRotationKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenGoToSmartObject = { "SpeedWhenGoToSmartObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedWhenGoToSmartObject), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenFocalPoint = { "SpeedWhenFocalPoint", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedWhenFocalPoint), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenBumpReaction = { "SpeedWhenBumpReaction", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedWhenBumpReaction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenFocusOnEnemy = { "SpeedWhenFocusOnEnemy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedWhenFocusOnEnemy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenFocusActor = { "SpeedWhenFocusActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedWhenFocusActor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenRecivedDamage = { "SpeedWhenRecivedDamage", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedWhenRecivedDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedRangeWhenDefault = { "SpeedRangeWhenDefault", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms, SpeedRangeWhenDefault), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_bUpdatePawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_ShootingTargetsBonesName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_ShootingTargetsBonesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_GunMuzzleSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_ShotDirectionIncludeVelocityAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_BlendTraceStartWithWeaponMuzzle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SmartObjectRotationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenGoToSmartObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenFocalPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenBumpReaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenFocusOnEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenFocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedWhenRecivedDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::NewProp_SpeedRangeWhenDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "AdvancedControlRotationForHumanAI", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::AGLS_Human_ControllerCoreAI_eventAdvancedControlRotationForHumanAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execAdvancedControlRotationForHumanAI)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_bUpdatePawn);
	P_GET_TARRAY(FName,Z_Param_ShootingTargetsBonesName);
	P_GET_PROPERTY(FNameProperty,Z_Param_GunMuzzleSocketName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ShotDirectionIncludeVelocityAlpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTraceStartWithWeaponMuzzle);
	P_GET_PROPERTY(FNameProperty,Z_Param_SmartObjectRotationKey);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedWhenGoToSmartObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedWhenFocalPoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedWhenBumpReaction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedWhenFocusOnEnemy);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedWhenFocusActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedWhenRecivedDamage);
	P_GET_STRUCT(FVector2D,Z_Param_SpeedRangeWhenDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvancedControlRotationForHumanAI(Z_Param_DeltaTime,Z_Param_bUpdatePawn,Z_Param_ShootingTargetsBonesName,Z_Param_GunMuzzleSocketName,Z_Param_ShotDirectionIncludeVelocityAlpha,Z_Param_BlendTraceStartWithWeaponMuzzle,Z_Param_SmartObjectRotationKey,Z_Param_SpeedWhenGoToSmartObject,Z_Param_SpeedWhenFocalPoint,Z_Param_SpeedWhenBumpReaction,Z_Param_SpeedWhenFocusOnEnemy,Z_Param_SpeedWhenFocusActor,Z_Param_SpeedWhenRecivedDamage,Z_Param_SpeedRangeWhenDefault);
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function AdvancedControlRotationForHumanAI ****

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function BB_GetFightingMode *****************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventBB_GetFightingMode_Parms
	{
		AGLS_HumanAI_FightingMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Blackboard Keys" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventBB_GetFightingMode_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_FightingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3024899547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "BB_GetFightingMode", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_GetFightingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_GetFightingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execBB_GetFightingMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGLS_HumanAI_FightingMode*)Z_Param__Result=P_THIS->BB_GetFightingMode();
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function BB_GetFightingMode *******************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function BB_GetMainBehaviorMode *************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventBB_GetMainBehaviorMode_Parms
	{
		AGLS_HumanAI_MainBehaviorMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Blackboard Keys" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventBB_GetMainBehaviorMode_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_MainBehaviorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 715888626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "BB_GetMainBehaviorMode", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_GetMainBehaviorMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_GetMainBehaviorMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execBB_GetMainBehaviorMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGLS_HumanAI_MainBehaviorMode*)Z_Param__Result=P_THIS->BB_GetMainBehaviorMode();
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function BB_GetMainBehaviorMode ***************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function BB_GetPatrolingMode ****************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventBB_GetPatrolingMode_Parms
	{
		AGLS_HumanAI_PatrolingMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Blackboard Keys" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventBB_GetPatrolingMode_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_PatrolingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2758293038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "BB_GetPatrolingMode", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_GetPatrolingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_GetPatrolingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execBB_GetPatrolingMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGLS_HumanAI_PatrolingMode*)Z_Param__Result=P_THIS->BB_GetPatrolingMode();
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function BB_GetPatrolingMode ******************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function BB_SetMainBehaviorMode *************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventBB_SetMainBehaviorMode_Parms
	{
		AGLS_HumanAI_MainBehaviorMode NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Blackboard Keys" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventBB_SetMainBehaviorMode_Parms, NewValue), Z_Construct_UEnum_HelpfulFunctions_AGLS_HumanAI_MainBehaviorMode, METADATA_PARAMS(0, nullptr) }; // 715888626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::NewProp_NewValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "BB_SetMainBehaviorMode", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_SetMainBehaviorMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::AGLS_Human_ControllerCoreAI_eventBB_SetMainBehaviorMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execBB_SetMainBehaviorMode)
{
	P_GET_ENUM(AGLS_HumanAI_MainBehaviorMode,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BB_SetMainBehaviorMode(AGLS_HumanAI_MainBehaviorMode(Z_Param_NewValue));
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function BB_SetMainBehaviorMode ***************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function CustomDefaultControlRotDirection ***
struct AGLS_Human_ControllerCoreAI_eventCustomDefaultControlRotDirection_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_Human_ControllerCoreAI_eventCustomDefaultControlRotDirection_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection = FName(TEXT("CustomDefaultControlRotDirection"));
FVector AAGLS_Human_ControllerCoreAI::CustomDefaultControlRotDirection()
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_Human_ControllerCoreAI_eventCustomDefaultControlRotDirection_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return CustomDefaultControlRotDirection_Implementation();
	}
}
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Rotation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventCustomDefaultControlRotDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "CustomDefaultControlRotDirection", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::PropPointers), sizeof(AGLS_Human_ControllerCoreAI_eventCustomDefaultControlRotDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_Human_ControllerCoreAI_eventCustomDefaultControlRotDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execCustomDefaultControlRotDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->CustomDefaultControlRotDirection_Implementation();
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function CustomDefaultControlRotDirection *****

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function CustomUpdateControlRotation ********
struct AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms
{
	float DeltaTime;
	bool bUpdatePawn;
};
static FName NAME_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation = FName(TEXT("CustomUpdateControlRotation"));
void AAGLS_Human_ControllerCoreAI::CustomUpdateControlRotation(float DeltaTime, bool bUpdatePawn)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.bUpdatePawn=bUpdatePawn ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CustomUpdateControlRotation_Implementation(DeltaTime, bUpdatePawn);
	}
}
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Rotation" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bUpdatePawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms*)Obj)->bUpdatePawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn = { "bUpdatePawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::NewProp_bUpdatePawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "CustomUpdateControlRotation", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::PropPointers), sizeof(AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_Human_ControllerCoreAI_eventCustomUpdateControlRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execCustomUpdateControlRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_bUpdatePawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CustomUpdateControlRotation_Implementation(Z_Param_DeltaTime,Z_Param_bUpdatePawn);
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function CustomUpdateControlRotation **********

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function DoesPathUseNavLink *****************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms
	{
		UNavigationPath* Path;
		float MaxDistanceToPoint2D;
		float MaxHeightDiff;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Navigation" },
		{ "CPP_Default_MaxDistanceToPoint2D", "200.000000" },
		{ "CPP_Default_MaxHeightDiff", "50.000000" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToPoint2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeightDiff;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms, Path), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_MaxDistanceToPoint2D = { "MaxDistanceToPoint2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms, MaxDistanceToPoint2D), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_MaxHeightDiff = { "MaxHeightDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms, MaxHeightDiff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_MaxDistanceToPoint2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_MaxHeightDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "DoesPathUseNavLink", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::AGLS_Human_ControllerCoreAI_eventDoesPathUseNavLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execDoesPathUseNavLink)
{
	P_GET_OBJECT(UNavigationPath,Z_Param_Path);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistanceToPoint2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeightDiff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesPathUseNavLink(Z_Param_Path,Z_Param_MaxDistanceToPoint2D,Z_Param_MaxHeightDiff);
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function DoesPathUseNavLink *******************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function GetCustomFocalPoint ****************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventGetCustomFocalPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventGetCustomFocalPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "GetCustomFocalPoint", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::AGLS_Human_ControllerCoreAI_eventGetCustomFocalPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::AGLS_Human_ControllerCoreAI_eventGetCustomFocalPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execGetCustomFocalPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCustomFocalPoint();
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function GetCustomFocalPoint ******************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function PathWeightByNavLinksNumber *********
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms
	{
		UNavigationPath* Path;
		float MaxDistanceToPoint2D;
		float MaxHeightDiff;
		float Bias;
		bool UseAbsOnHeight;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|Navigation" },
		{ "CPP_Default_Bias", "0.100000" },
		{ "CPP_Default_MaxDistanceToPoint2D", "200.000000" },
		{ "CPP_Default_MaxHeightDiff", "50.000000" },
		{ "CPP_Default_UseAbsOnHeight", "true" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToPoint2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeightDiff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static void NewProp_UseAbsOnHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAbsOnHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms, Path), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxDistanceToPoint2D = { "MaxDistanceToPoint2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms, MaxDistanceToPoint2D), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxHeightDiff = { "MaxHeightDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms, MaxHeightDiff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms, Bias), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms*)Obj)->UseAbsOnHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight = { "UseAbsOnHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxDistanceToPoint2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_MaxHeightDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_UseAbsOnHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "PathWeightByNavLinksNumber", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::AGLS_Human_ControllerCoreAI_eventPathWeightByNavLinksNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execPathWeightByNavLinksNumber)
{
	P_GET_OBJECT(UNavigationPath,Z_Param_Path);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistanceToPoint2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeightDiff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Bias);
	P_GET_UBOOL(Z_Param_UseAbsOnHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->PathWeightByNavLinksNumber(Z_Param_Path,Z_Param_MaxDistanceToPoint2D,Z_Param_MaxHeightDiff,Z_Param_Bias,Z_Param_UseAbsOnHeight);
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function PathWeightByNavLinksNumber ***********

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function ST_SetParameterAsObject ************
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics
{
	struct AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms
	{
		UStateTreeAIComponent* InComponent;
		FName ParameterName;
		UObject* ObjectToSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Human Controller Core|State Tree Parameters" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToSet;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms, InComponent), Z_Construct_UClass_UStateTreeAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ObjectToSet = { "ObjectToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms, ObjectToSet), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ObjectToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "ST_SetParameterAsObject", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::AGLS_Human_ControllerCoreAI_eventST_SetParameterAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execST_SetParameterAsObject)
{
	P_GET_OBJECT(UStateTreeAIComponent,Z_Param_InComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UObject,Z_Param_ObjectToSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ST_SetParameterAsObject(Z_Param_InComponent,Z_Param_ParameterName,Z_Param_ObjectToSet);
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function ST_SetParameterAsObject **************

// ********** Begin Class AAGLS_Human_ControllerCoreAI Function TryToAvoidOtherCharacter ***********
struct AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms
{
	FVector FollowDirection;
	float TraceRadiusScale;
	float TraceLenghtOffset;
	float PerGaitInputStrength;
	bool DrawTrace;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter = FName(TEXT("TryToAvoidOtherCharacter"));
bool AAGLS_Human_ControllerCoreAI::TryToAvoidOtherCharacter(FVector& FollowDirection, float TraceRadiusScale, float TraceLenghtOffset, float PerGaitInputStrength, bool DrawTrace)
{
	UFunction* Func = FindFunctionChecked(NAME_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms Parms;
		Parms.FollowDirection=FollowDirection;
		Parms.TraceRadiusScale=TraceRadiusScale;
		Parms.TraceLenghtOffset=TraceLenghtOffset;
		Parms.PerGaitInputStrength=PerGaitInputStrength;
		Parms.DrawTrace=DrawTrace ? true : false;
	ProcessEvent(Func,&Parms);
		FollowDirection=Parms.FollowDirection;
		return !!Parms.ReturnValue;
	}
	else
	{
		return TryToAvoidOtherCharacter_Implementation(FollowDirection, TraceRadiusScale, TraceLenghtOffset, PerGaitInputStrength, DrawTrace);
	}
}
struct Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Human Controller Core|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This function is designed to change the current direction of movement so that characters can avoid each other. The need \nfor this solution stems from the fact that, by default, PathFollowing doesn't account for dynamic obstacles in the path \nsuch as other characters. This can be avoided using RuntimeNavMeshModify, but it seems to be a more expensive solution. \nThis function forces the controlled Character to change its movement direction via AddMovementInput when a Character is \nin the path. Note that this function is not responsive and is designed to work only with HumanAI.*/" },
#endif
		{ "CPP_Default_DrawTrace", "false" },
		{ "CPP_Default_PerGaitInputStrength", "1.000000" },
		{ "CPP_Default_TraceLenghtOffset", "0.000000" },
		{ "CPP_Default_TraceRadiusScale", "1.000000" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is designed to change the current direction of movement so that characters can avoid each other. The need\nfor this solution stems from the fact that, by default, PathFollowing doesn't account for dynamic obstacles in the path\nsuch as other characters. This can be avoided using RuntimeNavMeshModify, but it seems to be a more expensive solution.\nThis function forces the controlled Character to change its movement direction via AddMovementInput when a Character is\nin the path. Note that this function is not responsive and is designed to work only with HumanAI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FollowDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadiusScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLenghtOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerGaitInputStrength;
	static void NewProp_DrawTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawTrace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_FollowDirection = { "FollowDirection", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms, FollowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_TraceRadiusScale = { "TraceRadiusScale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms, TraceRadiusScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_TraceLenghtOffset = { "TraceLenghtOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms, TraceLenghtOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_PerGaitInputStrength = { "PerGaitInputStrength", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms, PerGaitInputStrength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_DrawTrace_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms*)Obj)->DrawTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_DrawTrace = { "DrawTrace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_DrawTrace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms), &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_FollowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_TraceRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_TraceLenghtOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_PerGaitInputStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_DrawTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, nullptr, "TryToAvoidOtherCharacter", Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::PropPointers), sizeof(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AGLS_Human_ControllerCoreAI_eventTryToAvoidOtherCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAGLS_Human_ControllerCoreAI::execTryToAvoidOtherCharacter)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FollowDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceRadiusScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TraceLenghtOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PerGaitInputStrength);
	P_GET_UBOOL(Z_Param_DrawTrace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToAvoidOtherCharacter_Implementation(Z_Param_Out_FollowDirection,Z_Param_TraceRadiusScale,Z_Param_TraceLenghtOffset,Z_Param_PerGaitInputStrength,Z_Param_DrawTrace);
	P_NATIVE_END;
}
// ********** End Class AAGLS_Human_ControllerCoreAI Function TryToAvoidOtherCharacter *************

// ********** Begin Class AAGLS_Human_ControllerCoreAI *********************************************
void AAGLS_Human_ControllerCoreAI::StaticRegisterNativesAAGLS_Human_ControllerCoreAI()
{
	UClass* Class = AAGLS_Human_ControllerCoreAI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvancedControlRotationForHumanAI", &AAGLS_Human_ControllerCoreAI::execAdvancedControlRotationForHumanAI },
		{ "BB_GetFightingMode", &AAGLS_Human_ControllerCoreAI::execBB_GetFightingMode },
		{ "BB_GetMainBehaviorMode", &AAGLS_Human_ControllerCoreAI::execBB_GetMainBehaviorMode },
		{ "BB_GetPatrolingMode", &AAGLS_Human_ControllerCoreAI::execBB_GetPatrolingMode },
		{ "BB_SetMainBehaviorMode", &AAGLS_Human_ControllerCoreAI::execBB_SetMainBehaviorMode },
		{ "CustomDefaultControlRotDirection", &AAGLS_Human_ControllerCoreAI::execCustomDefaultControlRotDirection },
		{ "CustomUpdateControlRotation", &AAGLS_Human_ControllerCoreAI::execCustomUpdateControlRotation },
		{ "DoesPathUseNavLink", &AAGLS_Human_ControllerCoreAI::execDoesPathUseNavLink },
		{ "GetCustomFocalPoint", &AAGLS_Human_ControllerCoreAI::execGetCustomFocalPoint },
		{ "PathWeightByNavLinksNumber", &AAGLS_Human_ControllerCoreAI::execPathWeightByNavLinksNumber },
		{ "ST_SetParameterAsObject", &AAGLS_Human_ControllerCoreAI::execST_SetParameterAsObject },
		{ "TryToAvoidOtherCharacter", &AAGLS_Human_ControllerCoreAI::execTryToAvoidOtherCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI;
UClass* AAGLS_Human_ControllerCoreAI::GetPrivateStaticClass()
{
	using TClass = AAGLS_Human_ControllerCoreAI;
	if (!Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AGLS_Human_ControllerCoreAI"),
			Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI.InnerSingleton,
			StaticRegisterNativesAAGLS_Human_ControllerCoreAI,
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
	return Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI.InnerSingleton;
}
UClass* Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_NoRegister()
{
	return AAGLS_Human_ControllerCoreAI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AGLS_Human_ControllerCoreAI.h" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|References" },
		{ "DisplayName", "RefChar" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhenSeeReactionScale_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhenLostSightReactionScale_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawControlRotDesiredMode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomControlRotationCode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Config" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDetectionTime_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Perception" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectedEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Perception" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoosedEnemyActor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Perception" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonZeroVelocityDirection_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalPointBumpReaction_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalPointOnDamageCauser_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusOnDamageCauserInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Rotation" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugAboutAdvancedRotation_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Human Controller Core|Debug" },
		{ "EditCondition", "bUseCustomControlRotationCode" },
		{ "ModuleRelativePath", "Public/AGLS_Human_ControllerCoreAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhenSeeReactionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhenLostSightReactionScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_YawControlRotDesiredMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_YawControlRotDesiredMode;
	static void NewProp_bUseCustomControlRotationCode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomControlRotationCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyDetectionTime;
	static void NewProp_bDetectedEnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectedEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoosedEnemyActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NonZeroVelocityDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocalPointBumpReaction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocalPointOnDamageCauser;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusOnDamageCauserInterpSpeed;
	static void NewProp_bDrawDebugAboutAdvancedRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugAboutAdvancedRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_AdvancedControlRotationForHumanAI, "AdvancedControlRotationForHumanAI" }, // 2313419982
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetFightingMode, "BB_GetFightingMode" }, // 4249022836
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetMainBehaviorMode, "BB_GetMainBehaviorMode" }, // 1567385234
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_GetPatrolingMode, "BB_GetPatrolingMode" }, // 4255538620
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_BB_SetMainBehaviorMode, "BB_SetMainBehaviorMode" }, // 2791336184
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomDefaultControlRotDirection, "CustomDefaultControlRotDirection" }, // 2345608216
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_CustomUpdateControlRotation, "CustomUpdateControlRotation" }, // 2537886587
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_DoesPathUseNavLink, "DoesPathUseNavLink" }, // 2497785438
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_GetCustomFocalPoint, "GetCustomFocalPoint" }, // 114574230
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_PathWeightByNavLinksNumber, "PathWeightByNavLinksNumber" }, // 2335250736
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_ST_SetParameterAsObject, "ST_SetParameterAsObject" }, // 4270716320
		{ &Z_Construct_UFunction_AAGLS_Human_ControllerCoreAI_TryToAvoidOtherCharacter, "TryToAvoidOtherCharacter" }, // 181015426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGLS_Human_ControllerCoreAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_ControlledCharacter = { "ControlledCharacter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, ControlledCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledCharacter_MetaData), NewProp_ControlledCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_WhenSeeReactionScale = { "WhenSeeReactionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, WhenSeeReactionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhenSeeReactionScale_MetaData), NewProp_WhenSeeReactionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_WhenLostSightReactionScale = { "WhenLostSightReactionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, WhenLostSightReactionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhenLostSightReactionScale_MetaData), NewProp_WhenLostSightReactionScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_YawControlRotDesiredMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_YawControlRotDesiredMode = { "YawControlRotDesiredMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, YawControlRotDesiredMode), Z_Construct_UEnum_HelpfulFunctions_EControllerAI_ControlRotMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawControlRotDesiredMode_MetaData), NewProp_YawControlRotDesiredMode_MetaData) }; // 4211987435
void Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bUseCustomControlRotationCode_SetBit(void* Obj)
{
	((AAGLS_Human_ControllerCoreAI*)Obj)->bUseCustomControlRotationCode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bUseCustomControlRotationCode = { "bUseCustomControlRotationCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_Human_ControllerCoreAI), &Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bUseCustomControlRotationCode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomControlRotationCode_MetaData), NewProp_bUseCustomControlRotationCode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_EnemyDetectionTime = { "EnemyDetectionTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, EnemyDetectionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyDetectionTime_MetaData), NewProp_EnemyDetectionTime_MetaData) };
void Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDetectedEnemy_SetBit(void* Obj)
{
	((AAGLS_Human_ControllerCoreAI*)Obj)->bDetectedEnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDetectedEnemy = { "bDetectedEnemy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_Human_ControllerCoreAI), &Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDetectedEnemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectedEnemy_MetaData), NewProp_bDetectedEnemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_ChoosedEnemyActor = { "ChoosedEnemyActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, ChoosedEnemyActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoosedEnemyActor_MetaData), NewProp_ChoosedEnemyActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_NonZeroVelocityDirection = { "NonZeroVelocityDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, NonZeroVelocityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonZeroVelocityDirection_MetaData), NewProp_NonZeroVelocityDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_FocalPointBumpReaction = { "FocalPointBumpReaction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, FocalPointBumpReaction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalPointBumpReaction_MetaData), NewProp_FocalPointBumpReaction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_FocalPointOnDamageCauser = { "FocalPointOnDamageCauser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, FocalPointOnDamageCauser), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalPointOnDamageCauser_MetaData), NewProp_FocalPointOnDamageCauser_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_FocusOnDamageCauserInterpSpeed = { "FocusOnDamageCauserInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAGLS_Human_ControllerCoreAI, FocusOnDamageCauserInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusOnDamageCauserInterpSpeed_MetaData), NewProp_FocusOnDamageCauserInterpSpeed_MetaData) };
void Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDrawDebugAboutAdvancedRotation_SetBit(void* Obj)
{
	((AAGLS_Human_ControllerCoreAI*)Obj)->bDrawDebugAboutAdvancedRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDrawDebugAboutAdvancedRotation = { "bDrawDebugAboutAdvancedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAGLS_Human_ControllerCoreAI), &Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDrawDebugAboutAdvancedRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugAboutAdvancedRotation_MetaData), NewProp_bDrawDebugAboutAdvancedRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_ControlledCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_WhenSeeReactionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_WhenLostSightReactionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_YawControlRotDesiredMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_YawControlRotDesiredMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bUseCustomControlRotationCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_EnemyDetectionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDetectedEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_ChoosedEnemyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_NonZeroVelocityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_FocalPointBumpReaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_FocalPointOnDamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_FocusOnDamageCauserInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::NewProp_bDrawDebugAboutAdvancedRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::ClassParams = {
	&AAGLS_Human_ControllerCoreAI::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAGLS_Human_ControllerCoreAI()
{
	if (!Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI.OuterSingleton, Z_Construct_UClass_AAGLS_Human_ControllerCoreAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI.OuterSingleton;
}
AAGLS_Human_ControllerCoreAI::AAGLS_Human_ControllerCoreAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAGLS_Human_ControllerCoreAI);
AAGLS_Human_ControllerCoreAI::~AAGLS_Human_ControllerCoreAI() {}
// ********** End Class AAGLS_Human_ControllerCoreAI ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h__Script_HelpfulFunctions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAGLS_Human_ControllerCoreAI, AAGLS_Human_ControllerCoreAI::StaticClass, TEXT("AAGLS_Human_ControllerCoreAI"), &Z_Registration_Info_UClass_AAGLS_Human_ControllerCoreAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGLS_Human_ControllerCoreAI), 330425908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h__Script_HelpfulFunctions_815696333(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h__Script_HelpfulFunctions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_Human_ControllerCoreAI_h__Script_HelpfulFunctions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
