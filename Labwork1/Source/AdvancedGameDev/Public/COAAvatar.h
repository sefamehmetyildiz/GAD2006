// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "COACharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "COAAvatar.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDGAMEDEV_API ACOAAvatar : public ACOACharacter
{
	GENERATED_BODY()
public:

	ACOAAvatar();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	USpringArmComponent* mSpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	UCameraComponent* mCameraComponent;
	// Called to bind functionality to input


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Tick(float DeltaTime) override;
	

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere, Category = "COA")
	float RunSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "COA")
	float Stamina;

	UPROPERTY(EditAnywhere, Category = "COA")
	float MaxStamina;

	UPROPERTY(EditAnywhere, Category = "COA")
	float StaminaGainRate;

	UPROPERTY(EditAnywhere, Category = "COA")
	float StaminaDrainRate;

	UPROPERTY(EditAnywhere, Category = "COA")
	bool bStaminaDrained;

	UPROPERTY(EditAnywhere, Category = "COA")
	bool bRunning;
private:
	void RunPressed();
	void RunReleased();
	void MoveForward(float amount);
	void MoveRight(float amount);
	void UpdateMovementParams();

};
