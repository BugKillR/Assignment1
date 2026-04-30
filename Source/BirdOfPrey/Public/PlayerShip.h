#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	APlayerShip();

	// --- Components ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	class UPointLightComponent* PointLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	class UAudioComponent* HoverAudio;

	// --- Variables ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABasePlayerController* BasePlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTimer;

protected:
	virtual void BeginPlay() override;

	// Event Possessed karşılığı
	virtual void PossessedBy(AController* NewController) override;

public:
	virtual void Tick(float DeltaTime) override;

	// AActor TakeDamage override
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	// --- Functions (Görseldeki sırayla) ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetShipConstantVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipAxisAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcOutOfBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

	// Girişler (Input)
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void MoveRight(float AxisValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void MoveUp(float AxisValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void FireWeapon();

	// Interface ve Eventler
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetPlayerShip();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Died();
};