// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamFriends.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamFriends;
class UTexture2D;
enum class ESteamAvatarSize : uint8;
enum class ESteamChatEntryType : uint8;
enum class ESteamChatRoomEnterResponse : uint8;
enum class ESteamFriendFlags : uint8;
enum class ESteamFriendRelationship : uint8;
enum class ESteamGameOverlayTypes : uint8;
enum class ESteamGameUserOverlayTypes : uint8;
enum class ESteamOverlayToStoreFlag : uint8;
enum class ESteamPersonaChange : uint8;
enum class ESteamPersonaState : uint8;
enum class ESteamResult : uint8;
enum class ESteamUserRestrictions : uint8;
struct FSteamAPICall;
struct FSteamFriendsGroupID;
struct FSteamID;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamFriends_generated_h
#error "UISteamFriends.generated.h already included, missing '#pragma once' in UISteamFriends.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamFriends_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnAvatarImageLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvatarImageLoadedDelegate, FSteamID SteamID, int32 ImageHandle, int32 Width, int32 Height);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnClanOfficerListResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClanOfficerListResponseDelegate, FSteamID SteamID, int32 OfficersCount, bool bSuccess);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnDownloadClanActivityCountsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsResultDelegate, bool bSuccess);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFriendRichPresenceUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendRichPresenceUpdateDelegate, FSteamID SteamID, int32 AppID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFriendsEnumerateFollowingListDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsEnumerateFollowingListDelegate, ESteamResult Result, const TArray<FSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResults);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFriendsGetFollowerCountDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsGetFollowerCountDelegate, ESteamResult Result, FSteamID SteamID, int32 Count);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFriendsIsFollowingDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFriendsIsFollowingDelegate, ESteamResult Result, FSteamID SteamID, bool bIsFollowing);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameConnectedChatJoinDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatJoinDelegate, FSteamID SteamIDClanChat, FSteamID SteamIDUser);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameConnectedChatLeaveDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedChatLeaveDelegate, FSteamID SteamIDClanChat, FSteamID SteamIDUser, bool bKicked, bool bDropped);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_18_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameConnectedClanChatMsgDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedClanChatMsgDelegate, FSteamID SteamIDClanChat, FSteamID SteamIDUser, int32 MessageID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameConnectedFriendChatMsgDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectedFriendChatMsgDelegate, FSteamID SteamIDUser, int32 MessageID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_20_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameLobbyJoinRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameLobbyJoinRequestedDelegate, FSteamID SteamIDLobby, FSteamID SteamIDFriend);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_21_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameOverlayActivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameOverlayActivatedDelegate, bool bActive);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_22_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameRichPresenceJoinRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameRichPresenceJoinRequestedDelegate, FSteamID SteamIDFriend, const FString& ConnectionString);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_23_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameServerChangeRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameServerChangeRequestedDelegate, const FString& IP, const FString& Password);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_24_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnJoinClanChatRoomCompletionResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomCompletionResultDelegate, FSteamID SteamIDClanChat, ESteamChatRoomEnterResponse Response);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_25_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnPersonaStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPersonaStateChangeDelegate, FSteamID SteamID, ESteamPersonaChange PersonaStateChange);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_26_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSetPersonaNameResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameResponseDelegate, bool bSuccess, bool bLocalSuccess, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRichPresence); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execSetPersonaName); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSendClanChatMessage); \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execRequestFriendRichPresence); \
	DECLARE_FUNCTION(execRequestClanOfficerList); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execOpenClanChatWindowInSteam); \
	DECLARE_FUNCTION(execLeaveClanChatRoom); \
	DECLARE_FUNCTION(execJoinClanChatRoom); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execIsFollowing); \
	DECLARE_FUNCTION(execIsClanChatWindowOpenInSteam); \
	DECLARE_FUNCTION(execIsClanOfficialGameGroup); \
	DECLARE_FUNCTION(execIsClanPublic); \
	DECLARE_FUNCTION(execIsClanChatAdmin); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execHasFriend); \
	DECLARE_FUNCTION(execGetUserRestrictions); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPersonaState); \
	DECLARE_FUNCTION(execGetPersonaName); \
	DECLARE_FUNCTION(execGetFriendAvatar); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetFriendsGroupName); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersList); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersCount); \
	DECLARE_FUNCTION(execGetFriendsGroupIDByIndex); \
	DECLARE_FUNCTION(execGetFriendsGroupCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execGetFriendRichPresence); \
	DECLARE_FUNCTION(execGetFriendRelationship); \
	DECLARE_FUNCTION(execGetFriendPersonaState); \
	DECLARE_FUNCTION(execGetFriendPersonaNameHistory); \
	DECLARE_FUNCTION(execGetFriendPersonaName); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execGetFriendGamePlayed); \
	DECLARE_FUNCTION(execGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execGetFriendCountFromSource); \
	DECLARE_FUNCTION(execGetFriendCount); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetFriendByIndex); \
	DECLARE_FUNCTION(execGetFollowerCount); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execGetClanTag); \
	DECLARE_FUNCTION(execGetClanOwner); \
	DECLARE_FUNCTION(execGetClanOfficerCount); \
	DECLARE_FUNCTION(execGetClanOfficerByIndex); \
	DECLARE_FUNCTION(execGetClanName); \
	DECLARE_FUNCTION(execGetClanCount); \
	DECLARE_FUNCTION(execGetClanChatMessage); \
	DECLARE_FUNCTION(execGetClanChatMemberCount); \
	DECLARE_FUNCTION(execGetClanByIndex); \
	DECLARE_FUNCTION(execGetClanActivityCounts); \
	DECLARE_FUNCTION(execGetChatMemberByIndex); \
	DECLARE_FUNCTION(execDownloadClanActivityCounts); \
	DECLARE_FUNCTION(execCloseClanChatWindowInSteam); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialog); \
	DECLARE_FUNCTION(execActivateGameOverlay); \
	DECLARE_FUNCTION(execGetSteamFriends);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRichPresence); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execSetPersonaName); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSendClanChatMessage); \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execRequestFriendRichPresence); \
	DECLARE_FUNCTION(execRequestClanOfficerList); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execOpenClanChatWindowInSteam); \
	DECLARE_FUNCTION(execLeaveClanChatRoom); \
	DECLARE_FUNCTION(execJoinClanChatRoom); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execIsFollowing); \
	DECLARE_FUNCTION(execIsClanChatWindowOpenInSteam); \
	DECLARE_FUNCTION(execIsClanOfficialGameGroup); \
	DECLARE_FUNCTION(execIsClanPublic); \
	DECLARE_FUNCTION(execIsClanChatAdmin); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execHasFriend); \
	DECLARE_FUNCTION(execGetUserRestrictions); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPersonaState); \
	DECLARE_FUNCTION(execGetPersonaName); \
	DECLARE_FUNCTION(execGetFriendAvatar); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetFriendsGroupName); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersList); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersCount); \
	DECLARE_FUNCTION(execGetFriendsGroupIDByIndex); \
	DECLARE_FUNCTION(execGetFriendsGroupCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execGetFriendRichPresence); \
	DECLARE_FUNCTION(execGetFriendRelationship); \
	DECLARE_FUNCTION(execGetFriendPersonaState); \
	DECLARE_FUNCTION(execGetFriendPersonaNameHistory); \
	DECLARE_FUNCTION(execGetFriendPersonaName); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execGetFriendGamePlayed); \
	DECLARE_FUNCTION(execGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execGetFriendCountFromSource); \
	DECLARE_FUNCTION(execGetFriendCount); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetFriendByIndex); \
	DECLARE_FUNCTION(execGetFollowerCount); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execGetClanTag); \
	DECLARE_FUNCTION(execGetClanOwner); \
	DECLARE_FUNCTION(execGetClanOfficerCount); \
	DECLARE_FUNCTION(execGetClanOfficerByIndex); \
	DECLARE_FUNCTION(execGetClanName); \
	DECLARE_FUNCTION(execGetClanCount); \
	DECLARE_FUNCTION(execGetClanChatMessage); \
	DECLARE_FUNCTION(execGetClanChatMemberCount); \
	DECLARE_FUNCTION(execGetClanByIndex); \
	DECLARE_FUNCTION(execGetClanActivityCounts); \
	DECLARE_FUNCTION(execGetChatMemberByIndex); \
	DECLARE_FUNCTION(execDownloadClanActivityCounts); \
	DECLARE_FUNCTION(execCloseClanChatWindowInSteam); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialog); \
	DECLARE_FUNCTION(execActivateGameOverlay); \
	DECLARE_FUNCTION(execGetSteamFriends);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamFriends(); \
	friend struct Z_Construct_UClass_UISteamFriends_Statics; \
public: \
	DECLARE_CLASS(UISteamFriends, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamFriends)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUISteamFriends(); \
	friend struct Z_Construct_UClass_UISteamFriends_Statics; \
public: \
	DECLARE_CLASS(UISteamFriends, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamFriends)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamFriends(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamFriends) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamFriends); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamFriends); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamFriends(UISteamFriends&&); \
	NO_API UISteamFriends(const UISteamFriends&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamFriends(UISteamFriends&&); \
	NO_API UISteamFriends(const UISteamFriends&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamFriends); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamFriends); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamFriends)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_31_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamFriends."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamFriends>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
