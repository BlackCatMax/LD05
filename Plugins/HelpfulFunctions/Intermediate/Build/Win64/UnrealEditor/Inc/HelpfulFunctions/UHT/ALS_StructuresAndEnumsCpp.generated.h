// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_StructuresAndEnumsCpp.h"

#ifdef HELPFULFUNCTIONS_ALS_StructuresAndEnumsCpp_generated_h
#error "ALS_StructuresAndEnumsCpp.generated.h already included, missing '#pragma once' in ALS_StructuresAndEnumsCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_StructuresAndEnumsCpp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAGLS_HumanAI_EnemyTags *******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAGLS_HumanAI_EnemyTags_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FAGLS_HumanAI_EnemyTags;
// ********** End ScriptStruct FAGLS_HumanAI_EnemyTags *********************************************

// ********** Begin ScriptStruct FCALS_ComponentAndTransform ***************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FCALS_ComponentAndTransform;
// ********** End ScriptStruct FCALS_ComponentAndTransform *****************************************

// ********** Begin ScriptStruct FCMC_SingleClimbPointC ********************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_243_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FCMC_SingleClimbPointC;
// ********** End ScriptStruct FCMC_SingleClimbPointC **********************************************

// ********** Begin ScriptStruct FCMC_LedgeC *******************************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCMC_LedgeC_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FCMC_LedgeC;
// ********** End ScriptStruct FCMC_LedgeC *********************************************************

// ********** Begin ScriptStruct FTraversalStateEvaluation *****************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_284_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalStateEvaluation_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalStateEvaluation;
// ********** End ScriptStruct FTraversalStateEvaluation *******************************************

// ********** Begin ScriptStruct FTraversalSingeAnimAsset ******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_312_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraversalSingeAnimAsset_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FTraversalSingeAnimAsset;
// ********** End ScriptStruct FTraversalSingeAnimAsset ********************************************

// ********** Begin ScriptStruct FCALSMovementSettingsStrafe ***************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_342_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALSMovementSettingsStrafe_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FCALSMovementSettingsStrafe;
// ********** End ScriptStruct FCALSMovementSettingsStrafe *****************************************

// ********** Begin ScriptStruct FCALS_PropsAttachValues *******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_363_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALS_PropsAttachValues_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FCALS_PropsAttachValues;
// ********** End ScriptStruct FCALS_PropsAttachValues *********************************************

// ********** Begin ScriptStruct FAGLS_FinishersDataForAI ******************************************
#define FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_382_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAGLS_FinishersDataForAI_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


struct FAGLS_FinishersDataForAI;
// ********** End ScriptStruct FAGLS_FinishersDataForAI ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LD05_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h

// ********** Begin Enum AGLS_HumanAI_MainBehaviorMode *********************************************
#define FOREACH_ENUM_AGLS_HUMANAI_MAINBEHAVIORMODE(op) \
	op(AGLS_HumanAI_MainBehaviorMode::Patroling) \
	op(AGLS_HumanAI_MainBehaviorMode::Finding) \
	op(AGLS_HumanAI_MainBehaviorMode::Fighting) \
	op(AGLS_HumanAI_MainBehaviorMode::Running) \
	op(AGLS_HumanAI_MainBehaviorMode::Interacting) \
	op(AGLS_HumanAI_MainBehaviorMode::None) 

enum class AGLS_HumanAI_MainBehaviorMode : uint8;
template<> struct TIsUEnumClass<AGLS_HumanAI_MainBehaviorMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_HumanAI_MainBehaviorMode>();
// ********** End Enum AGLS_HumanAI_MainBehaviorMode ***********************************************

// ********** Begin Enum AGLS_HumanAI_PatrolingMode ************************************************
#define FOREACH_ENUM_AGLS_HUMANAI_PATROLINGMODE(op) \
	op(AGLS_HumanAI_PatrolingMode::FollowingPath) \
	op(AGLS_HumanAI_PatrolingMode::RandomMove) \
	op(AGLS_HumanAI_PatrolingMode::NoMoveAndStand) \
	op(AGLS_HumanAI_PatrolingMode::NoMoveAndSit) \
	op(AGLS_HumanAI_PatrolingMode::Interacting) \
	op(AGLS_HumanAI_PatrolingMode::None) 

enum class AGLS_HumanAI_PatrolingMode : uint8;
template<> struct TIsUEnumClass<AGLS_HumanAI_PatrolingMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_HumanAI_PatrolingMode>();
// ********** End Enum AGLS_HumanAI_PatrolingMode **************************************************

// ********** Begin Enum AGLS_HumanAI_FightingMode *************************************************
#define FOREACH_ENUM_AGLS_HUMANAI_FIGHTINGMODE(op) \
	op(AGLS_HumanAI_FightingMode::HideBehindCover) \
	op(AGLS_HumanAI_FightingMode::NoCovering) \
	op(AGLS_HumanAI_FightingMode::RunningFromEnemy) \
	op(AGLS_HumanAI_FightingMode::SearchingForEnemy) \
	op(AGLS_HumanAI_FightingMode::WithoutWeapons) \
	op(AGLS_HumanAI_FightingMode::FullAgressive) \
	op(AGLS_HumanAI_FightingMode::None) 

enum class AGLS_HumanAI_FightingMode : uint8;
template<> struct TIsUEnumClass<AGLS_HumanAI_FightingMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_HumanAI_FightingMode>();
// ********** End Enum AGLS_HumanAI_FightingMode ***************************************************

// ********** Begin Enum AGLS_HumanAI_SightStatus **************************************************
#define FOREACH_ENUM_AGLS_HUMANAI_SIGHTSTATUS(op) \
	op(AGLS_HumanAI_SightStatus::SeesNothing) \
	op(AGLS_HumanAI_SightStatus::SawSomething) \
	op(AGLS_HumanAI_SightStatus::ActiveSeeEnemy) \
	op(AGLS_HumanAI_SightStatus::LostSight) \
	op(AGLS_HumanAI_SightStatus::NotAnymoreSee) 

enum class AGLS_HumanAI_SightStatus : uint8;
template<> struct TIsUEnumClass<AGLS_HumanAI_SightStatus> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_HumanAI_SightStatus>();
// ********** End Enum AGLS_HumanAI_SightStatus ****************************************************

// ********** Begin Enum AGLS_LOD_State ************************************************************
#define FOREACH_ENUM_AGLS_LOD_STATE(op) \
	op(AGLS_LOD_State::LOD0) \
	op(AGLS_LOD_State::LOD1) \
	op(AGLS_LOD_State::LOD2) \
	op(AGLS_LOD_State::LOD3) 

enum class AGLS_LOD_State : uint8;
template<> struct TIsUEnumClass<AGLS_LOD_State> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<AGLS_LOD_State>();
// ********** End Enum AGLS_LOD_State **************************************************************

// ********** Begin Enum CALS_Gait *****************************************************************
#define FOREACH_ENUM_CALS_GAIT(op) \
	op(CALS_Gait::Walking) \
	op(CALS_Gait::Running) \
	op(CALS_Gait::Sprinting) 

enum class CALS_Gait : uint8;
template<> struct TIsUEnumClass<CALS_Gait> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Gait>();
// ********** End Enum CALS_Gait *******************************************************************

// ********** Begin Enum CALS_MovementState ********************************************************
#define FOREACH_ENUM_CALS_MOVEMENTSTATE(op) \
	op(CALS_MovementState::None) \
	op(CALS_MovementState::Grounded) \
	op(CALS_MovementState::InAir) \
	op(CALS_MovementState::Mantling) \
	op(CALS_MovementState::Ragdoll) \
	op(CALS_MovementState::Crawl) \
	op(CALS_MovementState::Prone) 

enum class CALS_MovementState : uint8;
template<> struct TIsUEnumClass<CALS_MovementState> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementState>();
// ********** End Enum CALS_MovementState **********************************************************

// ********** Begin Enum CALS_OverlayState *********************************************************
#define FOREACH_ENUM_CALS_OVERLAYSTATE(op) \
	op(CALS_OverlayState::Default) \
	op(CALS_OverlayState::Masculine) \
	op(CALS_OverlayState::Feminine) \
	op(CALS_OverlayState::Injured) \
	op(CALS_OverlayState::HandsTied) \
	op(CALS_OverlayState::Rifle) \
	op(CALS_OverlayState::Pistol1H) \
	op(CALS_OverlayState::Pistol2H) \
	op(CALS_OverlayState::Bow) \
	op(CALS_OverlayState::Torch) \
	op(CALS_OverlayState::Binoculars) \
	op(CALS_OverlayState::Box) \
	op(CALS_OverlayState::Barrel) \
	op(CALS_OverlayState::Rope) \
	op(CALS_OverlayState::Axe) \
	op(CALS_OverlayState::Knife) 

enum class CALS_OverlayState : uint8;
template<> struct TIsUEnumClass<CALS_OverlayState> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayState>();
// ********** End Enum CALS_OverlayState ***********************************************************

// ********** Begin Enum CALS_RotationMode *********************************************************
#define FOREACH_ENUM_CALS_ROTATIONMODE(op) \
	op(CALS_RotationMode::VelocityDirection) \
	op(CALS_RotationMode::LookingDirection) \
	op(CALS_RotationMode::Aiming) 

enum class CALS_RotationMode : uint8;
template<> struct TIsUEnumClass<CALS_RotationMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_RotationMode>();
// ********** End Enum CALS_RotationMode ***********************************************************

// ********** Begin Enum CALS_GroundedMoveMode *****************************************************
#define FOREACH_ENUM_CALS_GROUNDEDMOVEMODE(op) \
	op(CALS_GroundedMoveMode::Normal) \
	op(CALS_GroundedMoveMode::SlowWalk) \
	op(CALS_GroundedMoveMode::Injured) \
	op(CALS_GroundedMoveMode::Tired) \
	op(CALS_GroundedMoveMode::Stealth) 

enum class CALS_GroundedMoveMode : uint8;
template<> struct TIsUEnumClass<CALS_GroundedMoveMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_GroundedMoveMode>();
// ********** End Enum CALS_GroundedMoveMode *******************************************************

// ********** Begin Enum CALS_Stance ***************************************************************
#define FOREACH_ENUM_CALS_STANCE(op) \
	op(CALS_Stance::Standing) \
	op(CALS_Stance::Crouching) 

enum class CALS_Stance : uint8;
template<> struct TIsUEnumClass<CALS_Stance> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Stance>();
// ********** End Enum CALS_Stance *****************************************************************

// ********** Begin Enum CALS_MovementAction *******************************************************
#define FOREACH_ENUM_CALS_MOVEMENTACTION(op) \
	op(CALS_MovementAction::None) \
	op(CALS_MovementAction::LowMantle) \
	op(CALS_MovementAction::HighMantle) \
	op(CALS_MovementAction::Rolling) \
	op(CALS_MovementAction::GettingUp) 

enum class CALS_MovementAction : uint8;
template<> struct TIsUEnumClass<CALS_MovementAction> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementAction>();
// ********** End Enum CALS_MovementAction *********************************************************

// ********** Begin Enum CALS_OverlayPosesType *****************************************************
#define FOREACH_ENUM_CALS_OVERLAYPOSESTYPE(op) \
	op(CALS_OverlayPosesType::Relaxed) \
	op(CALS_OverlayPosesType::Ready) \
	op(CALS_OverlayPosesType::Aiming) 

enum class CALS_OverlayPosesType : uint8;
template<> struct TIsUEnumClass<CALS_OverlayPosesType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayPosesType>();
// ********** End Enum CALS_OverlayPosesType *******************************************************

// ********** Begin Enum CMC_ActionTypeC ***********************************************************
#define FOREACH_ENUM_CMC_ACTIONTYPEC(op) \
	op(CMC_ActionTypeC::None) \
	op(CMC_ActionTypeC::ShortMove) \
	op(CMC_ActionTypeC::CornerOuter) \
	op(CMC_ActionTypeC::CornerInner) \
	op(CMC_ActionTypeC::Turn180) \
	op(CMC_ActionTypeC::JumpNextLedge) \
	op(CMC_ActionTypeC::JumpBackToNextLedge) \
	op(CMC_ActionTypeC::ForwardMove) \
	op(CMC_ActionTypeC::PullUpToNarrowFloor) \
	op(CMC_ActionTypeC::DropToNarrowFloor) \
	op(CMC_ActionTypeC::DropFromNarrowFloor) \
	op(CMC_ActionTypeC::JumpToBeamSwinging) \
	op(CMC_ActionTypeC::JumpForwardToBeam) \
	op(CMC_ActionTypeC::StartHoldingLedge) 

enum class CMC_ActionTypeC : uint8;
template<> struct TIsUEnumClass<CMC_ActionTypeC> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CMC_ActionTypeC>();
// ********** End Enum CMC_ActionTypeC *************************************************************

// ********** Begin Enum CALS_DeathType ************************************************************
#define FOREACH_ENUM_CALS_DEATHTYPE(op) \
	op(CALS_DeathType::KilledByGun) \
	op(CALS_DeathType::FallFromHeight) \
	op(CALS_DeathType::HitByCar) \
	op(CALS_DeathType::Explosion) \
	op(CALS_DeathType::SilenthDeath) \
	op(CALS_DeathType::BiteByZombie) 

enum class CALS_DeathType : uint8;
template<> struct TIsUEnumClass<CALS_DeathType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_DeathType>();
// ********** End Enum CALS_DeathType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
