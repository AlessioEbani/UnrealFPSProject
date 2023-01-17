// Fill out your copyright notice in the Description page of Project Settings.


#include "ListTrigger.h"

void AListTrigger::BeginPlay()
{
	ObjectArray.Reset();
	Super::BeginPlay();
}

void AListTrigger::OnBeginOverlap(AActor* overlappedActor, AActor* otherActor){
	Super::OnBeginOverlap(overlappedActor, otherActor);
	InsertIntoList(otherActor);
	 
}


void AListTrigger::InsertIntoList(AActor* otherActor)
{
	UClass* OtherActorClass = otherActor->GetClass();
	if(SensoredClasses.IsValidIndex(0))
	{
		for (auto& SensedClass : SensoredClasses)
		{
			if (SensedClass == OtherActorClass || OtherActorClass->IsChildOf(SensedClass))
			{
				if(!ObjectArray.Contains(otherActor))
				{
					ObjectArray.Add(otherActor);
					GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT(""+otherActor->GetName()+" added to list"));
				}
				break;	
			}
			RemoveFromList(otherActor);
		}
	}else{
		if(!ObjectArray.Contains(otherActor))
		{
			ObjectArray.Add(otherActor);
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT(""+otherActor->GetName()+" added to list"));
		}
	}
}


void AListTrigger::OnEndOverlap(AActor* overlappedActor, AActor* otherActor)
{
	Super::OnEndOverlap(overlappedActor, otherActor);
	RemoveFromList(otherActor);
}

void AListTrigger::OnOverlapping(AActor* OverlappedActor, AActor* OtherActor)
{
	Super::OnOverlapping(OverlappedActor, OtherActor);
	InsertIntoList(OtherActor);
}


void AListTrigger::RemoveFromList( AActor* otherActor)
{
	if (ObjectArray.Contains(otherActor))
	{
		ObjectArray.Remove(otherActor);
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red, TEXT(""+otherActor->GetName()+" removed from list"));
	}
}


