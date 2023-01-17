// Fill out your copyright notice in the Description page of Project Settings.


#include "AAnimationCharacter.h"

#include <string>

#define COLLISION_WEAPON		ECC_GameTraceChannel1

// Sets default values
AAnimationCharacter::AAnimationCharacter()
{
	currentWeaponIndex=0;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	// Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	// Mesh1P->SetOnlyOwnerSee(true);	// Attach mesh to FirstPersonCameraComponent
	// Mesh1P->bCastDynamicShadow = false;			// Disallow mesh to cast dynamic shadows
	// Mesh1P->CastShadow = false;
	WeaponSlot.Add(CreateDefaultSubobject<UWeapon>(TEXT("FirstWeapon")));
	WeaponSlot.Add(CreateDefaultSubobject<UWeapon>(TEXT("SecondaryWeapon")));
	WeaponSlot.Add(CreateDefaultSubobject<UWeapon>(TEXT("ThirdWeapon")));

	
	// Create a gun mesh component
	
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	WeaponMesh =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetStaticMesh(WeaponSlot[currentWeaponIndex]->Mesh);
	WeaponMesh->bCastDynamicShadow = false;		// Disallow mesh to cast dynamic shadows
	WeaponMesh->CastShadow = false;			// Disallow mesh to cast other shadows
	WeaponMesh->SetupAttachment(GetMesh(), TEXT("hand_rSocket"));
	WeaponMesh->AttachToComponent(GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,"hand_rSocket");
	
	
}

void AAnimationCharacter::BeginPlay()
{
	Super::BeginPlay();
	SetupWeapon();
}



void AAnimationCharacter::CCrouch()
{
	if(CanCrouch())
	{
		IsCrouched=true;
		Crouch();
		Crouched.Broadcast();
	}
}

void AAnimationCharacter::CUncrouch()
{
	if(IsCrouched)
	{
		UnCrouch();
		Uncrouched.Broadcast();
	}
}

void AAnimationCharacter::CAimIn()
{
	AimedIn.Broadcast();
}

void AAnimationCharacter::CAimOut()
{
	AimedOut.Broadcast();
}

void AAnimationCharacter::CReload()
{
	if(WeaponSlot.IsValidIndex(currentWeaponIndex))
	{
		if(WeaponSlot[currentWeaponIndex]->CanReload())
		{
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Reloading..."));
			if (WeaponSlot[currentWeaponIndex]->ReloadTime!=0)
			{
				float montageTime = ReloadMontage->SequenceLength;
				float rate = montageTime / WeaponSlot[currentWeaponIndex]->ReloadTime;
				PlayAnimMontage(ReloadMontage, rate);
			}
			WeaponSlot[currentWeaponIndex]->Reload();
			Reloaded.Broadcast();
		}else
		{
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Can't reload"));
		}
	}
}

void AAnimationCharacter::CDeath()
{
}

// Called every frame
void AAnimationCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAnimationCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AAnimationCharacter::OnFire()
{
	if(!WeaponSlot[currentWeaponIndex]->Shoot())
	{
		return;
	}

	// Try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}

	const FVector ShootDir = FVector::ZeroVector;

	const FVector ZForward = FVector::UpVector; //* WeaponOffset;
	const FVector Start = GetActorLocation() + ZForward;
	const FVector End = Start + (GetActorForwardVector() * WeaponSlot[currentWeaponIndex]->Range);

	// Check for impact
	const FHitResult Impact = WeaponTrace(Start, End);

	// Deal with impact
	AActor* DamagedActor = Impact.GetActor();
	UPrimitiveComponent* DamagedComponent = Impact.GetComponent();

	// If we hit an actor, with a component that is simulating physics, apply an impulse
	if ((DamagedActor != nullptr) && (DamagedActor != this) && (DamagedComponent != nullptr) && DamagedComponent->IsSimulatingPhysics())
	{
		DamagedComponent->AddImpulseAtLocation(ShootDir * WeaponSlot[currentWeaponIndex]->Damage, Impact.Location);
	}
	if(IsValid(DamagedActor))
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Hit: "+DamagedActor->GetName()));
		AAnimationCharacter* HitActor = Cast<AAnimationCharacter>(DamagedActor);
		if(IsValid(HitActor))
		{
			if(IsValid(HitActor->HealthComponent))
			{
				//HitActor->HealthComponent->AssignDamage(WeaponSlot[currentWeaponIndex]->Damage);
				GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Dmg"));
			}
		}
	}
}

void AAnimationCharacter::Reload()
{
	WeaponSlot[currentWeaponIndex]->Reload();
}

void AAnimationCharacter::SwitchWeapon(bool next)
{
	if(!WeaponSlot[currentWeaponIndex]->CanSwitch()){
		return;
	}	
	if(next){
		currentWeaponIndex=++currentWeaponIndex%WeaponSlot.Num();
	}else
	{
		currentWeaponIndex--;
		if(currentWeaponIndex<0)
		{
			currentWeaponIndex=WeaponSlot.Num()-1;
		}
	}
	SetupWeapon();
}

void AAnimationCharacter::SwitchNextWeapon()
{
	SwitchWeapon(true);
}

void AAnimationCharacter::SwitchPreviousWeapon()
{
	SwitchWeapon(false);
}

void AAnimationCharacter::SetupWeapon()
{
	WeaponMesh->SetStaticMesh(WeaponSlot[currentWeaponIndex]->Mesh);
	ReloadMontage=WeaponSlot[currentWeaponIndex]->reloadMontage;
}

void AAnimationCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// Add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AAnimationCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// Add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AAnimationCharacter::TurnAtRate(float Rate)
{
	// Calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AAnimationCharacter::LookUpAtRate(float Rate)
{
	// Calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

FHitResult AAnimationCharacter::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const
{
	// Perform trace to retrieve hit info
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(WeaponTrace), true, GetInstigator());
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, COLLISION_WEAPON, TraceParams);

	return Hit;
}
