// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "GameFramework/Actor.h"
#include "ProjectileWeapon.generated.h"

UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectileWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void StartFire();
	virtual void StopFire();
	virtual void FireProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile(FTransform SpawnTransform, ABaseProjectile*& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetProjectileSpawnTransform(int ShotNumber, FTransform& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void IsFiring();
};
