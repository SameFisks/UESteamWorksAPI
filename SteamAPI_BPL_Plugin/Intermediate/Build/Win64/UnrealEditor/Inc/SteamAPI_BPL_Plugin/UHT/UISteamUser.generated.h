// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamUser;
enum class ESteamAuthSessionResponse : uint8;
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamDenyReason : uint8;
enum class ESteamDurationControlNotification : uint8;
enum class ESteamDurationControlProgress : uint8;
enum class ESteamFailureType : uint8;
enum class ESteamResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
enum class ESteamVoiceResult : uint8;
struct FHAuthTicket;
struct FHSteamUser;
struct FSteamAPICall;
struct FSteamID;
struct FSteamPlayerInfo;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamUser_generated_h
#error "UISteamUser.generated.h already included, missing '#pragma once' in UISteamUser.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamUser_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnClientGameServerDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClientGameServerDenyDelegate, int32 AppID, const FString& GameServerIP, int32 GameServerPort, bool bSecure, ESteamDenyReason Reason);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnDurationControlDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDurationControlDelegate, ESteamResult Result, int32 AppId, bool bApplicable, int32 csecsLast5h, ESteamDurationControlProgress Progress, ESteamDurationControlNotification Notification);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnEncryptedAppTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEncryptedAppTicketResponseDelegate, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGameWebCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameWebCallbackDelegate, const FString& URL);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGetAuthSessionTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAuthSessionTicketResponseDelegate, FHAuthTicket AuthTicket, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnIPCFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIPCFailureDelegate, ESteamFailureType FailureType);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLicensesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdatedDelegate);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnMicroTxnAuthorizationResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMicroTxnAuthorizationResponseDelegate, int32 AppID, const FString& OrderID, bool bAuthorized);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamServerConnectFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailureDelegate, ESteamResult Result, bool bStillRetrying);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_18_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamServersConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnectedDelegate);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamServersDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnectedDelegate, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_20_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnStoreAuthURLResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStoreAuthURLResponseDelegate, const FString& URL);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_21_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnValidateAuthTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnValidateAuthTicketResponseDelegate, FSteamID SteamID, ESteamAuthSessionResponse AuthSessionResponse, FSteamID OwnerSteamID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetHSteamUser); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetDurationControl); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame); \
	DECLARE_FUNCTION(execGetSteamUser); \
	DECLARE_FUNCTION(execTerminateGameConnection_DEPRECATED); \
	DECLARE_FUNCTION(execInitiateGameConnection); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetHSteamUser); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetDurationControl); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame); \
	DECLARE_FUNCTION(execGetSteamUser); \
	DECLARE_FUNCTION(execTerminateGameConnection_DEPRECATED); \
	DECLARE_FUNCTION(execInitiateGameConnection); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamUser(); \
	friend struct Z_Construct_UClass_UISteamUser_Statics; \
public: \
	DECLARE_CLASS(UISteamUser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUser)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUISteamUser(); \
	friend struct Z_Construct_UClass_UISteamUser_Statics; \
public: \
	DECLARE_CLASS(UISteamUser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUser)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUser(UISteamUser&&); \
	NO_API UISteamUser(const UISteamUser&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUser(UISteamUser&&); \
	NO_API UISteamUser(const UISteamUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamUser)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_24_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamUser."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
