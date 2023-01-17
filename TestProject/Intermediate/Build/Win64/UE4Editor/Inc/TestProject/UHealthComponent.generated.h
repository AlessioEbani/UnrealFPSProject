// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_UHealthComponent_generated_h
#error "UHealthComponent.generated.h already included, missing '#pragma once' in UHealthComponent.h"
#endif
#define TESTPROJECT_UHealthComponent_generated_h

#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_9_DELEGATE \
static inline void FHealthEvent_DelegateWrapper(const FMulticastScriptDelegate& HealthEvent) \
{ \
	HealthEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_SPARSE_DATA
#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssignDamage);


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignDamage);


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_11_PROLOG
#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_INCLASS \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_UHealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyScripts_UHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
