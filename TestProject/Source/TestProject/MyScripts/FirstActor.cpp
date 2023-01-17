// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstActor.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFirstActor::AFirstActor()
{
	PrimaryActorTick.TickInterval=0.2f;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	boxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));

	boxComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFirstActor::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AFirstActor::BeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AFirstActor::EndOverlap);
	OverlappedActors.Reset();
	ScanForOverlappedActors();
}

// Called every frame
void AFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ScanForOverlappedActors();
}

void AFirstActor::ScanForOverlappedActors()
{
	TArray<AActor*> overlappingActors;
	boxComponent->GetOverlappingActors(overlappingActors);
	for (auto OverlappingActor : overlappingActors)
	{
		if(!OverlappedActors.Contains(OverlappingActor))
		{
			OnBeginOverlap(this,OverlappingActor);
		}else
		{
			OnOverlapping(this,OverlappingActor);
		}
	}
}


void AFirstActor::BeginOverlap(AActor* overlappedActor, AActor* otherActor)
{
	if (!IsValid(overlappedActor) || !IsValid(otherActor))
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red,TEXT("Actor not valid!"));
		return;
	}
	
	OnBeginOverlap(overlappedActor,otherActor);
	
}

void AFirstActor::EndOverlap(AActor* overlappedActor, AActor* otherActor)
{
	if (!IsValid(overlappedActor) || !IsValid(otherActor))
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red,TEXT("Actor not valid!"));
		return;
	}
	OnEndOverlap(overlappedActor,otherActor);
	
}

void AFirstActor::OnBeginOverlap(AActor* overlappedActor, AActor* otherActor)
{
	OverlappedActors.Add(otherActor);
	//GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Begin Overlap: "+otherActor->GetName()));
}

void AFirstActor::OnEndOverlap(AActor* overlappedActor, AActor* otherActor)
{
	if(OverlappedActors.Contains(otherActor))
	{
		OverlappedActors.Remove(otherActor);
		//GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red, TEXT("End Overlap: "+otherActor->GetName()));
	}
}

void AFirstActor::OnOverlapping(AActor* overlappedActor, AActor* otherActor)
{
	
}


