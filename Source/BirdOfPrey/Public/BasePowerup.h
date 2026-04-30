#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

UCLASS()
class BIRDOFPREY_API ABasePowerup : public AActor
{
	GENERATED_BODY()

public:
	ABasePowerup();

	// --- Variables (image_0000.png'deki sırayla) ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class USoundCue* PickUpSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class UParticleSystem* PickUpParticleSystem;

	// --- Functions ---
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

	// Blueprint'teki "Event Reset" ve Interface için
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetPowerup();
};