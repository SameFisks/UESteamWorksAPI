
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "UISteamFriends.generated.h"

//Interface to access information about individual users and interact with the Steam Overlay.
UCLASS()
class UISteamFriends : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ActivateGameOverlay", Keywords = "Steam ISteamFriends ActivateGameOverlay"), Category = "SteamAPI|ISteamFriends ")
		static void  ActivateGameOverlay(ESteamUserOverlayType DialogType);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ActivateGameOverlay", Keywords = "Steam ISteamFriends ActivateGameOverlay"), Category = "SteamAPI|ISteamFriends ")
		static void ActivateGameOverlayToUser(ESteamUserOverlayType DialogType, FSteamPlayerInfo aPlayerInfo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendCount", Keywords = "Steam ISteamFriends GetFriendCount"), Category = "SteamAPI|ISteamFriends ")
		static int32 GetFriendCount(int32 iFriendFlags);


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendByIndex", Keywords = "Steam ISteamFriends GetFriendByIndex"), Category = "SteamAPI|ISteamFriends ")
		static FSteamPlayerInfo GetFriendByIndex(int32 iFriend, int32 iFriendFlags);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendRelationship", Keywords = "Steam ISteamFriends GetFriendRelationship"), Category = "SteamAPI|ISteamFriends ")
		static ESteamFriendRelationship GetFriendRelationship(FSteamPlayerInfo aPlayerInfo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendPersonaState", Keywords = "Steam ISteamFriends GetFriendPersonaState"), Category = "SteamAPI|ISteamFriends ")
		static ESteamPersonaState GetFriendPersonaState(FSteamPlayerInfo aPlayerInfo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendPersonaName", Keywords = "Steam ISteamFriends GetFriendPersonaName"), Category = "SteamAPI|ISteamFriends ")
		static FString GetFriendPersonaName(FSteamPlayerInfo aPlayerInfo);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendGamePlayed", Keywords = "Steam ISteamFriends GetFriendGamePlayed"), Category = "SteamAPI|ISteamFriends ")
	//	static FSteamFriendGameInfo GetFriendGamePlayed(FSteamPlayerInfo aPlayerInfo);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetClanCount", Keywords = "Steam ISteamFriends GetClanCount"), Category = "SteamAPI|ISteamFriends ")
		static int32 GetClanCount();

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetClanByIndex", Keywords = "Steam ISteamFriends GetClanByIndex"), Category = "SteamAPI|ISteamFriends ")
	//	static FSteamClanInfo GetClanByIndex(int32 iClan);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetClanName", Keywords = "Steam ISteamFriends GetClanName"), Category = "SteamAPI|ISteamFriends ")
	//	static FString GetClanName(FSteamClanInfo aClanInfo);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetClanTag", Keywords = "Steam ISteamFriends GetClanTag"), Category = "SteamAPI|ISteamFriends ")
	//	static FString GetClanTag(FSteamClanInfo aClanInfo);


	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SetPlayedWith", Keywords = "Steam ISteamFriends SetPlayedWith"), Category = "SteamAPI|ISteamFriends ")
	//	static int32 SetPlayedWith(CSteamID steamIDUserPlayedWith);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SetRichPresence", Keywords = "Steam ISteamFriends SetRichPresence"), Category = "SteamAPI|ISteamFriends ")
		static bool SetRichPresence(const FString& pchKey, const FString& pchValue);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetPersonaName", Keywords = "Steam ISteamFriends GetPersonaName"), Category = "SteamAPI|ISteamFriends ")
		static FString GetPersonaName();


	
};
