// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_GameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIWALS_GameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbility();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIWALS_GameplayAbility Function SendToCharacterSpecHandle ****************
struct Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IWALS Ability System" },
		{ "DisplayName", "Send To Character Spec Handle" },
		{ "ModuleRelativePath", "Public/IWALS_GameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIWALS_GameplayAbility, nullptr, "SendToCharacterSpecHandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIWALS_GameplayAbility::execSendToCharacterSpecHandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendToCharacterSpecHandle();
	P_NATIVE_END;
}
// ********** End Class UIWALS_GameplayAbility Function SendToCharacterSpecHandle ******************

// ********** Begin Class UIWALS_GameplayAbility ***************************************************
void UIWALS_GameplayAbility::StaticRegisterNativesUIWALS_GameplayAbility()
{
	UClass* Class = UIWALS_GameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendToCharacterSpecHandle", &UIWALS_GameplayAbility::execSendToCharacterSpecHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIWALS_GameplayAbility;
UClass* UIWALS_GameplayAbility::GetPrivateStaticClass()
{
	using TClass = UIWALS_GameplayAbility;
	if (!Z_Registration_Info_UClass_UIWALS_GameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IWALS_GameplayAbility"),
			Z_Registration_Info_UClass_UIWALS_GameplayAbility.InnerSingleton,
			StaticRegisterNativesUIWALS_GameplayAbility,
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
	return Z_Registration_Info_UClass_UIWALS_GameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UIWALS_GameplayAbility_NoRegister()
{
	return UIWALS_GameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIWALS_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "IWALS_GameplayAbility.h" },
		{ "ModuleRelativePath", "Public/IWALS_GameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle, "SendToCharacterSpecHandle" }, // 1830401035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_GameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIWALS_GameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_GameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIWALS_GameplayAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister, (int32)VTABLE_OFFSET(UIWALS_GameplayAbility, IIWALS_AbilityInterface), false },  // 1262191326
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_GameplayAbility_Statics::ClassParams = {
	&UIWALS_GameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIWALS_GameplayAbility()
{
	if (!Z_Registration_Info_UClass_UIWALS_GameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_GameplayAbility.OuterSingleton, Z_Construct_UClass_UIWALS_GameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIWALS_GameplayAbility.OuterSingleton;
}
UIWALS_GameplayAbility::UIWALS_GameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_GameplayAbility);
UIWALS_GameplayAbility::~UIWALS_GameplayAbility() {}
// ********** End Class UIWALS_GameplayAbility *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h__Script_IWALS_AbilitySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_GameplayAbility, UIWALS_GameplayAbility::StaticClass, TEXT("UIWALS_GameplayAbility"), &Z_Registration_Info_UClass_UIWALS_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_GameplayAbility), 1666725935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h__Script_IWALS_AbilitySystem_819849390(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h__Script_IWALS_AbilitySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LD05_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h__Script_IWALS_AbilitySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
