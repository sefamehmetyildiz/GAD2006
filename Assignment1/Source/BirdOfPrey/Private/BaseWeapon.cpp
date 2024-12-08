// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseWeapon::ActorBeginOverlap(AActor* OtherActor)
{
}

void ABaseWeapon::StartFire()
{
}

void ABaseWeapon::StopFire()
{
}

void ABaseWeapon::PlayFireEffect()
{
}

FTransform ABaseWeapon::GetFireEffectSpawnTransform() const
{
	return FTransform();
}

bool ABaseWeapon::HasFinishedFiring(bool& ReturnValue) const
{
	return ReturnValue;
}

bool ABaseWeapon::IsFiring(bool& ReturnValue) const
{
	return ReturnValue;
}
