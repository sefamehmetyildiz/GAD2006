// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NetBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "NetAvatar.generated.h"

/**
 * 
 */
UCLASS()
class LABWORK4_API ANetAvatar : public ANetBaseCharacter
{
	GENERATED_BODY()

public:
	ANetAvatar();

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;


	UPROPERTY(ReplicatedUsing = OnRep_IsRunning)
	bool bIsRunning;

protected:
	UFUNCTION()
	void OnRep_IsRunning();


	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetRunning(bool bNewRunning);

	void SetRunning(bool bNewRunning);

	virtual void BeginPlay() override;


	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float Amount);
	void MoveRight(float Amount);
	void StartRunning();
	void StopRunning();
	/*void Run(float RunSpeed) const;*/
};
