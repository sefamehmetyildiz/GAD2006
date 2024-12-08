// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Runtime/Engine/Private/Components/PrimitiveComponent.cpp>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"


UCLASS()
class BIRDOFPREY_API ABaseProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	virtual void Reset() override;

	virtual void CleanUpAndDestroy();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float Damage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetInstigatorCollisionChannel(ECollisionChannel& ReturnValue) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsEnemyProjectile(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();
};
