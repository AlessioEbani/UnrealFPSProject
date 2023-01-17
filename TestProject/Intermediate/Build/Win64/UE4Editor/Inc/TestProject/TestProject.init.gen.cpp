// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProject_init() {}
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_HealthEvent__DelegateSignature();
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature();
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TestProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_HealthEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_EnemyAltEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFA059B69,
				0x2B8CB8BC,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
