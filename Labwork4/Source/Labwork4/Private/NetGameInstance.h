// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <NetBaseCharacter.h>
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NetGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class UNetGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UNetGameInstance();

	UFUNCTION(BlueprintCallable)
	void Host(FString MapName, FSPlayerInfo& PlayerInfo);

	UFUNCTION(BlueprintCallable)
	void Join(FString Address, FSPlayerInfo& PlayerInfo);

	UPROPERTY(BlueprintReadWrite)
	FSPlayerInfo PlayerInfo;
};
