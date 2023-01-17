// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreMinimal.h"
#include "Weapon.generated.h"

UCLASS( )
class UWeapon : public UActorComponent
{
	GENERATED_BODY()
public:
	
	UWeapon();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float Damage=10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float HitRadius=2.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float Range=5000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float MaxAmmo=10.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float ReloadTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float CurrentAmmo=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	bool AutomaticFire=false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* reloadMontage=0;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	// UEffect* HitEFX;
	
	UFUNCTION()
	bool Shoot();
	UFUNCTION()
	bool CanShoot();
	UFUNCTION()
	bool CanSwitch();
	UFUNCTION()
	void Reload();
	UFUNCTION()
	bool CanReload();
	virtual void TickComponent(float DeltaTime, ELevelTick Tick, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	bool isReloading=false;
	float timer=0;
	float fireTimer=0;
	bool canShoot=false;
};


