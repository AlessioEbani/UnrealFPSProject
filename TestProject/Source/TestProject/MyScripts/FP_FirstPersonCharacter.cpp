// Copyright Epic Games, Inc. All Rights Reserved.

#include "FP_FirstPersonCharacter.h"

#include <string>

#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AFP_FirstPersonCharacter

AFP_FirstPersonCharacter::AFP_FirstPersonCharacter():AAnimationCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0, 0, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	// // Set so only owner can see mesh
	// GetMesh()->SetupAttachment(FirstPersonCameraComponent);	
	
	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 30.0f, 10.0f);
}


void AFP_FirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//FString string=FString(TEXT("Helath:",HealthComponent->CurrentHealth,"/",HealthComponent->HealthDefaultValue));
	// string+=std::to_string(HealthComponent->CurrentHealth);
	// string+="/";
	// string+=std::to_string(HealthComponent->HealthDefaultValue);
	GEngine->AddOnScreenDebugMessage(100, 4.0f, FColor::White,TEXT(""));
}

void AFP_FirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFP_FirstPersonCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);
	
	// Set up gameplay key bindings

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	
	//Bind Debug event
	//PlayerInputComponent->BindAction("Heal", IE_Released, this, &AFP_FirstPersonCharacter::Heal);
	
	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AAnimationCharacter::OnFire);
	
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AAnimationCharacter::CCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AAnimationCharacter::CUncrouch);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AAnimationCharacter::CAimIn);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AAnimationCharacter::CAimOut);

	//Bind recharge event
	PlayerInputComponent->BindAction("Recharge", IE_Released, this, &AAnimationCharacter::CReload);
	PlayerInputComponent->BindAction("NextWeapon", IE_Released, this, &AAnimationCharacter::SwitchNextWeapon);
	PlayerInputComponent->BindAction("PreviousWeapon", IE_Released, this, &AAnimationCharacter::SwitchPreviousWeapon);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFP_FirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFP_FirstPersonCharacter::MoveRight);
	
	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFP_FirstPersonCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFP_FirstPersonCharacter::LookUpAtRate);
}

