
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "../Steam/isteamgamecoordinator.h"
#include "UISteamGameCoordinator.generated.h"

//Functions for sending and receiving messages from the Game Coordinator.

UCLASS()
class UISteamGameCoordinator : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam IsMessageAvailable", Keywords = "Steam ISteamGameCoordinator IsMessageAvailable"), Category = "SteamAPI|ISteamGameCoordinator")
		static bool IsMessageAvailable(int32& OutMsgSize);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam RetrieveMessage", Keywords = "Steam ISteamGameCoordinator RetrieveMessage"), Category = "SteamAPI|ISteamGameCoordinator")
		static int32 RetrieveMessage(int32& OutMsgType, TArray<uint8>& OutMsgBuffer);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SendMessage", Keywords = "Steam ISteamGameCoordinator SendMessage"), Category = "SteamAPI|ISteamGameCoordinator")
		static bool SendMessage(int32 MsgType, const TArray<uint8>& MsgBuffer);

};

