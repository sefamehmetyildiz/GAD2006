// Fill out your copyright notice in the Description page of Project Settings.


#include "Labwork4/Public/NetAvatar.h"
#include "GameFramework/CharacterMovementComponent.h"


ANetAvatar::ANetAvatar()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}


void ANetAvatar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANetAvatar, bIsRunning);
}

void ANetAvatar::SetRunning(bool bNewRunning)
{
	bIsRunning = bNewRunning;

	GetCharacterMovement()->MaxWalkSpeed = bIsRunning ? 600.0f : 300.0f;
}

void ANetAvatar::OnRep_IsRunning()
{
	SetRunning(bIsRunning);
}

void ANetAvatar::ServerSetRunning_Implementation(bool bNewRunning)
{
	SetRunning(bNewRunning);
}

bool ANetAvatar::ServerSetRunning_Validate(bool bNewRunning)
{
	return true;
}

void ANetAvatar::BeginPlay()
{
	Super::BeginPlay();
	Camera->bUsePawnControlRotation = false;
	SpringArm->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void ANetAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Turn", this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &ACharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &ANetAvatar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ANetAvatar::MoveRight);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ANetAvatar::StartRunning);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ANetAvatar::StopRunning);
}


void ANetAvatar::MoveForward(float Scale)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, Scale);
}

void ANetAvatar::MoveRight(float Scale)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(ForwardDirection, Scale);
}

void ANetAvatar::StartRunning()
{
	if (HasAuthority())
	{
		SetRunning(true);
	}
	else
	{
		ServerSetRunning(true);
	}
}

void ANetAvatar::StopRunning()
{
	if (HasAuthority())
	{
		SetRunning(false);
	}
	else
	{
		ServerSetRunning(false);
	}
}

//void ANetAvatar::Run(float RunSpeed) const
//{
//	if (UCharacterMovementComponent* CharacterMovement = GetCharacterMovement())
//	{
//		CharacterMovement->MaxWalkSpeed = RunSpeed;
//	}
//}
