// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

UWeapon::UWeapon()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickInterval = 0.2f;
	CurrentAmmo = MaxAmmo;
}

bool UWeapon::Shoot()
{
	bool retVal=false;
	if (CanShoot())
	{
		canShoot=false;
		retVal=true;
		CurrentAmmo--;
		if (CurrentAmmo < 0)
		{
			CurrentAmmo = 0;
		}
	}
	else
	{
		if (isReloading)
		{
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Can't shoot while reloading"));
		}
		else if (CurrentAmmo <= 0)
		{
			Reload();
		}
	}
	return retVal;
}

bool UWeapon::CanShoot()
{
	if (CurrentAmmo > 0 && !isReloading && canShoot)
	{
		return true;
	}
	return false;
}

bool UWeapon::CanSwitch()
{
	return !isReloading;
}

void UWeapon::Reload()
{
	isReloading = true;
	
}

bool UWeapon::CanReload()
{
	
	return !(CurrentAmmo == MaxAmmo || isReloading);
}

void UWeapon::TickComponent(float DeltaTime, ELevelTick Tick, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, Tick, ThisTickFunction);
	if (isReloading)
	{
		timer += DeltaTime;
		if (timer > ReloadTime)
		{
			timer = 0;
			isReloading = false;
			CurrentAmmo = MaxAmmo;
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::White, TEXT("Ammo reloaded"));
		}
	}
	if(!canShoot)
	{
		fireTimer += DeltaTime;
		if (fireTimer > FireRate)
		{
			fireTimer = 0;
			canShoot = true;
		}
	}
}
