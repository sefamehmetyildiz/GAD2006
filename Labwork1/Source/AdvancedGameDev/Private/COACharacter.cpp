// Fill out your copyright notice in the Description page of Project Settings.


#include "COACharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACOACharacter::ACOACharacter() :
	Health(100),
	MaxHealth(100),
	HealingRate(10),
	WalkSpeed(600),
	bDead(false)

{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);

}

// Called when the game starts or when spawned
void ACOACharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACOACharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!bDead) {
		Health =FMath::Min(MaxHealth, Health + HealingRate * DeltaTime);
	}
}



