#include "UISteamClient.h"

UISteamClient::UISteamClient(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	}
bool UISteamClient::BShutdownIfAllPipesClosed()
{
	return SteamClient()->BShutdownIfAllPipesClosed();
}

bool UISteamClient::BReleaseSteamPipe(int32 hSteamPipe)
{
	return SteamClient()->BReleaseSteamPipe(hSteamPipe);
}

int32 UISteamClient::BConnectToGlobalUser(int32 hSteamPipe)
{return SteamClient()->ConnectToGlobalUser(hSteamPipe);
}

