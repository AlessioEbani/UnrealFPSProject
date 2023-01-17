// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FirstActor.h"
#include "ListTrigger.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API AListTrigger : public AFirstActor
{
	GENERATED_BODY()
	virtual void BeginPlay() override;

public:
	virtual void OnBeginOverlap(AActor* overlappedActor, AActor* otherActor) override;
	virtual void OnEndOverlap(AActor* overlappedActor, AActor* otherActor) override;
	virtual void OnOverlapping(AActor* overlappedActor, AActor* otherActor) override;
	void InsertIntoList(AActor* otherActor);
	void RemoveFromList(AActor* otherActor);
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Settings")
	TArray<TSubclassOf<AActor>> SensoredClasses={ACharacter::StaticClass()};
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Settings")
	TArray<AActor*> ObjectArray;
};
