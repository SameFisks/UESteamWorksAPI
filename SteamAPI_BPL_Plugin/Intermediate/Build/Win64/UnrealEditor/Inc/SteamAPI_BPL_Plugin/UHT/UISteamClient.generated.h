// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamClient;
struct FHSteamPipe;
struct FHSteamUser;
struct FUint16;
struct FUint32;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamClient_generated_h
#error "UISteamClient.generated.h already included, missing '#pragma once' in UISteamClient.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamClient_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLocalIPBinding); \
	DECLARE_FUNCTION(execReleaseUser); \
	DECLARE_FUNCTION(execGetISteamGenericInterface); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execCreateSteamPipe); \
	DECLARE_FUNCTION(execConnectToGlobalUser); \
	DECLARE_FUNCTION(execBShutdownIfAllPipesClosed); \
	DECLARE_FUNCTION(execBReleaseSteamPipe); \
	DECLARE_FUNCTION(execGetSteamApps);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLocalIPBinding); \
	DECLARE_FUNCTION(execReleaseUser); \
	DECLARE_FUNCTION(execGetISteamGenericInterface); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execCreateSteamPipe); \
	DECLARE_FUNCTION(execConnectToGlobalUser); \
	DECLARE_FUNCTION(execBShutdownIfAllPipesClosed); \
	DECLARE_FUNCTION(execBReleaseSteamPipe); \
	DECLARE_FUNCTION(execGetSteamApps);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamClient(); \
	friend struct Z_Construct_UClass_UISteamClient_Statics; \
public: \
	DECLARE_CLASS(UISteamClient, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamClient)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUISteamClient(); \
	friend struct Z_Construct_UClass_UISteamClient_Statics; \
public: \
	DECLARE_CLASS(UISteamClient, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamClient)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamClient(UISteamClient&&); \
	NO_API UISteamClient(const UISteamClient&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamClient(UISteamClient&&); \
	NO_API UISteamClient(const UISteamClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamClient)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_12_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
