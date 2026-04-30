// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

class UFloatingPawnMovement;

UCLASS()
class BIRDOFPREY_API ABaseShip : public ABaseGameAgent
{
    GENERATED_BODY()

public:

    ABaseShip();


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UFloatingPawnMovement* FloatingPawnMovement;

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;


    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ApplyAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};