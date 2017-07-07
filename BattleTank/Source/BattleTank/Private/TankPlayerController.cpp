// Copyright©2017 Rafał Krzanowski

#include "BattleTank.h"
#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControllerTank() const
{
	return Cast<ATank>(GetPawn());
}


