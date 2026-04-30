#include "BasePlayerController.h"

ABasePlayerController::ABasePlayerController()
{
	// Değişken başlangıç değeri[cite: 1]
	bDiedWhileFiring = false;
}

void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ABasePlayerController::CalcScreenDimensions()
{
	// Implementasyon boş[cite: 1]
}

void ABasePlayerController::OnPlayerDeath()
{
	// Implementasyon boş[cite: 1]
}

void ABasePlayerController::OnPauseMenu()
{
	// Implementasyon boş[cite: 1]
}

void ABasePlayerController::ResetController()
{
	// Implementasyon boş[cite: 1]
}