// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyScripts/Pickable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickable() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_APickable_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_APickable();
	TESTPROJECT_API UClass* Z_Construct_UClass_AFirstActor();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APickable::StaticRegisterNativesAPickable()
	{
	}
	UClass* Z_Construct_UClass_APickable_NoRegister()
	{
		return APickable::StaticClass();
	}
	struct Z_Construct_UClass_APickable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PickableClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickableClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PickableClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFirstActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyScripts/Pickable.h" },
		{ "ModuleRelativePath", "MyScripts/Pickable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses_Inner = { "PickableClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "MyScripts/Pickable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses = { "PickableClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickable, PickableClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickable_Statics::NewProp_PickableClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickable_Statics::ClassParams = {
		&APickable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickable, 2050221104);
	template<> TESTPROJECT_API UClass* StaticClass<APickable>()
	{
		return APickable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickable(Z_Construct_UClass_APickable, &APickable::StaticClass, TEXT("/Script/TestProject"), TEXT("APickable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
