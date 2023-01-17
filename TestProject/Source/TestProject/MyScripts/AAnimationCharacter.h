// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UHealthComponent.h"
#include "Weapon.h"
#include "GameFramework/Character.h"
#include "AAnimationCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterDelegate);

UCLASS()
class AAnimationCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAnimationCharacter();
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintAssignable)
	FCharacterDelegate Crouched;
	UPROPERTY(BlueprintAssignable)
	FCharacterDelegate Uncrouched;
	UPROPERTY(BlueprintAssignable)
	FCharacterDelegate AimedIn;
	UPROPERTY(BlueprintAssignable)
	FCharacterDelegate AimedOut;
	UPROPERTY(BlueprintAssignable)
	FCharacterDelegate Reloaded;

	UPROPERTY(Category=Character, EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;
	
	UPROPERTY(Category=Character, EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(Category=Character, EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	UAnimMontage* ReloadMontage;
	
	UPROPERTY(Category=Character, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"))
	UHealthComponent* HealthComponent;

	UPROPERTY(Category=Gameplay, EditAnywhere, BlueprintReadWrite)
	TArray<UWeapon*> WeaponSlot;

	
	UFUNCTION()
	UWeapon* GetCurrentWeapon(){return WeaponSlot[currentWeaponIndex];}; 
	//UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=GamePlay)
	//UAIPerceptionStimuliSourceComponent* AiPerceptionStimuliSourceComponent;
	
	UFUNCTION(BlueprintCallable)
	virtual void CCrouch();
	UFUNCTION(BlueprintCallable)
	virtual void CUncrouch();
	UFUNCTION(BlueprintCallable)
	virtual void CAimIn();
	UFUNCTION(BlueprintCallable)
	virtual void CAimOut();
	UFUNCTION(BlueprintCallable)
	virtual void CReload();
	UFUNCTION(BlueprintCallable)
	virtual void CDeath();
	
	bool IsCrouched;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Gameplay)
	int currentWeaponIndex;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/** Fires a virtual projectile. */
	UFUNCTION(BlueprintCallable)
	void OnFire();
	
	UFUNCTION(BlueprintCallable)
	void Reload();
	UFUNCTION()
	void SwitchWeapon(bool next);
	UFUNCTION()
	void SwitchNextWeapon();
	UFUNCTION()
	void SwitchPreviousWeapon();
	UFUNCTION()
	void SetupWeapon();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/* 
	 * Performs a trace between two points
	 * 
	 * @param	StartTrace	Trace starting point
	 * @param	EndTrac		Trace end point
	 * @returns FHitResult returns a struct containing trace result - who/what the trace hit etc.
	 */
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const;

	// Called to bind functionality to input
	UFUNCTION()
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

};
