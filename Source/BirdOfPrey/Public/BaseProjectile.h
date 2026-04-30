#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseProjectile : public AActor
{
	GENERATED_BODY()

public:
	ABaseProjectile();

	// --- Variables (Görseldeki sırayla) ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseGameAgent* GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class USoundBase* ImpactSound;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// --- Functions (Görseldeki sırayla) ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

	// --- Events & Interface ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUpAndDestroy();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetProjectile();
};