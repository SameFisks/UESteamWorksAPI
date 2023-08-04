// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamApps.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamAppId_t;
struct FSteamDepotId_t;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamApps_generated_h
#error "UISteamApps.generated.h already included, missing '#pragma once' in UISteamApps.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamApps_generated_h

#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_SPARSE_DATA
#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execRequestAppProofOfPurchaseKey); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execBIsAppInstalled);


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execRequestAppProofOfPurchaseKey); \
	DECLARE_FUNCTION(execUninstallDLC); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execBIsAppInstalled);


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_ACCESSORS
#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamApps(); \
	friend struct Z_Construct_UClass_UISteamApps_Statics; \
public: \
	DECLARE_CLASS(UISteamApps, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamApps)


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUISteamApps(); \
	friend struct Z_Construct_UClass_UISteamApps_Statics; \
public: \
	DECLARE_CLASS(UISteamApps, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamApps)


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamApps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamApps) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamApps); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamApps(UISteamApps&&); \
	NO_API UISteamApps(const UISteamApps&); \
public: \
	NO_API virtual ~UISteamApps();


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamApps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamApps(UISteamApps&&); \
	NO_API UISteamApps(const UISteamApps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamApps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamApps) \
	NO_API virtual ~UISteamApps();


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_11_PROLOG
#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_SPARSE_DATA \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_RPC_WRAPPERS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_ACCESSORS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_INCLASS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_SPARSE_DATA \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_ACCESSORS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamApps."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamApps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
