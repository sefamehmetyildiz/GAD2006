// Fill out your copyright notice in the Description page of Project Settings.


#include "COAAvatar.h"
#include "GameFramework/CharacterMovementComponent.h"

ACOAAvatar::ACOAAvatar() :
	RunSpeed(900),
	Stamina(100),
	MaxStamina(100),
	StaminaGainRate(3),
	StaminaDrainRate(1),
	bStaminaDrained(false),
	bRunning(false)
{
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	mSpringArm->TargetArmLength = 300.0f;
	mSpringArm->SetupAttachment(RootComponent);

	mCameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	mCameraComponent->SetupAttachment(mSpringArm, USpringArmComponent::SocketName);


}

void ACOAAvatar::BeginPlay()
{
	Super::BeginPlay();
	mCameraComponent->bUsePawnControlRotation = false;
	mSpringArm->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;
}

void ACOAAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Velocity = GetVelocity();
	float Speed = Velocity.Size();

	GEngine->AddOnScreenDebugMessage(0, 1, FColor::Cyan, FString::Printf(TEXT("Stamina: %f"), Stamina));

	if (Speed > 0)
	{
		
	Stamina -= StaminaDrainRate * DeltaTime;
		if (Stamina <= 0.0f)
		{
			Stamina = 0.0f;
			bStaminaDrained = true;
			bRunning = false;
			UpdateMovementParams();
		}
		
	}
	else
	{

		Stamina += StaminaGainRate * DeltaTime;
		bStaminaDrained = false;
		UpdateMovementParams();
		if (Stamina >= MaxStamina)
		{
			Stamina = MaxStamina;
			
		}
	}
	
}



// Called to bind functionality to input
void ACOAAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACOAAvatar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACOAAvatar::MoveRight);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &ACOAAvatar::RunPressed);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &ACOAAvatar::RunReleased);
}

void ACOAAvatar::RunPressed()
{
	bRunning = true;
	UpdateMovementParams();
}

void ACOAAvatar::RunReleased()
{
	bRunning = false;
	UpdateMovementParams();
}

void ACOAAvatar::MoveForward(float amount)
{
	FRotator ControlRotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, ControlRotation.Yaw, 0.0f);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, amount);
	GEngine->AddOnScreenDebugMessage(0, 1, FColor::Cyan, FString::Printf(TEXT("Move Forward: %f"), amount));
}

void ACOAAvatar::MoveRight(float amount)
{
	FRotator ControlRotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, ControlRotation.Yaw, 0.0f);
	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, amount);
}

void ACOAAvatar::UpdateMovementParams()
{
	if (!bStaminaDrained)
	{
		if (bRunning)
		{
			GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		}
		else
		{
			GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		}
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = 0;
	}
	
}


