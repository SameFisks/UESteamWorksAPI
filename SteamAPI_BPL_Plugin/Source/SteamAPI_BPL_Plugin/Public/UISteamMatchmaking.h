
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamMatchmaking.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFavoritesListAccountsUpdatedDelegate, ESteamResult, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOnFavoritesListChangedDelegate, FString, IP, int32, QueryPort, int32, ConnectionPort, int32, AppID, TArray<ESteamFavoriteFlags>, Flags, bool, bAdd, FAccountID, AccountID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLobbyChatMsgDelegate, FSteamID, SteamIDLobby, FSteamID, SteamIDUser, ESteamChatEntryType, ChatEntryType, int32, ChatID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLobbyChatUpdateDelegate, FSteamID, SteamIDLobby, FSteamID, SteamIDUserChanged, FSteamID, SteamIDMakingChange, TArray<ESteamChatMemberStateChange>, ChatMemberStateChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyCreatedDelegate, ESteamResult, Result, FSteamID, SteamIDLobby);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLobbyDataUpdateDelegate, FSteamID, SteamIDLobby, FSteamID, SteamIDMember, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLobbyEnterDelegate, FSteamID, SteamIDLobby, bool, bLocked, ESteamChatRoomEnterResponse, ChatRoomEnterResponse);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLobbyGameCreatedDelegate, FSteamID, SteamIDLobby, FSteamID, SteamIDGameServer, FString, IP, int32, Port);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLobbyInviteDelegate, FSteamID, SteamIDUser, FSteamID, SteamIDLobby, int32, GameID);
// DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyKickedDelegate); // currently unused
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyMatchListDelegate, int32, LobbiesMatching);


//Functions for clients to access matchmaking services, favorites, and to operate on game lobbies.
UCLASS()
class UISteamMatchmaking : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


public:
	UISteamMatchmaking();
	~UISteamMatchmaking();

	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Matchmaking", CompactNodeTitle = "SteamMatchmaking"))
		static UISteamMatchmaking* GetSteamMatchmaking() { return UISteamMatchmaking::StaticClass()->GetDefaultObject<UISteamMatchmaking>(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		int32 AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnPort, int32 QueryPort, const TArray<ESteamFavoriteFlags>& Flags, int32 TimeLastPlayedOnServer) const;

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter) { SteamMatchmaking()->AddRequestLobbyListDistanceFilter((ELobbyDistanceFilter)LobbyDistanceFilter); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable) { SteamMatchmaking()->AddRequestLobbyListFilterSlotsAvailable(SlotsAvailable); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void AddRequestLobbyListNearValueFilter(const FString& KeyToMatch, int32 ValueToBeCloseTo) { SteamMatchmaking()->AddRequestLobbyListNearValueFilter(TCHAR_TO_UTF8(*KeyToMatch), ValueToBeCloseTo); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void AddRequestLobbyListNumericalFilter(const FString& KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType) { SteamMatchmaking()->AddRequestLobbyListNumericalFilter(TCHAR_TO_UTF8(*KeyToMatch), ValueToMatch, (ELobbyComparison)((uint8)ComparisonType - 2)); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void AddRequestLobbyListResultCountFilter(int32 MaxResults) { SteamMatchmaking()->AddRequestLobbyListResultCountFilter(MaxResults); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void AddRequestLobbyListStringFilter(const FString& KeyToMatch, const FString& ValueToMatch, ESteamLobbyComparison ComparisonType) { SteamMatchmaking()->AddRequestLobbyListStringFilter(TCHAR_TO_UTF8(*KeyToMatch), TCHAR_TO_UTF8(*ValueToMatch), (ELobbyComparison)((uint8)ComparisonType - 2)); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		FSteamAPICall CreateLobby(ESteamLobbyType LobbyType = ESteamLobbyType::FriendsOnly, uint8 MaxMembers = 1) const { return SteamMatchmaking()->CreateLobby((ELobbyType)LobbyType, MaxMembers); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool DeleteLobbyData(FSteamID SteamIDLobby, const FString& Key) const { return SteamMatchmaking()->DeleteLobbyData(SteamIDLobby, TCHAR_TO_UTF8(*Key)); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool GetFavoriteGame(int32 GameIndex, int32& AppID, FString& IP, int32& ConnPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer) const;

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		int32 GetFavoriteGameCount() const { return SteamMatchmaking()->GetFavoriteGameCount(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		FSteamID GetLobbyByIndex(int32 LobbyIndex) const { return SteamMatchmaking()->GetLobbyByIndex(LobbyIndex).ConvertToUint64(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		int32 GetLobbyChatEntry(FSteamID SteamIDLobby, int32 ChatID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType) const;

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		FString GetLobbyData(FSteamID SteamIDLobby, const FString& Key) const { return UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyData(SteamIDLobby, TCHAR_TO_UTF8(*Key))); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value) const;

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		int32 GetLobbyDataCount(FSteamID SteamIDLobby) const { return SteamMatchmaking()->GetLobbyDataCount(SteamIDLobby); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer) const;

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 MemberIndex) const { return SteamMatchmaking()->GetLobbyMemberByIndex(SteamIDLobby, MemberIndex).ConvertToUint64(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, const FString& Key) const { return UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyMemberData(SteamIDLobby, SteamIDUser, TCHAR_TO_UTF8(*Key))); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		int32 GetLobbyMemberLimit(FSteamID SteamIDLobby) const { return SteamMatchmaking()->GetLobbyMemberLimit(SteamIDLobby); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		FSteamID GetLobbyOwner(FSteamID SteamIDLobby) const { return SteamMatchmaking()->GetLobbyOwner(SteamIDLobby).ConvertToUint64(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmaking")
		int32 GetNumLobbyMembers(FSteamID SteamIDLobby) const { return SteamMatchmaking()->GetNumLobbyMembers(SteamIDLobby); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee) const { return SteamMatchmaking()->InviteUserToLobby(SteamIDLobby, SteamIDInvitee); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		FSteamAPICall JoinLobby(FSteamID SteamIDLobby) const { return SteamMatchmaking()->JoinLobby(SteamIDLobby); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void LeaveLobby(FSteamID SteamIDLobby) { SteamMatchmaking()->LeaveLobby(SteamIDLobby); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnPort, int32 QueryPort, const TArray<ESteamFavoriteFlags>& Flags) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool RequestLobbyData(FSteamID SteamIDLobby) const { return SteamMatchmaking()->RequestLobbyData(SteamIDLobby); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		FSteamAPICall RequestLobbyList() const { return SteamMatchmaking()->RequestLobbyList(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool SetLobbyData(FSteamID SteamIDLobby, const FString& Key, const FString& Value) const { return SteamMatchmaking()->SetLobbyData(SteamIDLobby, TCHAR_TO_UTF8(*Key), TCHAR_TO_UTF8(*Value)); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void SetLobbyGameServer(FSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable) const { return SteamMatchmaking()->SetLobbyJoinable(SteamIDLobby, bLobbyJoinable); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmaking")
		void SetLobbyMemberData(FSteamID SteamIDLobby, const FString& Key, const FString& Value) { SteamMatchmaking()->SetLobbyMemberData(SteamIDLobby, TCHAR_TO_UTF8(*Key), TCHAR_TO_UTF8(*Value)); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool SetLobbyMemberLimit(FSteamID SteamIDLobby, uint8 MaxMembers = 5) const { return SteamMatchmaking()->SetLobbyMemberLimit(SteamIDLobby, MaxMembers); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner) const { return SteamMatchmaking()->SetLobbyOwner(SteamIDLobby, SteamIDNewOwner); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMatchmaking")
		bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType) const { return SteamMatchmaking()->SetLobbyType(SteamIDLobby, (ELobbyType)LobbyType); }

	/** Delegates */

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnFavoritesListAccountsUpdated"))
		FOnFavoritesListAccountsUpdatedDelegate m_OnFavoritesListAccountsUpdated;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnFavoritesListChanged"))
		FOnFavoritesListChangedDelegate m_OnFavoritesListChanged;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyChatMsg"))
		FOnLobbyChatMsgDelegate m_OnLobbyChatMsg;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyChatUpdate"))
		FOnLobbyChatUpdateDelegate m_OnLobbyChatUpdate;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyCreated"))
		FOnLobbyCreatedDelegate m_OnLobbyCreated;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyDataUpdate"))
		FOnLobbyDataUpdateDelegate m_OnLobbyDataUpdate;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyEnter"))
		FOnLobbyEnterDelegate m_OnLobbyEnter;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyGameCreated"))
		FOnLobbyGameCreatedDelegate m_OnLobbyGameCreated;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyInvite"))
		FOnLobbyInviteDelegate m_OnLobbyInvite;

	// This is currently unused
	/*UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyKicked"))
	FOnLobbyKickedDelegate m_OnLobbyKicked;*/

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMatchmaking", meta = (DisplayName = "OnLobbyMatchList"))
		FOnLobbyMatchListDelegate m_OnLobbyMatchList;

protected:
private:
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnFavoritesListAccountsUpdated, FavoritesListAccountsUpdated_t, OnFavoritesListAccountsUpdatedCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnFavoritesListChanged, FavoritesListChanged_t, OnFavoritesListChangedCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyChatMsg, LobbyChatMsg_t, OnLobbyChatMsgCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyChatUpdate, LobbyChatUpdate_t, OnLobbyChatUpdateCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyCreated, LobbyCreated_t, OnLobbyCreatedCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyDataUpdate, LobbyDataUpdate_t, OnLobbyDataUpdateCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyEnter, LobbyEnter_t, OnLobbyEnterCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyGameCreated, LobbyGameCreated_t, OnLobbyGameCreatedCallback);
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyInvite, LobbyInvite_t, OnLobbyInviteCallback);
	// STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyKicked, LobbyKicked_t, OnLobbyKickedCallback); // This is currently unused
	STEAM_CALLBACK_MANUAL(UISteamMatchmaking, OnLobbyMatchList, LobbyMatchList_t, OnLobbyMatchListCallback);
};

