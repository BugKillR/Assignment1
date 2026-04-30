#include "ProjectileWeapon.h" // KURAL: Daima ilk sırada kendi header'ı olmalı!
#include "BaseProjectile.h"

AProjectileWeapon::AProjectileWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	// Başlangıç değerleri
	ProjectileType = nullptr;
	RefireTime = 0.0f;
	LastFireTime = 0.0f;
	NumShots = 0;
	bIsFiring = false;
	DesiredZ = 0.0f;
}

void AProjectileWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void AProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// --- Overrides ---
void AProjectileWeapon::StartFire()
{
	// Boş implementasyon
}

void AProjectileWeapon::StopFire()
{
	// Boş implementasyon
}

bool AProjectileWeapon::IsFiring()
{
	return false;
}

// --- Functions ---
void AProjectileWeapon::FireProjectile() {}

void AProjectileWeapon::SpawnProjectile() {}

FTransform AProjectileWeapon::GetProjectileSpawnTransform()
{
	return FTransform::Identity;
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}