// Fill out your copyright notice in the Description page of Project Settings.


#include "DangerousPickable.h"

#include "UHealthComponent.h"

void ADangerousPickable::OnBeginOverlap(AActor* overlappedActor, AActor* otherActor){
	for (auto& SensedClass : PickableClasses)
	{
		if (SensedClass == otherActor->GetClass() || otherActor->GetClass()->IsChildOf(SensedClass))
		{
			if(IsValid(otherActor))
			{
				GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Hit: "+otherActor->GetName()));
				UHealthComponent* Health=(UHealthComponent*)otherActor->GetComponentByClass(UHealthComponent::StaticClass());
				if(IsValid(Health))
				{
					Health->AssignDamage(Damage);
				}
				Destroy();
				break;	
			}
		}
	}
}
