// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseEnemyShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ActorBeginOverlap(AActor* OtherActor) override;

	virtual void Died(AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();
};
