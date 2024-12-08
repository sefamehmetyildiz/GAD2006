// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/ProjectileWeapon.h"

// Sets default values
AProjectileWeapon::AProjectileWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AProjectileWeapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectileWeapon::StartFire()
{
}

void AProjectileWeapon::StopFire()
{
}

void AProjectileWeapon::FireProjectile()
{
}

void AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform, ABaseProjectile*& ReturnValue)
{
}

void AProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber, FTransform& ReturnValue)
{
}

bool AProjectileWeapon::ReadyToFire(bool& ReturnValue)
{
	return ReturnValue;
}

void AProjectileWeapon::IsFiring()
{
}
