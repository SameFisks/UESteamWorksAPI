// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamRemotePlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamRemotePlay;
enum class ESteamDeviceFormFactor_ : uint8;
struct FSteamID;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamRemotePlay_generated_h
#error "UISteamRemotePlay.generated.h already included, missing '#pragma once' in UISteamRemotePlay.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamRemotePlay_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamRemotePlaySessionConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnectedDelegate, int32 SessionID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamRemotePlaySessionDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnectedDelegate, int32 SessionID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionSteamID); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionCount); \
	DECLARE_FUNCTION(execGetSteamRemotePlay);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBSendRemotePlayTogetherInvite); \
	DECLARE_FUNCTION(execBGetSessionClientResolution); \
	DECLARE_FUNCTION(execGetSessionClientFormFactor); \
	DECLARE_FUNCTION(execGetSessionClientName); \
	DECLARE_FUNCTION(execGetSessionSteamID); \
	DECLARE_FUNCTION(execGetSessionID); \
	DECLARE_FUNCTION(execGetSessionCount); \
	DECLARE_FUNCTION(execGetSteamRemotePlay);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamRemotePlay(); \
	friend struct Z_Construct_UClass_UISteamRemotePlay_Statics; \
public: \
	DECLARE_CLASS(UISteamRemotePlay, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamRemotePlay)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUISteamRemotePlay(); \
	friend struct Z_Construct_UClass_UISteamRemotePlay_Statics; \
public: \
	DECLARE_CLASS(UISteamRemotePlay, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamRemotePlay)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamRemotePlay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamRemotePlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamRemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamRemotePlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamRemotePlay(UISteamRemotePlay&&); \
	NO_API UISteamRemotePlay(const UISteamRemotePlay&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamRemotePlay(UISteamRemotePlay&&); \
	NO_API UISteamRemotePlay(const UISteamRemotePlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamRemotePlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamRemotePlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamRemotePlay)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_14_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamRemotePlay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamRemotePlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
