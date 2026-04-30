#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h" // Ebeveyn sınıfın header'ı burada olmak ZORUNDA
#include "ProjectileWeapon.generated.h" // Daima en sonda olmalı

UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:
	AProjectileWeapon();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<class ABaseProjectile> ProjectileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	int32 NumShots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void StartFire() override;
	virtual void StopFire() override;
	virtual bool IsFiring() override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void FireProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire();
};