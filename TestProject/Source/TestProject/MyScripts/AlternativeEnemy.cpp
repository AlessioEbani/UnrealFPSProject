// Fill out your copyright notice in the Description page of Project Settings.


#include "AlternativeEnemy.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AAlternativeEnemy::AAlternativeEnemy()
{
}

// Called when the game starts or when spawned
void AAlternativeEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAlternativeEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAlternativeEnemy::FireWithSphereSweep() {

	FCollisionQueryParams Params;
	// Ignore the enemy's pawn
	AActor* Myself = Cast<AActor>(this);
	Params.AddIgnoredActor(Myself);

	float WeaponRange = WeaponSlot[currentWeaponIndex]->Range;
	//float WeaponOffset = WeaponSlot.Offset;
	float WeaponRadius = WeaponSlot[currentWeaponIndex]->HitRadius;

	FCollisionShape CollShape = FCollisionShape::MakeSphere(WeaponRadius);
	
	FVector ZForward = FVector::UpVector; //* WeaponOffset;
	FVector Start = GetActorLocation() + ZForward;
	FVector End = Start + (GetActorForwardVector() * WeaponRange);
	FHitResult Hit;

	bool bHit = GetWorld()->SweepSingleByChannel(Hit, Start, End, FQuat::Identity, ECC_Pawn, CollShape, Params);
	OnCharacterTraceLine.Broadcast();

	if (bHit) {
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponSlot->HitSound, Hit.ImpactPoint);
		AAnimationCharacter* HitActor = Cast<AAnimationCharacter>(Hit.Actor.Get());

		if (HitActor) {
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Green, TEXT("Hit! Actor with lige"));
			UHealthComponent* variable=HitActor->FindComponentByClass<UHealthComponent>();
			if(IsValid(variable))
			{
				variable->AssignDamage(WeaponSlot[currentWeaponIndex]->Damage);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Green, TEXT("Hit! " + Hit.Actor.Get()->GetName()));
		}		
	}
}

