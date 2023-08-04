#include "UISteamFriends.h"

#include "SteamAPI_BPL_Plugin.h"

UISteamFriends::UISteamFriends(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UISteamFriends::ActivateGameOverlay(ESteamUserOverlayType DialogType)
{
	CSteamID SteamId = FSteamAPI_BPL_PluginModule::Get().GetMyID();

	const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamId);
	SteamFriends()->ActivateGameOverlay(TCHAR_TO_UTF8(*DialogName));
}

void UISteamFriends::ActivateGameOverlayToUser(ESteamUserOverlayType DialogType, FSteamPlayerInfo aPlayerInfo)
{
	FString ID = aPlayerInfo.PlayerID;

	CSteamID SteamID;
	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);

	const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamID);
}

int32 UISteamFriends::GetFriendCount(int32 iFriendFlags)
{return SteamFriends()->GetFriendCount(static_cast<int>(iFriendFlags));
}

FSteamPlayerInfo UISteamFriends::GetFriendByIndex(int32 iFriend, int32 iFriendFlags)
{
	FSteamPlayerInfo PlayerInfo;
	CSteamID SteamID = SteamFriends()->GetFriendByIndex(iFriend, static_cast<int>(iFriendFlags));
	PlayerInfo.PlayerID = FString::FromInt(SteamID.ConvertToUint64());
	PlayerInfo.PlayerName = SteamFriends()->GetFriendPersonaName(SteamID);
	PlayerInfo.PlayerState = static_cast<ESteamPersonaState>(SteamFriends()->GetFriendPersonaState(SteamID));
	PlayerInfo.PlayerRelationship = static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(SteamID));
	return PlayerInfo;
}

ESteamFriendRelationship UISteamFriends::GetFriendRelationship(FSteamPlayerInfo aPlayerInfo)
{
	FString ID = aPlayerInfo.PlayerID;
	CSteamID SteamID;
	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);
	return static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(SteamID));
}

ESteamPersonaState UISteamFriends::GetFriendPersonaState(FSteamPlayerInfo aPlayerInfo)
{
	return aPlayerInfo.PlayerState;
}

FString UISteamFriends::GetFriendPersonaName(FSteamPlayerInfo aPlayerInfo)
{return aPlayerInfo.PlayerName;
}

int32 UISteamFriends::GetClanCount()
{
	return SteamFriends()->GetClanCount();
}

bool UISteamFriends::SetRichPresence(const FString& pchKey, const FString& pchValue)
{
	// Convert FString to char* using TCHAR_TO_UTF8
	const char* KeyChar = TCHAR_TO_UTF8(*pchKey);
	const char* ValueChar = TCHAR_TO_UTF8(*pchValue);

	// Now you can pass KeyChar and ValueChar to SetRichPresence
	return SteamFriends()->SetRichPresence(KeyChar, ValueChar);
}

FString UISteamFriends::GetPersonaName()
{
	return SteamFriends()->GetPersonaName();
}
