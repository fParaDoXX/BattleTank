// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKGAME_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	/*ATankAIController();*/

	/*void Tick(float DeltaTime) override;*/

protected:
	//Override Actors begin play
	virtual void BeginPlay() override;

private:

	ATank* GetControlledTank() const;

	ATank* GetPlayerControlledTank() const;

	

};
