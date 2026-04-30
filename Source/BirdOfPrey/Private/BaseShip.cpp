// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShip.h"

ABaseShip::ABaseShip()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseShip::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void ABaseShip::ApplyAgentInfo()
{
}

void ABaseShip::Reset()
{
}