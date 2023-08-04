// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "../Steam/steam_api.h"
#include "../Steam/steam_gameserver.h"
#include "../Steam/isteamgamecoordinator.h"
#include "SteamAPI_BPL_PluginBPLibrary.generated.h"



/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

// Declare the ISteamGameCoordinator interface
class ISteamGameCoordinator;

UENUM(BlueprintType)
enum class ESteamUserOverlayType : uint8
{
	/*Opens the overlay web browser to the specified user or groups profile.*/
	steamid,
	/*Opens a chat window to the specified user, or joins the group chat.*/
	chat,
	/*Opens a window to a Steam Trading session that was started with the ISteamEconomy / StartTrade Web API.*/
	jointrade,
	/*Opens the overlay web browser to the specified user's stats.*/
	stats,
	/*Opens the overlay web browser to the specified user's achievements.*/
	achievements,
	/*Opens the overlay in minimal mode prompting the user to add the target user as a friend.*/
	friendadd,
	/*Opens the overlay in minimal mode prompting the user to remove the target friend.*/
	friendremove,
	/*Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.*/
	friendrequestaccept,
	/*Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.*/
	friendrequestignore
};

UENUM(BlueprintType)
enum class ESteamFriendRelationship : uint8
{
	/*Friendship has not been established yet.*/
	k_EFriendRelationshipNone,
	/*The other user has requested friendship.*/
	k_EFriendRelationshipBlocked,
	/*The other user has been blocked.*/
	k_EFriendRelationshipRequestRecipient,
	/*The other user has accepted the friend request.*/
	k_EFriendRelationshipFriend,
	/*The other user has ignored the friend request.*/
	k_EFriendRelationshipRequestInitiator,
	/*The other user is on the ignore list.*/
	k_EFriendRelationshipIgnored,
	/*The other user is ignored due to a game ban.*/
	k_EFriendRelationshipIgnoredFriend,
	/*The other user is a friend and is also flagged for being watched.*/
	k_EFriendRelationshipSuggested_DEPRECATED,
	/*The other user is a friend but chat is suppressed for them.*/
	k_EFriendRelationshipMax
};

UENUM(BlueprintType)
enum class ESteamPersonaState : uint8
{
	/*The user is offline.*/
	k_EPersonaStateOffline,
	/*The user is online.*/
	k_EPersonaStateOnline,
	/*The user is busy.*/
	k_EPersonaStateBusy,
	/*The user is away.*/
	k_EPersonaStateAway,
	/*The user is snoozing.*/
	k_EPersonaStateSnooze,
	/*The user is looking to trade.*/
	k_EPersonaStateLookingToTrade,
	/*The user is looking to play.*/
	k_EPersonaStateLookingToPlay,
	/*The user is invisible.*/
	k_EPersonaStateInvisible,
	/*The user is max.*/
	k_EPersonaStateMax
};

USTRUCT(BlueprintType)
struct FSteamPlayerInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
	FString PlayerName;

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
	FString PlayerID;

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
	ESteamPersonaState PlayerState;

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
	ESteamFriendRelationship PlayerRelationship;
};

UENUM(BlueprintType)
enum class FSteamEVoiceResult : uint8
{
	k_EVoiceResultOK,
	k_EVoiceResultNotInitialized,
	k_EVoiceResultNotRecording,
	k_EVoiceResultNoData,
	k_EVoiceResultBufferTooSmall,
	k_EVoiceResultDataCorrupted,
	k_EVoiceResultRestricted,
	k_EVoiceResultUnsupportedCodec,
	k_EVoiceResultReceiverOutOfDate,
	k_EVoiceResultReceiverDidNotAnswer
};

USTRUCT(BlueprintType)
struct FSteamGameCoordinatorResults
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI|ISteamGameCoordinator")
	int32 MsgType;

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI|ISteamGameCoordinator")
	TArray<uint8> MsgBuffer;
};

UENUM(BlueprintType)
enum class FSteamEGCResults : uint8
{
	k_EGCResultOK,
	k_EGCResultNoMessage,
	k_EGCResultBufferTooSmall,
	k_EGCResultNotLoggedOn,
	k_EGCResultInvalidMessage
};

USTRUCT(BlueprintType)
struct FSteamAppId_t
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
		int32 AppId;
};

USTRUCT(BlueprintType)
struct FSteamId_t
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
		int32 Id;
};


USTRUCT(BlueprintType)
struct FSteamDepotId_t
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
		int32 DepotId;
};




//Broken
USTRUCT(BlueprintType)
struct FSteamUint64
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
	int64 Value;
};



USTRUCT(BlueprintType)
struct FSteamNetworkPingLocation
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
		FString Region;

	UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
		FString Ping;
};

UENUM(BlueprintType)
enum class SteamAvatarSize : uint8
{
	SteamAvatar_INVALID = 0,
	SteamAvatar_Small = 1,
	SteamAvatar_Medium = 2,
	SteamAvatar_Large = 3
};

//UENUM(BlueprintType)
//enum class ESteamUserOverlayType : uint8
//{
//	/*Opens the overlay web browser to the specified user or groups profile.*/
//	steamid,
//	/*Opens a chat window to the specified user, or joins the group chat.*/
//	chat,
//	/*Opens a window to a Steam Trading session that was started with the ISteamEconomy / StartTrade Web API.*/
//	jointrade,
//	/*Opens the overlay web browser to the specified user's stats.*/
//	stats,
//	/*Opens the overlay web browser to the specified user's achievements.*/
//	achievements,
//	/*Opens the overlay in minimal mode prompting the user to add the target user as a friend.*/
//	friendadd,
//	/*Opens the overlay in minimal mode prompting the user to remove the target friend.*/
//	friendremove,
//	/*Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.*/
//	friendrequestaccept,
//	/*Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.*/
//	friendrequestignore
//};


static FString EnumToString(const FString& enumName, uint8 value)
{

	const UEnum* EnumPtr = FindFirstObject<UEnum>(*enumName, EFindFirstObjectOptions::None, ELogVerbosity::Warning, TEXT("EumtoString"));

	if (!EnumPtr)
		return FString();

	FString EnumName = EnumPtr->GetNameStringByIndex(value);
	return EnumName;
}

USTRUCT(BlueprintType)
struct FBPUniqueNetId
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "SteamAPI")
		FString UniqueNetIdStr;
};

UENUM(BlueprintType)
enum class EBlueprintAsyncResultSwitch : uint8
{
	OnSuccess,
	AsyncLoading,
	OnFailure
};





//UCLASS()
//class USteamAPI_BPL_PluginBPLibrary : public UBlueprintFunctionLibrary
//{
//	GENERATED_UCLASS_BODY()
//
////	//Steam Interfaces
////
////	//ISteamApps
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsAppInstalled", Keywords = "Steam ISteamApps BIsAppInstalled"), Category = "SteamAPI|ISteamApps")
////	//static bool BIsAppInstalled(FSteamAppId_t aAppId);
////
////	//ISteamClient
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BShutdownIfAllPipesClosed", Keywords = "Steam ISteamClient BShutdownIfAllPipesClosed"), Category = "SteamAPI|ISteamClient ")
////	//static bool BShutdownIfAllPipesClosed();
////
////
////	//ISteamFriends
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ActivateGameOverlay", Keywords = "Steam ISteamFriends ActivateGameOverlay"), Category = "SteamAPI|ISteamFriends ")
////	//static void  ActivateGameOverlay(ESteamUserOverlayType DialogType);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ActivateGameOverlay", Keywords = "Steam ISteamFriends ActivateGameOverlay"), Category = "SteamAPI|ISteamFriends ")
////	//static void ActivateGameOverlayToUser(ESteamUserOverlayType DialogType, FSteamPlayerInfo aPlayerInfo);
////
////	//ISteamGameCoordinator
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam IsMessageAvailable", Keywords = "Steam ISteamGameCoordinator IsMessageAvailable"), Category = "SteamAPI|ISteamGameCoordinator")
////	//	static bool IsMessageAvailable(int32& OutMsgSize);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam RetrieveMessage", Keywords = "Steam ISteamGameCoordinator RetrieveMessage"), Category = "SteamAPI|ISteamGameCoordinator")
////	//	static int32 RetrieveMessage(int32& OutMsgType, TArray<uint8>& OutMsgBuffer);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SendMessage", Keywords = "Steam ISteamGameCoordinator SendMessage"), Category = "SteamAPI|ISteamGameCoordinator")
////	//	static bool SendMessage(int32 MsgType, const TArray<uint8>& MsgBuffer);
////
////
////	//ISteamUser
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam StartVoiceRecording", Keywords = "Steam ISteamUser StartVoiceRecording"), Category = "SteamAPI|ISteamUser")
////	//	static void StartVoiceRecording();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam StopVoiceRecording", Keywords = "Steam ISteamUser StopVoiceRecording"), Category = "SteamAPI|ISteamUser")
////	//	static void StopVoiceRecording();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SetInGameVoiceSpeaking", Keywords = "Steam ISteamUser SetInGameVoiceSpeaking"), Category = "SteamAPI|ISteamUser")
////	//	static void SetInGameVoiceSpeaking(FSteamPlayerInfo aSteamIDUser, bool bSpeaking);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetVoiceOptimalSampleRate", Keywords = "Steam ISteamUser GetVoiceOptimalSampleRate"), Category = "SteamAPI|ISteamUser")
////	//	static int32 GetVoiceOptimalSampleRate();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam DecompressVoice", Keywords = "Steam ISteamUser DecompressVoice"), Category = "SteamAPI|ISteamUser")
////	//	static FSteamEVoiceResult DecompressVoice(const TArray<uint8>& CompressedData, TArray<uint8>& DestBuffer, int32 DesiredSampleRate);
////	// 
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////	//Tests
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "SteamAPI_BPL_Plugin sample test testing"), Category = "SteamAPI")
////	//static float SampleFunction(float Param);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Sample function", Keywords = "SteamAPI_BPL_Plugin sample test testing"), Category = "SteamAPI")
////	//static float Steam_SampleFunction(float Param);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Get Ping function", Keywords = "SteamAPI_BPL_Plugin Get Ping"), Category = "SteamAPI")
////	//static int32 Steam_GetPingFunction();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Achievement Unlocked", Keywords = "SteamAPI_BPL_Plugin Achievement Unlock"), Category = "SteamAPI")
////	//static void Steam_AchievementUnlocked(const FString& AchievementName);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Leaderboard Write Entry", Keywords = "SteamAPI_BPL_Plugin Leaderboard Write Entry"), Category = "SteamAPI")
////	//static void Steam_LeaderboardWriteEntry(const FString& LeaderboardName, int32 Score);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Get Name", Keywords = "SteamAPI_BPL_Plugin Get Name"), Category = "SteamAPI")
////	//static FString Steam_GetName();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Get Friends", Keywords = "SteamAPI_BPL_Plugin Get Friends"), Category = "SteamAPI")
////	//static TArray<FSteamPlayerInfo> Steam_GetFriends();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Get Avatar", Keywords = "SteamAPI_BPL_Plugin Get Avatar"), Category = "SteamAPI")
////	//	static UTexture2D* Steam_GetSteamAvatar( EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Get Friend Avatar", Keywords = "SteamAPI_BPL_Plugin Get Friend Avatar"), Category = "SteamAPI")
////	//	static UTexture2D* Steam_GetSteamFriendAvatar(FSteamPlayerInfo aPlayerInfo,EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize);
////
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Open Overlay", Keywords = "SteamAPI_BPL_Plugin Open Overlay"), Category = "SteamAPI")
////	//	static bool Steam_OpenOverlay(ESteamUserOverlayType DialogType);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Is Overlay Enabled", Keywords = "SteamAPI_BPL_Plugin Is Overlay Enabled"), Category = "SteamAPI")
////	//	static bool Steam_IsOverlayEnabled();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Request Stats", Keywords = "SteamAPI_BPL_Plugin Request Stats"), Category = "SteamAPI")
////	//	static void Steam_RequestStats();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Get Stat", Keywords = "SteamAPI_BPL_Plugin Get Stat"), Category = "SteamAPI")
////	//	static int32 Steam_GetStat(const FString& StatName);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Set Stat", Keywords = "SteamAPI_BPL_Plugin Set Stat"), Category = "SteamAPI")
////	//	static void Steam_SetStat(const FString& StatName, int32 StatValue);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Reset All Stats", Keywords = "SteamAPI_BPL_Plugin Reset All Stats"), Category = "SteamAPI")
////	//	static void Steam_ResetAllStats();
////
////	//UFUNCTION(BlueprintCallable , meta = (DisplayName = "Steam OnGameOverlayActivated", Keywords = "SteamAPI_BPL_Plugin Reset All Stats"), Category = "SteamAPI")
////	//	static void Steam_OnGameOverlayActivated(bool bActive);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Init", Keywords = "SteamAPI_BPL_Plugin Steam Init"), Category = "SteamAPI")
////	//	static void Steam_Init();
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetPlayerInfo", Keywords = "SteamAPI_BPL_Plugin Steam GetPlayerInfo"), Category = "SteamAPI")
////	//	static FSteamPlayerInfo Steam_GetPlayerInfo();
////
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriendCountFromSource", Keywords = "SteamAPI_BPL_Plugin Steam GetFriendCountFromSource"), Category = "SteamAPI")
////	//	static int Steam_GetFriendCount();
////
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetLocalPingLocation", Keywords = "SteamAPI_BPL_Plugin Steam GetLocalPingLocation"), Category = "SteamAPI")
////	//	static int32 Steam_GetLocalPingLocation(FSteamNetworkPingLocation& Result);
////
////	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Steam_GetFriendLevel", Keywords = "SteamAPI_BPL_Plugin Steam Steam_GetFriendLevel"), Category = "SteamAPI")
////	//	static int32 Steam_EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2);
////	//int32 Steam_GetFriendLevel(CSteamID steamIDFriend);
//};
