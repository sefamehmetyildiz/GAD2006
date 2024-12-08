// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API UBaseAIController : public UObject
{
	GENERATED_BODY()

public:
	UBaseAIController();

	virtual void Tick(float DeltaTime);
	virtual void OnPossess(APawn PossessedPawn);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimVector);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStartFire(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStopFire(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim(bool& ReturnValue);
};
