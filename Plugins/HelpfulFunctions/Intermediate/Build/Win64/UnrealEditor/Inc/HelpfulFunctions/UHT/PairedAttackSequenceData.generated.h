// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PairedAttackSequenceData.h"

#ifdef HELPFULFUNCTIONS_PairedAttackSequenceData_generated_h
#error "PairedAttackSequenceData.generated.h already included, missing '#pragma once' in PairedAttackSequenceData.h"
#endif
#define HELPFULFUNCTIONS_PairedAttackSequenceData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APairedAttackSequenceData ************************************************
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_APairedAttackSequenceData_NoRegister();

#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPairedAttackSequenceData(); \
	friend struct Z_Construct_UClass_APairedAttackSequenceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_APairedAttackSequenceData_NoRegister(); \
public: \
	DECLARE_CLASS2(APairedAttackSequenceData, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), Z_Construct_UClass_APairedAttackSequenceData_NoRegister) \
	DECLARE_SERIALIZER(APairedAttackSequenceData)


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APairedAttackSequenceData(APairedAttackSequenceData&&) = delete; \
	APairedAttackSequenceData(const APairedAttackSequenceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APairedAttackSequenceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APairedAttackSequenceData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APairedAttackSequenceData) \
	NO_API virtual ~APairedAttackSequenceData();


#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h_42_PROLOG
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h_45_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APairedAttackSequenceData;

// ********** End Class APairedAttackSequenceData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_PairedAttackSequenceData_h

// ********** Begin Enum PairedAttackSeqPreviewMode ************************************************
#define FOREACH_ENUM_PAIREDATTACKSEQPREVIEWMODE(op) \
	op(PairedAttackSeqPreviewMode::Initialize) \
	op(PairedAttackSeqPreviewMode::Struggle) \
	op(PairedAttackSeqPreviewMode::Success) \
	op(PairedAttackSeqPreviewMode::Failed) 

enum class PairedAttackSeqPreviewMode : uint8;
template<> struct TIsUEnumClass<PairedAttackSeqPreviewMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<PairedAttackSeqPreviewMode>();
// ********** End Enum PairedAttackSeqPreviewMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
