// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerShip.generated.h"

UCLASS()
class BIRDOFPREY_API APlayerShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void InputAxisMoveRight(float AxisValue);

	virtual void InputAxisMoveUp(float AxisValue);

	virtual void Died(AController* Killer);

	virtual void Possessed(AController* NewController);

	virtual void SetupInputComponent() override;

	void OnFirePressed();
	void OnFireReleased();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment(FVector& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently(bool& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TakeDamage();
};
