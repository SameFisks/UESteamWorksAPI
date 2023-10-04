// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamMatchmakingServers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamMatchmakingServers;
struct FHServerListRequest;
struct FHServerQuery;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamMatchmakingServers_generated_h
#error "UISteamMatchmakingServers.generated.h already included, missing '#pragma once' in UISteamMatchmakingServers.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamMatchmakingServers_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReleaseRequest); \
	DECLARE_FUNCTION(execRefreshServer); \
	DECLARE_FUNCTION(execRefreshQuery); \
	DECLARE_FUNCTION(execIsRefreshing); \
	DECLARE_FUNCTION(execGetServerCount); \
	DECLARE_FUNCTION(execCancelServerQuery); \
	DECLARE_FUNCTION(execCancelQuery); \
	DECLARE_FUNCTION(execGetSteamMatchmakingServers);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReleaseRequest); \
	DECLARE_FUNCTION(execRefreshServer); \
	DECLARE_FUNCTION(execRefreshQuery); \
	DECLARE_FUNCTION(execIsRefreshing); \
	DECLARE_FUNCTION(execGetServerCount); \
	DECLARE_FUNCTION(execCancelServerQuery); \
	DECLARE_FUNCTION(execCancelQuery); \
	DECLARE_FUNCTION(execGetSteamMatchmakingServers);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamMatchmakingServers(); \
	friend struct Z_Construct_UClass_UISteamMatchmakingServers_Statics; \
public: \
	DECLARE_CLASS(UISteamMatchmakingServers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMatchmakingServers)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUISteamMatchmakingServers(); \
	friend struct Z_Construct_UClass_UISteamMatchmakingServers_Statics; \
public: \
	DECLARE_CLASS(UISteamMatchmakingServers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamMatchmakingServers)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamMatchmakingServers(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamMatchmakingServers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMatchmakingServers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMatchmakingServers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMatchmakingServers(UISteamMatchmakingServers&&); \
	NO_API UISteamMatchmakingServers(const UISteamMatchmakingServers&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamMatchmakingServers(UISteamMatchmakingServers&&); \
	NO_API UISteamMatchmakingServers(const UISteamMatchmakingServers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamMatchmakingServers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamMatchmakingServers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamMatchmakingServers)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_10_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamMatchmakingServers."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamMatchmakingServers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
