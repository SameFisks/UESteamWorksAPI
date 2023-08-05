#include "UISteamMatchmaking.h"
#include "USteamUtils.h"

UISteamMatchmaking::UISteamMatchmaking(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamMatchmaking::UISteamMatchmaking()
{
	OnFavoritesListAccountsUpdatedCallback.Register(this, &UISteamMatchmaking::OnFavoritesListAccountsUpdated);
	OnFavoritesListChangedCallback.Register(this, &UISteamMatchmaking::OnFavoritesListChanged);
	OnLobbyChatMsgCallback.Register(this, &UISteamMatchmaking::OnLobbyChatMsg);
	OnLobbyChatUpdateCallback.Register(this, &UISteamMatchmaking::OnLobbyChatUpdate);
	OnLobbyCreatedCallback.Register(this, &UISteamMatchmaking::OnLobbyCreated);
	OnLobbyDataUpdateCallback.Register(this, &UISteamMatchmaking::OnLobbyDataUpdate);
	OnLobbyEnterCallback.Register(this, &UISteamMatchmaking::OnLobbyEnter);
	OnLobbyGameCreatedCallback.Register(this, &UISteamMatchmaking::OnLobbyGameCreated);
	OnLobbyInviteCallback.Register(this, &UISteamMatchmaking::OnLobbyInvite);
	// OnLobbyKickedCallback.Register(this, &UISteamMatchmaking::OnLobbyKicked); // This is currently unused
	OnLobbyMatchListCallback.Register(this, &UISteamMatchmaking::OnLobbyMatchList);
}

UISteamMatchmaking::~UISteamMatchmaking()
{
	OnFavoritesListAccountsUpdatedCallback.Unregister();
	OnFavoritesListChangedCallback.Unregister();
	OnLobbyChatMsgCallback.Unregister();
	OnLobbyChatUpdateCallback.Unregister();
	OnLobbyCreatedCallback.Unregister();
	OnLobbyDataUpdateCallback.Unregister();
	OnLobbyEnterCallback.Unregister();
	OnLobbyGameCreatedCallback.Unregister();
	OnLobbyInviteCallback.Unregister();
	// OnLobbyKickedCallback.Unregister(); // This is currently unused
	OnLobbyMatchListCallback.Unregister();
}

int32 UISteamMatchmaking::AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnPort, int32 QueryPort, const TArray<ESteamFavoriteFlags>& Flags, int32 TimeLastPlayedOnServer) const
{
	uint32 TmpIP = 0;
	USteamUtils::ConvertIPStringToUint32(IP, TmpIP);

	int32 TmpFlags = 0;
	for (int32 i = 0; i < Flags.Num(); i++)
	{
		TmpFlags |= 1 << (int32)Flags[i];
	}

	return SteamMatchmaking()->AddFavoriteGame(AppID, TmpIP, ConnPort, QueryPort, TmpFlags, TimeLastPlayedOnServer);
}

bool UISteamMatchmaking::GetFavoriteGame(int32 GameIndex, int32& AppID, FString& IP, int32& ConnPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer) const
{
	uint32 TmpIP = 0, TmpFlags = 0;

	bool bResult = SteamMatchmaking()->GetFavoriteGame(GameIndex, (uint32*)&AppID, &TmpIP, (uint16*)&ConnPort, (uint16*)&QueryPort, &TmpFlags, (uint32*)&TimeLastPlayedOnServer);
	IP = USteamUtils::ConvertIPToString(TmpIP);

	for (int32 i = 0; i < 32; i++)
	{
		if (TmpFlags & 1 << i)
		{
			Flags.Add((ESteamFavoriteFlags)i);
		}
	}

	return bResult;
}

int32 UISteamMatchmaking::GetLobbyChatEntry(FSteamID SteamIDLobby, int32 ChatID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType) const
{
	EChatEntryType TmpType;
	CSteamID TmpUserSteamID = SteamIDUser;
	TArray<uint8> MessageBuffer;
	MessageBuffer.SetNum(8192);

	int32 Result = SteamMatchmaking()->GetLobbyChatEntry(SteamIDLobby, ChatID, &TmpUserSteamID, MessageBuffer.GetData(), 8192, &TmpType);

	SteamIDUser = TmpUserSteamID.ConvertToUint64();
	ChatEntryType = (ESteamChatEntryType)TmpType;

	FMemoryReader MemReader(MessageBuffer, true);
	MemReader << Message;
	MemReader.Close();

	return Result;
}

bool UISteamMatchmaking::GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value) const
{
	TArray<char> TmpKey, TmpValue;
	TmpKey.SetNum(8192);
	TmpValue.SetNum(8192);

	bool bResult = SteamMatchmaking()->GetLobbyDataByIndex(SteamIDLobby, LobbyData, TmpKey.GetData(), 8192, TmpValue.GetData(), 8192);

	Key = UTF8_TO_TCHAR(TmpKey.GetData());
	Value = UTF8_TO_TCHAR(TmpValue.GetData());

	return bResult;
}

bool UISteamMatchmaking::GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer) const
{
	uint32 TmpIP = 0;
	bool bResult = SteamMatchmaking()->GetLobbyGameServer(SteamIDLobby, &TmpIP, (uint16*)&GameServerPort, (CSteamID*)&SteamIDGameServer);
	GameServerIP = USteamUtils::ConvertIPToString(TmpIP);
	return bResult;
}

bool UISteamMatchmaking::RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnPort, int32 QueryPort, const TArray<ESteamFavoriteFlags>& Flags) const
{
	uint32 TmpIP = 0;
	USteamUtils::ConvertIPStringToUint32(IP, TmpIP);

	int32 TmpFlags = 0;
	for (int32 i = 0; i < Flags.Num(); i++)
	{
		TmpFlags |= 1 << (int32)Flags[i];
	}

	return SteamMatchmaking()->RemoveFavoriteGame(AppID, TmpIP, ConnPort, QueryPort, TmpFlags);
}

bool UISteamMatchmaking::SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message) const
{
	TArray<uint8> MessageBuffer;
	FMemoryWriter MemWriter(MessageBuffer, true);
	MemWriter << Message;
	MemWriter.Close();

	return SteamMatchmaking()->SendLobbyChatMsg(SteamIDLobby, MessageBuffer.GetData(), MessageBuffer.Num());
}

void UISteamMatchmaking::SetLobbyGameServer(FSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer) const
{
	uint32 TmpIP = 0;
	USteamUtils::ConvertIPStringToUint32(GameServerIP, TmpIP);

	SteamMatchmaking()->SetLobbyGameServer(SteamIDLobby, TmpIP, GameServerPort, SteamIDGameServer);
}

void UISteamMatchmaking::OnFavoritesListAccountsUpdated(FavoritesListAccountsUpdated_t* pParam)
{
	m_OnFavoritesListAccountsUpdated.Broadcast((ESteamResult)pParam->m_eResult);
}

void UISteamMatchmaking::OnFavoritesListChanged(FavoritesListChanged_t* pParam)
{
	uint32 TmpFlags = pParam->m_nFlags;
	TArray<ESteamFavoriteFlags> Flags;
	for (int32 i = 0; i < 32; i++)
	{
		if (TmpFlags & 1 << i)
		{
			Flags.Add((ESteamFavoriteFlags)i);
		}
	}
	m_OnFavoritesListChanged.Broadcast(USteamUtils::ConvertIPToString(pParam->m_nIP), pParam->m_nQueryPort, pParam->m_nConnPort, pParam->m_nAppID, Flags, pParam->m_bAdd, pParam->m_unAccountId);
}

void UISteamMatchmaking::OnLobbyChatMsg(LobbyChatMsg_t* pParam)
{
	m_OnLobbyChatMsg.Broadcast(pParam->m_ulSteamIDLobby, pParam->m_ulSteamIDUser, (ESteamChatEntryType)pParam->m_eChatEntryType, pParam->m_iChatID);
}

void UISteamMatchmaking::OnLobbyChatUpdate(LobbyChatUpdate_t* pParam)
{
	uint32 TmpFlags = pParam->m_rgfChatMemberStateChange;
	TArray<ESteamChatMemberStateChange> Flags;
	for (int32 i = 0; i < 32; i++)
	{
		if (TmpFlags & 1 << i)
		{
			Flags.Add((ESteamChatMemberStateChange)i);
		}
	}
	m_OnLobbyChatUpdate.Broadcast(pParam->m_ulSteamIDLobby, pParam->m_ulSteamIDUserChanged, pParam->m_ulSteamIDMakingChange, Flags);
}

void UISteamMatchmaking::OnLobbyCreated(LobbyCreated_t* pParam)
{
	m_OnLobbyCreated.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_ulSteamIDLobby);
}

void UISteamMatchmaking::OnLobbyDataUpdate(LobbyDataUpdate_t* pParam)
{
	m_OnLobbyDataUpdate.Broadcast(pParam->m_ulSteamIDLobby, pParam->m_ulSteamIDMember, pParam->m_bSuccess == 1);
}

void UISteamMatchmaking::OnLobbyEnter(LobbyEnter_t* pParam)
{
	m_OnLobbyEnter.Broadcast(pParam->m_ulSteamIDLobby, pParam->m_bLocked, (ESteamChatRoomEnterResponse)pParam->m_EChatRoomEnterResponse);
}

void UISteamMatchmaking::OnLobbyGameCreated(LobbyGameCreated_t* pParam)
{
	m_OnLobbyGameCreated.Broadcast(pParam->m_ulSteamIDLobby, pParam->m_ulSteamIDGameServer, USteamUtils::ConvertIPToString(pParam->m_unIP), pParam->m_usPort);
}

void UISteamMatchmaking::OnLobbyInvite(LobbyInvite_t* pParam)
{
	m_OnLobbyInvite.Broadcast(pParam->m_ulSteamIDUser, pParam->m_ulSteamIDLobby, pParam->m_ulGameID);
}

// This is currently unused
//void UISteamMatchmaking::OnLobbyKicked(LobbyKicked_t* pParam)
//{
//
//}

void UISteamMatchmaking::OnLobbyMatchList(LobbyMatchList_t* pParam)
{
	m_OnLobbyMatchList.Broadcast(pParam->m_nLobbiesMatching);
}
