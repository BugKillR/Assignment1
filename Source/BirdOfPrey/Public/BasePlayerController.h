#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABasePlayerController();

	// --- Variables ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bDiedWhileFiring; //

protected:
	virtual void BeginPlay() override;

public:
	// --- Functions (Görseldeki sırayla) ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcScreenDimensions(); //

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDeath(); //[cite: 1]

	// Blueprint'teki InputAction PauseMenu için
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPauseMenu(); //[cite: 1]

	// Interface'den gelen Reset fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetController(); //[cite: 1]
};