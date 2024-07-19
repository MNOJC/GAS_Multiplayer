// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAS_MULTIPLAYER_API AMainGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Networking")
	FString GetServerIP() const;

	UFUNCTION(BlueprintCallable, Category = "Networking")
	void DisconnectClient(APlayerController* PlayerController);

	void AddPlayerController(APlayerController* PlayerController);
	
	void RemovePlayerController(APlayerController* PlayerController);


protected:

	virtual void PostLogin(APlayerController* NewPlayer) override;


	virtual void Logout(AController* Exiting) override;

	UPROPERTY(BlueprintReadOnly, Category = "Networking")
	TArray<APlayerController*> PlayerControllers;
};
