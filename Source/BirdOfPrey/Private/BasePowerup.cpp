#include "BasePowerup.h"
#include "Components/StaticMeshComponent.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystem.h"

ABasePowerup::ABasePowerup()
{
	PrimaryActorTick.bCanEverTick = true;

	// Bileşenleri sadece tanımlıyoruz
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	PickUpSoundCue = nullptr;
	PickUpParticleSystem = nullptr;
}

void ABasePowerup::Apply()
{
	// Implementasyon boş
}

void ABasePowerup::PlayEffects()
{
	// Implementasyon boş
}

void ABasePowerup::ResetPowerup()
{
	// Implementasyon boş[cite: 1]
}