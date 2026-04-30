#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	// Doğru declaration: Sınıf ismi prefixi olmadan
	ABasePlayerState();

	// --- Variables ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	int32 RemainingLives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;

	// --- Functions ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float ScoreAmount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingLives();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetState();
};