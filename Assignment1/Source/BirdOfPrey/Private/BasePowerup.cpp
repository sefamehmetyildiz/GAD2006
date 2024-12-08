// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BasePowerup.h"

// Sets default values
ABasePowerup::ABasePowerup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABasePowerup::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABasePowerup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABasePowerup::Reset()
{
}

void ABasePowerup::ActorBeginOverlap(AActor* OtherActor)
{
}

void ABasePowerup::Apply(APlayerShip* PlayerShip)
{
}

void ABasePowerup::PlayEffects()
{
}
