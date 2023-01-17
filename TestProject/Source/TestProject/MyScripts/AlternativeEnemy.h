// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AAnimationCharacter.h"
#include "GameFramework/Character.h"
#include "AlternativeEnemy.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyAltEvent);
UCLASS()
class TESTPROJECT_API AAlternativeEnemy : public AAnimationCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAlternativeEnemy();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	void FireWithSphereSweep();
	
	UPROPERTY(BlueprintAssignable)
	FEnemyAltEvent OnCharacterTraceLine;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
