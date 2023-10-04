// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamVideo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamVideo;
enum class ESteamResult : uint8;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamVideo_generated_h
#error "UISteamVideo.generated.h already included, missing '#pragma once' in UISteamVideo.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamVideo_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGetOPFSettingsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResultDelegate, ESteamResult Result, int32 VideoAppID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGetVideoURLResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResultDelegate, ESteamResult Result, int32 VideoAppID, const FString& URL);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execGetVideoURL); \
	DECLARE_FUNCTION(execGetOPFStringForApp); \
	DECLARE_FUNCTION(execGetOPFSettings); \
	DECLARE_FUNCTION(execGetSteamVideo);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execGetVideoURL); \
	DECLARE_FUNCTION(execGetOPFStringForApp); \
	DECLARE_FUNCTION(execGetOPFSettings); \
	DECLARE_FUNCTION(execGetSteamVideo);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamVideo(); \
	friend struct Z_Construct_UClass_UISteamVideo_Statics; \
public: \
	DECLARE_CLASS(UISteamVideo, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamVideo)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUISteamVideo(); \
	friend struct Z_Construct_UClass_UISteamVideo_Statics; \
public: \
	DECLARE_CLASS(UISteamVideo, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamVideo)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamVideo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamVideo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamVideo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamVideo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamVideo(UISteamVideo&&); \
	NO_API UISteamVideo(const UISteamVideo&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamVideo(UISteamVideo&&); \
	NO_API UISteamVideo(const UISteamVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamVideo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamVideo)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_13_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamVideo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamVideo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
