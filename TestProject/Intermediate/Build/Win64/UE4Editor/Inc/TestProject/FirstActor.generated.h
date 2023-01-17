// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TESTPROJECT_FirstActor_generated_h
#error "FirstActor.generated.h already included, missing '#pragma once' in FirstActor.h"
#endif
#define TESTPROJECT_FirstActor_generated_h

#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_SPARSE_DATA
#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapping); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execScanForOverlappedActors); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapping); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execScanForOverlappedActors); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstActor(); \
	friend struct Z_Construct_UClass_AFirstActor_Statics; \
public: \
	DECLARE_CLASS(AFirstActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstActor)


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFirstActor(); \
	friend struct Z_Construct_UClass_AFirstActor_Statics; \
public: \
	DECLARE_CLASS(AFirstActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstActor)


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstActor(AFirstActor&&); \
	NO_API AFirstActor(const AFirstActor&); \
public:


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstActor(AFirstActor&&); \
	NO_API AFirstActor(const AFirstActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstActor)


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_PRIVATE_PROPERTY_OFFSET
#define TestProject_Source_TestProject_MyScripts_FirstActor_h_11_PROLOG
#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_RPC_WRAPPERS \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_INCLASS \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_MyScripts_FirstActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_SPARSE_DATA \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_MyScripts_FirstActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AFirstActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_MyScripts_FirstActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
