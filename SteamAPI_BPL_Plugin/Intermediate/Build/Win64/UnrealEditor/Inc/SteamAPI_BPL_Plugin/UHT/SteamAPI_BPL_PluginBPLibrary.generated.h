// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAPI_BPL_PluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAPI_BPL_PLUGIN_SteamAPI_BPL_PluginBPLibrary_generated_h
#error "SteamAPI_BPL_PluginBPLibrary.generated.h already included, missing '#pragma once' in SteamAPI_BPL_PluginBPLibrary.h"
#endif
#define STEAMAPI_BPL_PLUGIN_SteamAPI_BPL_PluginBPLibrary_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamPlayerInfo_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamPlayerInfo>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamGameCoordinatorResults_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamGameCoordinatorResults>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamAppId_t_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamAppId_t>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamId_t_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamId_t>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamDepotId_t_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamDepotId_t>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamUint64_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamUint64>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FSteamNetworkPingLocation>();

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPUniqueNetId_Statics; \
	STEAMAPI_BPL_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> STEAMAPI_BPL_PLUGIN_API UScriptStruct* StaticStruct<struct FBPUniqueNetId>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamAPI_BPL_PluginBPLibrary_h


#define FOREACH_ENUM_ESTEAMUSEROVERLAYTYPE(op) \
	op(ESteamUserOverlayType::steamid) \
	op(ESteamUserOverlayType::chat) \
	op(ESteamUserOverlayType::jointrade) \
	op(ESteamUserOverlayType::stats) \
	op(ESteamUserOverlayType::achievements) \
	op(ESteamUserOverlayType::friendadd) \
	op(ESteamUserOverlayType::friendremove) \
	op(ESteamUserOverlayType::friendrequestaccept) \
	op(ESteamUserOverlayType::friendrequestignore) 

enum class ESteamUserOverlayType : uint8;
template<> struct TIsUEnumClass<ESteamUserOverlayType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUserOverlayType>();

#define FOREACH_ENUM_ESTEAMFRIENDRELATIONSHIP(op) \
	op(ESteamFriendRelationship::k_EFriendRelationshipNone) \
	op(ESteamFriendRelationship::k_EFriendRelationshipBlocked) \
	op(ESteamFriendRelationship::k_EFriendRelationshipRequestRecipient) \
	op(ESteamFriendRelationship::k_EFriendRelationshipFriend) \
	op(ESteamFriendRelationship::k_EFriendRelationshipRequestInitiator) \
	op(ESteamFriendRelationship::k_EFriendRelationshipIgnored) \
	op(ESteamFriendRelationship::k_EFriendRelationshipIgnoredFriend) \
	op(ESteamFriendRelationship::k_EFriendRelationshipSuggested_DEPRECATED) \
	op(ESteamFriendRelationship::k_EFriendRelationshipMax) 

enum class ESteamFriendRelationship : uint8;
template<> struct TIsUEnumClass<ESteamFriendRelationship> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamFriendRelationship>();

#define FOREACH_ENUM_ESTEAMPERSONASTATE(op) \
	op(ESteamPersonaState::k_EPersonaStateOffline) \
	op(ESteamPersonaState::k_EPersonaStateOnline) \
	op(ESteamPersonaState::k_EPersonaStateBusy) \
	op(ESteamPersonaState::k_EPersonaStateAway) \
	op(ESteamPersonaState::k_EPersonaStateSnooze) \
	op(ESteamPersonaState::k_EPersonaStateLookingToTrade) \
	op(ESteamPersonaState::k_EPersonaStateLookingToPlay) \
	op(ESteamPersonaState::k_EPersonaStateInvisible) \
	op(ESteamPersonaState::k_EPersonaStateMax) 

enum class ESteamPersonaState : uint8;
template<> struct TIsUEnumClass<ESteamPersonaState> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamPersonaState>();

#define FOREACH_ENUM_FSTEAMEVOICERESULT(op) \
	op(FSteamEVoiceResult::k_EVoiceResultOK) \
	op(FSteamEVoiceResult::k_EVoiceResultNotInitialized) \
	op(FSteamEVoiceResult::k_EVoiceResultNotRecording) \
	op(FSteamEVoiceResult::k_EVoiceResultNoData) \
	op(FSteamEVoiceResult::k_EVoiceResultBufferTooSmall) \
	op(FSteamEVoiceResult::k_EVoiceResultDataCorrupted) \
	op(FSteamEVoiceResult::k_EVoiceResultRestricted) \
	op(FSteamEVoiceResult::k_EVoiceResultUnsupportedCodec) \
	op(FSteamEVoiceResult::k_EVoiceResultReceiverOutOfDate) \
	op(FSteamEVoiceResult::k_EVoiceResultReceiverDidNotAnswer) 

enum class FSteamEVoiceResult : uint8;
template<> struct TIsUEnumClass<FSteamEVoiceResult> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<FSteamEVoiceResult>();

#define FOREACH_ENUM_FSTEAMEGCRESULTS(op) \
	op(FSteamEGCResults::k_EGCResultOK) \
	op(FSteamEGCResults::k_EGCResultNoMessage) \
	op(FSteamEGCResults::k_EGCResultBufferTooSmall) \
	op(FSteamEGCResults::k_EGCResultNotLoggedOn) \
	op(FSteamEGCResults::k_EGCResultInvalidMessage) 

enum class FSteamEGCResults : uint8;
template<> struct TIsUEnumClass<FSteamEGCResults> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<FSteamEGCResults>();

#define FOREACH_ENUM_STEAMAVATARSIZE(op) \
	op(SteamAvatarSize::SteamAvatar_INVALID) \
	op(SteamAvatarSize::SteamAvatar_Small) \
	op(SteamAvatarSize::SteamAvatar_Medium) \
	op(SteamAvatarSize::SteamAvatar_Large) 

enum class SteamAvatarSize : uint8;
template<> struct TIsUEnumClass<SteamAvatarSize> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<SteamAvatarSize>();

#define FOREACH_ENUM_EBLUEPRINTASYNCRESULTSWITCH(op) \
	op(EBlueprintAsyncResultSwitch::OnSuccess) \
	op(EBlueprintAsyncResultSwitch::AsyncLoading) \
	op(EBlueprintAsyncResultSwitch::OnFailure) 

enum class EBlueprintAsyncResultSwitch : uint8;
template<> struct TIsUEnumClass<EBlueprintAsyncResultSwitch> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<EBlueprintAsyncResultSwitch>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
