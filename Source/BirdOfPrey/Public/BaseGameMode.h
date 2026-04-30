#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABaseGameMode();

	// --- Variables (Görseldeki sırayla) ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ACameraActor* WorldCameraActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class UDataTable* PlayerAgentInfoTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<TSubclassOf<class ABasePowerup>> PowerUpList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;

	// --- Functions (Görseldeki sırayla) ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	class ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetDistanceTravelled();
};