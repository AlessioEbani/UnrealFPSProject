// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyScripts/AlternativeEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlternativeEnemy() {}
// Cross Module References
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	TESTPROJECT_API UClass* Z_Construct_UClass_AAlternativeEnemy_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_AAlternativeEnemy();
	TESTPROJECT_API UClass* Z_Construct_UClass_AAnimationCharacter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AlternativeEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "EnemyAltEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AAlternativeEnemy::execFireWithSphereSweep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWithSphereSweep();
		P_NATIVE_END;
	}
	void AAlternativeEnemy::StaticRegisterNativesAAlternativeEnemy()
	{
		UClass* Class = AAlternativeEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireWithSphereSweep", &AAlternativeEnemy::execFireWithSphereSweep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AlternativeEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlternativeEnemy, nullptr, "FireWithSphereSweep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAlternativeEnemy_NoRegister()
	{
		return AAlternativeEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAlternativeEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterTraceLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterTraceLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlternativeEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAnimationCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAlternativeEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAlternativeEnemy_FireWithSphereSweep, "FireWithSphereSweep" }, // 4137442432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlternativeEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyScripts/AlternativeEnemy.h" },
		{ "ModuleRelativePath", "MyScripts/AlternativeEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlternativeEnemy_Statics::NewProp_OnCharacterTraceLine_MetaData[] = {
		{ "ModuleRelativePath", "MyScripts/AlternativeEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAlternativeEnemy_Statics::NewProp_OnCharacterTraceLine = { "OnCharacterTraceLine", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAlternativeEnemy, OnCharacterTraceLine), Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAlternativeEnemy_Statics::NewProp_OnCharacterTraceLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAlternativeEnemy_Statics::NewProp_OnCharacterTraceLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAlternativeEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlternativeEnemy_Statics::NewProp_OnCharacterTraceLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlternativeEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlternativeEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAlternativeEnemy_Statics::ClassParams = {
		&AAlternativeEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAlternativeEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAlternativeEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAlternativeEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAlternativeEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAlternativeEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAlternativeEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlternativeEnemy, 3675600022);
	template<> TESTPROJECT_API UClass* StaticClass<AAlternativeEnemy>()
	{
		return AAlternativeEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlternativeEnemy(Z_Construct_UClass_AAlternativeEnemy, &AAlternativeEnemy::StaticClass, TEXT("/Script/TestProject"), TEXT("AAlternativeEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlternativeEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
