// Copyright©2017 Rafał Krzanowski

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank) {
		MoveToActor(PlayerTank, AcceptanceRadius);

		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		ControlledTank->Fire();
	}

}