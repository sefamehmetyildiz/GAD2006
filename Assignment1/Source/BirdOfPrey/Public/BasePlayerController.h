// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API UBasePlayerController : public UObject
{
	GENERATED_BODY()

public:
	UBasePlayerController();

	virtual void Reset() override;

	virtual void InputActionPauseMenu();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDeath(AController* Killer);
};
