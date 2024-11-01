// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PublicCPPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GAS_MULTIPLAYER_API UPublicCPPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static void GetDynamicAimOffset(APlayerController* PlayerController, USceneComponent* TargetActor, float DeltaSeconds, float& PitchOffset, float& YawOffset);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static float CalculateNewPos(float DefaultPos, float AxisValue);
	
};
