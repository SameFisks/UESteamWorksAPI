// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamMusicRemote.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamMusicRemote;
enum class ESteamAudioPlaybackStatus : uint8;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamMusicRemote_generated_h
#error "UISteamMusicRemote.generated.h already included, missing '#pragma once' in UISteamMusicRemote.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamMusicRemote_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerRemoteToFrontDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteToFrontDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerRemoteWillActivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteWillActivateDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerRemoteWillDeactivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteWillDeactivateDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerSelectsPlaylistEntryDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerSelectsPlaylistEntryDelegate, int32 ID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerSelectsQueueEntryDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerSelectsQueueEntryDelegate, int32 ID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsLoopedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsLoopedDelegate, bool bLooped);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_18_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsPauseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPauseDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsPlayingRepeatStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayingRepeatStatusDelegate, int32 RepeatStatus);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_20_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsPlayNextDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayNextDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_21_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsPlayPreviousDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayPreviousDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_22_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsPlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_23_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsShuffledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsShuffledDelegate, bool bShuffled);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_24_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWantsVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsVolumeDelegate, float NewVolume);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_25_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMusicPlayerWillQuitDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWillQuitDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateVolume); \
	DECLARE_FUNCTION(execUpdateShuffled); \
	DECLARE_FUNCTION(execUpdatePlaybackStatus); \
	DECLARE_FUNCTION(execUpdateLooped); \
	DECLARE_FUNCTION(execUpdateCurrentEntryText); \
	DECLARE_FUNCTION(execUpdateCurrentEntryElapsedSeconds); \
	DECLARE_FUNCTION(execSetQueueEntry); \
	DECLARE_FUNCTION(execSetPlaylistEntry); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execSetCurrentQueueEntry); \
	DECLARE_FUNCTION(execSetCurrentPlaylistEntry); \
	DECLARE_FUNCTION(execResetQueueEntries); \
	DECLARE_FUNCTION(execResetPlaylistEntries); \
	DECLARE_FUNCTION(execRegisterSteamMusicRemote); \
	DECLARE_FUNCTION(execQueueWillChange); \
	DECLARE_FUNCTION(execQueueDidChange); \
	DECLARE_FUNCTION(execPlaylistWillChange); \
	DECLARE_FUNCTION(execPlaylistDidChange); \
	DECLARE_FUNCTION(execEnableShuffled); \
	DECLARE_FUNCTION(execEnableQueue); \
	DECLARE_FUNCTION(execEnablePlayPrevious); \
	DECLARE_FUNCTION(execEnablePlayNext); \
	DECLARE_FUNCTION(execEnablePlaylists); \
	DECLARE_FUNCTION(execEnableLooped); \
	DECLARE_FUNCTION(execDeregisterSteamMusicRemote); \
	DECLARE_FUNCTION(execCurrentEntryWillChange); \
	DECLARE_FUNCTION(execCurrentEntryIsAvailable); \
	DECLARE_FUNCTION(execBIsCurrentMusicRemote); \
	DECLARE_FUNCTION(execBActivationSuccess); \
	DECLARE_FUNCTION(execGetSteamMusicRemote);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateVolume); \
	DECLARE_FUNCTION(execUpdateShuffled); \
	DECLARE_FUNCTION(execUpdatePlaybackStatus); \
	DECLARE_FUNCTION(execUpdateLooped); \
	DECLARE_FUNCTION(execUpdateCurrentEntryText); \
	DECLARE_FUNCTION(execUpdateCurrentEntryElapsedSeconds); \
	DECLARE_FUNCTION(execSetQueueEntry); \
	DECLARE_FUNCTION(execSetPlaylistEntry); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execSetCurrentQueueEntry); \
	DECLARE_FUNCTION(execSetCurrentPlaylistEntry); \
	DECLARE_FUNCTION(execResetQueueEntries); \
	DECLARE_FUNCTION(execResetPlaylistEntries); \
	DECLARE_FUNCTION(execRegisterSteamMusicRemote); \
	DECLARE_FUNCTION(execQueueWillChange); \
	DECLARE_FUNCTION(execQueueDidChange); \
	DECLARE_FUNCTION(execPlaylistWillChange); \
	DECLARE_FUNCTION(execPlaylistDidChange); \
	DECLARE_FUNCTION(execEnableShuffled); \
	DECLARE_FUNCTION(execEnableQueue); \
	DECLARE_FUNCTION(execEnablePlayPrevious); \
	DECLARE_FUNCTION(execEnablePlayNext); \
	DECLARE_FUNCTION(execEnablePlaylists); \
	DECLARE_FUNCTION(execEnableLooped); \
	DECLARE_FUNCTION(execDeregisterSteamMusicRemote); \
	DECLARE_FUNCTION(execCurrentEntryWillChange); \
	DECLARE_FUNCTION(execCurrentEntryIsAvailable); \
	DECLARE_FUNCTION(execBIsCurrentMusicRemote); \
	DECLARE_FUNCTION(execBActivationSuccess); \
	DECLARE_FUNCTION(execGetSteamMusicRemote);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamMusicRemote(); \
	friend struct Z_Construct_UClass_UISteamMusicRemote_Statics; \
public: \
	DECLARE_CLASS(UISteamMusicRemote, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMusicRemote)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUISteamMusicRemote(); \
	friend struct Z_Construct_UClass_UISteamMusicRemote_Statics; \
public: \
	DECLARE_CLASS(UISteamMusicRemote, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMusicRemote)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamMusicRemote(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamMusicRemote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMusicRemote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMusicRemote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMusicRemote(UISteamMusicRemote&&); \
	NO_API UISteamMusicRemote(const UISteamMusicRemote&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMusicRemote(UISteamMusicRemote&&); \
	NO_API UISteamMusicRemote(const UISteamMusicRemote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMusicRemote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMusicRemote); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamMusicRemote)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_28_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamMusicRemote."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamMusicRemote>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
