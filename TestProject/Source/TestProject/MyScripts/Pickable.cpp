// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickable.h"


void APickable::OnBeginOverlap(AActor* overlappedActor, AActor* otherActor){
	for (auto& SensedClass : PickableClasses)
	{
		if (SensedClass == otherActor->GetClass() || otherActor->GetClass()->IsChildOf(SensedClass))
		{
			Destroy();
			break;	
		}
	}
}

