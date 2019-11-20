// Fill out your copyright notice in the Description page of Project Settings.


//#include "TankPlayerController.h"
#include "..\Public\TankPlayerController.h"


ATank* ATankPlayerController::GetControlledTank() const 
{

	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank Not Found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Controller possessing: %s"),*(ControlledTank->GetName()));
	}

	

}
