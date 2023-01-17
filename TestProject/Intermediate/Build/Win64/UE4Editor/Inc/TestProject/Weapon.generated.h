// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define TESTPROJECT_Weapon_generated_h

#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_SPARSE_DATA
#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCanSwitch); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execShoot);


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCanSwitch); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execShoot);


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public:


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeapon)


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyScripts_Weapon_h_7_PROLOG
#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_INCLASS \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyScripts_Weapon_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_Weapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyScripts_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
