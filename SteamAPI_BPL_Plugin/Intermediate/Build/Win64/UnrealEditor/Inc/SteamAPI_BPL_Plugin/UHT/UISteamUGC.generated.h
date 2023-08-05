// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamUGC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamUGC;
enum class ESteamItemPreviewType : uint8;
enum class ESteamItemStatistic : uint8;
enum class ESteamItemUpdateStatus : uint8;
enum class ESteamRemoteStoragePublishedFileVisibility : uint8;
enum class ESteamResult : uint8;
enum class ESteamUGCMatchingUGCType : uint8;
enum class ESteamUGCQuery : uint8;
enum class ESteamUserUGCList : uint8;
enum class ESteamUserUGCListSortOrder : uint8;
enum class ESteamWorkshopFileType : uint8;
struct FAccountID;
struct FPublishedFileId;
struct FSteamAPICall;
struct FSteamUGCDetails;
struct FUGCQueryHandle;
struct FUGCUpdateHandle;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamUGC_generated_h
#error "UISteamUGC.generated.h already included, missing '#pragma once' in UISteamUGC.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamUGC_generated_h

#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_9_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnAddAppDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, int32 AppID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnAddUGCDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddUGCDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, FPublishedFileId ChildPublishedFileID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnCreateItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnDownloadItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResultDelegate, int32 AppID, FPublishedFileId PublishedFileID, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGetAppDependenciesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, const TArray<int32>& AppID, int32 NumAppDependencies, int32 TotalNumAppDependencies);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnDeleteItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnGetUserItemVoteResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteResultDelegate, FPublishedFileId PublishedFileID, ESteamResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnItemInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemInstalledDelegate, int32 AppID, FPublishedFileId PublishedFileID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoveAppDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, int32 AppID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_18_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnRemoveUGCDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, FPublishedFileId ChildPublishedFileID);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSetUserItemVoteResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteResultDelegate, FPublishedFileId PublishedFileID, ESteamResult Result, bool bVoteUp);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_20_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnStartPlaytimeTrackingResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingResultDelegate, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_21_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSteamUGCQueryCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamUGCQueryCompletedDelegate, FUGCQueryHandle Handle, ESteamResult Result, int32 NumResultsReturned, int32 TotalMatchingResults, bool bCachedData);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_22_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnStopPlaytimeTrackingResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingResultDelegate, ESteamResult Result);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_23_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnSubmitItemUpdateResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateResultDelegate, ESteamResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_24_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnUserFavoriteItemsListChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserFavoriteItemsListChangedDelegate, FPublishedFileId PublishedFileID, ESteamResult Result, bool bWasAddRequest);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_SPARSE_DATA
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateItemPreviewVideo); \
	DECLARE_FUNCTION(execUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execUnsubscribeItem); \
	DECLARE_FUNCTION(execSuspendDownloads); \
	DECLARE_FUNCTION(execSubscribeItem); \
	DECLARE_FUNCTION(execSubmitItemUpdate); \
	DECLARE_FUNCTION(execStartItemUpdate); \
	DECLARE_FUNCTION(execSetUserItemVote); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSetReturnMetadata); \
	DECLARE_FUNCTION(execSetReturnLongDescription); \
	DECLARE_FUNCTION(execSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSetReturnChildren); \
	DECLARE_FUNCTION(execSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSetMatchAnyTag); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSetItemTitle); \
	DECLARE_FUNCTION(execSetItemTags); \
	DECLARE_FUNCTION(execSetItemPreview); \
	DECLARE_FUNCTION(execSetItemMetadata); \
	DECLARE_FUNCTION(execSetItemDescription); \
	DECLARE_FUNCTION(execSetItemContent); \
	DECLARE_FUNCTION(execSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSetAllowCachedResponse); \
	DECLARE_FUNCTION(execSendQueryUGCRequest); \
	DECLARE_FUNCTION(execRemoveItemPreview); \
	DECLARE_FUNCTION(execRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execRemoveItemFromFavorites); \
	DECLARE_FUNCTION(execRemoveDependency); \
	DECLARE_FUNCTION(execRemoveAppDependency); \
	DECLARE_FUNCTION(execReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execGetUserItemVote); \
	DECLARE_FUNCTION(execGetSubscribedItems); \
	DECLARE_FUNCTION(execGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execGetQueryUGCResult); \
	DECLARE_FUNCTION(execGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execGetQueryUGCChildren); \
	DECLARE_FUNCTION(execGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execGetNumSubscribedItems); \
	DECLARE_FUNCTION(execGetItemUpdateProgress); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execGetItemInstallInfo); \
	DECLARE_FUNCTION(execGetItemDownloadInfo); \
	DECLARE_FUNCTION(execGetAppDependencies); \
	DECLARE_FUNCTION(execDownloadItem); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execCreateItem); \
	DECLARE_FUNCTION(execBInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execAddRequiredTagGroup); \
	DECLARE_FUNCTION(execAddRequiredTag); \
	DECLARE_FUNCTION(execAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execAddItemToFavorites); \
	DECLARE_FUNCTION(execAddItemPreviewVideo); \
	DECLARE_FUNCTION(execAddItemPreviewFile); \
	DECLARE_FUNCTION(execAddItemKeyValueTag); \
	DECLARE_FUNCTION(execAddExcludedTag); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execAddAppDependency); \
	DECLARE_FUNCTION(execGetSteamUGC);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateItemPreviewVideo); \
	DECLARE_FUNCTION(execUpdateItemPreviewFile); \
	DECLARE_FUNCTION(execUnsubscribeItem); \
	DECLARE_FUNCTION(execSuspendDownloads); \
	DECLARE_FUNCTION(execSubscribeItem); \
	DECLARE_FUNCTION(execSubmitItemUpdate); \
	DECLARE_FUNCTION(execStartItemUpdate); \
	DECLARE_FUNCTION(execSetUserItemVote); \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execSetReturnTotalOnly); \
	DECLARE_FUNCTION(execSetReturnPlaytimeStats); \
	DECLARE_FUNCTION(execSetReturnOnlyIDs); \
	DECLARE_FUNCTION(execSetReturnMetadata); \
	DECLARE_FUNCTION(execSetReturnLongDescription); \
	DECLARE_FUNCTION(execSetReturnKeyValueTags); \
	DECLARE_FUNCTION(execSetReturnChildren); \
	DECLARE_FUNCTION(execSetReturnAdditionalPreviews); \
	DECLARE_FUNCTION(execSetRankedByTrendDays); \
	DECLARE_FUNCTION(execSetMatchAnyTag); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetItemUpdateLanguage); \
	DECLARE_FUNCTION(execSetItemTitle); \
	DECLARE_FUNCTION(execSetItemTags); \
	DECLARE_FUNCTION(execSetItemPreview); \
	DECLARE_FUNCTION(execSetItemMetadata); \
	DECLARE_FUNCTION(execSetItemDescription); \
	DECLARE_FUNCTION(execSetItemContent); \
	DECLARE_FUNCTION(execSetCloudFileNameFilter); \
	DECLARE_FUNCTION(execSetAllowCachedResponse); \
	DECLARE_FUNCTION(execSendQueryUGCRequest); \
	DECLARE_FUNCTION(execRemoveItemPreview); \
	DECLARE_FUNCTION(execRemoveItemKeyValueTags); \
	DECLARE_FUNCTION(execRemoveItemFromFavorites); \
	DECLARE_FUNCTION(execRemoveDependency); \
	DECLARE_FUNCTION(execRemoveAppDependency); \
	DECLARE_FUNCTION(execReleaseQueryUGCRequest); \
	DECLARE_FUNCTION(execGetUserItemVote); \
	DECLARE_FUNCTION(execGetSubscribedItems); \
	DECLARE_FUNCTION(execGetQueryUGCStatistic); \
	DECLARE_FUNCTION(execGetQueryUGCResult); \
	DECLARE_FUNCTION(execGetQueryUGCPreviewURL); \
	DECLARE_FUNCTION(execGetQueryUGCNumKeyValueTags); \
	DECLARE_FUNCTION(execGetQueryUGCNumAdditionalPreviews); \
	DECLARE_FUNCTION(execGetQueryUGCMetadata); \
	DECLARE_FUNCTION(execGetQueryUGCKeyValueTag); \
	DECLARE_FUNCTION(execGetQueryUGCChildren); \
	DECLARE_FUNCTION(execGetQueryUGCAdditionalPreview); \
	DECLARE_FUNCTION(execGetNumSubscribedItems); \
	DECLARE_FUNCTION(execGetItemUpdateProgress); \
	DECLARE_FUNCTION(execGetItemState); \
	DECLARE_FUNCTION(execGetItemInstallInfo); \
	DECLARE_FUNCTION(execGetItemDownloadInfo); \
	DECLARE_FUNCTION(execGetAppDependencies); \
	DECLARE_FUNCTION(execDownloadItem); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execCreateQueryUserUGCRequest); \
	DECLARE_FUNCTION(execCreateQueryUGCDetailsRequest); \
	DECLARE_FUNCTION(execCreateQueryAllUGCRequest); \
	DECLARE_FUNCTION(execCreateItem); \
	DECLARE_FUNCTION(execBInitWorkshopForGameServer); \
	DECLARE_FUNCTION(execAddRequiredTagGroup); \
	DECLARE_FUNCTION(execAddRequiredTag); \
	DECLARE_FUNCTION(execAddRequiredKeyValueTag); \
	DECLARE_FUNCTION(execAddItemToFavorites); \
	DECLARE_FUNCTION(execAddItemPreviewVideo); \
	DECLARE_FUNCTION(execAddItemPreviewFile); \
	DECLARE_FUNCTION(execAddItemKeyValueTag); \
	DECLARE_FUNCTION(execAddExcludedTag); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execAddAppDependency); \
	DECLARE_FUNCTION(execGetSteamUGC);


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_ACCESSORS
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamUGC(); \
	friend struct Z_Construct_UClass_UISteamUGC_Statics; \
public: \
	DECLARE_CLASS(UISteamUGC, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUGC)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUISteamUGC(); \
	friend struct Z_Construct_UClass_UISteamUGC_Statics; \
public: \
	DECLARE_CLASS(UISteamUGC, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamUGC)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamUGC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamUGC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUGC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUGC(UISteamUGC&&); \
	NO_API UISteamUGC(const UISteamUGC&); \
public:


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamUGC(UISteamUGC&&); \
	NO_API UISteamUGC(const UISteamUGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamUGC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamUGC)


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_29_PROLOG
#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_RPC_WRAPPERS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_INCLASS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_SPARSE_DATA \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_ACCESSORS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_INCLASS_NO_PURE_DECLS \
	FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamUGC."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamUGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
