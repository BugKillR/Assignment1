#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseStationaryEnemy.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseStationaryEnemy : public ABaseGameAgent
{
	GENERATED_BODY()

public:
	ABaseStationaryEnemy();

	// Görseldeki 'Event Died' için
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Died();

	// Interface'den gelen Reset fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetStationaryEnemy();
};