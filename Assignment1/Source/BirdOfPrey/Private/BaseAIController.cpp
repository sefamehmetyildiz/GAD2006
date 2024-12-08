// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BaseAIController.h"

UBaseAIController::UBaseAIController()
{
}

void UBaseAIController::Tick(float DeltaTime)
{
}

void UBaseAIController::OnPossess(APawn PossessedPawn)
{
}

void UBaseAIController::SelectTarget()
{
}

void UBaseAIController::AimAt(FVector AimVector)
{
}

void UBaseAIController::CheckFire()
{
}

void UBaseAIController::UpdateAim()
{
}

bool UBaseAIController::ShouldStartFire(bool& ReturnValue)
{
	return ReturnValue;
}

bool UBaseAIController::ShouldStopFire(bool& ReturnValue)
{
	return ReturnValue;
}

void UBaseAIController::StartFire()
{
}

void UBaseAIController::StopFire()
{
}

bool UBaseAIController::ShouldUpdateAim(bool& ReturnValue)
{
	return ReturnValue;
}
