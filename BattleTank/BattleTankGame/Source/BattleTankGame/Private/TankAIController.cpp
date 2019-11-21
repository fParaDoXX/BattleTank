// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "..\Public\TankAIController.h"

//ATankAIController::ATankAIController()
//{
//	PrimaryActorTick.bCanEverTick = true;
//}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerControlledTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	return Cast<ATank>(PlayerPawn);

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

//void ATankAIController::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//	UE_LOG(LogTemp, Warning, TEXT("Tick"));
//}

