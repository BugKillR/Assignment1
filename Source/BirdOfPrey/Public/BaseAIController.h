#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABaseAIController();

	// --- Variables (Firing Category) ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bShouldUpdateAim;

	// Görseldeki 'Target' ve 'ControlledAgent' referansları
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class APlayerShip* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseGameAgent* ControlledAgent;

protected:
	// Event Graph'taki OnPossess ve Tick eventleri için override
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

public:
	// --- Functions ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim();
};