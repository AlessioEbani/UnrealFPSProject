// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FirstActor.h"
#include "Pickable.generated.h"

UCLASS()
class TESTPROJECT_API APickable : public AFirstActor
{
	GENERATED_BODY()
	virtual void OnBeginOverlap(AActor* overlappedActor, AActor* otherActor) override;

public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings")
	TArray<TSubclassOf<AActor>> PickableClasses={};
};
