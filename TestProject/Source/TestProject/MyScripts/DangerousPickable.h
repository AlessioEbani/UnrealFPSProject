// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickable.h"
#include "DangerousPickable.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ADangerousPickable : public APickable
{
	GENERATED_BODY()
	void OnBeginOverlap(AActor* overlappedActor, AActor* otherActor);

public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings")
	float Damage;
	
};
