// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamHTTP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamHTTP;
enum class ESteamHTTPMethod : uint8;
struct FHTTPCookieContainerHandle;
struct FHTTPRequestHandle;
struct FSteamAPICall;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamHTTP_generated_h
#error "UISteamHTTP.generated.h already included, missing '#pragma once' in UISteamHTTP.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamHTTP_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTTPRequestCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTTPRequestCompletedDelegate, FHTTPRequestHandle RequestHandle, int64 ContextValue, bool bRequestSuccessful, ESteamHTTPStatus::Type HTTPStatus, int32 BodySize);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTTPRequestDataReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTTPRequestDataReceivedDelegate, FHTTPRequestHandle RequestHandle, int64 ContextValue, int32 Offset, int32 BytesReceived);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTTPRequestHeadersReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTTPRequestHeadersReceivedDelegate, FHTTPRequestHandle RequestHandle, int64 ContextValue);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHTTPRequestUserAgentInfo); \
	DECLARE_FUNCTION(execSetHTTPRequestRequiresVerifiedCertificate); \
	DECLARE_FUNCTION(execSetHTTPRequestRawPostBody); \
	DECLARE_FUNCTION(execSetHTTPRequestNetworkActivityTimeout); \
	DECLARE_FUNCTION(execSetHTTPRequestHeaderValue); \
	DECLARE_FUNCTION(execSetHTTPRequestGetOrPostParameter); \
	DECLARE_FUNCTION(execSetHTTPRequestCookieContainer); \
	DECLARE_FUNCTION(execSetHTTPRequestContextValue); \
	DECLARE_FUNCTION(execSetHTTPRequestAbsoluteTimeoutMS); \
	DECLARE_FUNCTION(execSetCookie); \
	DECLARE_FUNCTION(execSendHTTPRequestAndStreamResponse); \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execReleaseHTTPRequest); \
	DECLARE_FUNCTION(execReleaseCookieContainer); \
	DECLARE_FUNCTION(execPrioritizeHTTPRequest); \
	DECLARE_FUNCTION(execGetHTTPStreamingResponseBodyData); \
	DECLARE_FUNCTION(execGetHTTPResponseHeaderValue); \
	DECLARE_FUNCTION(execGetHTTPResponseHeaderSize); \
	DECLARE_FUNCTION(execGetHTTPResponseBodySize); \
	DECLARE_FUNCTION(execGetHTTPResponseBodyData); \
	DECLARE_FUNCTION(execGetHTTPRequestWasTimedOut); \
	DECLARE_FUNCTION(execGetHTTPDownloadProgressPct); \
	DECLARE_FUNCTION(execDeferHTTPRequest); \
	DECLARE_FUNCTION(execCreateHTTPRequest); \
	DECLARE_FUNCTION(execCreateCookieContainer); \
	DECLARE_FUNCTION(execGetSteamHTTP);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHTTPRequestUserAgentInfo); \
	DECLARE_FUNCTION(execSetHTTPRequestRequiresVerifiedCertificate); \
	DECLARE_FUNCTION(execSetHTTPRequestRawPostBody); \
	DECLARE_FUNCTION(execSetHTTPRequestNetworkActivityTimeout); \
	DECLARE_FUNCTION(execSetHTTPRequestHeaderValue); \
	DECLARE_FUNCTION(execSetHTTPRequestGetOrPostParameter); \
	DECLARE_FUNCTION(execSetHTTPRequestCookieContainer); \
	DECLARE_FUNCTION(execSetHTTPRequestContextValue); \
	DECLARE_FUNCTION(execSetHTTPRequestAbsoluteTimeoutMS); \
	DECLARE_FUNCTION(execSetCookie); \
	DECLARE_FUNCTION(execSendHTTPRequestAndStreamResponse); \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execReleaseHTTPRequest); \
	DECLARE_FUNCTION(execReleaseCookieContainer); \
	DECLARE_FUNCTION(execPrioritizeHTTPRequest); \
	DECLARE_FUNCTION(execGetHTTPStreamingResponseBodyData); \
	DECLARE_FUNCTION(execGetHTTPResponseHeaderValue); \
	DECLARE_FUNCTION(execGetHTTPResponseHeaderSize); \
	DECLARE_FUNCTION(execGetHTTPResponseBodySize); \
	DECLARE_FUNCTION(execGetHTTPResponseBodyData); \
	DECLARE_FUNCTION(execGetHTTPRequestWasTimedOut); \
	DECLARE_FUNCTION(execGetHTTPDownloadProgressPct); \
	DECLARE_FUNCTION(execDeferHTTPRequest); \
	DECLARE_FUNCTION(execCreateHTTPRequest); \
	DECLARE_FUNCTION(execCreateCookieContainer); \
	DECLARE_FUNCTION(execGetSteamHTTP);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamHTTP(); \
	friend struct Z_Construct_UClass_UISteamHTTP_Statics; \
public: \
	DECLARE_CLASS(UISteamHTTP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamHTTP)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUISteamHTTP(); \
	friend struct Z_Construct_UClass_UISteamHTTP_Statics; \
public: \
	DECLARE_CLASS(UISteamHTTP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamHTTP)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamHTTP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamHTTP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamHTTP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamHTTP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamHTTP(UISteamHTTP&&); \
	NO_API UISteamHTTP(const UISteamHTTP&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamHTTP(UISteamHTTP&&); \
	NO_API UISteamHTTP(const UISteamHTTP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamHTTP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamHTTP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamHTTP)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_16_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamHTTP."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamHTTP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
