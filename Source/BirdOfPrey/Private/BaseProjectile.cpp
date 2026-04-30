#include "BaseProjectile.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"

ABaseProjectile::ABaseProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	// Başlangıç değerleri
	ProjectileSpeed = 0.0f;
	Damage = 0.0f;
	GroundUnitCheckLength = 0.0f;
	GroundUnitCheckInterval = 0.0f;
	DesiredZ = 0.0f;
	DetonationEmitter = nullptr;
	GroundTarget = nullptr;
	ImpactSound = nullptr;
}

void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseProjectile::InitialiseProjectile() {}
void ABaseProjectile::DealDamageTo(AActor* Target) {}
void ABaseProjectile::OnHit() {}

ECollisionChannel ABaseProjectile::GetInstigatorCollisionChannel()
{
	return ECC_WorldStatic; // Varsayılan bir kanal dönüyoruz (0 mantığı)
}

void ABaseProjectile::CheckForGroundUnitTarget() {}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
	return false; // Kural 4: Return false[cite: 1]
}

void ABaseProjectile::AdjustToTarget() {}

bool ABaseProjectile::IsEnemyProjectile()
{
	return false; // Kural 4: Return false[cite: 1]
}

void ABaseProjectile::AdjustToDesiredZ() {}
void ABaseProjectile::CleanUpAndDestroy() {}
void ABaseProjectile::ResetProjectile() {}