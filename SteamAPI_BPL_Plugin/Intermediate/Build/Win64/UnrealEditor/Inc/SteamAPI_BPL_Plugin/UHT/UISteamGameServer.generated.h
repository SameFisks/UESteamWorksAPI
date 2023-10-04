// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamGameServer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamGameServer;
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamDenyReason : uint8;
enum class ESteamResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
struct FHAuthTicket;
struct FSteamAPICall;
struct FSteamID;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamGameServer_generated_h
#error "UISteamGameServer.generated.h already included, missing '#pragma once' in UISteamGameServer.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamGameServer_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnAssociateWithClanResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAssociateWithClanResultDelegate, ESteamResult Result);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnComputeNewPlayerCompatibilityResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnComputeNewPlayerCompatibilityResultDelegate, ESteamResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatDoesntLikeCandidate, int32 ClanPlayersThatDontLikeCandidate, FSteamID SteamIDCandidate);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSClientApproveDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApproveDelegate, FSteamID SteamID, FSteamID OwnerSteamID);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSClientDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDenyDelegate, FSteamID SteamID, ESteamDenyReason DenyReason, const FString& OptionalText);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSClientGroupStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatusDelegate, FSteamID SteamIDUser, FSteamID SteamIDGroup, bool bMember, bool bOfficer);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSClientKickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientKickDelegate, FSteamID SteamID, ESteamDenyReason DenyReason);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGSPolicyResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponseDelegate, bool bSecure);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAssociateWithClan); \
	DECLARE_FUNCTION(execGetSteamGameServer);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWasRestartRequested); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetPublicIP); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAssociateWithClan); \
	DECLARE_FUNCTION(execGetSteamGameServer);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamGameServer(); \
	friend struct Z_Construct_UClass_UISteamGameServer_Statics; \
public: \
	DECLARE_CLASS(UISteamGameServer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamGameServer)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUISteamGameServer(); \
	friend struct Z_Construct_UClass_UISteamGameServer_Statics; \
public: \
	DECLARE_CLASS(UISteamGameServer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamGameServer)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamGameServer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamGameServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamGameServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamGameServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamGameServer(UISteamGameServer&&); \
	NO_API UISteamGameServer(const UISteamGameServer&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamGameServer(UISteamGameServer&&); \
	NO_API UISteamGameServer(const UISteamGameServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamGameServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamGameServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamGameServer)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_20_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamGameServer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamGameServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
