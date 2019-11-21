// Fill out your copyright notice in the Description page of Project Settings.


//#include "TankPlayerController.h"
#include "..\Public\TankPlayerController.h"



ATankPlayerController::ATankPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

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
		UE_LOG(LogTemp, Warning, TEXT("PlayerControlled Tank Not Found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Tank Controller possessing: %s"),*(ControlledTank->GetName()));
	}

}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("Player EventTick"));
	//TODO AimTowardsCrosshair();
}

void ATankPlayerController::AiTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }


}