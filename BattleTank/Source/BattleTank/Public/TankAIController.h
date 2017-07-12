// Copyright©2017 Rafał Krzanowski

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override; 
	
private:
	ATank* GetControlledTank() const;
	ATank* GetPlayerTank() const;

};
