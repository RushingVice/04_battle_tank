// Copyright©2017 Rafał Krzanowski

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel speed m/s: %f"), DegreesPerSecond);
}
