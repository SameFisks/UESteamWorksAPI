// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamUserStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamUserStats;
enum class ESteamLeaderboardDataRequest : uint8;
enum class ESteamLeaderboardDisplayType : uint8;
enum class ESteamLeaderboardSortMethod : uint8;
enum class ESteamLeaderboardUploadScoreMethod : uint8;
enum class ESteamResult : uint8;
struct FSteamAPICall;
struct FSteamID;
struct FSteamLeaderboard;
struct FSteamLeaderboardEntries;
struct FSteamLeaderboardEntry;
struct FUGCHandle;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamUserStats_generated_h
#error "UISteamUserStats.generated.h already included, missing '#pragma once' in UISteamUserStats.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamUserStats_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGlobalAchievementPercentagesReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalAchievementPercentagesReadyDelegate, int64 GameID, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGlobalStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalStatsReceivedDelegate, int64 GameID, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLeaderboardFindResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFindResultDelegate, FSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLeaderboardScoresDownloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoresDownloadedDelegate, FSteamLeaderboard SteamLeaderboard, FSteamLeaderboardEntries LeaderboardEntries, int32 EntryCount);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLeaderboardScoreUploadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoreUploadedDelegate, bool bSuccess, FSteamLeaderboard SteamLeaderboard, int32 Score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLeaderboardUGCSetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardUGCSetDelegate, ESteamResult Result, FSteamLeaderboard SteamLeaderboard);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnNumberOfCurrentPlayersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNumberOfCurrentPlayersDelegate, bool bSuccess, int32 PlayersNum);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnUserAchievementIconFetchedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetchedDelegate, int64 GameID, const FString& AchievementName, bool bAchieved, int32 IconHandle);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_18_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnUserAchievementStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStoredDelegate, int64 GameID, bool bGroupAchievement, const FString& AchievementName, int32 CurProgress, int32 MaxProgress);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnUserStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceivedDelegate, int64 GameID, ESteamResult Result, FSteamID SteamIDUser);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_20_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnUserStatsStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStoredDelegate, int64 GameID, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_21_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnUserStatsUnloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloadedDelegate, FSteamID SteamIDUser);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadLeaderboardScore); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt32); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInt32); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt32); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt64); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatInt64); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execAttachLeaderboardUGC); \
	DECLARE_FUNCTION(execGetSteamUserStats);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadLeaderboardScore); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt32); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInt32); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt32); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt64); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatInt64); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execAttachLeaderboardUGC); \
	DECLARE_FUNCTION(execGetSteamUserStats);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamUserStats(); \
	friend struct Z_Construct_UClass_UISteamUserStats_Statics; \
public: \
	DECLARE_CLASS(UISteamUserStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUserStats)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUISteamUserStats(); \
	friend struct Z_Construct_UClass_UISteamUserStats_Statics; \
public: \
	DECLARE_CLASS(UISteamUserStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUserStats)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamUserStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamUserStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUserStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUserStats(UISteamUserStats&&); \
	NO_API UISteamUserStats(const UISteamUserStats&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUserStats(UISteamUserStats&&); \
	NO_API UISteamUserStats(const UISteamUserStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUserStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUserStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamUserStats)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_23_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamUserStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamUserStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
