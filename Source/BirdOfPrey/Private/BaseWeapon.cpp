#include "BaseWeapon.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"

ABaseWeapon::ABaseWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	FireParticleEffect = nullptr;
	FireSoundCue = nullptr;
	bRequiresAimForAI = false;
	bIsAutomatic = false;
}

void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseWeapon::StartFire() {}
void ABaseWeapon::StopFire() {}

bool ABaseWeapon::IsFiring()
{
	return false;
}

void ABaseWeapon::PlayFireEffects() {}

FTransform ABaseWeapon::GetFireEffectSpawnTransform()
{
	return FTransform::Identity;
}

bool ABaseWeapon::HasFinishedFiring()
{
	return false;
}