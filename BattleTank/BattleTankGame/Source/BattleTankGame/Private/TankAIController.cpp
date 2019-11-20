// Fill out your copyright notice in the Description page of Project Settings.


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
		UE_LOG(LogTemp, Warning, TEXT("AIControlled Tank Not Found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank AIController possessing: %s"), *(ControlledTank->GetName()));
	}



}
