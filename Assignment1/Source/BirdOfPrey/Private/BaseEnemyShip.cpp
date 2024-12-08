// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BaseEnemyShip.h"

// Sets default values
ABaseEnemyShip::ABaseEnemyShip()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseEnemyShip::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseEnemyShip::ActorBeginOverlap(AActor* OtherActor)
{
}

void ABaseEnemyShip::Died(AController* Killer)
{
}

void ABaseEnemyShip::Move()
{
}
