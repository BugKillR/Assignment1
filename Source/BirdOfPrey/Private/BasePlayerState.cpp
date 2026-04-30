#include "BasePlayerState.h"

ABasePlayerState::ABasePlayerState()
{
	// Başlangıç değerleri ataması
	PlayerScore = 0.0f;
	RemainingLives = 0;
	TimeOfLastDeath = 0.0f;
}

void ABasePlayerState::AddScore(float ScoreAmount)
{
	// Implementasyon boş
}

void ABasePlayerState::ConsumeLife()
{
	// Implementasyon boş[cite: 1]
}

bool ABasePlayerState::HasRemainingLives()
{
	// Kural 4: Return false[cite: 1]
	return false;
}

void ABasePlayerState::ResetState()
{
	// Implementasyon boş[cite: 1]
}