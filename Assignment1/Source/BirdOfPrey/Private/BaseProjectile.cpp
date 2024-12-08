// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BaseProjectile.h"

// Sets default values
ABaseProjectile::ABaseProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseProjectile::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}

void ABaseProjectile::Reset()
{
}

void ABaseProjectile::CleanUpAndDestroy()
{
}


void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float Damage)
{
}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}

void ABaseProjectile::GetInstigatorCollisionChannel(ECollisionChannel& ReturnValue) const
{
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget(bool& ReturnValue)
{
	return ReturnValue;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile(bool& ReturnValue)
{
	return ReturnValue;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}
