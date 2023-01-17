// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyScripts/ListTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListTrigger() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_AListTrigger_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_AListTrigger();
	TESTPROJECT_API UClass* Z_Construct_UClass_AFirstActor();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AListTrigger::StaticRegisterNativesAListTrigger()
	{
	}
	UClass* Z_Construct_UClass_AListTrigger_NoRegister()
	{
		return AListTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AListTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SensoredClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensoredClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensoredClasses;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AListTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFirstActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AListTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyScripts/ListTrigger.h" },
		{ "ModuleRelativePath", "MyScripts/ListTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses_Inner = { "SensoredClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "MyScripts/ListTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses = { "SensoredClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AListTrigger, SensoredClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "MyScripts/ListTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AListTrigger, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AListTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AListTrigger_Statics::NewProp_SensoredClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AListTrigger_Statics::NewProp_ObjectArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AListTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AListTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AListTrigger_Statics::ClassParams = {
		&AListTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AListTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AListTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AListTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AListTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AListTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AListTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AListTrigger, 2944413648);
	template<> TESTPROJECT_API UClass* StaticClass<AListTrigger>()
	{
		return AListTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AListTrigger(Z_Construct_UClass_AListTrigger, &AListTrigger::StaticClass, TEXT("/Script/TestProject"), TEXT("AListTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AListTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
