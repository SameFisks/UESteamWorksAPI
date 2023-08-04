#include "UISteamUtils.h"

#include "SteamAPI_BPL_Plugin.h"


UISteamUtils::UISteamUtils(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UISteamUtils::Init()
{
	return FSteamAPI_BPL_PluginModule::Get().SteamInit();
}

TArray<FSteamPlayerInfo> UISteamUtils::GetFriends()
{
	TArray<FSteamPlayerInfo> Friends;

	// Implementation for retrieving a list of Steam friends
	// Populate the Friends array with the retrieved friend information
	int32 FriendCount = SteamFriends()->GetFriendCount(k_EFriendFlagImmediate);
	for (int32 i = 0; i < FriendCount; ++i)
	{
		CSteamID SteamFriend = SteamFriends()->GetFriendByIndex(i, k_EFriendFlagImmediate);
		const char* FriendName = SteamFriends()->GetFriendPersonaName(SteamFriend);
		FString FriendNameString(FriendName);
		AccountID_t FriendID = SteamFriend.GetAccountID();
		FString FriendIDString = FString::Printf(TEXT("%llu"), FriendID);


		// Create an FSteamPlayerInfo struct and populate it with the friend information
		FSteamPlayerInfo FriendInfo;
		FriendInfo.PlayerID = FriendIDString;
		FriendInfo.PlayerName = FriendNameString;

		Friends.Add(FriendInfo);
	}


	return Friends;
}
