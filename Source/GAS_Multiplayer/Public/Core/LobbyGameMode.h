// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAS_MULTIPLAYER_API ALobbyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ALobbyGameMode();
    
	// Function to handle player login
	virtual void PostLogin(APlayerController* NewPlayer) override;

	void AddPlayerController(APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable, Category = "Networking")
	void ReconnectClient(APlayerController* PlayerController, const FString& URL);

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Networking")
	TArray<APlayerController*> PlayerControllers;
	
};
