// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/LobbyGameMode.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Engine/NetDriver.h"
#include "IPAddress.h"



ALobbyGameMode::ALobbyGameMode()
{

	DefaultPawnClass = nullptr;
}

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	AddPlayerController(NewPlayer);
	
}

void ALobbyGameMode::AddPlayerController(APlayerController* PlayerController)
{
	if (PlayerController && !PlayerControllers.Contains(PlayerController))
	{
		PlayerControllers.Add(PlayerController);
	}
}

void ALobbyGameMode::ReconnectClient(APlayerController* PlayerController, const FString& URL)
{
	
	if (PlayerController)
	{
		PlayerController->ClientTravel(URL, TRAVEL_Absolute);
	}
}