#include "Core/MainGameMode.h"
#include "Engine/World.h"
#include "Engine/NetDriver.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"

FString AMainGameMode::GetServerIP() const
{
	if (GetWorld() && GetWorld()->GetNetDriver())
	{
		bool bCanBind = false;
		TSharedRef<FInternetAddr> LocalAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBind);

		if (LocalAddr->IsValid())
		{
			return LocalAddr->ToString(false);
		}
	}

	return FString("Unknown");
}

void AMainGameMode::DisconnectClient(APlayerController* PlayerController)
{
	if (PlayerController)
	{
		PlayerController->ClientTravel(TEXT("L_LobbyPersistent"), TRAVEL_Absolute);
	}
}

void AMainGameMode::AddPlayerController(APlayerController* PlayerController)
{
	if (PlayerController && !PlayerControllers.Contains(PlayerController))
	{
		PlayerControllers.Add(PlayerController);
	}
}

void AMainGameMode::RemovePlayerController(APlayerController* PlayerController)
{
	if (PlayerController)
	{
		PlayerControllers.Remove(PlayerController);
	}
}

void AMainGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	AddPlayerController(NewPlayer);
}

void AMainGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	APlayerController* ExitingPlayerController = Cast<APlayerController>(Exiting);
	if (ExitingPlayerController)
	{
		RemovePlayerController(ExitingPlayerController);
	}
}
