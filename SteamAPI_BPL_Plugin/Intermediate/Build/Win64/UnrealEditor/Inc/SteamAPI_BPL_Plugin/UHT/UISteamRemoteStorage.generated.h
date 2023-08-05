// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamRemoteStorage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamRemoteStorage;
enum class ESteamRemoteStoragePlatform : uint8;
enum class ESteamResult : uint8;
struct FPublishedFileId;
struct FSteamAPICall;
struct FSteamID;
struct FUGCFileWriteStreamHandle;
struct FUGCHandle;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamRemoteStorage_generated_h
#error "UISteamRemoteStorage.generated.h already included, missing '#pragma once' in UISteamRemoteStorage.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamRemoteStorage_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStorageDownloadUGCResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageDownloadUGCResultDelegate, ESteamResult Result, FUGCHandle FileHandle, int32 AppID, int32 SizeInBytes, const FString& FileName, FSteamID SteamIDOwner);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStorageFileReadAsyncCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileReadAsyncCompleteDelegate, FSteamAPICall FileReadAsyncHandle, ESteamResult Result, int32 Offset, int32 BytesRead);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStorageFileShareResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileShareResultDelegate, ESteamResult Result, FUGCHandle FileHandle, const FString& FileName);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStorageFileWriteAsyncCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileWriteAsyncCompleteDelegate, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStoragePublishedFileSubscribedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribedDelegate, FPublishedFileId PublishedFileID, int32 AppID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStoragePublishedFileUnsubscribedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribedDelegate, FPublishedFileId PublishedFileID, int32 AppID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStorageSubscribePublishedFileResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoteStorageUnsubscribePublishedFileResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execGetSteamRemoteStorage);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete); \
	DECLARE_FUNCTION(execGetSteamRemoteStorage);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamRemoteStorage(); \
	friend struct Z_Construct_UClass_UISteamRemoteStorage_Statics; \
public: \
	DECLARE_CLASS(UISteamRemoteStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamRemoteStorage)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUISteamRemoteStorage(); \
	friend struct Z_Construct_UClass_UISteamRemoteStorage_Statics; \
public: \
	DECLARE_CLASS(UISteamRemoteStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamRemoteStorage)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamRemoteStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamRemoteStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamRemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamRemoteStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamRemoteStorage(UISteamRemoteStorage&&); \
	NO_API UISteamRemoteStorage(const UISteamRemoteStorage&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamRemoteStorage(UISteamRemoteStorage&&); \
	NO_API UISteamRemoteStorage(const UISteamRemoteStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamRemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamRemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamRemoteStorage)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_20_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamRemoteStorage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamRemoteStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
