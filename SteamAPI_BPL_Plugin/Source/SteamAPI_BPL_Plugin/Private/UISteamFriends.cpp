#include "UISteamFriends.h"
#include "Engine/Texture2D.h"
#include "Steam.h"
#include "SteamAPI_BPL_Plugin.h"
#include "USteamUtils.h"

UISteamFriends::UISteamFriends(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

//void UISteamFriends::ActivateGameOverlay(ESteamUserOverlayType DialogType)
//{
//	CSteamID SteamId = FSteamAPI_BPL_PluginModule::Get().GetMyID();
//
//	const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
//	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamId);
//	SteamFriends()->ActivateGameOverlay(TCHAR_TO_UTF8(*DialogName));
//}
//
//void UISteamFriends::ActivateGameOverlayToUser(ESteamUserOverlayType DialogType, FSteamPlayerInfo aPlayerInfo)
//{
//	FString ID = aPlayerInfo.PlayerID;
//
//	CSteamID SteamID;
//	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);
//
//	const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
//	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamID);
//}
//
//int32 UISteamFriends::GetFriendCount(int32 iFriendFlags)
//{return SteamFriends()->GetFriendCount(static_cast<int>(iFriendFlags));
//}
//
//FSteamPlayerInfo UISteamFriends::GetFriendByIndex(int32 iFriend, int32 iFriendFlags)
//{
//	FSteamPlayerInfo PlayerInfo;
//	CSteamID SteamID = SteamFriends()->GetFriendByIndex(iFriend, static_cast<int>(iFriendFlags));
//	PlayerInfo.PlayerID = FString::FromInt(SteamID.ConvertToUint64());
//	PlayerInfo.PlayerName = SteamFriends()->GetFriendPersonaName(SteamID);
//	PlayerInfo.PlayerState = static_cast<ESteamPersonaState>(SteamFriends()->GetFriendPersonaState(SteamID));
//	PlayerInfo.PlayerRelationship = static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(SteamID));
//	return PlayerInfo;
//}
//
//ESteamFriendRelationship UISteamFriends::GetFriendRelationship(FSteamPlayerInfo aPlayerInfo)
//{
//	FString ID = aPlayerInfo.PlayerID;
//	CSteamID SteamID;
//	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);
//	return static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(SteamID));
//}
//
//ESteamPersonaState UISteamFriends::GetFriendPersonaState(FSteamPlayerInfo aPlayerInfo)
//{
//	return aPlayerInfo.PlayerState;
//}
//
//FString UISteamFriends::GetFriendPersonaName(FSteamPlayerInfo aPlayerInfo)
//{return aPlayerInfo.PlayerName;
//}
//
//int32 UISteamFriends::GetClanCount()
//{
//	return SteamFriends()->GetClanCount();
//}
//
//bool UISteamFriends::SetRichPresence(const FString& pchKey, const FString& pchValue)
//{
//	// Convert FString to char* using TCHAR_TO_UTF8
//	const char* KeyChar = TCHAR_TO_UTF8(*pchKey);
//	const char* ValueChar = TCHAR_TO_UTF8(*pchValue);
//
//	// Now you can pass KeyChar and ValueChar to SetRichPresence
//	return SteamFriends()->SetRichPresence(KeyChar, ValueChar);
//}
//
//FString UISteamFriends::GetPersonaName()
//{
//	return SteamFriends()->GetPersonaName();
//}



UISteamFriends::UISteamFriends()
{
	OnAvatarImageLoadedCallback.Register(this, &UISteamFriends::OnAvatarImageLoaded);
	OnClanOfficerListResponseCallback.Register(this, &UISteamFriends::OnClanOfficerListResponse);
	OnDownloadClanActivityCountsResultCallback.Register(this, &UISteamFriends::OnDownloadClanActivityCountsResult);
	OnFriendRichPresenceUpdateCallback.Register(this, &UISteamFriends::OnFriendRichPresenceUpdate);
	OnFriendsEnumerateFollowingListCallback.Register(this, &UISteamFriends::OnFriendsEnumerateFollowingList);
	OnFriendsGetFollowerCountCallback.Register(this, &UISteamFriends::OnFriendsGetFollowerCount);
	OnFriendsIsFollowingCallback.Register(this, &UISteamFriends::OnFriendsIsFollowing);
	OnGameConnectedChatJoinCallback.Register(this, &UISteamFriends::OnGameConnectedChatJoin);
	OnGameConnectedChatLeaveCallback.Register(this, &UISteamFriends::OnGameConnectedChatLeave);
	OnGameConnectedClanChatMsgCallback.Register(this, &UISteamFriends::OnGameConnectedClanChatMsg);
	OnGameConnectedFriendChatMsgCallback.Register(this, &UISteamFriends::OnGameConnectedFriendChatMsg);
	OnGameLobbyJoinRequestedCallback.Register(this, &UISteamFriends::OnGameLobbyJoinRequested);
	OnGameOverlayActivatedCallback.Register(this, &UISteamFriends::OnGameOverlayActivated);
	OnGameRichPresenceJoinRequestedCallback.Register(this, &UISteamFriends::OnGameRichPresenceJoinRequested);
	OnGameServerChangeRequestedCallback.Register(this, &UISteamFriends::OnGameServerChangeRequested);
	OnJoinClanChatRoomCompletionResultCallback.Register(this, &UISteamFriends::OnJoinClanChatRoomCompletionResult);
	OnPersonaStateChangeCallback.Register(this, &UISteamFriends::OnPersonaStateChange);
	OnSetPersonaNameResponseCallback.Register(this, &UISteamFriends::OnSetPersonaNameResponse);
}

UISteamFriends::~UISteamFriends()
{
	OnAvatarImageLoadedCallback.Unregister();
	OnClanOfficerListResponseCallback.Unregister();
	OnDownloadClanActivityCountsResultCallback.Unregister();
	OnFriendRichPresenceUpdateCallback.Unregister();
	OnFriendsEnumerateFollowingListCallback.Unregister();
	OnFriendsGetFollowerCountCallback.Unregister();
	OnFriendsIsFollowingCallback.Unregister();
	OnGameConnectedChatJoinCallback.Unregister();
	OnGameConnectedChatLeaveCallback.Unregister();
	OnGameConnectedClanChatMsgCallback.Unregister();
	OnGameConnectedFriendChatMsgCallback.Unregister();
	OnGameLobbyJoinRequestedCallback.Unregister();
	OnGameOverlayActivatedCallback.Unregister();
	OnGameRichPresenceJoinRequestedCallback.Unregister();
	OnGameServerChangeRequestedCallback.Unregister();
	OnJoinClanChatRoomCompletionResultCallback.Unregister();
	OnPersonaStateChangeCallback.Unregister();
	OnSetPersonaNameResponseCallback.Unregister();
}

void UISteamFriends::ActivateGameOverlay(const ESteamGameOverlayTypes OverlayType)
{
	const FString Str = USteamUtils::GetEnumValueAsStringParsed(USteamUtils::GetEnumValueAsString<ESteamGameOverlayTypes>("ESteamGameOverlayTypes", OverlayType));
	SteamFriends()->ActivateGameOverlay(TCHAR_TO_ANSI(*Str));
}

void UISteamFriends::ActivateGameOverlayToUser(const ESteamGameUserOverlayTypes OverlayType, FSteamID SteamID)
{
	const FString Str = USteamUtils::GetEnumValueAsStringParsed(USteamUtils::GetEnumValueAsString<ESteamGameUserOverlayTypes>("ESteamGameUserOverlayTypes", OverlayType));
	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_ANSI(*Str), SteamID);
}

FSteamAPICall UISteamFriends::DownloadClanActivityCounts(TArray<FSteamID>& SteamClanIDs, int32 ClansToRequest) const
{
	TArray<CSteamID> TmpArray;
	uint64 res = SteamFriends()->DownloadClanActivityCounts(TmpArray.GetData(), ClansToRequest);

	for (int32 i = 0; i < ClansToRequest; i++)
	{
		SteamClanIDs.Add(TmpArray[i].ConvertToUint64());
	}

	return res;
}

// #NOTE: This should work, but the reason of failure is k_ESteamAPICallFailureSteamGone so I'm assuming it's where this method isn't async
//TArray<FSteamID> UISteamFriends::EnumerateFollowingList() const
//{
//	int32 ResultCount = 0;
//	FriendsEnumerateFollowingList_t Result;
//	TArray<FSteamID> SteamIDs;
//
//	do
//	{
//		if (SteamAPICall_t ResultHandle = SteamFriends()->EnumerateFollowingList(ResultCount))
//		{
//			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, "LOL");
//			bool bTmpResult;
//			if (SteamUtils()->GetAPICallResult(ResultHandle, &Result, sizeof(Result), Result.k_iCallback, &bTmpResult))
//			{
//				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, "LOL2");
//				ResultCount += Result.m_nResultsReturned;
//				for (const auto& id : Result.m_rgSteamID)
//				{
//					if (id.IsValid())
//					{
//						SteamIDs.Add(id.ConvertToUint64());
//					}
//				}
//			}
//
//			ESteamAPICallFailure_ reason = (ESteamAPICallFailure_)((uint8)SteamUtils()->GetAPICallFailureReason(ResultHandle) - 1);
//
//			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, USteamUtils::GetEnumValueAsString<ESteamAPICallFailure_>("ESteamAPICallFailure_", reason));
//
//		}
//	} while (ResultCount < Result.m_nTotalResultCount);
//
//	return SteamIDs;
//}

int32 UISteamFriends::GetClanChatMessage(FSteamID SteamIDClanChat, int32 MessageID, FString& Message, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter)
{
	EChatEntryType TmpEntryType;
	TArray<char> TmpMessage;
	TmpMessage.SetNum(MAX_int32);
	CSteamID TmpSteamID;
	int32 res = SteamFriends()->GetClanChatMessage(SteamIDClanChat, MessageID, TmpMessage.GetData(), MAX_int32, &TmpEntryType, &TmpSteamID);
	if (res < 0)
	{
		return -1;
	}
	SteamIDChatter = TmpSteamID.ConvertToUint64();
	TmpMessage.SetNum(res);
	Message = UTF8_TO_TCHAR(TmpMessage.GetData());
	ChatEntryType = (ESteamChatEntryType)TmpEntryType;

	return res;
}

FSteamID UISteamFriends::GetFriendByIndex(int32 FriendIndex, const TArray<ESteamFriendFlags>& FriendFlags) const
{
	int32 flags = FriendFlags.Contains(ESteamFriendFlags::All) ? 0xFFFF : 0;

	if (flags == 0)
	{
		for (int32 i = 0; i < FriendFlags.Num(); i++)
		{
			flags |= 1 << (int32)FriendFlags[i];
		}
	}

	return SteamFriends()->GetFriendByIndex(FriendIndex, flags).ConvertToUint64();
}

int32 UISteamFriends::GetFriendCount(const TArray<ESteamFriendFlags>& FriendFlags) const
{
	int32 flags = FriendFlags.Contains(ESteamFriendFlags::All) ? 0xFFFF : 0;

	if (flags == 0)
	{
		for (int32 i = 0; i < FriendFlags.Num(); i++)
		{
			flags |= 1 << (int32)FriendFlags[i];
		}
	}

	return SteamFriends()->GetFriendCount(flags);
}

bool UISteamFriends::GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamID& GameID, FString& GameIP, int32& FriendGamePort, int32& QueryPort, FSteamID& SteamIDLobby)
{
	FriendGameInfo_t InGameInfoStruct;
	bool bResult = SteamFriends()->GetFriendGamePlayed(SteamIDFriend, &InGameInfoStruct);
	GameID = InGameInfoStruct.m_gameID.ToUint64();
	GameIP = USteamUtils::ConvertIPToString(InGameInfoStruct.m_unGameIP);
	FriendGamePort = InGameInfoStruct.m_usGamePort;
	QueryPort = InGameInfoStruct.m_usQueryPort;
	SteamIDLobby = InGameInfoStruct.m_steamIDLobby.ConvertToUint64();
	return bResult;
}

int32 UISteamFriends::GetFriendMessage(FSteamID SteamIDFriend, int32 MessageIndex, FString& Message, ESteamChatEntryType& ChatEntryType)
{
	EChatEntryType TmpEntryType;
	TArray<char> TmpMessage;
	TmpMessage.SetNum(MAX_int32);
	int32 res = SteamFriends()->GetFriendMessage(SteamIDFriend, MessageIndex, TmpMessage.GetData(), MAX_int32, &TmpEntryType);
	if (res < 0)
	{
		return 0;
	}
	TmpMessage.SetNum(res);
	Message = UTF8_TO_TCHAR(TmpMessage.GetData());
	ChatEntryType = (ESteamChatEntryType)TmpEntryType;
	return res;
}

void UISteamFriends::GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& MemberSteamIDs)
{
	int32 count = GetFriendsGroupMembersCount(FriendsGroupID);
	if (count < 0)
	{
		return;
	}

	TArray<CSteamID> TmpArray;
	SteamFriends()->GetFriendsGroupMembersList(FriendsGroupID, TmpArray.GetData(), count);
	for (int32 i = 0; i < count; i++)
	{
		MemberSteamIDs.Add(TmpArray[i].ConvertToUint64());
	}
}

UTexture2D* UISteamFriends::GetFriendAvatar(FSteamID SteamIDFriend, ESteamAvatarSize AvatarSize, int32& ImageHandle) const
{
	int32 Avatar = 0;
	switch (AvatarSize)
	{
	case ESteamAvatarSize::Small:
		Avatar = SteamFriends()->GetSmallFriendAvatar(SteamIDFriend);
		break;
	case ESteamAvatarSize::Medium:
		Avatar = SteamFriends()->GetMediumFriendAvatar(SteamIDFriend);
		break;
	case ESteamAvatarSize::Large:
		Avatar = SteamFriends()->GetLargeFriendAvatar(SteamIDFriend);
		break;
	}

	ImageHandle = Avatar;
	uint32 Width = 0, Height = 0;
	SteamUtils()->GetImageSize(Avatar, &Width, &Height);
	if (Width > 0 && Height > 0)
	{
		UTexture2D* AvatarTexture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
		uint8* AvatarRGBA = new uint8[Width * Height * 4];
		SteamUtils()->GetImageRGBA(Avatar, (uint8*)AvatarRGBA, 4 * Height * Width);
		for (uint32 i = 0; i < (Width * Height * 4); i += 4)
		{
			uint8 Temp = AvatarRGBA[i + 0];
			AvatarRGBA[i + 0] = AvatarRGBA[i + 2];
			AvatarRGBA[i + 2] = Temp;
		}
		uint8* MipData = (uint8*)AvatarTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(MipData, (void*)AvatarRGBA, Height * Width * 4);
		AvatarTexture->PlatformData->Mips[0].BulkData.Unlock();
		AvatarTexture->PlatformData->SetNumSlices(1);
		AvatarTexture->NeverStream = true;
		AvatarTexture->UpdateResource();
		delete[] AvatarRGBA;

		return AvatarTexture;
	}

	return nullptr;
}

TArray<ESteamUserRestrictions> UISteamFriends::GetUserRestrictions() const
{
	TArray<ESteamUserRestrictions> TmpArray;
	uint32 flags = SteamFriends()->GetUserRestrictions();
	for (int i = 0; i < 32; i++)
	{
		if (flags & 1 << i)
		{
			TmpArray.Add((ESteamUserRestrictions)i);
		}
	}
	return TmpArray;
}

bool UISteamFriends::HasFriend(FSteamID SteamIDFriend, const TArray<ESteamFriendFlags>& FriendFlags)
{
	int32 flags = FriendFlags.Contains(ESteamFriendFlags::All) ? 0xFFFF : 0;

	if (flags == 0)
	{
		for (int32 i = 0; i < FriendFlags.Num(); i++)
		{
			flags |= 1 << (int32)FriendFlags[i];
		}
	}

	return SteamFriends()->HasFriend(SteamIDFriend, flags);
}

void UISteamFriends::OnAvatarImageLoaded(AvatarImageLoaded_t* pParam)
{
	m_OnAvatarImageLoaded.Broadcast(pParam->m_steamID.ConvertToUint64(), pParam->m_iImage, pParam->m_iWide, pParam->m_iTall);
}

void UISteamFriends::OnClanOfficerListResponse(ClanOfficerListResponse_t* pParam)
{
	m_OnClanOfficerListResponse.Broadcast(pParam->m_steamIDClan.ConvertToUint64(), pParam->m_cOfficers, pParam->m_bSuccess == 1);
}

void UISteamFriends::OnDownloadClanActivityCountsResult(DownloadClanActivityCountsResult_t* pParam)
{
	m_OnDownloadClanActivityCountsResult.Broadcast(pParam->m_bSuccess);
}

void UISteamFriends::OnFriendRichPresenceUpdate(FriendRichPresenceUpdate_t* pParam)
{
	m_OnFriendRichPresenceUpdate.Broadcast(pParam->m_steamIDFriend.ConvertToUint64(), pParam->m_nAppID);
}

void UISteamFriends::OnFriendsEnumerateFollowingList(FriendsEnumerateFollowingList_t* pParam)
{
#if 0
	TArray<FSteamID> TmpArray;

	for (int32 i = 0; i < pParam->m_nResultsReturned; i++)
	{
		TmpArray.Add(pParam->m_rgSteamID[i].ConvertToUint64());
	}

	m_OnFriendsEnumerateFollowingList.Broadcast((ESteamResult)pParam->m_eResult, TmpArray, pParam->m_nResultsReturned, pParam->m_nTotalResultCount);
#endif  // 0
}

void UISteamFriends::OnFriendsGetFollowerCount(FriendsGetFollowerCount_t* pParam)
{
	m_OnFriendsGetFollowerCount.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_steamID.ConvertToUint64(), pParam->m_nCount);
}

void UISteamFriends::OnFriendsIsFollowing(FriendsIsFollowing_t* pParam)
{
	m_OnFriendsIsFollowing.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_steamID.ConvertToUint64(), pParam->m_bIsFollowing);
}

void UISteamFriends::OnGameConnectedChatJoin(GameConnectedChatJoin_t* pParam)
{
	m_OnGameConnectedChatJoin.Broadcast(pParam->m_steamIDClanChat.ConvertToUint64(), pParam->m_steamIDUser.ConvertToUint64());
}

void UISteamFriends::OnGameConnectedChatLeave(GameConnectedChatLeave_t* pParam)
{
	m_OnGameConnectedChatLeave.Broadcast(pParam->m_steamIDClanChat.ConvertToUint64(), pParam->m_steamIDUser.ConvertToUint64(), pParam->m_bKicked, pParam->m_bDropped);
}

void UISteamFriends::OnGameConnectedClanChatMsg(GameConnectedClanChatMsg_t* pParam)
{
	m_OnGameConnectedClanChatMsg.Broadcast(pParam->m_steamIDClanChat.ConvertToUint64(), pParam->m_steamIDUser.ConvertToUint64(), pParam->m_iMessageID);
}

void UISteamFriends::OnGameConnectedFriendChatMsg(GameConnectedFriendChatMsg_t* pParam)
{
	m_OnGameConnectedFriendChatMsg.Broadcast(pParam->m_steamIDUser.ConvertToUint64(), pParam->m_iMessageID);
}

void UISteamFriends::OnGameLobbyJoinRequested(GameLobbyJoinRequested_t* pParam)
{
	m_OnGameLobbyJoinRequested.Broadcast(pParam->m_steamIDLobby.ConvertToUint64(), pParam->m_steamIDFriend.ConvertToUint64());
}

void UISteamFriends::OnGameOverlayActivated(GameOverlayActivated_t* pParam)
{
	m_OnGameOverlayActivated.Broadcast(pParam->m_bActive == 1);
}

void UISteamFriends::OnGameRichPresenceJoinRequested(GameRichPresenceJoinRequested_t* pParam)
{
	m_OnGameRichPresenceJoinRequested.Broadcast(pParam->m_steamIDFriend.ConvertToUint64(), UTF8_TO_TCHAR(pParam->m_rgchConnect));
}

void UISteamFriends::OnGameServerChangeRequested(GameServerChangeRequested_t* pParam)
{
	m_OnGameServerChangeRequested.Broadcast(UTF8_TO_TCHAR(pParam->m_rgchServer), UTF8_TO_TCHAR(pParam->m_rgchPassword));
}

void UISteamFriends::OnJoinClanChatRoomCompletionResult(JoinClanChatRoomCompletionResult_t* pParam)
{
	m_OnJoinClanChatRoomCompletionResult.Broadcast(pParam->m_steamIDClanChat.ConvertToUint64(), (ESteamChatRoomEnterResponse)pParam->m_eChatRoomEnterResponse);
}

void UISteamFriends::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	m_OnPersonaStateChange.Broadcast(pParam->m_ulSteamID, static_cast<ESteamPersonaChange>((uint8)pParam->m_nChangeFlags));
}

void UISteamFriends::OnSetPersonaNameResponse(SetPersonaNameResponse_t* pParam)
{
	m_OnSetPersonaNameResponse.Broadcast(pParam->m_bSuccess, pParam->m_bLocalSuccess, (ESteamResult)pParam->m_result);
}
