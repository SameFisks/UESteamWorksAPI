
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "UISteamUtils.generated.h"

//	Interface which provides access to a range of miscellaneous utility functions.
UCLASS()
class UISteamUtils : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Init", Keywords = "Steam Init"), Category = "SteamAPI|ISteamUtils")
		static bool Init();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriends", Keywords = "Steam GetFriends"), Category = "SteamAPI|ISteamUtils")
		static TArray<FSteamPlayerInfo> GetFriends();
};

