// Fill out your copyright notice in the Description page of Project Settings.


#include "BirdOfPrey/Public/BaseGameMode.h"

UBaseGameMode::UBaseGameMode()
{
}

void UBaseGameMode::SomeDataProcessingFunction()
{
}


FVector UBaseGameMode::GetWorldScrollVelocity()
{
	return FVector();
}

void UBaseGameMode::GetWorldCameraActor(ACameraActor* WorldCameraActor) const
{
}

void UBaseGameMode::OnPlayerDied(APlayerController* Player)
{
}

void UBaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
}

void UBaseGameMode::StartGame()
{
}

void UBaseGameMode::EndGame(bool Success)
{
}

void UBaseGameMode::SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> const& ClassList)
{
}

void UBaseGameMode::ResetGame()
{
}

void UBaseGameMode::RespawnPlayer()
{
}

void UBaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float UBaseGameMode::GetDistanceTravelled(float& ReturnValue)
{
	return ReturnValue;
}
