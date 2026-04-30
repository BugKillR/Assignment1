#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class BIRDOFPREY_API ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	ABaseEnemyShip();

	// Görseldeki 'ShipAIController' değişkeni. 
	// Tipini genel AIController olarak tanımlıyoruz.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class AAIController* ShipAIController;

	// Görseldeki 'Move' fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

	// Interface'den gelen Reset fonksiyonu
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetEnemyShip();

	// Görseldeki 'Event Died' için implement edilebilir event
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Died();
};