// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BaseStationaryEnemy.h"

// Sets default values
ABaseStationaryEnemy::ABaseStationaryEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseStationaryEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseStationaryEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseStationaryEnemy::Died(AController* Killer)
{
}
