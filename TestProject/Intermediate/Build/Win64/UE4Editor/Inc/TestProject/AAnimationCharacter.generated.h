// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
class UWeapon;
#ifdef TESTPROJECT_AAnimationCharacter_generated_h
#error "AAnimationCharacter.generated.h already included, missing '#pragma once' in AAnimationCharacter.h"
#endif
#define TESTPROJECT_AAnimationCharacter_generated_h

#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_10_DELEGATE \
static inline void FCharacterDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDelegate) \
{ \
	CharacterDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_SPARSE_DATA
#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execSetupWeapon); \
	DECLARE_FUNCTION(execSwitchPreviousWeapon); \
	DECLARE_FUNCTION(execSwitchNextWeapon); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execCDeath); \
	DECLARE_FUNCTION(execCReload); \
	DECLARE_FUNCTION(execCAimOut); \
	DECLARE_FUNCTION(execCAimIn); \
	DECLARE_FUNCTION(execCUncrouch); \
	DECLARE_FUNCTION(execCCrouch); \
	DECLARE_FUNCTION(execGetCurrentWeapon);


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execSetupWeapon); \
	DECLARE_FUNCTION(execSwitchPreviousWeapon); \
	DECLARE_FUNCTION(execSwitchNextWeapon); \
	DECLARE_FUNCTION(execSwitchWeapon); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execCDeath); \
	DECLARE_FUNCTION(execCReload); \
	DECLARE_FUNCTION(execCAimOut); \
	DECLARE_FUNCTION(execCAimIn); \
	DECLARE_FUNCTION(execCUncrouch); \
	DECLARE_FUNCTION(execCCrouch); \
	DECLARE_FUNCTION(execGetCurrentWeapon);


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationCharacter(); \
	friend struct Z_Construct_UClass_AAnimationCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnimationCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AAnimationCharacter)


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAnimationCharacter(); \
	friend struct Z_Construct_UClass_AAnimationCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnimationCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AAnimationCharacter)


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimationCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimationCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimationCharacter(AAnimationCharacter&&); \
	NO_API AAnimationCharacter(const AAnimationCharacter&); \
public:


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimationCharacter(AAnimationCharacter&&); \
	NO_API AAnimationCharacter(const AAnimationCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimationCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimationCharacter)


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_12_PROLOG
#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_INCLASS \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AAnimationCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyScripts_AAnimationCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
