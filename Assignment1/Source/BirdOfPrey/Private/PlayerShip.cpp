// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/PlayerShip.h"

// Sets default values
APlayerShip::APlayerShip()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerShip::InputAxisMoveRight(float AxisValue)
{
}

void APlayerShip::InputAxisMoveUp(float AxisValue)
{
}

void APlayerShip::Died(AController* Killer)
{
}

void APlayerShip::Possessed(AController* NewController)
{
}

void APlayerShip::SetupInputComponent()
{
	InputComponent->BindAction("FireWeapon", IE_Pressed, this, &APlayerShip::OnFirePressed);
	InputComponent->BindAction("FireWeapon", IE_Released, this, &APlayerShip::OnFireReleased);
}

void APlayerShip::OnFirePressed()
{
}

void APlayerShip::OnFireReleased()
{
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue)
{
	return ReturnValue;
}

FVector APlayerShip::CalcOutofBoundsAdjustment(FVector& ReturnValue)
{
	return ReturnValue;
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

void APlayerShip::ShouldSpawnAIController()
{
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently(bool& ReturnValue)
{
	return ReturnValue;
}

void APlayerShip::TakeDamage()
{
}
