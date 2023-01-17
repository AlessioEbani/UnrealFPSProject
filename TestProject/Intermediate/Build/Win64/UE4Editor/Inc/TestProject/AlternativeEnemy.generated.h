// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_AlternativeEnemy_generated_h
#error "AlternativeEnemy.generated.h already included, missing '#pragma once' in AlternativeEnemy.h"
#endif
#define TESTPROJECT_AlternativeEnemy_generated_h

#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_10_DELEGATE \
static inline void FEnemyAltEvent_DelegateWrapper(const FMulticastScriptDelegate& EnemyAltEvent) \
{ \
	EnemyAltEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_SPARSE_DATA
#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireWithSphereSweep);


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireWithSphereSweep);


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlternativeEnemy(); \
	friend struct Z_Construct_UClass_AAlternativeEnemy_Statics; \
public: \
	DECLARE_CLASS(AAlternativeEnemy, AAnimationCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AAlternativeEnemy)


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAlternativeEnemy(); \
	friend struct Z_Construct_UClass_AAlternativeEnemy_Statics; \
public: \
	DECLARE_CLASS(AAlternativeEnemy, AAnimationCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AAlternativeEnemy)


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlternativeEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlternativeEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlternativeEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlternativeEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlternativeEnemy(AAlternativeEnemy&&); \
	NO_API AAlternativeEnemy(const AAlternativeEnemy&); \
public:


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlternativeEnemy(AAlternativeEnemy&&); \
	NO_API AAlternativeEnemy(const AAlternativeEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlternativeEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlternativeEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAlternativeEnemy)


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_11_PROLOG
#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_INCLASS \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AAlternativeEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyScripts_AlternativeEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
