// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseShip : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ActorBeginOverlap(AActor* OtherActor) override;

	virtual void ApplyAgentInfo(UStruct* NewAgentInfo);
};
