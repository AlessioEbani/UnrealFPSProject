// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyScripts/AAnimationCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAnimationCharacter() {}
// Cross Module References
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	TESTPROJECT_API UClass* Z_Construct_UClass_AAnimationCharacter_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_AAnimationCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TESTPROJECT_API UClass* Z_Construct_UClass_UWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "CharacterDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execSetupPlayerInputComponent)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_PlayerInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPlayerInputComponent(Z_Param_PlayerInputComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execSetupWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execSwitchPreviousWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchPreviousWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execSwitchNextWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchNextWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execSwitchWeapon)
	{
		P_GET_UBOOL(Z_Param_next);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWeapon(Z_Param_next);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execCDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execCReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execCAimOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CAimOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execCAimIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CAimIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execCUncrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CUncrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execCCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimationCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	void AAnimationCharacter::StaticRegisterNativesAAnimationCharacter()
	{
		UClass* Class = AAnimationCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CAimIn", &AAnimationCharacter::execCAimIn },
			{ "CAimOut", &AAnimationCharacter::execCAimOut },
			{ "CCrouch", &AAnimationCharacter::execCCrouch },
			{ "CDeath", &AAnimationCharacter::execCDeath },
			{ "CReload", &AAnimationCharacter::execCReload },
			{ "CUncrouch", &AAnimationCharacter::execCUncrouch },
			{ "GetCurrentWeapon", &AAnimationCharacter::execGetCurrentWeapon },
			{ "OnFire", &AAnimationCharacter::execOnFire },
			{ "Reload", &AAnimationCharacter::execReload },
			{ "SetupPlayerInputComponent", &AAnimationCharacter::execSetupPlayerInputComponent },
			{ "SetupWeapon", &AAnimationCharacter::execSetupWeapon },
			{ "SwitchNextWeapon", &AAnimationCharacter::execSwitchNextWeapon },
			{ "SwitchPreviousWeapon", &AAnimationCharacter::execSwitchPreviousWeapon },
			{ "SwitchWeapon", &AAnimationCharacter::execSwitchWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAnimationCharacter_CAimIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_CAimIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_CAimIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "CAimIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_CAimIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_CAimIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_CAimIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_CAimIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_CAimOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_CAimOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_CAimOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "CAimOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_CAimOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_CAimOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_CAimOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_CAimOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_CCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_CCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=GamePlay)\n//UAIPerceptionStimuliSourceComponent* AiPerceptionStimuliSourceComponent;\n" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=GamePlay)\nUAIPerceptionStimuliSourceComponent* AiPerceptionStimuliSourceComponent;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_CCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "CCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_CCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_CCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_CCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_CCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_CDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_CDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_CDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "CDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_CDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_CDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_CDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_CDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_CReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_CReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_CReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "CReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_CReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_CReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_CReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_CReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_CUncrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_CUncrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_CUncrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "CUncrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_CUncrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_CUncrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_CUncrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_CUncrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics
	{
		struct AnimationCharacter_eventGetCurrentWeapon_Parms
		{
			UWeapon* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_UWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(AnimationCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fires a virtual projectile. */" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "Fires a virtual projectile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics
	{
		struct AnimationCharacter_eventSetupPlayerInputComponent_Parms
		{
			UInputComponent* PlayerInputComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCharacter_eventSetupPlayerInputComponent_Parms, PlayerInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called to bind functionality to input\n" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "Called to bind functionality to input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "SetupPlayerInputComponent", nullptr, nullptr, sizeof(AnimationCharacter_eventSetupPlayerInputComponent_Parms), Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_SetupWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_SetupWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_SetupWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "SetupWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_SetupWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SetupWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_SetupWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_SetupWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "SwitchNextWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "SwitchPreviousWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics
	{
		struct AnimationCharacter_eventSwitchWeapon_Parms
		{
			bool next;
		};
		static void NewProp_next_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_next;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::NewProp_next_SetBit(void* Obj)
	{
		((AnimationCharacter_eventSwitchWeapon_Parms*)Obj)->next = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::NewProp_next = { "next", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationCharacter_eventSwitchWeapon_Parms), &Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::NewProp_next_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::NewProp_next,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimationCharacter, nullptr, "SwitchWeapon", nullptr, nullptr, sizeof(AnimationCharacter_eventSwitchWeapon_Parms), Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAnimationCharacter_NoRegister()
	{
		return AAnimationCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAnimationCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Crouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uncrouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Uncrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AimedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimedOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AimedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Reloaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSlot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWeaponIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentWeaponIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimationCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAnimationCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnimationCharacter_CAimIn, "CAimIn" }, // 2449535560
		{ &Z_Construct_UFunction_AAnimationCharacter_CAimOut, "CAimOut" }, // 965473625
		{ &Z_Construct_UFunction_AAnimationCharacter_CCrouch, "CCrouch" }, // 2932341222
		{ &Z_Construct_UFunction_AAnimationCharacter_CDeath, "CDeath" }, // 1661560691
		{ &Z_Construct_UFunction_AAnimationCharacter_CReload, "CReload" }, // 14773556
		{ &Z_Construct_UFunction_AAnimationCharacter_CUncrouch, "CUncrouch" }, // 1877378352
		{ &Z_Construct_UFunction_AAnimationCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 507411990
		{ &Z_Construct_UFunction_AAnimationCharacter_OnFire, "OnFire" }, // 1622061985
		{ &Z_Construct_UFunction_AAnimationCharacter_Reload, "Reload" }, // 1533883393
		{ &Z_Construct_UFunction_AAnimationCharacter_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 2664325412
		{ &Z_Construct_UFunction_AAnimationCharacter_SetupWeapon, "SetupWeapon" }, // 2283089948
		{ &Z_Construct_UFunction_AAnimationCharacter_SwitchNextWeapon, "SwitchNextWeapon" }, // 637999450
		{ &Z_Construct_UFunction_AAnimationCharacter_SwitchPreviousWeapon, "SwitchPreviousWeapon" }, // 1504114182
		{ &Z_Construct_UFunction_AAnimationCharacter_SwitchWeapon, "SwitchWeapon" }, // 2088670204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyScripts/AAnimationCharacter.h" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Crouched_MetaData[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Crouched = { "Crouched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, Crouched), Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Crouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Crouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Uncrouched_MetaData[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Uncrouched = { "Uncrouched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, Uncrouched), Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Uncrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Uncrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedIn_MetaData[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedIn = { "AimedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, AimedIn), Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedOut_MetaData[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedOut = { "AimedOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, AimedOut), Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Reloaded_MetaData[] = {
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Reloaded = { "Reloaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, Reloaded), Z_Construct_UDelegateFunction_TestProject_CharacterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Reloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Reloaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_HealthComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot_Inner = { "WeaponSlot", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, WeaponSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_currentWeaponIndex_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyScripts/AAnimationCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_currentWeaponIndex = { "currentWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimationCharacter, currentWeaponIndex), METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_currentWeaponIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_currentWeaponIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnimationCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Crouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Uncrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_AimedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Reloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_ReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_WeaponSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimationCharacter_Statics::NewProp_currentWeaponIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimationCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnimationCharacter_Statics::ClassParams = {
		&AAnimationCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAnimationCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimationCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimationCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnimationCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnimationCharacter, 1395988114);
	template<> TESTPROJECT_API UClass* StaticClass<AAnimationCharacter>()
	{
		return AAnimationCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnimationCharacter(Z_Construct_UClass_AAnimationCharacter, &AAnimationCharacter::StaticClass, TEXT("/Script/TestProject"), TEXT("AAnimationCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimationCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
