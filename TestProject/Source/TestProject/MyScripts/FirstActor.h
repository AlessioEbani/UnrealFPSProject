// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "FirstActor.generated.h"

UCLASS()
class TESTPROJECT_API AFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UBoxComponent* boxComponent;
	//USceneComponent* rootComponent;
	// Sets default values for this actor's properties
	AFirstActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	enum OverlapType{Begin,Overlapping};
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void BeginOverlap(AActor* overlappedActor, AActor* otherActor);
	UFUNCTION()
	void EndOverlap(AActor* overlappedActor, AActor* otherActor);
	UFUNCTION()
	void ScanForOverlappedActors();
	UFUNCTION()
	virtual void OnBeginOverlap(AActor* overlappedActor, AActor* otherActor);
	UFUNCTION()
	virtual void OnEndOverlap(AActor* overlappedActor, AActor* otherActor);
	UFUNCTION()
	virtual void OnOverlapping(AActor* overlappedActor, AActor* otherActor);

	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Settings")
	TArray<AActor*> OverlappedActors;
	

};
