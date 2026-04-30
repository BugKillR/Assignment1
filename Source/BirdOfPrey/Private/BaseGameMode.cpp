#include "BaseGameMode.h"

ABaseGameMode::ABaseGameMode()
{
	// Değişken başlangıç değerleri
	WorldScrollSpeed = 0.0f;
	RespawnDelay = 0.0f;
	IsGameOverScreen = false;
}

float ABaseGameMode::GetWorldScrollVelocity()
{
	return 0.0f; // Kural 4: Return 0[cite: 1]
}

class ACameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr; // Kural 4: Return nullptr[cite: 1]
}

void ABaseGameMode::OnPlayerDied() {}
void ABaseGameMode::OnEnemyDied() {}
void ABaseGameMode::StartGame() {}
void ABaseGameMode::EndGame() {}
void ABaseGameMode::SpawnEnemyFrom() {}
void ABaseGameMode::ResetGame() {}
void ABaseGameMode::RespawnPlayer() {}
void ABaseGameMode::TrySpawnPowerUp() {}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f; // Kural 4[cite: 1]
}