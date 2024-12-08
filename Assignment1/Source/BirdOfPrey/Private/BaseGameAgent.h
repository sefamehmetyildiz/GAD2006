#pragma once

#include "CoreMinimal.h"
#include "../../../../../../Program Files/Epic Games/UE_5.3/Engine/Plugins/Marketplace/Developer/RiderLink/Source/RD/src/rd_core_cpp/src/main/util/shared_function.h"
#include "BirdOfPrey/Public/BaseWeapon.h"
#include "GameFramework/Pawn.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void AnyDamage(float Damage, UDamageType const* DamageType, AController* InstigatedBy,
	                       AActor* DamageCauser) override;

	virtual void Reset() override;


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(ABaseWeapon* NewWeaponType);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float TakeDamage(float Damage, float& ActualDamage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsAlive(bool& Alive) const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Died(AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ApplyAgentInfo(AInfo NewAgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimVector);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBounds();
};
