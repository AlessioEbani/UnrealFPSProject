// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthEvent);

UCLASS()
class UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

	UPROPERTY(Category=Character, EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	float HealthDefaultValue=100.f;

	UPROPERTY(Category=Character, EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	float CurrentHealth=100.f;

	UPROPERTY(BlueprintAssignable)
	FHealthEvent OnHealthZero;
	
	UPROPERTY(BlueprintAssignable)
	FHealthEvent OnTakeDamage;

	UFUNCTION(BlueprintCallable)
	void AssignDamage(float amount);
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

		
};
