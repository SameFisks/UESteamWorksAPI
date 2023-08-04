// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FSteamEVoiceResult : uint8;
struct FSteamPlayerInfo;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamUser_generated_h
#error "UISteamUser.generated.h already included, missing '#pragma once' in UISteamUser.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamUser_generated_h

#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_SPARSE_DATA
#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTerminateGameConnection_DEPRECATED); \
	DECLARE_FUNCTION(execInitiateGameConnection); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execGetHSteamUser); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording);


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTerminateGameConnection_DEPRECATED); \
	DECLARE_FUNCTION(execInitiateGameConnection); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execGetHSteamUser); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording);


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_ACCESSORS
#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamUser(); \
	friend struct Z_Construct_UClass_UISteamUser_Statics; \
public: \
	DECLARE_CLASS(UISteamUser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUser)


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUISteamUser(); \
	friend struct Z_Construct_UClass_UISteamUser_Statics; \
public: \
	DECLARE_CLASS(UISteamUser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUser)


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUser(UISteamUser&&); \
	NO_API UISteamUser(const UISteamUser&); \
public: \
	NO_API virtual ~UISteamUser();


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUser(UISteamUser&&); \
	NO_API UISteamUser(const UISteamUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamUser) \
	NO_API virtual ~UISteamUser();


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_8_PROLOG
#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_SPARSE_DATA \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_RPC_WRAPPERS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_ACCESSORS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_INCLASS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_SPARSE_DATA \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_ACCESSORS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamUser."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
