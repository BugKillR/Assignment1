#include "PlayerShip.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "BasePlayerController.h"

APlayerShip::APlayerShip()
{
	PrimaryActorTick.bCanEverTick = true;

	// Bileşenlerin oluşturulması
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	PointLight->SetupAttachment(RootComponent);

	HoverAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("HoverAudio"));
	HoverAudio->SetupAttachment(RootComponent);

	// Değişken başlangıç değerleri
	BasePlayerController = nullptr;
	InvulnerabilityTimer = 0.0f;
}

void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerShip::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

float APlayerShip::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	return 0.0f;
}

// --- Fonksiyon İmplementasyonları (Boş) ---

FVector APlayerShip::GetShipConstantVelocity()
{
	return FVector::ZeroVector;
}

void APlayerShip::ClampToCameraBounds() {}
void APlayerShip::GetShipAxisAdjustment() {}
void APlayerShip::CalcOutOfBoundsAdjustment() {}
void APlayerShip::GetPlayerAgentInfo() {}

bool APlayerShip::ShouldSpawnAIController()
{
	return false;
}

void APlayerShip::UpdateHoverPitch() {}

bool APlayerShip::HasDiedRecently()
{
	return false;
}

void APlayerShip::MoveRight(float AxisValue) {}
void APlayerShip::MoveUp(float AxisValue) {}
void APlayerShip::FireWeapon() {}
void APlayerShip::ResetPlayerShip() {}