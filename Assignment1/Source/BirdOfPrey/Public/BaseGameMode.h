// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <BaseGameAgent.h>
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/PlayerController.h"
#include "UObject/NoExportTypes.h"
#include "BaseGameMode.generated.h"


/**
 * 
 */
UCLASS()
class BIRDOFPREY_API UBaseGameMode : public UObject
{
	GENERATED_BODY()

public:
	// Constructor
	UBaseGameMode();

	void SomeDataProcessingFunction();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetWorldCameraActor(ACameraActor* WorldCameraActor) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(APlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> const& ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetDistanceTravelled(float& ReturnValue);
};
