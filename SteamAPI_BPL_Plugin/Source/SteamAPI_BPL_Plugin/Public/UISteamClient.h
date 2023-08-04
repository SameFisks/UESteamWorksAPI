#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "UISteamClient.generated.h"

//	Interface to create a new steam instance or to connect to an existing steam instance, whether it's in a different process or is local.
UCLASS()
class UISteamClient : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BShutdownIfAllPipesClosed", Keywords = "Steam ISteamClient BShutdownIfAllPipesClosed"), Category = "SteamAPI|ISteamClient")
		static bool BShutdownIfAllPipesClosed();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BReleaseSteamPipe", Keywords = "Steam ISteamClient BReleaseSteamPipe"), Category = "SteamAPI|ISteamClient")
		static bool BReleaseSteamPipe(int32 hSteamPipe); // Assuming HSteamPipe is a typedef for int32 here

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BConnectToGlobalUser", Keywords = "Steam ISteamClient BConnectToGlobalUser"), Category = "SteamAPI|ISteamClient")
		static int32 BConnectToGlobalUser(int32 hSteamPipe);

};

