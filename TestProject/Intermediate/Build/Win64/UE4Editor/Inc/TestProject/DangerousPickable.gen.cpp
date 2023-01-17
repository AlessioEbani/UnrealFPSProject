// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyScripts/DangerousPickable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDangerousPickable() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_ADangerousPickable_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ADangerousPickable();
	TESTPROJECT_API UClass* Z_Construct_UClass_APickable();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void ADangerousPickable::StaticRegisterNativesADangerousPickable()
	{
	}
	UClass* Z_Construct_UClass_ADangerousPickable_NoRegister()
	{
		return ADangerousPickable::StaticClass();
	}
	struct Z_Construct_UClass_ADangerousPickable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADangerousPickable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickable,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADangerousPickable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyScripts/DangerousPickable.h" },
		{ "ModuleRelativePath", "MyScripts/DangerousPickable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADangerousPickable_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "MyScripts/DangerousPickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADangerousPickable_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADangerousPickable, Damage), METADATA_PARAMS(Z_Construct_UClass_ADangerousPickable_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADangerousPickable_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADangerousPickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADangerousPickable_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADangerousPickable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADangerousPickable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADangerousPickable_Statics::ClassParams = {
		&ADangerousPickable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADangerousPickable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADangerousPickable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADangerousPickable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADangerousPickable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADangerousPickable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADangerousPickable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADangerousPickable, 1718351029);
	template<> TESTPROJECT_API UClass* StaticClass<ADangerousPickable>()
	{
		return ADangerousPickable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADangerousPickable(Z_Construct_UClass_ADangerousPickable, &ADangerousPickable::StaticClass, TEXT("/Script/TestProject"), TEXT("ADangerousPickable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADangerousPickable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
