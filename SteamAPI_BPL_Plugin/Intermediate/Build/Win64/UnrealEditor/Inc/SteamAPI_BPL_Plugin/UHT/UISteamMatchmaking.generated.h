// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamMatchmaking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamMatchmaking;
enum class ESteamChatEntryType : uint8;
enum class ESteamChatMemberStateChange : uint8;
enum class ESteamChatRoomEnterResponse : uint8;
enum class ESteamFavoriteFlags : uint8;
enum class ESteamLobbyComparison : uint8;
enum class ESteamLobbyDistanceFilter : uint8;
enum class ESteamLobbyType : uint8;
enum class ESteamResult : uint8;
struct FAccountID;
struct FSteamAPICall;
struct FSteamID;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamMatchmaking_generated_h
#error "UISteamMatchmaking.generated.h already included, missing '#pragma once' in UISteamMatchmaking.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamMatchmaking_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFavoritesListAccountsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdatedDelegate, ESteamResult Result);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFavoritesListChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChangedDelegate, const FString& IP, int32 QueryPort, int32 ConnectionPort, int32 AppID, const TArray<ESteamFavoriteFlags>& Flags, bool bAdd, FAccountID AccountID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyChatMsgDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsgDelegate, FSteamID SteamIDLobby, FSteamID SteamIDUser, ESteamChatEntryType ChatEntryType, int32 ChatID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyChatUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdateDelegate, FSteamID SteamIDLobby, FSteamID SteamIDUserChanged, FSteamID SteamIDMakingChange, const TArray<ESteamChatMemberStateChange>& ChatMemberStateChange);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyCreatedDelegate, ESteamResult Result, FSteamID SteamIDLobby);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyDataUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdateDelegate, FSteamID SteamIDLobby, FSteamID SteamIDMember, bool bSuccess);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyEnterDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnterDelegate, FSteamID SteamIDLobby, bool bLocked, ESteamChatRoomEnterResponse ChatRoomEnterResponse);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyGameCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreatedDelegate, FSteamID SteamIDLobby, FSteamID SteamIDGameServer, const FString& IP, int32 Port);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyInviteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInviteDelegate, FSteamID SteamIDUser, FSteamID SteamIDLobby, int32 GameID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLobbyMatchListDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMatchListDelegate, int32 LobbiesMatching);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLobbyType); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSetLobbyMemberData); \
	DECLARE_FUNCTION(execSetLobbyJoinable); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyData); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execRequestLobbyList); \
	DECLARE_FUNCTION(execRequestLobbyData); \
	DECLARE_FUNCTION(execRemoveFavoriteGame); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execInviteUserToLobby); \
	DECLARE_FUNCTION(execGetNumLobbyMembers); \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execGetLobbyMemberData); \
	DECLARE_FUNCTION(execGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execGetLobbyDataCount); \
	DECLARE_FUNCTION(execGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execGetLobbyData); \
	DECLARE_FUNCTION(execGetLobbyChatEntry); \
	DECLARE_FUNCTION(execGetLobbyByIndex); \
	DECLARE_FUNCTION(execGetFavoriteGameCount); \
	DECLARE_FUNCTION(execGetFavoriteGame); \
	DECLARE_FUNCTION(execDeleteLobbyData); \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execAddFavoriteGame); \
	DECLARE_FUNCTION(execGetSteamMatchmaking);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLobbyType); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSetLobbyMemberData); \
	DECLARE_FUNCTION(execSetLobbyJoinable); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyData); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execRequestLobbyList); \
	DECLARE_FUNCTION(execRequestLobbyData); \
	DECLARE_FUNCTION(execRemoveFavoriteGame); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execInviteUserToLobby); \
	DECLARE_FUNCTION(execGetNumLobbyMembers); \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execGetLobbyMemberData); \
	DECLARE_FUNCTION(execGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execGetLobbyDataCount); \
	DECLARE_FUNCTION(execGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execGetLobbyData); \
	DECLARE_FUNCTION(execGetLobbyChatEntry); \
	DECLARE_FUNCTION(execGetLobbyByIndex); \
	DECLARE_FUNCTION(execGetFavoriteGameCount); \
	DECLARE_FUNCTION(execGetFavoriteGame); \
	DECLARE_FUNCTION(execDeleteLobbyData); \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execAddFavoriteGame); \
	DECLARE_FUNCTION(execGetSteamMatchmaking);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamMatchmaking(); \
	friend struct Z_Construct_UClass_UISteamMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UISteamMatchmaking, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMatchmaking)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUISteamMatchmaking(); \
	friend struct Z_Construct_UClass_UISteamMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UISteamMatchmaking, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMatchmaking)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamMatchmaking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMatchmaking(UISteamMatchmaking&&); \
	NO_API UISteamMatchmaking(const UISteamMatchmaking&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMatchmaking(UISteamMatchmaking&&); \
	NO_API UISteamMatchmaking(const UISteamMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamMatchmaking)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_23_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamMatchmaking."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
