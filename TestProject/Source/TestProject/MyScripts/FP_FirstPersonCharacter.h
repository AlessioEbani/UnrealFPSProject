// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AAnimationCharacter.h"
#include "GameFramework/Character.h"
#include "FP_FirstPersonCharacter.generated.h"


class UCameraComponent;
UCLASS()


class TESTPROJECT_API AFP_FirstPersonCharacter : public AAnimationCharacter
{
	GENERATED_BODY()
	
	

public:
	AFP_FirstPersonCharacter();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }


	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
};

