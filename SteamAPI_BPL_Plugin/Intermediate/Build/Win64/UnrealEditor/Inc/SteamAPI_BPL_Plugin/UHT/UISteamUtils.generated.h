// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamUtils;
enum class ESteamAPICallFailure_ : uint8;
enum class ESteamGamepadTextInputLineMode : uint8;
enum class ESteamGamepadTextInputMode : uint8;
enum class ESteamNotificationPosition : uint8;
enum class ESteamUniverse : uint8;
struct FSteamAPICall;
struct FSteamPlayerInfo;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamUtils_generated_h
#error "UISteamUtils.generated.h already included, missing '#pragma once' in UISteamUtils.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamUtils_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGamepadTextInputDismissedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissedDelegate, bool bSubmitted, int32 SubmittedTextLen);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnIPCountryDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountryDelegate);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnLowBatteryPowerDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPowerDelegate, uint8 MinutesBatteryLeft);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamAPICallCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAPICallCompletedDelegate, FSteamAPICall APICallHandle, int32 CallbackID, int32 CallbackSize);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamShutdownDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdownDelegate);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartVRDashboard); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execIsAPICallCompleted); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetAPICallFailureReason); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execBOverlayNeedsPresent); \
	DECLARE_FUNCTION(execGetFriends); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetSteamUtils);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartVRDashboard); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execIsAPICallCompleted); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetAPICallFailureReason); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execBOverlayNeedsPresent); \
	DECLARE_FUNCTION(execGetFriends); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetSteamUtils);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamUtils(); \
	friend struct Z_Construct_UClass_UISteamUtils_Statics; \
public: \
	DECLARE_CLASS(UISteamUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUtils)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUISteamUtils(); \
	friend struct Z_Construct_UClass_UISteamUtils_Statics; \
public: \
	DECLARE_CLASS(UISteamUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUtils)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUtils(UISteamUtils&&); \
	NO_API UISteamUtils(const UISteamUtils&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUtils(UISteamUtils&&); \
	NO_API UISteamUtils(const UISteamUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamUtils)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_16_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamUtils."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
