// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	// Sets default values for this pawn's properties
	ATankPlayerController();

	virtual void Tick(float DeltaTime) override;

protected:
	//Override Actors begin play
	virtual void BeginPlay() override;

private:

	ATank* GetControlledTank() const; 

	

	//Start Rotating the barrel towards where the crossheir is aimed at
	void AiTowardsCrosshair();

};
