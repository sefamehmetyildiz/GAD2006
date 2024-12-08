// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ActorBeginOverlap(AActor* OtherActor) override;


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffect();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasFinishedFiring(bool& ReturnValue) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsFiring(bool& ReturnValue) const;
};
