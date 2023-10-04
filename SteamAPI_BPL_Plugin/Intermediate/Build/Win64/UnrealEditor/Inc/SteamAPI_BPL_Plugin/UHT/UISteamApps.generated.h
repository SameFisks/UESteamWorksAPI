// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamApps.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamApps;
enum class ESteamResult : uint8;
struct FSteamAPICall;
struct FSteamID;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamApps_generated_h
#error "UISteamApps.generated.h already included, missing '#pragma once' in UISteamApps.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamApps_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnDlcInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDlcInstalledDelegate, int32 AppID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, ESteamResult Result, int64 FileSize, const FString& FileSHA, int32 flags);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execGetSteamApps);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execGetSteamApps);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamApps(); \
	friend struct Z_Construct_UClass_UISteamApps_Statics; \
public: \
	DECLARE_CLASS(UISteamApps, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamApps)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUISteamApps(); \
	friend struct Z_Construct_UClass_UISteamApps_Statics; \
public: \
	DECLARE_CLASS(UISteamApps, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamApps)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamApps(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamApps) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamApps); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamApps(UISteamApps&&); \
	NO_API UISteamApps(const UISteamApps&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamApps(UISteamApps&&); \
	NO_API UISteamApps(const UISteamApps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamApps)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_15_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamApps."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamApps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
