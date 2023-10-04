// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAPI_BPL_PluginBPLibrary() {}
// Cross Module References
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAppId_t();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamDepotId_t();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameCoordinatorResults();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamId_t();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUint64();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUserOverlayType;
	static UEnum* ESteamUserOverlayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamUserOverlayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamUserOverlayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("ESteamUserOverlayType"));
		}
		return Z_Registration_Info_UEnum_ESteamUserOverlayType.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUserOverlayType>()
	{
		return ESteamUserOverlayType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::Enumerators[] = {
		{ "ESteamUserOverlayType::steamid", (int64)ESteamUserOverlayType::steamid },
		{ "ESteamUserOverlayType::chat", (int64)ESteamUserOverlayType::chat },
		{ "ESteamUserOverlayType::jointrade", (int64)ESteamUserOverlayType::jointrade },
		{ "ESteamUserOverlayType::stats", (int64)ESteamUserOverlayType::stats },
		{ "ESteamUserOverlayType::achievements", (int64)ESteamUserOverlayType::achievements },
		{ "ESteamUserOverlayType::friendadd", (int64)ESteamUserOverlayType::friendadd },
		{ "ESteamUserOverlayType::friendremove", (int64)ESteamUserOverlayType::friendremove },
		{ "ESteamUserOverlayType::friendrequestaccept", (int64)ESteamUserOverlayType::friendrequestaccept },
		{ "ESteamUserOverlayType::friendrequestignore", (int64)ESteamUserOverlayType::friendrequestignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::Enum_MetaDataParams[] = {
		{ "achievements.Comment", "/*Opens the overlay web browser to the specified user's achievements.*/" },
		{ "achievements.Name", "ESteamUserOverlayType::achievements" },
		{ "achievements.ToolTip", "Opens the overlay web browser to the specified user's achievements." },
		{ "BlueprintType", "true" },
		{ "chat.Comment", "/*Opens a chat window to the specified user, or joins the group chat.*/" },
		{ "chat.Name", "ESteamUserOverlayType::chat" },
		{ "chat.ToolTip", "Opens a chat window to the specified user, or joins the group chat." },
		{ "friendadd.Comment", "/*Opens the overlay in minimal mode prompting the user to add the target user as a friend.*/" },
		{ "friendadd.Name", "ESteamUserOverlayType::friendadd" },
		{ "friendadd.ToolTip", "Opens the overlay in minimal mode prompting the user to add the target user as a friend." },
		{ "friendremove.Comment", "/*Opens the overlay in minimal mode prompting the user to remove the target friend.*/" },
		{ "friendremove.Name", "ESteamUserOverlayType::friendremove" },
		{ "friendremove.ToolTip", "Opens the overlay in minimal mode prompting the user to remove the target friend." },
		{ "friendrequestaccept.Comment", "/*Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.*/" },
		{ "friendrequestaccept.Name", "ESteamUserOverlayType::friendrequestaccept" },
		{ "friendrequestaccept.ToolTip", "Opens the overlay in minimal mode prompting the user to accept an incoming friend invite." },
		{ "friendrequestignore.Comment", "/*Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.*/" },
		{ "friendrequestignore.Name", "ESteamUserOverlayType::friendrequestignore" },
		{ "friendrequestignore.ToolTip", "Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite." },
		{ "jointrade.Comment", "/*Opens a window to a Steam Trading session that was started with the ISteamEconomy / StartTrade Web API.*/" },
		{ "jointrade.Name", "ESteamUserOverlayType::jointrade" },
		{ "jointrade.ToolTip", "Opens a window to a Steam Trading session that was started with the ISteamEconomy / StartTrade Web API." },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
		{ "stats.Comment", "/*Opens the overlay web browser to the specified user's stats.*/" },
		{ "stats.Name", "ESteamUserOverlayType::stats" },
		{ "stats.ToolTip", "Opens the overlay web browser to the specified user's stats." },
		{ "steamid.Comment", "/*Opens the overlay web browser to the specified user or groups profile.*/" },
		{ "steamid.Name", "ESteamUserOverlayType::steamid" },
		{ "steamid.ToolTip", "Opens the overlay web browser to the specified user or groups profile." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"ESteamUserOverlayType",
		"ESteamUserOverlayType",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType()
	{
		if (!Z_Registration_Info_UEnum_ESteamUserOverlayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUserOverlayType.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamUserOverlayType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFriendRelationship;
	static UEnum* ESteamFriendRelationship_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamFriendRelationship.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamFriendRelationship.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("ESteamFriendRelationship"));
		}
		return Z_Registration_Info_UEnum_ESteamFriendRelationship.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamFriendRelationship>()
	{
		return ESteamFriendRelationship_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::Enumerators[] = {
		{ "ESteamFriendRelationship::k_EFriendRelationshipNone", (int64)ESteamFriendRelationship::k_EFriendRelationshipNone },
		{ "ESteamFriendRelationship::k_EFriendRelationshipBlocked", (int64)ESteamFriendRelationship::k_EFriendRelationshipBlocked },
		{ "ESteamFriendRelationship::k_EFriendRelationshipRequestRecipient", (int64)ESteamFriendRelationship::k_EFriendRelationshipRequestRecipient },
		{ "ESteamFriendRelationship::k_EFriendRelationshipFriend", (int64)ESteamFriendRelationship::k_EFriendRelationshipFriend },
		{ "ESteamFriendRelationship::k_EFriendRelationshipRequestInitiator", (int64)ESteamFriendRelationship::k_EFriendRelationshipRequestInitiator },
		{ "ESteamFriendRelationship::k_EFriendRelationshipIgnored", (int64)ESteamFriendRelationship::k_EFriendRelationshipIgnored },
		{ "ESteamFriendRelationship::k_EFriendRelationshipIgnoredFriend", (int64)ESteamFriendRelationship::k_EFriendRelationshipIgnoredFriend },
		{ "ESteamFriendRelationship::k_EFriendRelationshipSuggested_DEPRECATED", (int64)ESteamFriendRelationship::k_EFriendRelationshipSuggested_DEPRECATED },
		{ "ESteamFriendRelationship::k_EFriendRelationshipMax", (int64)ESteamFriendRelationship::k_EFriendRelationshipMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EFriendRelationshipBlocked.Comment", "/*The other user has requested friendship.*/" },
		{ "k_EFriendRelationshipBlocked.Name", "ESteamFriendRelationship::k_EFriendRelationshipBlocked" },
		{ "k_EFriendRelationshipBlocked.ToolTip", "The other user has requested friendship." },
		{ "k_EFriendRelationshipFriend.Comment", "/*The other user has accepted the friend request.*/" },
		{ "k_EFriendRelationshipFriend.Name", "ESteamFriendRelationship::k_EFriendRelationshipFriend" },
		{ "k_EFriendRelationshipFriend.ToolTip", "The other user has accepted the friend request." },
		{ "k_EFriendRelationshipIgnored.Comment", "/*The other user is on the ignore list.*/" },
		{ "k_EFriendRelationshipIgnored.Name", "ESteamFriendRelationship::k_EFriendRelationshipIgnored" },
		{ "k_EFriendRelationshipIgnored.ToolTip", "The other user is on the ignore list." },
		{ "k_EFriendRelationshipIgnoredFriend.Comment", "/*The other user is ignored due to a game ban.*/" },
		{ "k_EFriendRelationshipIgnoredFriend.Name", "ESteamFriendRelationship::k_EFriendRelationshipIgnoredFriend" },
		{ "k_EFriendRelationshipIgnoredFriend.ToolTip", "The other user is ignored due to a game ban." },
		{ "k_EFriendRelationshipMax.Comment", "/*The other user is a friend but chat is suppressed for them.*/" },
		{ "k_EFriendRelationshipMax.Name", "ESteamFriendRelationship::k_EFriendRelationshipMax" },
		{ "k_EFriendRelationshipMax.ToolTip", "The other user is a friend but chat is suppressed for them." },
		{ "k_EFriendRelationshipNone.Comment", "/*Friendship has not been established yet.*/" },
		{ "k_EFriendRelationshipNone.Name", "ESteamFriendRelationship::k_EFriendRelationshipNone" },
		{ "k_EFriendRelationshipNone.ToolTip", "Friendship has not been established yet." },
		{ "k_EFriendRelationshipRequestInitiator.Comment", "/*The other user has ignored the friend request.*/" },
		{ "k_EFriendRelationshipRequestInitiator.Name", "ESteamFriendRelationship::k_EFriendRelationshipRequestInitiator" },
		{ "k_EFriendRelationshipRequestInitiator.ToolTip", "The other user has ignored the friend request." },
		{ "k_EFriendRelationshipRequestRecipient.Comment", "/*The other user has been blocked.*/" },
		{ "k_EFriendRelationshipRequestRecipient.Name", "ESteamFriendRelationship::k_EFriendRelationshipRequestRecipient" },
		{ "k_EFriendRelationshipRequestRecipient.ToolTip", "The other user has been blocked." },
		{ "k_EFriendRelationshipSuggested_DEPRECATED.Comment", "/*The other user is a friend and is also flagged for being watched.*/" },
		{ "k_EFriendRelationshipSuggested_DEPRECATED.Name", "ESteamFriendRelationship::k_EFriendRelationshipSuggested_DEPRECATED" },
		{ "k_EFriendRelationshipSuggested_DEPRECATED.ToolTip", "The other user is a friend and is also flagged for being watched." },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"ESteamFriendRelationship",
		"ESteamFriendRelationship",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship()
	{
		if (!Z_Registration_Info_UEnum_ESteamFriendRelationship.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFriendRelationship.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamFriendRelationship.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPersonaState;
	static UEnum* ESteamPersonaState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamPersonaState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamPersonaState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("ESteamPersonaState"));
		}
		return Z_Registration_Info_UEnum_ESteamPersonaState.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamPersonaState>()
	{
		return ESteamPersonaState_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::Enumerators[] = {
		{ "ESteamPersonaState::k_EPersonaStateOffline", (int64)ESteamPersonaState::k_EPersonaStateOffline },
		{ "ESteamPersonaState::k_EPersonaStateOnline", (int64)ESteamPersonaState::k_EPersonaStateOnline },
		{ "ESteamPersonaState::k_EPersonaStateBusy", (int64)ESteamPersonaState::k_EPersonaStateBusy },
		{ "ESteamPersonaState::k_EPersonaStateAway", (int64)ESteamPersonaState::k_EPersonaStateAway },
		{ "ESteamPersonaState::k_EPersonaStateSnooze", (int64)ESteamPersonaState::k_EPersonaStateSnooze },
		{ "ESteamPersonaState::k_EPersonaStateLookingToTrade", (int64)ESteamPersonaState::k_EPersonaStateLookingToTrade },
		{ "ESteamPersonaState::k_EPersonaStateLookingToPlay", (int64)ESteamPersonaState::k_EPersonaStateLookingToPlay },
		{ "ESteamPersonaState::k_EPersonaStateInvisible", (int64)ESteamPersonaState::k_EPersonaStateInvisible },
		{ "ESteamPersonaState::k_EPersonaStateMax", (int64)ESteamPersonaState::k_EPersonaStateMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EPersonaStateAway.Comment", "/*The user is away.*/" },
		{ "k_EPersonaStateAway.Name", "ESteamPersonaState::k_EPersonaStateAway" },
		{ "k_EPersonaStateAway.ToolTip", "The user is away." },
		{ "k_EPersonaStateBusy.Comment", "/*The user is busy.*/" },
		{ "k_EPersonaStateBusy.Name", "ESteamPersonaState::k_EPersonaStateBusy" },
		{ "k_EPersonaStateBusy.ToolTip", "The user is busy." },
		{ "k_EPersonaStateInvisible.Comment", "/*The user is invisible.*/" },
		{ "k_EPersonaStateInvisible.Name", "ESteamPersonaState::k_EPersonaStateInvisible" },
		{ "k_EPersonaStateInvisible.ToolTip", "The user is invisible." },
		{ "k_EPersonaStateLookingToPlay.Comment", "/*The user is looking to play.*/" },
		{ "k_EPersonaStateLookingToPlay.Name", "ESteamPersonaState::k_EPersonaStateLookingToPlay" },
		{ "k_EPersonaStateLookingToPlay.ToolTip", "The user is looking to play." },
		{ "k_EPersonaStateLookingToTrade.Comment", "/*The user is looking to trade.*/" },
		{ "k_EPersonaStateLookingToTrade.Name", "ESteamPersonaState::k_EPersonaStateLookingToTrade" },
		{ "k_EPersonaStateLookingToTrade.ToolTip", "The user is looking to trade." },
		{ "k_EPersonaStateMax.Comment", "/*The user is max.*/" },
		{ "k_EPersonaStateMax.Name", "ESteamPersonaState::k_EPersonaStateMax" },
		{ "k_EPersonaStateMax.ToolTip", "The user is max." },
		{ "k_EPersonaStateOffline.Comment", "/*The user is offline.*/" },
		{ "k_EPersonaStateOffline.Name", "ESteamPersonaState::k_EPersonaStateOffline" },
		{ "k_EPersonaStateOffline.ToolTip", "The user is offline." },
		{ "k_EPersonaStateOnline.Comment", "/*The user is online.*/" },
		{ "k_EPersonaStateOnline.Name", "ESteamPersonaState::k_EPersonaStateOnline" },
		{ "k_EPersonaStateOnline.ToolTip", "The user is online." },
		{ "k_EPersonaStateSnooze.Comment", "/*The user is snoozing.*/" },
		{ "k_EPersonaStateSnooze.Name", "ESteamPersonaState::k_EPersonaStateSnooze" },
		{ "k_EPersonaStateSnooze.ToolTip", "The user is snoozing." },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"ESteamPersonaState",
		"ESteamPersonaState",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState()
	{
		if (!Z_Registration_Info_UEnum_ESteamPersonaState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPersonaState.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamPersonaState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamPlayerInfo;
class UScriptStruct* FSteamPlayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamPlayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamPlayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamPlayerInfo, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamPlayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SteamPlayerInfo.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamPlayerInfo>()
{
	return FSteamPlayerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerRelationship_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRelationship_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerRelationship;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamPlayerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamPlayerInfo, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerID_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamPlayerInfo, PlayerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamPlayerInfo, PlayerState), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState_MetaData)) }; // 283214426
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship = { "PlayerRelationship", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamPlayerInfo, PlayerRelationship), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship_MetaData)) }; // 1830622919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewProp_PlayerRelationship,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamPlayerInfo",
		sizeof(FSteamPlayerInfo),
		alignof(FSteamPlayerInfo),
		Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamPlayerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamPlayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamPlayerInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FSteamEVoiceResult;
	static UEnum* FSteamEVoiceResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FSteamEVoiceResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FSteamEVoiceResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("FSteamEVoiceResult"));
		}
		return Z_Registration_Info_UEnum_FSteamEVoiceResult.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<FSteamEVoiceResult>()
	{
		return FSteamEVoiceResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::Enumerators[] = {
		{ "FSteamEVoiceResult::k_EVoiceResultOK", (int64)FSteamEVoiceResult::k_EVoiceResultOK },
		{ "FSteamEVoiceResult::k_EVoiceResultNotInitialized", (int64)FSteamEVoiceResult::k_EVoiceResultNotInitialized },
		{ "FSteamEVoiceResult::k_EVoiceResultNotRecording", (int64)FSteamEVoiceResult::k_EVoiceResultNotRecording },
		{ "FSteamEVoiceResult::k_EVoiceResultNoData", (int64)FSteamEVoiceResult::k_EVoiceResultNoData },
		{ "FSteamEVoiceResult::k_EVoiceResultBufferTooSmall", (int64)FSteamEVoiceResult::k_EVoiceResultBufferTooSmall },
		{ "FSteamEVoiceResult::k_EVoiceResultDataCorrupted", (int64)FSteamEVoiceResult::k_EVoiceResultDataCorrupted },
		{ "FSteamEVoiceResult::k_EVoiceResultRestricted", (int64)FSteamEVoiceResult::k_EVoiceResultRestricted },
		{ "FSteamEVoiceResult::k_EVoiceResultUnsupportedCodec", (int64)FSteamEVoiceResult::k_EVoiceResultUnsupportedCodec },
		{ "FSteamEVoiceResult::k_EVoiceResultReceiverOutOfDate", (int64)FSteamEVoiceResult::k_EVoiceResultReceiverOutOfDate },
		{ "FSteamEVoiceResult::k_EVoiceResultReceiverDidNotAnswer", (int64)FSteamEVoiceResult::k_EVoiceResultReceiverDidNotAnswer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EVoiceResultBufferTooSmall.Name", "FSteamEVoiceResult::k_EVoiceResultBufferTooSmall" },
		{ "k_EVoiceResultDataCorrupted.Name", "FSteamEVoiceResult::k_EVoiceResultDataCorrupted" },
		{ "k_EVoiceResultNoData.Name", "FSteamEVoiceResult::k_EVoiceResultNoData" },
		{ "k_EVoiceResultNotInitialized.Name", "FSteamEVoiceResult::k_EVoiceResultNotInitialized" },
		{ "k_EVoiceResultNotRecording.Name", "FSteamEVoiceResult::k_EVoiceResultNotRecording" },
		{ "k_EVoiceResultOK.Name", "FSteamEVoiceResult::k_EVoiceResultOK" },
		{ "k_EVoiceResultReceiverDidNotAnswer.Name", "FSteamEVoiceResult::k_EVoiceResultReceiverDidNotAnswer" },
		{ "k_EVoiceResultReceiverOutOfDate.Name", "FSteamEVoiceResult::k_EVoiceResultReceiverOutOfDate" },
		{ "k_EVoiceResultRestricted.Name", "FSteamEVoiceResult::k_EVoiceResultRestricted" },
		{ "k_EVoiceResultUnsupportedCodec.Name", "FSteamEVoiceResult::k_EVoiceResultUnsupportedCodec" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"FSteamEVoiceResult",
		"FSteamEVoiceResult",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult()
	{
		if (!Z_Registration_Info_UEnum_FSteamEVoiceResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FSteamEVoiceResult.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FSteamEVoiceResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults;
class UScriptStruct* FSteamGameCoordinatorResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamGameCoordinatorResults"));
	}
	return Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamGameCoordinatorResults>()
{
	return FSteamGameCoordinatorResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MsgType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MsgType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MsgBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MsgBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MsgBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamGameCoordinatorResults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgType_MetaData[] = {
		{ "Category", "SteamAPI|ISteamGameCoordinator" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgType = { "MsgType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamGameCoordinatorResults, MsgType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer_Inner = { "MsgBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer_MetaData[] = {
		{ "Category", "SteamAPI|ISteamGameCoordinator" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer = { "MsgBuffer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamGameCoordinatorResults, MsgBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewProp_MsgBuffer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamGameCoordinatorResults",
		sizeof(FSteamGameCoordinatorResults),
		alignof(FSteamGameCoordinatorResults),
		Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamGameCoordinatorResults()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults.InnerSingleton, Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FSteamEGCResults;
	static UEnum* FSteamEGCResults_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FSteamEGCResults.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FSteamEGCResults.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("FSteamEGCResults"));
		}
		return Z_Registration_Info_UEnum_FSteamEGCResults.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<FSteamEGCResults>()
	{
		return FSteamEGCResults_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::Enumerators[] = {
		{ "FSteamEGCResults::k_EGCResultOK", (int64)FSteamEGCResults::k_EGCResultOK },
		{ "FSteamEGCResults::k_EGCResultNoMessage", (int64)FSteamEGCResults::k_EGCResultNoMessage },
		{ "FSteamEGCResults::k_EGCResultBufferTooSmall", (int64)FSteamEGCResults::k_EGCResultBufferTooSmall },
		{ "FSteamEGCResults::k_EGCResultNotLoggedOn", (int64)FSteamEGCResults::k_EGCResultNotLoggedOn },
		{ "FSteamEGCResults::k_EGCResultInvalidMessage", (int64)FSteamEGCResults::k_EGCResultInvalidMessage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EGCResultBufferTooSmall.Name", "FSteamEGCResults::k_EGCResultBufferTooSmall" },
		{ "k_EGCResultInvalidMessage.Name", "FSteamEGCResults::k_EGCResultInvalidMessage" },
		{ "k_EGCResultNoMessage.Name", "FSteamEGCResults::k_EGCResultNoMessage" },
		{ "k_EGCResultNotLoggedOn.Name", "FSteamEGCResults::k_EGCResultNotLoggedOn" },
		{ "k_EGCResultOK.Name", "FSteamEGCResults::k_EGCResultOK" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"FSteamEGCResults",
		"FSteamEGCResults",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults()
	{
		if (!Z_Registration_Info_UEnum_FSteamEGCResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FSteamEGCResults.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEGCResults_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FSteamEGCResults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamAppId_t;
class UScriptStruct* FSteamAppId_t::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAppId_t.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamAppId_t.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamAppId_t, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamAppId_t"));
	}
	return Z_Registration_Info_UScriptStruct_SteamAppId_t.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamAppId_t>()
{
	return FSteamAppId_t::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamAppId_t_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamAppId_t_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamAppId_t>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewProp_AppId_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamAppId_t, AppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewProp_AppId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamAppId_t_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewProp_AppId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamAppId_t_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamAppId_t",
		sizeof(FSteamAppId_t),
		alignof(FSteamAppId_t),
		Z_Construct_UScriptStruct_FSteamAppId_t_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppId_t_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamAppId_t_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppId_t_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamAppId_t()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamAppId_t.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamAppId_t.InnerSingleton, Z_Construct_UScriptStruct_FSteamAppId_t_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamAppId_t.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamId_t;
class UScriptStruct* FSteamId_t::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamId_t.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamId_t.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamId_t, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamId_t"));
	}
	return Z_Registration_Info_UScriptStruct_SteamId_t.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamId_t>()
{
	return FSteamId_t::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamId_t_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamId_t_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamId_t_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamId_t>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamId_t_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamId_t_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamId_t, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamId_t_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamId_t_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamId_t_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamId_t_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamId_t_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamId_t",
		sizeof(FSteamId_t),
		alignof(FSteamId_t),
		Z_Construct_UScriptStruct_FSteamId_t_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamId_t_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamId_t_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamId_t_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamId_t()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamId_t.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamId_t.InnerSingleton, Z_Construct_UScriptStruct_FSteamId_t_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamId_t.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamDepotId_t;
class UScriptStruct* FSteamDepotId_t::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamDepotId_t.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamDepotId_t.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamDepotId_t, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamDepotId_t"));
	}
	return Z_Registration_Info_UScriptStruct_SteamDepotId_t.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamDepotId_t>()
{
	return FSteamDepotId_t::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamDepotId_t_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepotId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepotId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamDepotId_t>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewProp_DepotId_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewProp_DepotId = { "DepotId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamDepotId_t, DepotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewProp_DepotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewProp_DepotId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewProp_DepotId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamDepotId_t",
		sizeof(FSteamDepotId_t),
		alignof(FSteamDepotId_t),
		Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamDepotId_t()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamDepotId_t.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamDepotId_t.InnerSingleton, Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamDepotId_t.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamUint64;
class UScriptStruct* FSteamUint64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamUint64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamUint64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamUint64, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamUint64"));
	}
	return Z_Registration_Info_UScriptStruct_SteamUint64.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamUint64>()
{
	return FSteamUint64::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamUint64_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUint64_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Broken\n" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
		{ "ToolTip", "Broken" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamUint64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamUint64>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUint64_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSteamUint64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamUint64, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUint64_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUint64_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamUint64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUint64_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamUint64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamUint64",
		sizeof(FSteamUint64),
		alignof(FSteamUint64),
		Z_Construct_UScriptStruct_FSteamUint64_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUint64_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUint64_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUint64_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamUint64()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamUint64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamUint64.InnerSingleton, Z_Construct_UScriptStruct_FSteamUint64_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamUint64.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation;
class UScriptStruct* FSteamNetworkPingLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamNetworkPingLocation, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamNetworkPingLocation"));
	}
	return Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FSteamNetworkPingLocation>()
{
	return FSteamNetworkPingLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamNetworkPingLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamNetworkPingLocation, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamNetworkPingLocation, Ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Ping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Ping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"SteamNetworkPingLocation",
		sizeof(FSteamNetworkPingLocation),
		alignof(FSteamNetworkPingLocation),
		Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SteamAvatarSize;
	static UEnum* SteamAvatarSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SteamAvatarSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SteamAvatarSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("SteamAvatarSize"));
		}
		return Z_Registration_Info_UEnum_SteamAvatarSize.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<SteamAvatarSize>()
	{
		return SteamAvatarSize_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::Enumerators[] = {
		{ "SteamAvatarSize::SteamAvatar_INVALID", (int64)SteamAvatarSize::SteamAvatar_INVALID },
		{ "SteamAvatarSize::SteamAvatar_Small", (int64)SteamAvatarSize::SteamAvatar_Small },
		{ "SteamAvatarSize::SteamAvatar_Medium", (int64)SteamAvatarSize::SteamAvatar_Medium },
		{ "SteamAvatarSize::SteamAvatar_Large", (int64)SteamAvatarSize::SteamAvatar_Large },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
		{ "SteamAvatar_INVALID.Name", "SteamAvatarSize::SteamAvatar_INVALID" },
		{ "SteamAvatar_Large.Name", "SteamAvatarSize::SteamAvatar_Large" },
		{ "SteamAvatar_Medium.Name", "SteamAvatarSize::SteamAvatar_Medium" },
		{ "SteamAvatar_Small.Name", "SteamAvatarSize::SteamAvatar_Small" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"SteamAvatarSize",
		"SteamAvatarSize",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize()
	{
		if (!Z_Registration_Info_UEnum_SteamAvatarSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SteamAvatarSize.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_SteamAvatarSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SteamAvatarSize.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPUniqueNetId;
class UScriptStruct* FBPUniqueNetId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPUniqueNetId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPUniqueNetId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUniqueNetId, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("BPUniqueNetId"));
	}
	return Z_Registration_Info_UScriptStruct_BPUniqueNetId.OuterSingleton;
}
template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<FBPUniqueNetId>()
{
	return FBPUniqueNetId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBPUniqueNetId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNetIdStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueNetIdStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPUniqueNetId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewProp_UniqueNetIdStr_MetaData[] = {
		{ "Category", "SteamAPI" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewProp_UniqueNetIdStr = { "UniqueNetIdStr", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBPUniqueNetId, UniqueNetIdStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewProp_UniqueNetIdStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewProp_UniqueNetIdStr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewProp_UniqueNetIdStr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		&NewStructOps,
		"BPUniqueNetId",
		sizeof(FBPUniqueNetId),
		alignof(FBPUniqueNetId),
		Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId()
	{
		if (!Z_Registration_Info_UScriptStruct_BPUniqueNetId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPUniqueNetId.InnerSingleton, Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BPUniqueNetId.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch;
	static UEnum* EBlueprintAsyncResultSwitch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch, (UObject*)Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin(), TEXT("EBlueprintAsyncResultSwitch"));
		}
		return Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<EBlueprintAsyncResultSwitch>()
	{
		return EBlueprintAsyncResultSwitch_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::Enumerators[] = {
		{ "EBlueprintAsyncResultSwitch::OnSuccess", (int64)EBlueprintAsyncResultSwitch::OnSuccess },
		{ "EBlueprintAsyncResultSwitch::AsyncLoading", (int64)EBlueprintAsyncResultSwitch::AsyncLoading },
		{ "EBlueprintAsyncResultSwitch::OnFailure", (int64)EBlueprintAsyncResultSwitch::OnFailure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::Enum_MetaDataParams[] = {
		{ "AsyncLoading.Name", "EBlueprintAsyncResultSwitch::AsyncLoading" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAPI_BPL_PluginBPLibrary.h" },
		{ "OnFailure.Name", "EBlueprintAsyncResultSwitch::OnFailure" },
		{ "OnSuccess.Name", "EBlueprintAsyncResultSwitch::OnSuccess" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
		nullptr,
		"EBlueprintAsyncResultSwitch",
		"EBlueprintAsyncResultSwitch",
		Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch.InnerSingleton, Z_Construct_UEnum_SteamAPI_BPL_Plugin_EBlueprintAsyncResultSwitch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics::EnumInfo[] = {
		{ ESteamUserOverlayType_StaticEnum, TEXT("ESteamUserOverlayType"), &Z_Registration_Info_UEnum_ESteamUserOverlayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2377987520U) },
		{ ESteamFriendRelationship_StaticEnum, TEXT("ESteamFriendRelationship"), &Z_Registration_Info_UEnum_ESteamFriendRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1830622919U) },
		{ ESteamPersonaState_StaticEnum, TEXT("ESteamPersonaState"), &Z_Registration_Info_UEnum_ESteamPersonaState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 283214426U) },
		{ FSteamEVoiceResult_StaticEnum, TEXT("FSteamEVoiceResult"), &Z_Registration_Info_UEnum_FSteamEVoiceResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1679007127U) },
		{ FSteamEGCResults_StaticEnum, TEXT("FSteamEGCResults"), &Z_Registration_Info_UEnum_FSteamEGCResults, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2716434723U) },
		{ SteamAvatarSize_StaticEnum, TEXT("SteamAvatarSize"), &Z_Registration_Info_UEnum_SteamAvatarSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3679496931U) },
		{ EBlueprintAsyncResultSwitch_StaticEnum, TEXT("EBlueprintAsyncResultSwitch"), &Z_Registration_Info_UEnum_EBlueprintAsyncResultSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1193287029U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSteamPlayerInfo::StaticStruct, Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics::NewStructOps, TEXT("SteamPlayerInfo"), &Z_Registration_Info_UScriptStruct_SteamPlayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamPlayerInfo), 2098612511U) },
		{ FSteamGameCoordinatorResults::StaticStruct, Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics::NewStructOps, TEXT("SteamGameCoordinatorResults"), &Z_Registration_Info_UScriptStruct_SteamGameCoordinatorResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamGameCoordinatorResults), 2459655703U) },
		{ FSteamAppId_t::StaticStruct, Z_Construct_UScriptStruct_FSteamAppId_t_Statics::NewStructOps, TEXT("SteamAppId_t"), &Z_Registration_Info_UScriptStruct_SteamAppId_t, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamAppId_t), 424544938U) },
		{ FSteamId_t::StaticStruct, Z_Construct_UScriptStruct_FSteamId_t_Statics::NewStructOps, TEXT("SteamId_t"), &Z_Registration_Info_UScriptStruct_SteamId_t, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamId_t), 980240691U) },
		{ FSteamDepotId_t::StaticStruct, Z_Construct_UScriptStruct_FSteamDepotId_t_Statics::NewStructOps, TEXT("SteamDepotId_t"), &Z_Registration_Info_UScriptStruct_SteamDepotId_t, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamDepotId_t), 1202992811U) },
		{ FSteamUint64::StaticStruct, Z_Construct_UScriptStruct_FSteamUint64_Statics::NewStructOps, TEXT("SteamUint64"), &Z_Registration_Info_UScriptStruct_SteamUint64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamUint64), 1076532051U) },
		{ FSteamNetworkPingLocation::StaticStruct, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewStructOps, TEXT("SteamNetworkPingLocation"), &Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamNetworkPingLocation), 2351885974U) },
		{ FBPUniqueNetId::StaticStruct, Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewStructOps, TEXT("BPUniqueNetId"), &Z_Registration_Info_UScriptStruct_BPUniqueNetId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPUniqueNetId), 838761030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_3874520471(TEXT("/Script/SteamAPI_BPL_Plugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
