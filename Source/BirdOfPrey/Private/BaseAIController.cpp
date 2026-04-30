#include "BaseAIController.h"
#include "PlayerShip.h"
#include "BaseGameAgent.h"

ABaseAIController::ABaseAIController()
{
	PrimaryActorTick.bCanEverTick = true;

	// Başlangıç değerleri
	LastFireTime = 0.0f;
	bIsFiring = false;
	RefireDelay = 0.0f;
	bShouldUpdateAim = false;
	Target = nullptr;
	ControlledAgent = nullptr;
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void ABaseAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// --- Fonksiyon İmplementasyonları (Boş) ---

void ABaseAIController::SelectTarget() {}

void ABaseAIController::AimAt() {}

void ABaseAIController::CheckFire() {}

void ABaseAIController::UpdateAim() {}

bool ABaseAIController::ShouldStartFire()
{
	return false;
}

bool ABaseAIController::ShouldStopFire()
{
	return false;
}

void ABaseAIController::StartFire() {}

void ABaseAIController::StopFire() {}

bool ABaseAIController::ShouldUpdateAim()
{
	return false;
}