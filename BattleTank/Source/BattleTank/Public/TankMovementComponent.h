// Copyright Nati-onBear Property

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack;

/**
 * Control left and right tracks speed with Fly-by-Wire Control System
 */
UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent) )
class BATTLETANK_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialize(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet);

	UFUNCTION(BlueprintCallable, Category = Moving)
	void IntendMoveFoward(float Throw);

	UFUNCTION(BlueprintCallable, Category = Moving)
	void IntendTurnRight(float Throw);

private:
	UTankTrack* LeftTrack = nullptr;

	UTankTrack* RightTrack = nullptr;
	
};