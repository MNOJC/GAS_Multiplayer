// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/PublicCPPLibrary.h"
#include  "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"

#include "Runtime/Engine/Classes/Engine/World.h"

void UPublicCPPLibrary::GetDynamicAimOffset(APlayerController* PlayerController, USceneComponent* TargetActor, float DeltaSeconds, float& PitchOffset, float& YawOffset)
{
	FVector2D ScreenPosition;

	int32 ViewportSizeX;
	int32 ViewportSizeY;

	if (!PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("GetDynamicAimOffset: PlayerController is NULL"));
		return;
	}

	if (!TargetActor)
	{
		UE_LOG(LogTemp, Error, TEXT("GetDynamicAimOffset: TargetActor is NULL"));
		return;
	}
	
	PlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);
	
	
	if (UGameplayStatics::ProjectWorldToScreen(PlayerController, TargetActor->GetComponentLocation(), ScreenPosition))
	{
		if (ScreenPosition.Y > (ViewportSizeY / 2))
		{
			PitchOffset = ((DeltaSeconds * 20.0f) * (UKismetMathLibrary::FClamp(UKismetMathLibrary::Abs((ScreenPosition.Y) - (ViewportSizeY / 2))  / 32 , 0.0f, 1.0f)));
		}
		else
		{
			PitchOffset = ((DeltaSeconds * -20.0f) * (UKismetMathLibrary::FClamp(UKismetMathLibrary::Abs((ScreenPosition.Y) - (ViewportSizeY / 2))  / 32 , 0.0f, 1.0f)));
		}

		if (ScreenPosition.X > (ViewportSizeX / 2) )
		{
			YawOffset = ((DeltaSeconds * -20.0f) * (UKismetMathLibrary::FClamp(UKismetMathLibrary::Abs((ScreenPosition.X) - (ViewportSizeX / 2))  / 32 , 0.0f, 1.0f)));
		}
		else
		{
			YawOffset = ((DeltaSeconds * 20.0f) * (UKismetMathLibrary::FClamp(UKismetMathLibrary::Abs((ScreenPosition.X) - (ViewportSizeX / 2))  / 32 , 0.0f, 1.0f)));
		}
		
	}
}

float UPublicCPPLibrary::CalculateNewPos(float DefaultPos, float AxisValue)
{
	return (-6 * AxisValue) + DefaultPos;
}
