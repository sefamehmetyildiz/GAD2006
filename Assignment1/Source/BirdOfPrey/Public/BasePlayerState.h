// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API UBasePlayerState : public UObject
{
	GENERATED_BODY()

public:
	UBasePlayerState();

	virtual void Reset() override;


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingsLives(bool& ReturnValue);
};
