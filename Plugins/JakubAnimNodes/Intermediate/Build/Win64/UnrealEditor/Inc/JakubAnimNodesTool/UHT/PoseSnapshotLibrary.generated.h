// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSnapshotLibrary.h"

#ifdef JAKUBANIMNODESTOOL_PoseSnapshotLibrary_generated_h
#error "PoseSnapshotLibrary.generated.h already included, missing '#pragma once' in PoseSnapshotLibrary.h"
#endif
#define JAKUBANIMNODESTOOL_PoseSnapshotLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimInstance;
class UObject;
class USkeletalMeshComponent;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FPoseSnapshot;
struct FPoseSnapshotReference;

// ********** Begin ScriptStruct FPoseSnapshotReference ********************************************
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics; \
	JAKUBANIMNODESTOOL_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FPoseSnapshotReference;
// ********** End ScriptStruct FPoseSnapshotReference **********************************************

// ********** Begin Class UPoseSnapshotLibrary *****************************************************
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoneParents); \
	DECLARE_FUNCTION(execDrawSkeletonFromPoseSnapshot); \
	DECLARE_FUNCTION(execGetBoneTransformFromPoseSnapshot); \
	DECLARE_FUNCTION(execGetSavedPoseSnapshot); \
	DECLARE_FUNCTION(execConvertToPoseSnapshot);


JAKUBANIMNODESTOOL_API UClass* Z_Construct_UClass_UPoseSnapshotLibrary_NoRegister();

#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSnapshotLibrary(); \
	friend struct Z_Construct_UClass_UPoseSnapshotLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JAKUBANIMNODESTOOL_API UClass* Z_Construct_UClass_UPoseSnapshotLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSnapshotLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JakubAnimNodesTool"), Z_Construct_UClass_UPoseSnapshotLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSnapshotLibrary)


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSnapshotLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSnapshotLibrary(UPoseSnapshotLibrary&&) = delete; \
	UPoseSnapshotLibrary(const UPoseSnapshotLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSnapshotLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSnapshotLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSnapshotLibrary) \
	NO_API virtual ~UPoseSnapshotLibrary();


#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_22_PROLOG
#define FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSnapshotLibrary;

// ********** End Class UPoseSnapshotLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
