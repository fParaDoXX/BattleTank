// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "..\Public\TankAIController.h"


ATank* ATankAIController::GetControlledTank() const
{

	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("AIControlled Tank Not Found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank AIController possessing: %s"), *(ControlledTank->GetName()));
	}

	auto PlayerControlledTank = GetPlayerControlledTank();

	if (!PlayerControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("Player Controlled Tank Not Found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing Tank : %s"), *(PlayerControlledTank->GetName()));
	}
}

ATank* ATankAIController::GetPlayerControlledTank()
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();


		return Cast<ATank>(PlayerPawn);
	

}
