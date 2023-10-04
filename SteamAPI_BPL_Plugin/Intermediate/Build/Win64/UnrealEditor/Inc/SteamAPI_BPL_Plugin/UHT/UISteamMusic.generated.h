// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamMusic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamMusic;
enum class ESteamAudioPlaybackStatus : uint8;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamMusic_generated_h
#error "UISteamMusic.generated.h already included, missing '#pragma once' in UISteamMusic.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamMusic_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_7_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnPlaybackStatusHasChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChangedDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_8_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnVolumeHasChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChangedDelegate, float NewVolume);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled); \
	DECLARE_FUNCTION(execGetSteamMusic);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execPlayPrevious); \
	DECLARE_FUNCTION(execPlayNext); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execGetPlaybackStatus); \
	DECLARE_FUNCTION(execBIsPlaying); \
	DECLARE_FUNCTION(execBIsEnabled); \
	DECLARE_FUNCTION(execGetSteamMusic);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamMusic(); \
	friend struct Z_Construct_UClass_UISteamMusic_Statics; \
public: \
	DECLARE_CLASS(UISteamMusic, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMusic)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUISteamMusic(); \
	friend struct Z_Construct_UClass_UISteamMusic_Statics; \
public: \
	DECLARE_CLASS(UISteamMusic, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMusic)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamMusic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamMusic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMusic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMusic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMusic(UISteamMusic&&); \
	NO_API UISteamMusic(const UISteamMusic&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMusic(UISteamMusic&&); \
	NO_API UISteamMusic(const UISteamMusic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMusic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMusic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamMusic)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_12_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamMusic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamMusic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
