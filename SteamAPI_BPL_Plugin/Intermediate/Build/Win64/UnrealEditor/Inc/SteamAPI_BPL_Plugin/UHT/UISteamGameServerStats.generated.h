// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamGameServerStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamGameServerStats;
enum class ESteamResult : uint8;
struct FSteamID;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamGameServerStats_generated_h
#error "UISteamGameServerStats.generated.h already included, missing '#pragma once' in UISteamGameServerStats.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamGameServerStats_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsReceivedDelegate, ESteamResult Result, FSteamID SteamIDUser);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSStatsStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsStoredDelegate, ESteamResult Result, FSteamID SteamIDUser);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSStatsUnloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloadedDelegate, FSteamID SteamIDUser);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement); \
	DECLARE_FUNCTION(execGetSteamGameServerStats);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateUserAvgRateStat); \
	DECLARE_FUNCTION(execSetUserStatFloat); \
	DECLARE_FUNCTION(execSetUserStatInt); \
	DECLARE_FUNCTION(execSetUserAchievement); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInt); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execClearUserAchievement); \
	DECLARE_FUNCTION(execGetSteamGameServerStats);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamGameServerStats(); \
	friend struct Z_Construct_UClass_UISteamGameServerStats_Statics; \
public: \
	DECLARE_CLASS(UISteamGameServerStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamGameServerStats)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUISteamGameServerStats(); \
	friend struct Z_Construct_UClass_UISteamGameServerStats_Statics; \
public: \
	DECLARE_CLASS(UISteamGameServerStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamGameServerStats)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamGameServerStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamGameServerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamGameServerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamGameServerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamGameServerStats(UISteamGameServerStats&&); \
	NO_API UISteamGameServerStats(const UISteamGameServerStats&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamGameServerStats(UISteamGameServerStats&&); \
	NO_API UISteamGameServerStats(const UISteamGameServerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamGameServerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamGameServerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamGameServerStats)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_16_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamGameServerStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamGameServerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
