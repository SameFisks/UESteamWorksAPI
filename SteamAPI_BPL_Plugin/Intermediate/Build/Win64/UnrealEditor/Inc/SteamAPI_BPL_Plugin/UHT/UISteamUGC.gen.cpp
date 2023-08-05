// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUGC.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUGC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUGC();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUGC_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemPreviewType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemStatistic();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemUpdateStatus();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamRemoteStoragePublishedFileVisibility();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUGCMatchingUGCType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUGCQuery();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserUGCList();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserUGCListSortOrder();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamWorkshopFileType();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAccountID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileId();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUGCQueryHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
			int32 AppID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnAddAppDependencyResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAddAppDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, int32 AppID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
		int32 AppID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnAddAppDependencyResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppID=AppID;
	OnAddAppDependencyResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
			FPublishedFileId ChildPublishedFileID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_ChildPublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnAddUGCDependencyResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAddUGCDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddUGCDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, FPublishedFileId ChildPublishedFileID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
		FPublishedFileId ChildPublishedFileID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnAddUGCDependencyResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.ChildPublishedFileID=ChildPublishedFileID;
	OnAddUGCDependencyResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
			bool bUserNeedsToAcceptWorkshopLegalAgreement;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserNeedsToAcceptWorkshopLegalAgreement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms*)Obj)->bUserNeedsToAcceptWorkshopLegalAgreement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement = { "bUserNeedsToAcceptWorkshopLegalAgreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnCreateItemResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCreateItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnCreateItemResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.bUserNeedsToAcceptWorkshopLegalAgreement=bUserNeedsToAcceptWorkshopLegalAgreement ? true : false;
	OnCreateItemResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms
		{
			int32 AppID;
			FPublishedFileId PublishedFileID;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnDownloadItemResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDownloadItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResultDelegate, int32 AppID, FPublishedFileId PublishedFileID, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms
	{
		int32 AppID;
		FPublishedFileId PublishedFileID;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnDownloadItemResultDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.PublishedFileID=PublishedFileID;
	Parms.Result=Result;
	OnDownloadItemResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
			TArray<int32> AppID;
			int32 NumAppDependencies;
			int32 TotalNumAppDependencies;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAppDependencies;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNumAppDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_AppID_Inner = { "AppID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms, AppID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_NumAppDependencies = { "NumAppDependencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms, NumAppDependencies), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_TotalNumAppDependencies = { "TotalNumAppDependencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms, TotalNumAppDependencies), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_AppID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_NumAppDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::NewProp_TotalNumAppDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGetAppDependenciesResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetAppDependenciesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, const TArray<int32>& AppID, int32 NumAppDependencies, int32 TotalNumAppDependencies)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
		TArray<int32> AppID;
		int32 NumAppDependencies;
		int32 TotalNumAppDependencies;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGetAppDependenciesResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppID=AppID;
	Parms.NumAppDependencies=NumAppDependencies;
	Parms.TotalNumAppDependencies=TotalNumAppDependencies;
	OnGetAppDependenciesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnDeleteItemResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDeleteItemResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDeleteItemResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnDeleteItemResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnDeleteItemResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDeleteItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnDeleteItemResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnDeleteItemResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	OnDeleteItemResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms
		{
			FPublishedFileId PublishedFileID;
			ESteamResult Result;
			bool bVotedUp;
			bool bVotedDown;
			bool bVoteSkipped;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bVotedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVotedUp;
		static void NewProp_bVotedDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVotedDown;
		static void NewProp_bVoteSkipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteSkipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedUp_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms*)Obj)->bVotedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedUp = { "bVotedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedDown_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms*)Obj)->bVotedDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedDown = { "bVotedDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteSkipped_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms*)Obj)->bVoteSkipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteSkipped = { "bVoteSkipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteSkipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVotedDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteSkipped,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGetUserItemVoteResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetUserItemVoteResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteResultDelegate, FPublishedFileId PublishedFileID, ESteamResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms
	{
		FPublishedFileId PublishedFileID;
		ESteamResult Result;
		bool bVotedUp;
		bool bVotedDown;
		bool bVoteSkipped;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGetUserItemVoteResultDelegate_Parms Parms;
	Parms.PublishedFileID=PublishedFileID;
	Parms.Result=Result;
	Parms.bVotedUp=bVotedUp ? true : false;
	Parms.bVotedDown=bVotedDown ? true : false;
	Parms.bVoteSkipped=bVoteSkipped ? true : false;
	OnGetUserItemVoteResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnItemInstalledDelegate_Parms
		{
			int32 AppID;
			FPublishedFileId PublishedFileID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnItemInstalledDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnItemInstalledDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnItemInstalledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnItemInstalledDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemInstalledDelegate, int32 AppID, FPublishedFileId PublishedFileID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnItemInstalledDelegate_Parms
	{
		int32 AppID;
		FPublishedFileId PublishedFileID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnItemInstalledDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.PublishedFileID=PublishedFileID;
	OnItemInstalledDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
			int32 AppID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoveAppDependencyResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoveAppDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, int32 AppID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
		int32 AppID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoveAppDependencyResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppID=AppID;
	OnRemoveAppDependencyResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms
		{
			ESteamResult Result;
			FPublishedFileId PublishedFileID;
			FPublishedFileId ChildPublishedFileID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::NewProp_ChildPublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoveUGCDependencyResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoveUGCDependencyResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID, FPublishedFileId ChildPublishedFileID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
		FPublishedFileId ChildPublishedFileID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoveUGCDependencyResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.ChildPublishedFileID=ChildPublishedFileID;
	OnRemoveUGCDependencyResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms
		{
			FPublishedFileId PublishedFileID;
			ESteamResult Result;
			bool bVoteUp;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bVoteUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteUp_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms*)Obj)->bVoteUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::NewProp_bVoteUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSetUserItemVoteResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSetUserItemVoteResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteResultDelegate, FPublishedFileId PublishedFileID, ESteamResult Result, bool bVoteUp)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms
	{
		FPublishedFileId PublishedFileID;
		ESteamResult Result;
		bool bVoteUp;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSetUserItemVoteResultDelegate_Parms Parms;
	Parms.PublishedFileID=PublishedFileID;
	Parms.Result=Result;
	Parms.bVoteUp=bVoteUp ? true : false;
	OnSetUserItemVoteResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnStartPlaytimeTrackingResultDelegate_Parms
		{
			ESteamResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnStartPlaytimeTrackingResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnStartPlaytimeTrackingResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnStartPlaytimeTrackingResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStartPlaytimeTrackingResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingResultDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnStartPlaytimeTrackingResultDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnStartPlaytimeTrackingResultDelegate_Parms Parms;
	Parms.Result=Result;
	OnStartPlaytimeTrackingResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms
		{
			FUGCQueryHandle Handle;
			ESteamResult Result;
			int32 NumResultsReturned;
			int32 TotalMatchingResults;
			bool bCachedData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumResultsReturned;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalMatchingResults;
		static void NewProp_bCachedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_NumResultsReturned = { "NumResultsReturned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms, NumResultsReturned), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_TotalMatchingResults = { "TotalMatchingResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms, TotalMatchingResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_bCachedData_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms*)Obj)->bCachedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_NumResultsReturned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_TotalMatchingResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::NewProp_bCachedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamUGCQueryCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamUGCQueryCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamUGCQueryCompletedDelegate, FUGCQueryHandle Handle, ESteamResult Result, int32 NumResultsReturned, int32 TotalMatchingResults, bool bCachedData)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms
	{
		FUGCQueryHandle Handle;
		ESteamResult Result;
		int32 NumResultsReturned;
		int32 TotalMatchingResults;
		bool bCachedData;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamUGCQueryCompletedDelegate_Parms Parms;
	Parms.Handle=Handle;
	Parms.Result=Result;
	Parms.NumResultsReturned=NumResultsReturned;
	Parms.TotalMatchingResults=TotalMatchingResults;
	Parms.bCachedData=bCachedData ? true : false;
	OnSteamUGCQueryCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnStopPlaytimeTrackingResultDelegate_Parms
		{
			ESteamResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnStopPlaytimeTrackingResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnStopPlaytimeTrackingResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnStopPlaytimeTrackingResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStopPlaytimeTrackingResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingResultDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnStopPlaytimeTrackingResultDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnStopPlaytimeTrackingResultDelegate_Parms Parms;
	Parms.Result=Result;
	OnStopPlaytimeTrackingResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms
		{
			ESteamResult Result;
			bool bUserNeedsToAcceptWorkshopLegalAgreement;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserNeedsToAcceptWorkshopLegalAgreement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms*)Obj)->bUserNeedsToAcceptWorkshopLegalAgreement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement = { "bUserNeedsToAcceptWorkshopLegalAgreement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::NewProp_bUserNeedsToAcceptWorkshopLegalAgreement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSubmitItemUpdateResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubmitItemUpdateResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateResultDelegate, ESteamResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms
	{
		ESteamResult Result;
		bool bUserNeedsToAcceptWorkshopLegalAgreement;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSubmitItemUpdateResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.bUserNeedsToAcceptWorkshopLegalAgreement=bUserNeedsToAcceptWorkshopLegalAgreement ? true : false;
	OnSubmitItemUpdateResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms
		{
			FPublishedFileId PublishedFileID;
			ESteamResult Result;
			bool bWasAddRequest;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bWasAddRequest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAddRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms*)Obj)->bWasAddRequest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_bWasAddRequest = { "bWasAddRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::NewProp_bWasAddRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnUserFavoriteItemsListChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserFavoriteItemsListChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserFavoriteItemsListChangedDelegate, FPublishedFileId PublishedFileID, ESteamResult Result, bool bWasAddRequest)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms
	{
		FPublishedFileId PublishedFileID;
		ESteamResult Result;
		bool bWasAddRequest;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnUserFavoriteItemsListChangedDelegate_Parms Parms;
	Parms.PublishedFileID=PublishedFileID;
	Parms.Result=Result;
	Parms.bWasAddRequest=bWasAddRequest ? true : false;
	OnUserFavoriteItemsListChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamUGC::execUpdateItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateItemPreviewVideo(Z_Param_handle,Z_Param_index,Z_Param_VideoID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execUpdateItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateItemPreviewFile(Z_Param_handle,Z_Param_index,Z_Param_PreviewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execUnsubscribeItem)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->UnsubscribeItem(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSuspendDownloads)
	{
		P_GET_UBOOL(Z_Param_bSuspend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendDownloads(Z_Param_bSuspend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSubscribeItem)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->SubscribeItem(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSubmitItemUpdate)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChangeNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->SubmitItemUpdate(Z_Param_handle,Z_Param_ChangeNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execStartItemUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppId);
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCUpdateHandle*)Z_Param__Result=P_THIS->StartItemUpdate(Z_Param_ConsumerAppId,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetUserItemVote)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_GET_UBOOL(Z_Param_bVoteUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->SetUserItemVote(Z_Param_PublishedFileID,Z_Param_bVoteUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetSearchText)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSearchText(Z_Param_handle,Z_Param_SearchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnTotalOnly)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnTotalOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnTotalOnly(Z_Param_handle,Z_Param_bReturnTotalOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnPlaytimeStats)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnPlaytimeStats(Z_Param_handle,Z_Param_Days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnOnlyIDs)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnOnlyIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnOnlyIDs(Z_Param_handle,Z_Param_bReturnOnlyIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnMetadata(Z_Param_handle,Z_Param_bReturnMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnLongDescription)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnLongDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnLongDescription(Z_Param_handle,Z_Param_bReturnLongDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnKeyValueTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnKeyValueTags(Z_Param_handle,Z_Param_bReturnKeyValueTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnChildren(Z_Param_handle,Z_Param_bReturnChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetReturnAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnAdditionalPreviews);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReturnAdditionalPreviews(Z_Param_handle,Z_Param_bReturnAdditionalPreviews);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetRankedByTrendDays)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRankedByTrendDays(Z_Param_handle,Z_Param_Days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetMatchAnyTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bMatchAnyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMatchAnyTag(Z_Param_handle,Z_Param_bMatchAnyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetLanguage)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLanguage(Z_Param_handle,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemVisibility)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_ENUM(ESteamRemoteStoragePublishedFileVisibility,Z_Param_Visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemVisibility(Z_Param_handle,ESteamRemoteStoragePublishedFileVisibility(Z_Param_Visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemUpdateLanguage)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemUpdateLanguage(Z_Param_handle,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemTitle)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemTitle(Z_Param_handle,Z_Param_Title);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_UpdateHandle);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemTags(Z_Param_UpdateHandle,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemPreview(Z_Param_handle,Z_Param_PreviewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemMetadata)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemMetadata(Z_Param_handle,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemDescription)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemDescription(Z_Param_handle,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetItemContent)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetItemContent(Z_Param_handle,Z_Param_ContentFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetCloudFileNameFilter)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchCloudFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCloudFileNameFilter(Z_Param_handle,Z_Param_MatchCloudFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSetAllowCachedResponse)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllowCachedResponse(Z_Param_handle,Z_Param_MaxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execSendQueryUGCRequest)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->SendQueryUGCRequest(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execRemoveItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemPreview(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execRemoveItemKeyValueTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemKeyValueTags(Z_Param_handle,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execRemoveItemFromFavorites)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RemoveItemFromFavorites(Z_Param_AppId,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execRemoveDependency)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_ParentPublishedFileID);
		P_GET_STRUCT(FPublishedFileId,Z_Param_ChildPublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RemoveDependency(Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execRemoveAppDependency)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RemoveAppDependency(Z_Param_PublishedFileID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execReleaseQueryUGCRequest)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseQueryUGCRequest(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetUserItemVote)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->GetUserItemVote(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetSubscribedItems)
	{
		P_GET_TARRAY_REF(FPublishedFileId,Z_Param_Out_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSubscribedItems(Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCStatistic)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_ENUM(ESteamItemStatistic,Z_Param_StatType);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_StatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCStatistic(Z_Param_handle,Z_Param_index,ESteamItemStatistic(Z_Param_StatType),Z_Param_Out_StatValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCResult)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FSteamUGCDetails,Z_Param_Out_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCResult(Z_Param_handle,Z_Param_index,Z_Param_Out_Details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCPreviewURL)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URL);
		P_GET_PROPERTY(FIntProperty,Z_Param_URLSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCPreviewURL(Z_Param_handle,Z_Param_index,Z_Param_Out_URL,Z_Param_URLSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCNumKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQueryUGCNumKeyValueTags(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCNumAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQueryUGCNumAdditionalPreviews(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Metadata);
		P_GET_PROPERTY(FIntProperty,Z_Param_Metadatasize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCMetadata(Z_Param_handle,Z_Param_index,Z_Param_Out_Metadata,Z_Param_Metadatasize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_keyValueTagIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeySize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_ValueSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCKeyValueTag(Z_Param_handle,Z_Param_index,Z_Param_keyValueTagIndex,Z_Param_Out_Key,Z_Param_KeySize,Z_Param_Out_Value,Z_Param_ValueSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_TARRAY_REF(FPublishedFileId,Z_Param_Out_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCChildren(Z_Param_handle,Z_Param_index,Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetQueryUGCAdditionalPreview)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_previewIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URLOrVideoID);
		P_GET_PROPERTY(FIntProperty,Z_Param_URLSize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginalFileName);
		P_GET_PROPERTY(FIntProperty,Z_Param_OriginalFileNameSize);
		P_GET_ENUM_REF(ESteamItemPreviewType,Z_Param_Out_PreviewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryUGCAdditionalPreview(Z_Param_handle,Z_Param_index,Z_Param_previewIndex,Z_Param_Out_URLOrVideoID,Z_Param_URLSize,Z_Param_Out_OriginalFileName,Z_Param_OriginalFileNameSize,(ESteamItemPreviewType&)(Z_Param_Out_PreviewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetNumSubscribedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSubscribedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetItemUpdateProgress)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesProcessed);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamItemUpdateStatus*)Z_Param__Result=P_THIS->GetItemUpdateProgress(Z_Param_handle,Z_Param_Out_BytesProcessed,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetItemState)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemState(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetItemInstallInfo)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SizeOnDisk);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FolderName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FolderSize);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemInstallInfo(Z_Param_PublishedFileID,Z_Param_Out_SizeOnDisk,Z_Param_Out_FolderName,Z_Param_FolderSize,Z_Param_Out_TimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetItemDownloadInfo)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemDownloadInfo(Z_Param_PublishedFileID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetAppDependencies)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->GetAppDependencies(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execDownloadItem)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_GET_UBOOL(Z_Param_bHighPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DownloadItem(Z_Param_PublishedFileID,Z_Param_bHighPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execDeleteItem)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->DeleteItem(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execCreateQueryUserUGCRequest)
	{
		P_GET_STRUCT(FAccountID,Z_Param_AccountID);
		P_GET_ENUM(ESteamUserUGCList,Z_Param_ListType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_MatchingUGCType);
		P_GET_ENUM(ESteamUserUGCListSortOrder,Z_Param_SortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=P_THIS->CreateQueryUserUGCRequest(Z_Param_AccountID,ESteamUserUGCList(Z_Param_ListType),ESteamUGCMatchingUGCType(Z_Param_MatchingUGCType),ESteamUserUGCListSortOrder(Z_Param_SortOrder),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execCreateQueryUGCDetailsRequest)
	{
		P_GET_TARRAY(FPublishedFileId,Z_Param_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=P_THIS->CreateQueryUGCDetailsRequest(Z_Param_PublishedFileIDs,Z_Param_NumPublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execCreateQueryAllUGCRequest)
	{
		P_GET_ENUM(ESteamUGCQuery,Z_Param_QueryType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_MatchingUGCTypeFileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=P_THIS->CreateQueryAllUGCRequest(ESteamUGCQuery(Z_Param_QueryType),ESteamUGCMatchingUGCType(Z_Param_MatchingUGCTypeFileType),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execCreateItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppId);
		P_GET_ENUM(ESteamWorkshopFileType,Z_Param_FileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->CreateItem(Z_Param_ConsumerAppId,ESteamWorkshopFileType(Z_Param_FileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execBInitWorkshopForGameServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WorkshopDepotID);
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BInitWorkshopForGameServer(Z_Param_WorkshopDepotID,Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddRequiredTagGroup)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRequiredTagGroup(Z_Param_handle,Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddRequiredTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRequiredTag(Z_Param_handle,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddRequiredKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRequiredKeyValueTag(Z_Param_handle,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddItemToFavorites)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->AddItemToFavorites(Z_Param_AppId,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemPreviewVideo(Z_Param_handle,Z_Param_VideoID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_GET_ENUM(ESteamItemPreviewType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemPreviewFile(Z_Param_handle,Z_Param_PreviewFile,ESteamItemPreviewType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddItemKeyValueTag)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemKeyValueTag(Z_Param_handle,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddExcludedTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddExcludedTag(Z_Param_handle,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddDependency)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_ParentPublishedFileID);
		P_GET_STRUCT(FPublishedFileId,Z_Param_ChildPublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->AddDependency(Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execAddAppDependency)
	{
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->AddAppDependency(Z_Param_PublishedFileID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUGC::execGetSteamUGC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamUGC**)Z_Param__Result=UISteamUGC::GetSteamUGC();
		P_NATIVE_END;
	}
	void UISteamUGC::StaticRegisterNativesUISteamUGC()
	{
		UClass* Class = UISteamUGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAppDependency", &UISteamUGC::execAddAppDependency },
			{ "AddDependency", &UISteamUGC::execAddDependency },
			{ "AddExcludedTag", &UISteamUGC::execAddExcludedTag },
			{ "AddItemKeyValueTag", &UISteamUGC::execAddItemKeyValueTag },
			{ "AddItemPreviewFile", &UISteamUGC::execAddItemPreviewFile },
			{ "AddItemPreviewVideo", &UISteamUGC::execAddItemPreviewVideo },
			{ "AddItemToFavorites", &UISteamUGC::execAddItemToFavorites },
			{ "AddRequiredKeyValueTag", &UISteamUGC::execAddRequiredKeyValueTag },
			{ "AddRequiredTag", &UISteamUGC::execAddRequiredTag },
			{ "AddRequiredTagGroup", &UISteamUGC::execAddRequiredTagGroup },
			{ "BInitWorkshopForGameServer", &UISteamUGC::execBInitWorkshopForGameServer },
			{ "CreateItem", &UISteamUGC::execCreateItem },
			{ "CreateQueryAllUGCRequest", &UISteamUGC::execCreateQueryAllUGCRequest },
			{ "CreateQueryUGCDetailsRequest", &UISteamUGC::execCreateQueryUGCDetailsRequest },
			{ "CreateQueryUserUGCRequest", &UISteamUGC::execCreateQueryUserUGCRequest },
			{ "DeleteItem", &UISteamUGC::execDeleteItem },
			{ "DownloadItem", &UISteamUGC::execDownloadItem },
			{ "GetAppDependencies", &UISteamUGC::execGetAppDependencies },
			{ "GetItemDownloadInfo", &UISteamUGC::execGetItemDownloadInfo },
			{ "GetItemInstallInfo", &UISteamUGC::execGetItemInstallInfo },
			{ "GetItemState", &UISteamUGC::execGetItemState },
			{ "GetItemUpdateProgress", &UISteamUGC::execGetItemUpdateProgress },
			{ "GetNumSubscribedItems", &UISteamUGC::execGetNumSubscribedItems },
			{ "GetQueryUGCAdditionalPreview", &UISteamUGC::execGetQueryUGCAdditionalPreview },
			{ "GetQueryUGCChildren", &UISteamUGC::execGetQueryUGCChildren },
			{ "GetQueryUGCKeyValueTag", &UISteamUGC::execGetQueryUGCKeyValueTag },
			{ "GetQueryUGCMetadata", &UISteamUGC::execGetQueryUGCMetadata },
			{ "GetQueryUGCNumAdditionalPreviews", &UISteamUGC::execGetQueryUGCNumAdditionalPreviews },
			{ "GetQueryUGCNumKeyValueTags", &UISteamUGC::execGetQueryUGCNumKeyValueTags },
			{ "GetQueryUGCPreviewURL", &UISteamUGC::execGetQueryUGCPreviewURL },
			{ "GetQueryUGCResult", &UISteamUGC::execGetQueryUGCResult },
			{ "GetQueryUGCStatistic", &UISteamUGC::execGetQueryUGCStatistic },
			{ "GetSteamUGC", &UISteamUGC::execGetSteamUGC },
			{ "GetSubscribedItems", &UISteamUGC::execGetSubscribedItems },
			{ "GetUserItemVote", &UISteamUGC::execGetUserItemVote },
			{ "ReleaseQueryUGCRequest", &UISteamUGC::execReleaseQueryUGCRequest },
			{ "RemoveAppDependency", &UISteamUGC::execRemoveAppDependency },
			{ "RemoveDependency", &UISteamUGC::execRemoveDependency },
			{ "RemoveItemFromFavorites", &UISteamUGC::execRemoveItemFromFavorites },
			{ "RemoveItemKeyValueTags", &UISteamUGC::execRemoveItemKeyValueTags },
			{ "RemoveItemPreview", &UISteamUGC::execRemoveItemPreview },
			{ "SendQueryUGCRequest", &UISteamUGC::execSendQueryUGCRequest },
			{ "SetAllowCachedResponse", &UISteamUGC::execSetAllowCachedResponse },
			{ "SetCloudFileNameFilter", &UISteamUGC::execSetCloudFileNameFilter },
			{ "SetItemContent", &UISteamUGC::execSetItemContent },
			{ "SetItemDescription", &UISteamUGC::execSetItemDescription },
			{ "SetItemMetadata", &UISteamUGC::execSetItemMetadata },
			{ "SetItemPreview", &UISteamUGC::execSetItemPreview },
			{ "SetItemTags", &UISteamUGC::execSetItemTags },
			{ "SetItemTitle", &UISteamUGC::execSetItemTitle },
			{ "SetItemUpdateLanguage", &UISteamUGC::execSetItemUpdateLanguage },
			{ "SetItemVisibility", &UISteamUGC::execSetItemVisibility },
			{ "SetLanguage", &UISteamUGC::execSetLanguage },
			{ "SetMatchAnyTag", &UISteamUGC::execSetMatchAnyTag },
			{ "SetRankedByTrendDays", &UISteamUGC::execSetRankedByTrendDays },
			{ "SetReturnAdditionalPreviews", &UISteamUGC::execSetReturnAdditionalPreviews },
			{ "SetReturnChildren", &UISteamUGC::execSetReturnChildren },
			{ "SetReturnKeyValueTags", &UISteamUGC::execSetReturnKeyValueTags },
			{ "SetReturnLongDescription", &UISteamUGC::execSetReturnLongDescription },
			{ "SetReturnMetadata", &UISteamUGC::execSetReturnMetadata },
			{ "SetReturnOnlyIDs", &UISteamUGC::execSetReturnOnlyIDs },
			{ "SetReturnPlaytimeStats", &UISteamUGC::execSetReturnPlaytimeStats },
			{ "SetReturnTotalOnly", &UISteamUGC::execSetReturnTotalOnly },
			{ "SetSearchText", &UISteamUGC::execSetSearchText },
			{ "SetUserItemVote", &UISteamUGC::execSetUserItemVote },
			{ "StartItemUpdate", &UISteamUGC::execStartItemUpdate },
			{ "SubmitItemUpdate", &UISteamUGC::execSubmitItemUpdate },
			{ "SubscribeItem", &UISteamUGC::execSubscribeItem },
			{ "SuspendDownloads", &UISteamUGC::execSuspendDownloads },
			{ "UnsubscribeItem", &UISteamUGC::execUnsubscribeItem },
			{ "UpdateItemPreviewFile", &UISteamUGC::execUpdateItemPreviewFile },
			{ "UpdateItemPreviewVideo", &UISteamUGC::execUpdateItemPreviewVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics
	{
		struct ISteamUGC_eventAddAppDependency_Parms
		{
			FPublishedFileId PublishedFileID;
			int32 AppID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddAppDependency_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddAppDependency_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies. This is a soft-dependency that is displayed on the web. It is up to the application to determine whether the item can actually be used or not.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The item.\n\x09 * @param int32 AppID - The required app/dlc.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a AddAppDependencyResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies. This is a soft-dependency that is displayed on the web. It is up to the application to determine whether the item can actually be used or not.\n\n@param FPublishedFileId PublishedFileID - The item.\n@param int32 AppID - The required app/dlc.\n@return FSteamAPICall - SteamAPICall_t to be used with a AddAppDependencyResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddAppDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::ISteamUGC_eventAddAppDependency_Parms), Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddDependency_Statics
	{
		struct ISteamUGC_eventAddDependency_Parms
		{
			FPublishedFileId ParentPublishedFileID;
			FPublishedFileId ChildPublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddDependency_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::NewProp_ParentPublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::NewProp_ChildPublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a workshop item as a dependency to the specified item. If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. Otherwise,\n\x09 * the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\x09 *\n\x09 * @param FPublishedFileId ParentPublishedFileID - The workshop item to add a dependency to.\n\x09 * @param FPublishedFileId ChildPublishedFileID - The dependency to add to the parent.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a AddUGCDependencyResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a workshop item as a dependency to the specified item. If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. Otherwise,\nthe dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\n@param FPublishedFileId ParentPublishedFileID - The workshop item to add a dependency to.\n@param FPublishedFileId ChildPublishedFileID - The dependency to add to the parent.\n@return FSteamAPICall - SteamAPICall_t to be used with a AddUGCDependencyResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::ISteamUGC_eventAddDependency_Parms), Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics
	{
		struct ISteamUGC_eventAddExcludedTag_Parms
		{
			FUGCQueryHandle handle;
			FString TagName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddExcludedTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddExcludedTag_Parms, TagName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_TagName_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddExcludedTag_Parms), &Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const FString & TagName - The tag that must NOT be attached to the UGC to receive it.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is from CreateQueryUGCDetailsRequest, or pTagName was NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const FString & TagName - The tag that must NOT be attached to the UGC to receive it.\n@return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is from CreateQueryUGCDetailsRequest, or pTagName was NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddExcludedTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::ISteamUGC_eventAddExcludedTag_Parms), Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddExcludedTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddExcludedTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics
	{
		struct ISteamUGC_eventAddItemKeyValueTag_Parms
		{
			FUGCUpdateHandle handle;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemKeyValueTag_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemKeyValueTag_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemKeyValueTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a key-value tag pair to an item. Keys can map to multiple different values (1-to-many relationship).\n\x09 * Key names are restricted to alpha-numeric characters and the '_' character.\n\x09 * Both keys and values cannot exceed 255 characters in length.\n\x09 * Key-value tags are searchable by exact match only.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & Key - The key to set on the item.\n\x09 * @param const FString & Value - A value to map to the key.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid, if pchKey or pchValue invalid because they are NULL or have exceeded the maximum length, or if you are trying to add more than 100 key-value tags in a single update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a key-value tag pair to an item. Keys can map to multiple different values (1-to-many relationship).\nKey names are restricted to alpha-numeric characters and the '_' character.\nBoth keys and values cannot exceed 255 characters in length.\nKey-value tags are searchable by exact match only.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & Key - The key to set on the item.\n@param const FString & Value - A value to map to the key.\n@return bool - true upon success. false if the UGC update handle is invalid, if pchKey or pchValue invalid because they are NULL or have exceeded the maximum length, or if you are trying to add more than 100 key-value tags in a single update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddItemKeyValueTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::ISteamUGC_eventAddItemKeyValueTag_Parms), Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics
	{
		struct ISteamUGC_eventAddItemPreviewFile_Parms
		{
			FUGCUpdateHandle handle;
			FString PreviewFile;
			ESteamItemPreviewType type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemPreviewFile_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemPreviewFile_Parms, type), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) }; // 3203240105
	void Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds an additional preview file for the item.\n\x09 * Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09 * NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & PreviewFile - Absolute path to the local image.\n\x09 * @param ESteamItemPreviewType type - The type of this preview.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds an additional preview file for the item.\nThen the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & PreviewFile - Absolute path to the local image.\n@param ESteamItemPreviewType type - The type of this preview.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddItemPreviewFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::ISteamUGC_eventAddItemPreviewFile_Parms), Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics
	{
		struct ISteamUGC_eventAddItemPreviewVideo_Parms
		{
			FUGCUpdateHandle handle;
			FString VideoID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemPreviewVideo_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_VideoID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds an additional video preview from YouTube for the item.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & VideoID - The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds an additional video preview from YouTube for the item.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & VideoID - The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddItemPreviewVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::ISteamUGC_eventAddItemPreviewVideo_Parms), Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics
	{
		struct ISteamUGC_eventAddItemToFavorites_Parms
		{
			int32 AppId;
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemToFavorites_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemToFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddItemToFavorites_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a workshop item to the users favorites list.\n\x09 *\n\x09 * @param int32 AppId - The app ID that this item belongs to.\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to add to the users favorites list.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a UserFavoriteItemsListChanged_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a workshop item to the users favorites list.\n\n@param int32 AppId - The app ID that this item belongs to.\n@param FPublishedFileId PublishedFileID - The workshop item to add to the users favorites list.\n@return FSteamAPICall - SteamAPICall_t to be used with a UserFavoriteItemsListChanged_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddItemToFavorites", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::ISteamUGC_eventAddItemToFavorites_Parms), Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddItemToFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddItemToFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics
	{
		struct ISteamUGC_eventAddRequiredKeyValueTag_Parms
		{
			FUGCQueryHandle handle;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredKeyValueTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredKeyValueTag_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredKeyValueTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a required key-value tag to a pending UGC Query. This will only return workshop items that have a key = pKey and a value = pValue.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const FString & Key - The key-value key that must be attached to the UGC to receive it.\n\x09 * @param const FString & Value - The key-value value associated with pKey that must be attached to the UGC to receive it.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid or if pKey or pValue are NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a required key-value tag to a pending UGC Query. This will only return workshop items that have a key = pKey and a value = pValue.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const FString & Key - The key-value key that must be attached to the UGC to receive it.\n@param const FString & Value - The key-value value associated with pKey that must be attached to the UGC to receive it.\n@return bool - true upon success. false if the UGC query handle is invalid or if pKey or pValue are NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddRequiredKeyValueTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::ISteamUGC_eventAddRequiredKeyValueTag_Parms), Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics
	{
		struct ISteamUGC_eventAddRequiredTag_Parms
		{
			FUGCQueryHandle handle;
			FString TagName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredTag_Parms, TagName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_TagName_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddRequiredTag_Parms), &Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const FString & TagName - The tag that must be attached to the UGC to receive it.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is from CreateQueryUGCDetailsRequest, or pTagName was NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const FString & TagName - The tag that must be attached to the UGC to receive it.\n@return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is from CreateQueryUGCDetailsRequest, or pTagName was NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddRequiredTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::ISteamUGC_eventAddRequiredTag_Parms), Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddRequiredTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddRequiredTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics
	{
		struct ISteamUGC_eventAddRequiredTagGroup_Parms
		{
			FUGCQueryHandle handle;
			TArray<FString> Tags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredTagGroup_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventAddRequiredTagGroup_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventAddRequiredTagGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventAddRequiredTagGroup_Parms), &Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Adds the requirement that the returned items from the pending UGC Query have at least one of the tags in the given set (logical \"or\"). For each tag group that is added, at least one tag from each group is required to be on the matching items.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const TArray<FString> & Tags - A set of tags where at least one of the tags must attached to the UGC.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is from CreateQueryUGCDetailsRequest, or pTagName was NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Adds the requirement that the returned items from the pending UGC Query have at least one of the tags in the given set (logical \"or\"). For each tag group that is added, at least one tag from each group is required to be on the matching items.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const TArray<FString> & Tags - A set of tags where at least one of the tags must attached to the UGC.\n@return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is from CreateQueryUGCDetailsRequest, or pTagName was NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "AddRequiredTagGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::ISteamUGC_eventAddRequiredTagGroup_Parms), Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics
	{
		struct ISteamUGC_eventBInitWorkshopForGameServer_Parms
		{
			int32 WorkshopDepotID;
			FString FolderName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopDepotID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID = { "WorkshopDepotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventBInitWorkshopForGameServer_Parms, WorkshopDepotID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventBInitWorkshopForGameServer_Parms, FolderName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_FolderName_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_FolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Lets game servers set a specific workshop folder before issuing any UGC commands.\n\x09 * This is helpful if you want to support multiple game servers running out of the same install folder.\n\x09 *\n\x09 * @param int32 WorkshopDepotID - The depot ID of the game server.\n\x09 * @param const FString & FolderName - The absolute path to store the workshop content.\n\x09 * @return bool - true upon success; otherwise, false if the calling user is not a game server or if the workshop is currently updating it's content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Lets game servers set a specific workshop folder before issuing any UGC commands.\nThis is helpful if you want to support multiple game servers running out of the same install folder.\n\n@param int32 WorkshopDepotID - The depot ID of the game server.\n@param const FString & FolderName - The absolute path to store the workshop content.\n@return bool - true upon success; otherwise, false if the calling user is not a game server or if the workshop is currently updating it's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "BInitWorkshopForGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::ISteamUGC_eventBInitWorkshopForGameServer_Parms), Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_CreateItem_Statics
	{
		struct ISteamUGC_eventCreateItem_Parms
		{
			int32 ConsumerAppId;
			ESteamWorkshopFileType FileType;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_ConsumerAppId = { "ConsumerAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateItem_Parms, ConsumerAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateItem_Parms, FileType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamWorkshopFileType, METADATA_PARAMS(nullptr, 0) }; // 3865486689
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_ConsumerAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Creates a new workshop item with no content attached yet.\n\x09 *\n\x09 * @param int32 ConsumerAppId - The App ID that will be using this item.\n\x09 * @param ESteamWorkshopFileType FileType - The type of UGC to create.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a CreateItemResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Creates a new workshop item with no content attached yet.\n\n@param int32 ConsumerAppId - The App ID that will be using this item.\n@param ESteamWorkshopFileType FileType - The type of UGC to create.\n@return FSteamAPICall - SteamAPICall_t to be used with a CreateItemResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "CreateItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::ISteamUGC_eventCreateItem_Parms), Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_CreateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_CreateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics
	{
		struct ISteamUGC_eventCreateQueryAllUGCRequest_Parms
		{
			ESteamUGCQuery QueryType;
			ESteamUGCMatchingUGCType MatchingUGCTypeFileType;
			int32 CreatorAppID;
			int32 ConsumerAppID;
			int32 Page;
			FUGCQueryHandle ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchingUGCTypeFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchingUGCTypeFileType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryAllUGCRequest_Parms, QueryType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUGCQuery, METADATA_PARAMS(nullptr, 0) }; // 3603006414
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_MatchingUGCTypeFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_MatchingUGCTypeFileType = { "MatchingUGCTypeFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryAllUGCRequest_Parms, MatchingUGCTypeFileType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) }; // 2819332602
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryAllUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryAllUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryAllUGCRequest_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_MatchingUGCTypeFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_MatchingUGCTypeFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\x09 * This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09 * NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09 * NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09 * To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\x09 *\n\x09 * @param ESteamUGCQuery QueryType - Used to specify the sorting and filtering for this call.\n\x09 * @param EUGCMatchingUGCType MatchingUGCTypeFileType - Used to specify the type of UGC queried for.\n\x09 * @param int32 CreatorAppID - \x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09 * @param int32 ConsumerAppID - This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09 * @param int32 Page - The page number of the results to receive. This should start at 1 on the first call.\n\x09 * @return FUGCQueryHandle - Returns a new UGCQueryHandle_t upon success, and k_UGCQueryHandleInvalid in the following situations:\n\x09 * Either nCreatorAppID or nConsumerAppID is not set to the currently running app.\n\x09 * unPage was less than 1.\n\x09 * An internal error occurred.\n\x09 * This handle can be used to further customize the query before sending it out with SendQueryUGCRequest.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Query for all matching UGC. You can use this to list all of the available UGC for your app.\nThis will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\n@param ESteamUGCQuery QueryType - Used to specify the sorting and filtering for this call.\n@param EUGCMatchingUGCType MatchingUGCTypeFileType - Used to specify the type of UGC queried for.\n@param int32 CreatorAppID -  This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param int32 ConsumerAppID - This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param int32 Page - The page number of the results to receive. This should start at 1 on the first call.\n@return FUGCQueryHandle - Returns a new UGCQueryHandle_t upon success, and k_UGCQueryHandleInvalid in the following situations:\nEither nCreatorAppID or nConsumerAppID is not set to the currently running app.\nunPage was less than 1.\nAn internal error occurred.\nThis handle can be used to further customize the query before sending it out with SendQueryUGCRequest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "CreateQueryAllUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::ISteamUGC_eventCreateQueryAllUGCRequest_Parms), Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics
	{
		struct ISteamUGC_eventCreateQueryUGCDetailsRequest_Parms
		{
			TArray<FPublishedFileId> PublishedFileIDs;
			int32 NumPublishedFileIDs;
			FUGCQueryHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPublishedFileIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUGCDetailsRequest_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_NumPublishedFileIDs = { "NumPublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUGCDetailsRequest_Parms, NumPublishedFileIDs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_NumPublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Query for the details of specific workshop items.\n\x09 * This will return up to 50 results as declared by kNumUGCResultsPerPage.\n\x09 * NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09 * NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09 * To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09 *\n\x09 * @param TArray<FPublishedFileId> & PublishedFileIDs - The list of workshop items to get the details for.\n\x09 * @param int32 NumPublishedFileIDs - The number of items in pvecPublishedFileID.\n\x09 * @return FUGCQueryHandle - Returns a new UGCQueryHandle_t upon success, and k_UGCQueryHandleInvalid in the following situations:\n\x09 * unNumPublishedFileIDs is less than 1.\n\x09 * An internal error occurred.\n\x09 * This handle can be used to further customize the query before sending it out with SendQueryUGCRequest.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Query for the details of specific workshop items.\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param TArray<FPublishedFileId> & PublishedFileIDs - The list of workshop items to get the details for.\n@param int32 NumPublishedFileIDs - The number of items in pvecPublishedFileID.\n@return FUGCQueryHandle - Returns a new UGCQueryHandle_t upon success, and k_UGCQueryHandleInvalid in the following situations:\nunNumPublishedFileIDs is less than 1.\nAn internal error occurred.\nThis handle can be used to further customize the query before sending it out with SendQueryUGCRequest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "CreateQueryUGCDetailsRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::ISteamUGC_eventCreateQueryUGCDetailsRequest_Parms), Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics
	{
		struct ISteamUGC_eventCreateQueryUserUGCRequest_Parms
		{
			FAccountID AccountID;
			ESteamUserUGCList ListType;
			ESteamUGCMatchingUGCType MatchingUGCType;
			ESteamUserUGCListSortOrder SortOrder;
			int32 CreatorAppID;
			int32 ConsumerAppID;
			int32 Page;
			FUGCQueryHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccountID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ListType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ListType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchingUGCType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchingUGCType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_AccountID = { "AccountID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, AccountID), Z_Construct_UScriptStruct_FAccountID, METADATA_PARAMS(nullptr, 0) }; // 2096624723
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, ListType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserUGCList, METADATA_PARAMS(nullptr, 0) }; // 2095080905
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType = { "MatchingUGCType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, MatchingUGCType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) }; // 2819332602
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, SortOrder), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserUGCListSortOrder, METADATA_PARAMS(nullptr, 0) }; // 21233254
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_AccountID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\x09 * This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09 * NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09 * NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09 * To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09 *\n\x09 * @param FAccountID AccountID - The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n\x09 * @param ESteamUserUGCList ListType - Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed.\n\x09 *  (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n\x09 * @param ESteamUGCMatchingUGCType MatchingUGCType - Used to specify the type of UGC queried for.\n\x09 * @param ESteamUserUGCListSortOrder SortOrder - Used to specify the order that the list will be sorted in.\n\x09 * @param int32 CreatorAppID - This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09 * @param int32 ConsumerAppID - This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09 * @param int32 Page - The page number of the results to receive. This should start at 1 on the first call.\n\x09 * @return FUGCQueryHandle - Returns a new UGCQueryHandle_t upon success, and k_UGCQueryHandleInvalid in the following situations:\n\x09 * Either nCreatorAppID or nConsumerAppID is not set to the currently running app.\n\x09 * unPage was less than 1.\n\x09 * The given eListType is not supported for users other than the one requesting the details.\n\x09 * An internal error occurred.\n\x09 * This handle can be used to further customize the query before sending it out with SendQueryUGCRequest.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\nThis will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param FAccountID AccountID - The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n@param ESteamUserUGCList ListType - Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed.\n (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n@param ESteamUGCMatchingUGCType MatchingUGCType - Used to specify the type of UGC queried for.\n@param ESteamUserUGCListSortOrder SortOrder - Used to specify the order that the list will be sorted in.\n@param int32 CreatorAppID - This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param int32 ConsumerAppID - This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param int32 Page - The page number of the results to receive. This should start at 1 on the first call.\n@return FUGCQueryHandle - Returns a new UGCQueryHandle_t upon success, and k_UGCQueryHandleInvalid in the following situations:\nEither nCreatorAppID or nConsumerAppID is not set to the currently running app.\nunPage was less than 1.\nThe given eListType is not supported for users other than the one requesting the details.\nAn internal error occurred.\nThis handle can be used to further customize the query before sending it out with SendQueryUGCRequest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "CreateQueryUserUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::ISteamUGC_eventCreateQueryUserUGCRequest_Parms), Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics
	{
		struct ISteamUGC_eventDeleteItem_Parms
		{
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventDeleteItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventDeleteItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Deletes the item without prompting the user.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The item to delete.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a DeleteItemResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Deletes the item without prompting the user.\n\n@param FPublishedFileId PublishedFileID - The item to delete.\n@return FSteamAPICall - SteamAPICall_t to be used with a DeleteItemResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "DeleteItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::ISteamUGC_eventDeleteItem_Parms), Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_DeleteItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_DeleteItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics
	{
		struct ISteamUGC_eventDownloadItem_Parms
		{
			FPublishedFileId PublishedFileID;
			bool bHighPriority;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bHighPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventDownloadItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	void Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
	{
		((ISteamUGC_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_bHighPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Download or update a workshop item.\n\x09 * If the return value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\n\x09 * If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\n\x09 * If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update. Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.\n\x09 * The DownloadItemResult_t callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the handler will be called for all item downloads regardless of the running application.\n\x09 * Triggers a DownloadItemResult_t callback.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to download.\n\x09 * @param bool bHighPriority - Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.\n\x09 * @return bool - true if the download was successfully started; otherwise, false if nPublishedFileID is invalid or the user is not logged on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Download or update a workshop item.\nIf the return value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\nIf the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\nIf the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update. Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.\nThe DownloadItemResult_t callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the handler will be called for all item downloads regardless of the running application.\nTriggers a DownloadItemResult_t callback.\n\n@param FPublishedFileId PublishedFileID - The workshop item to download.\n@param bool bHighPriority - Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.\n@return bool - true if the download was successfully started; otherwise, false if nPublishedFileID is invalid or the user is not logged on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "DownloadItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::ISteamUGC_eventDownloadItem_Parms), Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_DownloadItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_DownloadItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics
	{
		struct ISteamUGC_eventGetAppDependencies_Parms
		{
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetAppDependencies_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetAppDependencies_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Get the app dependencies associated with the given PublishedFileId_t. These are \"soft\" dependencies that are shown on the web. It is up to the application to determine whether an item can be used or not.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to get app dependencies for.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a GetAppDependenciesResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Get the app dependencies associated with the given PublishedFileId_t. These are \"soft\" dependencies that are shown on the web. It is up to the application to determine whether an item can be used or not.\n\n@param FPublishedFileId PublishedFileID - The workshop item to get app dependencies for.\n@return FSteamAPICall - SteamAPICall_t to be used with a GetAppDependenciesResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetAppDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::ISteamUGC_eventGetAppDependencies_Parms), Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetAppDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetAppDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics
	{
		struct ISteamUGC_eventGetItemDownloadInfo_Parms
		{
			FPublishedFileId PublishedFileID;
			int64 BytesDownloaded;
			int64 BytesTotal;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesDownloaded;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesTotal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemDownloadInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemDownloadInfo_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemDownloadInfo_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to get the download info for.\n\x09 * @param int64 & BytesDownloaded - Returns the current bytes downloaded.\n\x09 * @param int64 & BytesTotal - Returns the total bytes. This is only valid after the download has started.\n\x09 * @return bool - true if the download information was available; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\n@param FPublishedFileId PublishedFileID - The workshop item to get the download info for.\n@param int64 & BytesDownloaded - Returns the current bytes downloaded.\n@param int64 & BytesTotal - Returns the total bytes. This is only valid after the download has started.\n@return bool - true if the download information was available; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetItemDownloadInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::ISteamUGC_eventGetItemDownloadInfo_Parms), Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics
	{
		struct ISteamUGC_eventGetItemInstallInfo_Parms
		{
			FPublishedFileId PublishedFileID;
			int64 SizeOnDisk;
			FString FolderName;
			int32 FolderSize;
			int32 TimeStamp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SizeOnDisk;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FolderSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeStamp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemInstallInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk = { "SizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemInstallInfo_Parms, SizeOnDisk), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemInstallInfo_Parms, FolderName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_FolderSize = { "FolderSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemInstallInfo_Parms, FolderSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemInstallInfo_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_FolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_FolderSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\x09 * Calling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\n\x09 * If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to get the install info for.\n\x09 * @param int64 & SizeOnDisk - Returns the size of the workshop item in bytes.\n\x09 * @param FString & FolderName - Returns the absolute path to the folder containing the content by copying it.\n\x09 * @param int32 FolderSize - The size of pchFolder in bytes.\n\x09 * @param int32 & TimeStamp - Returns the time when the workshop item was last updated.\n\x09 * @return bool - true if the workshop item is already installed. false in the following cases:\n\x09 * cchFolderSize is 0.\n\x09 * The workshop item has no content.\n\x09 * The workshop item is not installed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\nCalling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\nIf k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\n@param FPublishedFileId PublishedFileID - The workshop item to get the install info for.\n@param int64 & SizeOnDisk - Returns the size of the workshop item in bytes.\n@param FString & FolderName - Returns the absolute path to the folder containing the content by copying it.\n@param int32 FolderSize - The size of pchFolder in bytes.\n@param int32 & TimeStamp - Returns the time when the workshop item was last updated.\n@return bool - true if the workshop item is already installed. false in the following cases:\ncchFolderSize is 0.\nThe workshop item has no content.\nThe workshop item is not installed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetItemInstallInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::ISteamUGC_eventGetItemInstallInfo_Parms), Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetItemState_Statics
	{
		struct ISteamUGC_eventGetItemState_Parms
		{
			FPublishedFileId PublishedFileID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemState_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Gets the current state of a workshop item on this client.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to get the state for.\n\x09 * @return int32 - Returns the item state. Should be used with the EItemState flags to determine the state of the workshop item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Gets the current state of a workshop item on this client.\n\n@param FPublishedFileId PublishedFileID - The workshop item to get the state for.\n@return int32 - Returns the item state. Should be used with the EItemState flags to determine the state of the workshop item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetItemState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::ISteamUGC_eventGetItemState_Parms), Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics
	{
		struct ISteamUGC_eventGetItemUpdateProgress_Parms
		{
			FUGCUpdateHandle handle;
			int64 BytesProcessed;
			int64 BytesTotal;
			ESteamItemUpdateStatus ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesProcessed;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesTotal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemUpdateProgress_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemUpdateProgress_Parms, BytesProcessed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemUpdateProgress_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemUpdateStatus, METADATA_PARAMS(nullptr, 0) }; // 3992604383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Gets the progress of an item update.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The update handle to get the progress for.\n\x09 * @param int64 & BytesProcessed - Returns the current number of bytes uploaded.\n\x09 * @param int64 & BytesTotal - Returns the total number of bytes that will be uploaded.\n\x09 * @return ESteamItemUpdateStatus - The current status.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Gets the progress of an item update.\n\n@param FUGCUpdateHandle handle - The update handle to get the progress for.\n@param int64 & BytesProcessed - Returns the current number of bytes uploaded.\n@param int64 & BytesTotal - Returns the total number of bytes that will be uploaded.\n@return ESteamItemUpdateStatus - The current status." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetItemUpdateProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::ISteamUGC_eventGetItemUpdateProgress_Parms), Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics
	{
		struct ISteamUGC_eventGetNumSubscribedItems_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Gets the total number of items the current user is subscribed to for the game or application.\n\x09 *\n\x09 * @return int32 - Returns 0 if called from a game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Gets the total number of items the current user is subscribed to for the game or application.\n\n@return int32 - Returns 0 if called from a game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetNumSubscribedItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::ISteamUGC_eventGetNumSubscribedItems_Parms), Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics
	{
		struct ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 previewIndex;
			FString URLOrVideoID;
			int32 URLSize;
			FString OriginalFileName;
			int32 OriginalFileNameSize;
			ESteamItemPreviewType PreviewType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_previewIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URLOrVideoID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_URLSize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalFileName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalFileNameSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewIndex = { "previewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, previewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID = { "URLOrVideoID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, URLOrVideoID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLSize = { "URLSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, URLSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName = { "OriginalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileNameSize = { "OriginalFileNameSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileNameSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType = { "PreviewType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) }; // 3203240105
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileNameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - \x09The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param int32 previewIndex - The index of the additional preview to get the details of.\n\x09 * @param FString & URLOrVideoID - Returns a URL or Video ID by copying it into this string.\n\x09 * @param int32 URLSize - The size of pchURLOrVideoID in bytes.\n\x09 * @param FString & OriginalFileName - Returns the original file name. May be set to NULL to not receive this.\n\x09 * @param int32 OriginalFileNameSize - The size of pchOriginalFileName in bytes.\n\x09 * @param ESteamItemPreviewType & PreviewType - The type of preview that was returned.\n\x09 * @return bool - true upon success, indicates that pchURLOrVideoID and pPreviewType have been filled out. Otherwise, false if the UGC query handle is invalid, the index is out of bounds, or previewIndex is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\n@param FUGCQueryHandle handle -      The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param int32 previewIndex - The index of the additional preview to get the details of.\n@param FString & URLOrVideoID - Returns a URL or Video ID by copying it into this string.\n@param int32 URLSize - The size of pchURLOrVideoID in bytes.\n@param FString & OriginalFileName - Returns the original file name. May be set to NULL to not receive this.\n@param int32 OriginalFileNameSize - The size of pchOriginalFileName in bytes.\n@param ESteamItemPreviewType & PreviewType - The type of preview that was returned.\n@return bool - true upon success, indicates that pchURLOrVideoID and pPreviewType have been filled out. Otherwise, false if the UGC query handle is invalid, the index is out of bounds, or previewIndex is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCAdditionalPreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::ISteamUGC_eventGetQueryUGCAdditionalPreview_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics
	{
		struct ISteamUGC_eventGetQueryUGCChildren_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			TArray<FPublishedFileId> PublishedFileIDs;
			int32 MaxEntries;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCChildren_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCChildren_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCChildren_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCChildren_Parms, MaxEntries), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. These items can either be a part of a collection or some other dependency (see AddDependency).\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param TArray<FPublishedFileId> & PublishedFileIDs - Returns the UGC children by setting this array.\n\x09 * @param int32 MaxEntries - The length of pvecPublishedFileID.\n\x09 * @return bool - true upon success, indicates that pvecPublishedFileID has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. These items can either be a part of a collection or some other dependency (see AddDependency).\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param TArray<FPublishedFileId> & PublishedFileIDs - Returns the UGC children by setting this array.\n@param int32 MaxEntries - The length of pvecPublishedFileID.\n@return bool - true upon success, indicates that pvecPublishedFileID has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::ISteamUGC_eventGetQueryUGCChildren_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics
	{
		struct ISteamUGC_eventGetQueryUGCKeyValueTag_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 keyValueTagIndex;
			FString Key;
			int32 KeySize;
			FString Value;
			int32 ValueSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_keyValueTagIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeySize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_keyValueTagIndex = { "keyValueTagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, keyValueTagIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeySize = { "KeySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, KeySize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ValueSize = { "ValueSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms, ValueSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_keyValueTagIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ValueSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the details of a key-value tag associated with an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param int32 keyValueTagIndex - The index of the tag to get the details of.\n\x09 * @param FString & Key - \x09Returns the key by copying it into this string.\n\x09 * @param int32 KeySize - The size of pchKey in bytes.\n\x09 * @param FString & Value - Returns the value by copying it into this string.\n\x09 * @param int32 ValueSize - The size of pchValue in bytes.\n\x09 * @return bool - true upon success, indicates that pchKey and pchValue have been filled out. Otherwise, false if the UGC query handle is invalid, the index is out of bounds, or keyValueTagIndex is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the details of a key-value tag associated with an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param int32 keyValueTagIndex - The index of the tag to get the details of.\n@param FString & Key -       Returns the key by copying it into this string.\n@param int32 KeySize - The size of pchKey in bytes.\n@param FString & Value - Returns the value by copying it into this string.\n@param int32 ValueSize - The size of pchValue in bytes.\n@return bool - true upon success, indicates that pchKey and pchValue have been filled out. Otherwise, false if the UGC query handle is invalid, the index is out of bounds, or keyValueTagIndex is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCKeyValueTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::ISteamUGC_eventGetQueryUGCKeyValueTag_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics
	{
		struct ISteamUGC_eventGetQueryUGCMetadata_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			FString Metadata;
			int32 Metadatasize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Metadatasize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCMetadata_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCMetadata_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCMetadata_Parms, Metadata), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_Metadatasize = { "Metadatasize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCMetadata_Parms, Metadatasize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_Metadatasize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param FString & Metadata - Returns the url by copying it into this string.\n\x09 * @param int32 Metadatasize - The size of pchMetadata in bytes.\n\x09 * @return bool - true upon success, indicates that pchMetadata has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param FString & Metadata - Returns the url by copying it into this string.\n@param int32 Metadatasize - The size of pchMetadata in bytes.\n@return bool - true upon success, indicates that pchMetadata has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::ISteamUGC_eventGetQueryUGCMetadata_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics
	{
		struct ISteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @return int32 - The number of additional previews associated with the specified workshop item. Returns 0 if the UGC query handle is invalid or the index is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@return int32 - The number of additional previews associated with the specified workshop item. Returns 0 if the UGC query handle is invalid or the index is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCNumAdditionalPreviews", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::ISteamUGC_eventGetQueryUGCNumAdditionalPreviews_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics
	{
		struct ISteamUGC_eventGetQueryUGCNumKeyValueTags_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCNumKeyValueTags_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCNumKeyValueTags_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the number of key-value tags of an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @return int32 - The number of key-value tags associated with the specified workshop item. Returns 0 if the UGC query handle is invalid or the index is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the number of key-value tags of an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@return int32 - The number of key-value tags associated with the specified workshop item. Returns 0 if the UGC query handle is invalid or the index is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCNumKeyValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::ISteamUGC_eventGetQueryUGCNumKeyValueTags_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics
	{
		struct ISteamUGC_eventGetQueryUGCPreviewURL_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			FString URL;
			int32 URLSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FIntPropertyParams NewProp_URLSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCPreviewURL_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCPreviewURL_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCPreviewURL_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_URLSize = { "URLSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCPreviewURL_Parms, URLSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_URLSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 * You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param FString & URL - Returns the url by copying it into this string.\n\x09 * @param int32 URLSize - The size of pchURL in bytes.\n\x09 * @return bool - true upon success, indicates that pchURL has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param FString & URL - Returns the url by copying it into this string.\n@param int32 URLSize - The size of pchURL in bytes.\n@return bool - true upon success, indicates that pchURL has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCPreviewURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::ISteamUGC_eventGetQueryUGCPreviewURL_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics
	{
		struct ISteamUGC_eventGetQueryUGCResult_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			FSteamUGCDetails Details;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCResult_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCResult_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCResult_Parms, Details), Z_Construct_UScriptStruct_FSteamUGCDetails, METADATA_PARAMS(nullptr, 0) }; // 612446499
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param FSteamUGCDetails & Details - Returns the the UGC details.\n\x09 * @return bool - true upon success, indicates that pDetails has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve the details of an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param FSteamUGCDetails & Details - Returns the the UGC details.\n@return bool - true upon success, indicates that pDetails has been filled out. Otherwise, false if the UGC query handle is invalid or the index is out of bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::ISteamUGC_eventGetQueryUGCResult_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics
	{
		struct ISteamUGC_eventGetQueryUGCStatistic_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			ESteamItemStatistic StatType;
			int64 StatValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_StatValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCStatistic_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCStatistic_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCStatistic_Parms, StatType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamItemStatistic, METADATA_PARAMS(nullptr, 0) }; // 2690174746
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetQueryUGCStatistic_Parms, StatValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\x09 * You should call this in a loop to get the details of all the workshop items returned.\n\x09 * NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to get the results from.\n\x09 * @param int32 index - The index of the item to get the details of.\n\x09 * @param ESteamItemStatistic StatType - The statistic to retrieve.\n\x09 * @param int64 & StatValue - Returns the value associated with the specified statistic.\n\x09 * @return bool - true upon success, indicates that pStatValue has been filled out. Otherwise, false if the UGC query handle is invalid, the index is out of bounds, or eStatType was invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param FUGCQueryHandle handle - The UGC query handle to get the results from.\n@param int32 index - The index of the item to get the details of.\n@param ESteamItemStatistic StatType - The statistic to retrieve.\n@param int64 & StatValue - Returns the value associated with the specified statistic.\n@return bool - true upon success, indicates that pStatValue has been filled out. Otherwise, false if the UGC query handle is invalid, the index is out of bounds, or eStatType was invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetQueryUGCStatistic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::ISteamUGC_eventGetQueryUGCStatistic_Parms), Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics
	{
		struct ISteamUGC_eventGetSteamUGC_Parms
		{
			UISteamUGC* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetSteamUGC_Parms, ReturnValue), Z_Construct_UClass_UISteamUGC_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "GetSteamUGC" },
		{ "DisplayName", "Get Steam UGC" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetSteamUGC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::ISteamUGC_eventGetSteamUGC_Parms), Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetSteamUGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetSteamUGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics
	{
		struct ISteamUGC_eventGetSubscribedItems_Parms
		{
			TArray<FPublishedFileId> PublishedFileIDs;
			int32 MaxEntries;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetSubscribedItems_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetSubscribedItems_Parms, MaxEntries), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_MaxEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Gets a list of all of the items the current user is subscribed to for the current game.\n\x09 * You create an array with the size provided by GetNumSubscribedItems before calling this.\n\x09 *\n\x09 * @param TArray<FPublishedFileId> & PublishedFileIDs - The array where the item ids will be copied into.\n\x09 * @param int32 MaxEntries - The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.\n\x09 * @return int32 - The number of subscribed workshop items that were populated into pvecPublishedFileID. Returns 0 if called from a game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Gets a list of all of the items the current user is subscribed to for the current game.\nYou create an array with the size provided by GetNumSubscribedItems before calling this.\n\n@param TArray<FPublishedFileId> & PublishedFileIDs - The array where the item ids will be copied into.\n@param int32 MaxEntries - The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.\n@return int32 - The number of subscribed workshop items that were populated into pvecPublishedFileID. Returns 0 if called from a game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetSubscribedItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::ISteamUGC_eventGetSubscribedItems_Parms), Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics
	{
		struct ISteamUGC_eventGetUserItemVote_Parms
		{
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventGetUserItemVote_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Gets the users vote status on a workshop item.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item ID to get the users vote.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a GetUserItemVoteResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Gets the users vote status on a workshop item.\n\n@param FPublishedFileId PublishedFileID - The workshop item ID to get the users vote.\n@return FSteamAPICall - SteamAPICall_t to be used with a GetUserItemVoteResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "GetUserItemVote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::ISteamUGC_eventGetUserItemVote_Parms), Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_GetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_GetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics
	{
		struct ISteamUGC_eventReleaseQueryUGCRequest_Parms
		{
			FUGCQueryHandle handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventReleaseQueryUGCRequest_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Releases a UGC query handle when you are done with it to free up memory.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to release.\n\x09 * @return bool - Always returns true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Releases a UGC query handle when you are done with it to free up memory.\n\n@param FUGCQueryHandle handle - The UGC query handle to release.\n@return bool - Always returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "ReleaseQueryUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::ISteamUGC_eventReleaseQueryUGCRequest_Parms), Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics
	{
		struct ISteamUGC_eventRemoveAppDependency_Parms
		{
			FPublishedFileId PublishedFileID;
			int32 AppID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveAppDependency_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveAppDependency_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The item.\n\x09 * @param int32 AppID - The app/dlc.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a RemoveAppDependencyResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\n@param FPublishedFileId PublishedFileID - The item.\n@param int32 AppID - The app/dlc.\n@return FSteamAPICall - SteamAPICall_t to be used with a RemoveAppDependencyResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "RemoveAppDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::ISteamUGC_eventRemoveAppDependency_Parms), Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_RemoveAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_RemoveAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics
	{
		struct ISteamUGC_eventRemoveDependency_Parms
		{
			FPublishedFileId ParentPublishedFileID;
			FPublishedFileId ChildPublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveDependency_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Removes a workshop item as a dependency from the specified item.\n\x09 *\n\x09 * @param FPublishedFileId ParentPublishedFileID - The workshop item to remove a dependency from.\n\x09 * @param FPublishedFileId ChildPublishedFileID - The dependency to remove from the parent.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a RemoveUGCDependencyResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Removes a workshop item as a dependency from the specified item.\n\n@param FPublishedFileId ParentPublishedFileID - The workshop item to remove a dependency from.\n@param FPublishedFileId ChildPublishedFileID - The dependency to remove from the parent.\n@return FSteamAPICall - SteamAPICall_t to be used with a RemoveUGCDependencyResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "RemoveDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::ISteamUGC_eventRemoveDependency_Parms), Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_RemoveDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_RemoveDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics
	{
		struct ISteamUGC_eventRemoveItemFromFavorites_Parms
		{
			int32 AppId;
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemFromFavorites_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemFromFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemFromFavorites_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Removes a workshop item from the users favorites list.\n\x09 *\n\x09 * @param int32 AppId - The app ID that this item belongs to.\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to remove from the users favorites list.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a UserFavoriteItemsListChanged_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Removes a workshop item from the users favorites list.\n\n@param int32 AppId - The app ID that this item belongs to.\n@param FPublishedFileId PublishedFileID - The workshop item to remove from the users favorites list.\n@return FSteamAPICall - SteamAPICall_t to be used with a UserFavoriteItemsListChanged_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "RemoveItemFromFavorites", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::ISteamUGC_eventRemoveItemFromFavorites_Parms), Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics
	{
		struct ISteamUGC_eventRemoveItemKeyValueTags_Parms
		{
			FUGCUpdateHandle handle;
			FString Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemKeyValueTags_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemKeyValueTags_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Removes an existing key value tag from an item.\n\x09 * You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & Key - The key to remove from the item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid or if you are trying to remove more than 100 key-value tags in a single update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Removes an existing key value tag from an item.\nYou can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & Key - The key to remove from the item.\n@return bool - true upon success. false if the UGC update handle is invalid or if you are trying to remove more than 100 key-value tags in a single update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "RemoveItemKeyValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::ISteamUGC_eventRemoveItemKeyValueTags_Parms), Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics
	{
		struct ISteamUGC_eventRemoveItemPreview_Parms
		{
			FUGCUpdateHandle handle;
			int32 index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemPreview_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventRemoveItemPreview_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "RemoveItemPreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::ISteamUGC_eventRemoveItemPreview_Parms), Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_RemoveItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_RemoveItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics
	{
		struct ISteamUGC_eventSendQueryUGCRequest_Parms
		{
			FUGCQueryHandle handle;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSendQueryUGCRequest_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSendQueryUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Send a UGC query to Steam.\n\x09 * This must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should\n\x09 * use one or more of the following APIs to customize your query:\n\x09 * AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage,\n\x09 * SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query request handle to send.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a SteamUGCQueryCompleted_t call result. Returns k_uAPICallInvalid if the UGC query handle was invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Send a UGC query to Steam.\nThis must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should\nuse one or more of the following APIs to customize your query:\nAddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage,\nSetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\n@param FUGCQueryHandle handle - The UGC query request handle to send.\n@return FSteamAPICall - SteamAPICall_t to be used with a SteamUGCQueryCompleted_t call result. Returns k_uAPICallInvalid if the UGC query handle was invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SendQueryUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::ISteamUGC_eventSendQueryUGCRequest_Parms), Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics
	{
		struct ISteamUGC_eventSetAllowCachedResponse_Parms
		{
			FUGCQueryHandle handle;
			int32 MaxAgeSeconds;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgeSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetAllowCachedResponse_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetAllowCachedResponse_Parms, MaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param int32 MaxAgeSeconds - The maximum amount of time that an item can be returned without a cache invalidation.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param int32 MaxAgeSeconds - The maximum amount of time that an item can be returned without a cache invalidation.\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetAllowCachedResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::ISteamUGC_eventSetAllowCachedResponse_Parms), Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics
	{
		struct ISteamUGC_eventSetCloudFileNameFilter_Parms
		{
			FUGCQueryHandle handle;
			FString MatchCloudFileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchCloudFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchCloudFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetCloudFileNameFilter_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName = { "MatchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetCloudFileNameFilter_Parms, MatchCloudFileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets to only return items that have a specific filename on a pending UGC Query.\n\x09 * NOTE: This can only be used with CreateQueryUserUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const FString & MatchCloudFileName - The filename to match.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is not from CreateQueryUserUGCRequest or if pMatchCloudFileName is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets to only return items that have a specific filename on a pending UGC Query.\nNOTE: This can only be used with CreateQueryUserUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const FString & MatchCloudFileName - The filename to match.\n@return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is not from CreateQueryUserUGCRequest or if pMatchCloudFileName is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetCloudFileNameFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::ISteamUGC_eventSetCloudFileNameFilter_Parms), Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics
	{
		struct ISteamUGC_eventSetItemContent_Parms
		{
			FUGCUpdateHandle handle;
			FString ContentFolder;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentFolder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemContent_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ContentFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemContent_Parms, ContentFolder), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ContentFolder_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemContent_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets the folder that will be stored as the content for an item.\n\x09 * For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & ContentFolder - The absolute path to a local folder containing the content for the item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets the folder that will be stored as the content for an item.\nFor efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & ContentFolder - The absolute path to a local folder containing the content for the item.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::ISteamUGC_eventSetItemContent_Parms), Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics
	{
		struct ISteamUGC_eventSetItemDescription_Parms
		{
			FUGCUpdateHandle handle;
			FString Description;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemDescription_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemDescription_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_Description_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemDescription_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets a new description for an item.\n\x09 * The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\n\x09 * You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & Description - The new description of the item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets a new description for an item.\nThe description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & Description - The new description of the item.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::ISteamUGC_eventSetItemDescription_Parms), Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics
	{
		struct ISteamUGC_eventSetItemMetadata_Parms
		{
			FUGCUpdateHandle handle;
			FString MetaData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemMetadata_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemMetadata_Parms, MetaData), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_MetaData_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemMetadata_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\x09 * The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & MetaData - The new metadata for this item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid, or if pchMetadata is longer than k_cchDeveloperMetadataMax.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\nThe metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & MetaData - The new metadata for this item.\n@return bool - true upon success. false if the UGC update handle is invalid, or if pchMetadata is longer than k_cchDeveloperMetadataMax." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::ISteamUGC_eventSetItemMetadata_Parms), Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics
	{
		struct ISteamUGC_eventSetItemPreview_Parms
		{
			FUGCUpdateHandle handle;
			FString PreviewFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemPreview_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemPreview_Parms, PreviewFile), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_PreviewFile_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemPreview_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_PreviewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets the primary preview image for the item.\n\x09 * The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & PreviewFile - The absolute path to a local preview image file for the item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets the primary preview image for the item.\nThe format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & PreviewFile - The absolute path to a local preview image file for the item.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemPreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::ISteamUGC_eventSetItemPreview_Parms), Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics
	{
		struct ISteamUGC_eventSetItemTags_Parms
		{
			FUGCUpdateHandle UpdateHandle;
			TArray<FString> Tags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemTags_Parms, UpdateHandle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemTags_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets arbitrary developer specified tags on an item.\n\x09 * Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle UpdateHandle - The workshop item update handle to customize.\n\x09 * @param const TArray<FString> & Tags - The list of tags to set on this item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid, or if one of the tags is invalid either due to exceeding the maximum length or because it is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets arbitrary developer specified tags on an item.\nEach tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle UpdateHandle - The workshop item update handle to customize.\n@param const TArray<FString> & Tags - The list of tags to set on this item.\n@return bool - true upon success. false if the UGC update handle is invalid, or if one of the tags is invalid either due to exceeding the maximum length or because it is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::ISteamUGC_eventSetItemTags_Parms), Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics
	{
		struct ISteamUGC_eventSetItemTitle_Parms
		{
			FUGCUpdateHandle handle;
			FString Title;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemTitle_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemTitle_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_Title_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemTitle_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets a new title for an item.\n\x09 * The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\n\x09 * You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & Title - The new title of the item.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets a new title for an item.\nThe title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & Title - The new title of the item.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::ISteamUGC_eventSetItemTitle_Parms), Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics
	{
		struct ISteamUGC_eventSetItemUpdateLanguage_Parms
		{
			FUGCUpdateHandle handle;
			FString Language;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemUpdateLanguage_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemUpdateLanguage_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets the language of the title and description that will be set in this item update.\n\x09 * This must be in the format of the API language code.\n\x09 * If this is not set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param const FString & Language - The language of the title and description that will be set in this update.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets the language of the title and description that will be set in this item update.\nThis must be in the format of the API language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param const FString & Language - The language of the title and description that will be set in this update.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemUpdateLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::ISteamUGC_eventSetItemUpdateLanguage_Parms), Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics
	{
		struct ISteamUGC_eventSetItemVisibility_Parms
		{
			FUGCUpdateHandle handle;
			ESteamRemoteStoragePublishedFileVisibility Visibility;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemVisibility_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetItemVisibility_Parms, Visibility), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(nullptr, 0) }; // 2061391120
	void Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetItemVisibility_Parms), &Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets the visibility of an item.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param ESteamRemoteStoragePublishedFileVisibility Visibility - The visibility to set.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets the visibility of an item.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param ESteamRemoteStoragePublishedFileVisibility Visibility - The visibility to set.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetItemVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::ISteamUGC_eventSetItemVisibility_Parms), Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetItemVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetItemVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics
	{
		struct ISteamUGC_eventSetLanguage_Parms
		{
			FUGCQueryHandle handle;
			FString Language;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetLanguage_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetLanguage_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetLanguage_Parms), &Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets the language to return the title and description in for the items on a pending UGC Query.\n\x09 * This must be in the format of the API Language code.\n\x09 * If this is not set then \"english\" is assumed.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const FString & Language - The language to return.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets the language to return the title and description in for the items on a pending UGC Query.\nThis must be in the format of the API Language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const FString & Language - The language to return.\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::ISteamUGC_eventSetLanguage_Parms), Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics
	{
		struct ISteamUGC_eventSetMatchAnyTag_Parms
		{
			FUGCQueryHandle handle;
			bool bMatchAnyTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bMatchAnyTag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetMatchAnyTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\x09 * NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bMatchAnyTag - Should the item just need to have one required tag (true), or all of them? (false)\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid or if the UGC query handle is not from CreateQueryAllUGCRequest.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bMatchAnyTag - Should the item just need to have one required tag (true), or all of them? (false)\n@return bool - true upon success. false if the UGC query handle is invalid or if the UGC query handle is not from CreateQueryAllUGCRequest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetMatchAnyTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::ISteamUGC_eventSetMatchAnyTag_Parms), Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics
	{
		struct ISteamUGC_eventSetRankedByTrendDays_Parms
		{
			FUGCQueryHandle handle;
			int32 Days;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetRankedByTrendDays_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetRankedByTrendDays_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_Days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\x09 * NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param int32 Days - Sets the number of days to rank items over. Valid values are 1-365 inclusive.\n\x09 * @return bool - true upon success.\n\x09 * false if the UGC query handle is invalid, if the UGC query handle is not from CreateQueryAllUGCRequest or if the EUGCQuery of the query is not one of:\n\x09 * k_PublishedFileQueryType_RankedByTrend, k_PublishedFileQueryType_RankedByPlaytimeTrend, k_PublishedFileQueryType_RankedByAveragePlaytimeTrend, k_PublishedFileQueryType_RankedByVotesUp, or k_PublishedFileQueryType_RankedByPlaytimeSessionsTrend\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param int32 Days - Sets the number of days to rank items over. Valid values are 1-365 inclusive.\n@return bool - true upon success.\nfalse if the UGC query handle is invalid, if the UGC query handle is not from CreateQueryAllUGCRequest or if the EUGCQuery of the query is not one of:\nk_PublishedFileQueryType_RankedByTrend, k_PublishedFileQueryType_RankedByPlaytimeTrend, k_PublishedFileQueryType_RankedByAveragePlaytimeTrend, k_PublishedFileQueryType_RankedByVotesUp, or k_PublishedFileQueryType_RankedByPlaytimeSessionsTrend" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetRankedByTrendDays", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::ISteamUGC_eventSetRankedByTrendDays_Parms), Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics
	{
		struct ISteamUGC_eventSetReturnAdditionalPreviews_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnAdditionalPreviews;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnAdditionalPreviews_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnAdditionalPreviews - Return the additional previews for the items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnAdditionalPreviews - Return the additional previews for the items?\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnAdditionalPreviews", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::ISteamUGC_eventSetReturnAdditionalPreviews_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics
	{
		struct ISteamUGC_eventSetReturnChildren_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnChildren_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_bReturnChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnChildren - Return the IDs of children of the items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to return the IDs of the child items of the items on a pending UGC Query.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnChildren - Return the IDs of children of the items?\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::ISteamUGC_eventSetReturnChildren_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics
	{
		struct ISteamUGC_eventSetReturnKeyValueTags_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnKeyValueTags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnKeyValueTags_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to return any key-value tags for the items on a pending UGC Query.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnKeyValueTags - Return any key-value tags for the items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to return any key-value tags for the items on a pending UGC Query.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnKeyValueTags - Return any key-value tags for the items?\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnKeyValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::ISteamUGC_eventSetReturnKeyValueTags_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics
	{
		struct ISteamUGC_eventSetReturnLongDescription_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnLongDescription;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnLongDescription_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnLongDescription_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to return the full description for the items on a pending UGC Query.\n\x09 * If you don't set this then you only receive the summary which is the description truncated at 255 bytes.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnLongDescription - Return the long description for the items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to return the full description for the items on a pending UGC Query.\nIf you don't set this then you only receive the summary which is the description truncated at 255 bytes.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnLongDescription - Return the long description for the items?\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnLongDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::ISteamUGC_eventSetReturnLongDescription_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics
	{
		struct ISteamUGC_eventSetReturnMetadata_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnMetadata;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnMetadata_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnMetadata - Return the metadata for the items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to return the developer specified metadata for the items on a pending UGC Query.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnMetadata - Return the metadata for the items?\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::ISteamUGC_eventSetReturnMetadata_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics
	{
		struct ISteamUGC_eventSetReturnOnlyIDs_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnOnlyIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnOnlyIDs_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\x09 * This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnOnlyIDs - Return only the IDs of items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid or if the UGC query handle is from CreateQueryUGCDetailsRequest.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to only return IDs instead of all the details on a pending UGC Query.\nThis is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnOnlyIDs - Return only the IDs of items?\n@return bool - true upon success. false if the UGC query handle is invalid or if the UGC query handle is from CreateQueryUGCDetailsRequest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnOnlyIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::ISteamUGC_eventSetReturnOnlyIDs_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics
	{
		struct ISteamUGC_eventSetReturnPlaytimeStats_Parms
		{
			FUGCQueryHandle handle;
			int32 Days;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnPlaytimeStats_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnPlaytimeStats_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_Days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to return the the playtime stats on a pending UGC Query.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param int32 Days - The number of days worth of playtime stats to return.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to return the the playtime stats on a pending UGC Query.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param int32 Days - The number of days worth of playtime stats to return.\n@return bool - true upon success. false if the UGC query handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnPlaytimeStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::ISteamUGC_eventSetReturnPlaytimeStats_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics
	{
		struct ISteamUGC_eventSetReturnTotalOnly_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnTotalOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetReturnTotalOnly_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
	void Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets whether to only return the the total number of matching items on a pending UGC Query.\n\x09 * The actual items will not be returned when SteamUGCQueryCompleted_t is called.\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param bool bReturnTotalOnly - Only return the total number of items?\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid or if the UGC query handle is from CreateQueryUGCDetailsRequest\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets whether to only return the the total number of matching items on a pending UGC Query.\nThe actual items will not be returned when SteamUGCQueryCompleted_t is called.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param bool bReturnTotalOnly - Only return the total number of items?\n@return bool - true upon success. false if the UGC query handle is invalid or if the UGC query handle is from CreateQueryUGCDetailsRequest" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetReturnTotalOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::ISteamUGC_eventSetReturnTotalOnly_Parms), Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics
	{
		struct ISteamUGC_eventSetSearchText_Parms
		{
			FUGCQueryHandle handle;
			FString SearchText;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetSearchText_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 2492563831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_SearchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_SearchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_SearchText_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetSearchText_Parms), &Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_SearchText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\x09 * NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09 * NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09 *\n\x09 * @param FUGCQueryHandle handle - The UGC query handle to customize.\n\x09 * @param const FString & SearchText - The text to be searched for.\n\x09 * @return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is not from CreateQueryAllUGCRequest or if pSearchText is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Sets a string to that items need to match in either the title or the description on a pending UGC Query.\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param FUGCQueryHandle handle - The UGC query handle to customize.\n@param const FString & SearchText - The text to be searched for.\n@return bool - true upon success. false if the UGC query handle is invalid, if the UGC query handle is not from CreateQueryAllUGCRequest or if pSearchText is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::ISteamUGC_eventSetSearchText_Parms), Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics
	{
		struct ISteamUGC_eventSetUserItemVote_Parms
		{
			FPublishedFileId PublishedFileID;
			bool bVoteUp;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bVoteUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	void Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
	{
		((ISteamUGC_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSetUserItemVote_Parms), &Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSetUserItemVote_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_bVoteUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Allows the user to rate a workshop item up or down.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item ID to vote on.\n\x09 * @param bool bVoteUp - Vote up (true) or down (false)?\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a SetUserItemVoteResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Allows the user to rate a workshop item up or down.\n\n@param FPublishedFileId PublishedFileID - The workshop item ID to vote on.\n@param bool bVoteUp - Vote up (true) or down (false)?\n@return FSteamAPICall - SteamAPICall_t to be used with a SetUserItemVoteResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SetUserItemVote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::ISteamUGC_eventSetUserItemVote_Parms), Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics
	{
		struct ISteamUGC_eventStartItemUpdate_Parms
		{
			int32 ConsumerAppId;
			FPublishedFileId PublishedFileID;
			FUGCUpdateHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::NewProp_ConsumerAppId = { "ConsumerAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventStartItemUpdate_Parms, ConsumerAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventStartItemUpdate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::NewProp_ConsumerAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Starts the item update process.\n\x09 * This gets you a handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\x09 *\n\x09 * @param int32 ConsumerAppId - The App ID that will be using this item.\n\x09 * @param FPublishedFileId PublishedFileID - The item to update.\n\x09 * @return FUGCUpdateHandle - A handle that you can use with future calls to modify the item before finally sending the update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Starts the item update process.\nThis gets you a handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\n@param int32 ConsumerAppId - The App ID that will be using this item.\n@param FPublishedFileId PublishedFileID - The item to update.\n@return FUGCUpdateHandle - A handle that you can use with future calls to modify the item before finally sending the update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "StartItemUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::ISteamUGC_eventStartItemUpdate_Parms), Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_StartItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_StartItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics
	{
		struct ISteamUGC_eventSubmitItemUpdate_Parms
		{
			FUGCUpdateHandle handle;
			FString ChangeNote;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeNote_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChangeNote;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSubmitItemUpdate_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote = { "ChangeNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSubmitItemUpdate_Parms, ChangeNote), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSubmitItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Uploads the changes made to an item to the Steam Workshop.\n\x09 * You can track the progress of an item update with GetItemUpdateProgress.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The update handle to submit.\n\x09 * @param const FString & ChangeNote - A brief description of the changes made. (Optional, set to NULL for no change note)\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a SubmitItemUpdateResult_t call result. Returns k_uAPICallInvalid if handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Uploads the changes made to an item to the Steam Workshop.\nYou can track the progress of an item update with GetItemUpdateProgress.\n\n@param FUGCUpdateHandle handle - The update handle to submit.\n@param const FString & ChangeNote - A brief description of the changes made. (Optional, set to NULL for no change note)\n@return FSteamAPICall - SteamAPICall_t to be used with a SubmitItemUpdateResult_t call result. Returns k_uAPICallInvalid if handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SubmitItemUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::ISteamUGC_eventSubmitItemUpdate_Parms), Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics
	{
		struct ISteamUGC_eventSubscribeItem_Parms
		{
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventSubscribeItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to subscribe to.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a RemoteStorageSubscribePublishedFileResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\n@param FPublishedFileId PublishedFileID - The workshop item to subscribe to.\n@return FSteamAPICall - SteamAPICall_t to be used with a RemoteStorageSubscribePublishedFileResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SubscribeItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::ISteamUGC_eventSubscribeItem_Parms), Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics
	{
		struct ISteamUGC_eventSuspendDownloads_Parms
		{
			bool bSuspend;
		};
		static void NewProp_bSuspend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
	{
		((ISteamUGC_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventSuspendDownloads_Parms), &Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::NewProp_bSuspend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Suspends and resumes all workshop downloads.\n\x09 * If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\x09 *\n\x09 * @param bool bSuspend - Suspend (true) or Resume (false) workshop downloads?\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Suspends and resumes all workshop downloads.\nIf you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\n@param bool bSuspend - Suspend (true) or Resume (false) workshop downloads?\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "SuspendDownloads", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::ISteamUGC_eventSuspendDownloads_Parms), Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_SuspendDownloads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_SuspendDownloads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics
	{
		struct ISteamUGC_eventUnsubscribeItem_Parms
		{
			FPublishedFileId PublishedFileID;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUnsubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUnsubscribeItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\x09 *\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item to unsubscribe from.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a RemoteStorageUnsubscribePublishedFileResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\n@param FPublishedFileId PublishedFileID - The workshop item to unsubscribe from.\n@return FSteamAPICall - SteamAPICall_t to be used with a RemoteStorageUnsubscribePublishedFileResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "UnsubscribeItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::ISteamUGC_eventUnsubscribeItem_Parms), Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_UnsubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_UnsubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics
	{
		struct ISteamUGC_eventUpdateItemPreviewFile_Parms
		{
			FUGCUpdateHandle handle;
			int32 index;
			FString PreviewFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUpdateItemPreviewFile_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUpdateItemPreviewFile_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUpdateItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Updates an existing additional preview file for the item.\n\x09 * If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param int32 index - The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09 * @param const FString & PreviewFile - Absolute path to the local image.\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Updates an existing additional preview file for the item.\nIf the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param int32 index - The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param const FString & PreviewFile - Absolute path to the local image.\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "UpdateItemPreviewFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::ISteamUGC_eventUpdateItemPreviewFile_Parms), Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics
	{
		struct ISteamUGC_eventUpdateItemPreviewVideo_Parms
		{
			FUGCUpdateHandle handle;
			int32 index;
			FString VideoID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUpdateItemPreviewVideo_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 1265963323
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUpdateItemPreviewVideo_Parms, index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_VideoID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUGC_eventUpdateItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_VideoID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_VideoID_MetaData)) };
	void Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUGC_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUGC_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_VideoID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/**\n\x09 * Updates an additional video preview from YouTube for the item.\n\x09 * NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09 *\n\x09 * @param FUGCUpdateHandle handle - The workshop item update handle to customize.\n\x09 * @param int32 index - The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09 * @param const FString & VideoID - The YouTube video to add. (e.g. \"jHgZh4GV9G0\")\n\x09 * @return bool - true upon success. false if the UGC update handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Updates an additional video preview from YouTube for the item.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param FUGCUpdateHandle handle - The workshop item update handle to customize.\n@param int32 index - The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param const FString & VideoID - The YouTube video to add. (e.g. \"jHgZh4GV9G0\")\n@return bool - true upon success. false if the UGC update handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUGC, nullptr, "UpdateItemPreviewVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::ISteamUGC_eventUpdateItemPreviewVideo_Parms), Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamUGC);
	UClass* Z_Construct_UClass_UISteamUGC_NoRegister()
	{
		return UISteamUGC::StaticClass();
	}
	struct Z_Construct_UClass_UISteamUGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnAddAppDependencyResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnAddAppDependencyResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnAddUGCDependencyResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnAddUGCDependencyResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnCreateItemResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnCreateItemResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnDownloadItemResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnDownloadItemResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGetAppDependenciesResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGetAppDependenciesResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnDeleteItemResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnDeleteItemResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGetUserItemVoteResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGetUserItemVoteResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnItemInstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnItemInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoveAppDependencyResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoveAppDependencyResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoveUGCDependencyResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoveUGCDependencyResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSetUserItemVoteResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSetUserItemVoteResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnStartPlaytimeTrackingResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnStartPlaytimeTrackingResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamUGCQueryCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamUGCQueryCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnStopPlaytimeTrackingResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnStopPlaytimeTrackingResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSubmitItemUpdateResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSubmitItemUpdateResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnUserFavoriteItemsListChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnUserFavoriteItemsListChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamUGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamUGC_AddAppDependency, "AddAppDependency" }, // 968388681
		{ &Z_Construct_UFunction_UISteamUGC_AddDependency, "AddDependency" }, // 3475574406
		{ &Z_Construct_UFunction_UISteamUGC_AddExcludedTag, "AddExcludedTag" }, // 2699260746
		{ &Z_Construct_UFunction_UISteamUGC_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 1699792239
		{ &Z_Construct_UFunction_UISteamUGC_AddItemPreviewFile, "AddItemPreviewFile" }, // 4175006054
		{ &Z_Construct_UFunction_UISteamUGC_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 3810044404
		{ &Z_Construct_UFunction_UISteamUGC_AddItemToFavorites, "AddItemToFavorites" }, // 4234124053
		{ &Z_Construct_UFunction_UISteamUGC_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 3684763127
		{ &Z_Construct_UFunction_UISteamUGC_AddRequiredTag, "AddRequiredTag" }, // 2433816657
		{ &Z_Construct_UFunction_UISteamUGC_AddRequiredTagGroup, "AddRequiredTagGroup" }, // 1549275136
		{ &Z_Construct_UFunction_UISteamUGC_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 1509270034
		{ &Z_Construct_UFunction_UISteamUGC_CreateItem, "CreateItem" }, // 1558003030
		{ &Z_Construct_UFunction_UISteamUGC_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 3262698010
		{ &Z_Construct_UFunction_UISteamUGC_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 2847431103
		{ &Z_Construct_UFunction_UISteamUGC_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 1386733701
		{ &Z_Construct_UFunction_UISteamUGC_DeleteItem, "DeleteItem" }, // 1822886764
		{ &Z_Construct_UFunction_UISteamUGC_DownloadItem, "DownloadItem" }, // 4208114641
		{ &Z_Construct_UFunction_UISteamUGC_GetAppDependencies, "GetAppDependencies" }, // 1742567470
		{ &Z_Construct_UFunction_UISteamUGC_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 1832363898
		{ &Z_Construct_UFunction_UISteamUGC_GetItemInstallInfo, "GetItemInstallInfo" }, // 2671734430
		{ &Z_Construct_UFunction_UISteamUGC_GetItemState, "GetItemState" }, // 1456467706
		{ &Z_Construct_UFunction_UISteamUGC_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 2247289373
		{ &Z_Construct_UFunction_UISteamUGC_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 1075367618
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 3988223964
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 544591342
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 1145086574
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 1226322881
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 1867290085
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 402724897
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 3823120746
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCResult, "GetQueryUGCResult" }, // 2724030081
		{ &Z_Construct_UFunction_UISteamUGC_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 2873278759
		{ &Z_Construct_UFunction_UISteamUGC_GetSteamUGC, "GetSteamUGC" }, // 960611431
		{ &Z_Construct_UFunction_UISteamUGC_GetSubscribedItems, "GetSubscribedItems" }, // 1577980662
		{ &Z_Construct_UFunction_UISteamUGC_GetUserItemVote, "GetUserItemVote" }, // 2446339991
		{ &Z_Construct_UFunction_UISteamUGC_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 3596275896
		{ &Z_Construct_UFunction_UISteamUGC_RemoveAppDependency, "RemoveAppDependency" }, // 160289544
		{ &Z_Construct_UFunction_UISteamUGC_RemoveDependency, "RemoveDependency" }, // 2298572712
		{ &Z_Construct_UFunction_UISteamUGC_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 792269870
		{ &Z_Construct_UFunction_UISteamUGC_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 1479493021
		{ &Z_Construct_UFunction_UISteamUGC_RemoveItemPreview, "RemoveItemPreview" }, // 3099718245
		{ &Z_Construct_UFunction_UISteamUGC_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 3958548849
		{ &Z_Construct_UFunction_UISteamUGC_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 3490207910
		{ &Z_Construct_UFunction_UISteamUGC_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 3782143376
		{ &Z_Construct_UFunction_UISteamUGC_SetItemContent, "SetItemContent" }, // 2058700594
		{ &Z_Construct_UFunction_UISteamUGC_SetItemDescription, "SetItemDescription" }, // 4241805596
		{ &Z_Construct_UFunction_UISteamUGC_SetItemMetadata, "SetItemMetadata" }, // 1057215380
		{ &Z_Construct_UFunction_UISteamUGC_SetItemPreview, "SetItemPreview" }, // 3091480026
		{ &Z_Construct_UFunction_UISteamUGC_SetItemTags, "SetItemTags" }, // 517074144
		{ &Z_Construct_UFunction_UISteamUGC_SetItemTitle, "SetItemTitle" }, // 3703873305
		{ &Z_Construct_UFunction_UISteamUGC_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 393867943
		{ &Z_Construct_UFunction_UISteamUGC_SetItemVisibility, "SetItemVisibility" }, // 3382782958
		{ &Z_Construct_UFunction_UISteamUGC_SetLanguage, "SetLanguage" }, // 3427034835
		{ &Z_Construct_UFunction_UISteamUGC_SetMatchAnyTag, "SetMatchAnyTag" }, // 2939987663
		{ &Z_Construct_UFunction_UISteamUGC_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 3997408904
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 2239050607
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnChildren, "SetReturnChildren" }, // 1744527641
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 1277904766
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnLongDescription, "SetReturnLongDescription" }, // 374129272
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnMetadata, "SetReturnMetadata" }, // 1031053032
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 2967844137
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 2253735590
		{ &Z_Construct_UFunction_UISteamUGC_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 3877883606
		{ &Z_Construct_UFunction_UISteamUGC_SetSearchText, "SetSearchText" }, // 1492898284
		{ &Z_Construct_UFunction_UISteamUGC_SetUserItemVote, "SetUserItemVote" }, // 1747357650
		{ &Z_Construct_UFunction_UISteamUGC_StartItemUpdate, "StartItemUpdate" }, // 4027195237
		{ &Z_Construct_UFunction_UISteamUGC_SubmitItemUpdate, "SubmitItemUpdate" }, // 2725535956
		{ &Z_Construct_UFunction_UISteamUGC_SubscribeItem, "SubscribeItem" }, // 686698266
		{ &Z_Construct_UFunction_UISteamUGC_SuspendDownloads, "SuspendDownloads" }, // 3687882937
		{ &Z_Construct_UFunction_UISteamUGC_UnsubscribeItem, "UnsubscribeItem" }, // 2962206556
		{ &Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 214072004
		{ &Z_Construct_UFunction_UISteamUGC_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 917561246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions to create, consume, and interact with the Steam Workshop.\n" },
		{ "IncludePath", "UISteamUGC.h" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Functions to create, consume, and interact with the Steam Workshop." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddAppDependencyResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** The result of a call to AddAppDependency. */" },
		{ "DisplayName", "OnAddAppDependencyResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "The result of a call to AddAppDependency." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddAppDependencyResult = { "m_OnAddAppDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnAddAppDependencyResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddAppDependencyResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddAppDependencyResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddAppDependencyResult_MetaData)) }; // 2657430006
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddUGCDependencyResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** The result of a call to AddDependency. */" },
		{ "DisplayName", "OnAddUGCDependencyResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "The result of a call to AddDependency." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddUGCDependencyResult = { "m_OnAddUGCDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnAddUGCDependencyResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAddUGCDependencyResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddUGCDependencyResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddUGCDependencyResult_MetaData)) }; // 1179581475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnCreateItemResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when a new workshop item has been created. */" },
		{ "DisplayName", "OnCreateItemResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when a new workshop item has been created." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnCreateItemResult = { "m_OnCreateItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnCreateItemResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnCreateItemResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnCreateItemResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnCreateItemResult_MetaData)) }; // 3926073050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDownloadItemResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when a workshop item has been downloaded. NOTE: This callback goes out to all running applications, ensure that the app ID associated with the item matches what you expect. */" },
		{ "DisplayName", "OnDownloadItemResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when a workshop item has been downloaded. NOTE: This callback goes out to all running applications, ensure that the app ID associated with the item matches what you expect." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDownloadItemResult = { "m_OnDownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnDownloadItemResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDownloadItemResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDownloadItemResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDownloadItemResult_MetaData)) }; // 3440379578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetAppDependenciesResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when getting the app dependencies for an item. */" },
		{ "DisplayName", "OnGetAppDependenciesResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when getting the app dependencies for an item." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetAppDependenciesResult = { "m_OnGetAppDependenciesResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnGetAppDependenciesResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAppDependenciesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetAppDependenciesResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetAppDependenciesResult_MetaData)) }; // 2590573963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDeleteItemResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when an attempt at deleting an item completes. */" },
		{ "DisplayName", "OnDeleteItemResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when an attempt at deleting an item completes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDeleteItemResult = { "m_OnDeleteItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnDeleteItemResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDeleteItemResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDeleteItemResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDeleteItemResult_MetaData)) }; // 766136493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetUserItemVoteResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when getting the users vote status on an item. */" },
		{ "DisplayName", "OnGetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when getting the users vote status on an item." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetUserItemVoteResult = { "m_OnGetUserItemVoteResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnGetUserItemVoteResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetUserItemVoteResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetUserItemVoteResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetUserItemVoteResult_MetaData)) }; // 62294879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnItemInstalled_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when a workshop item has been installed or updated. NOTE: This callback goes out to all running applications, ensure that the app ID associated with the item matches what you expect. */" },
		{ "DisplayName", "OnItemInstalled" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when a workshop item has been installed or updated. NOTE: This callback goes out to all running applications, ensure that the app ID associated with the item matches what you expect." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnItemInstalled = { "m_OnItemInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnItemInstalled), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnItemInstalledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnItemInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnItemInstalled_MetaData)) }; // 1921822715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveAppDependencyResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Purpose: The result of a call to RemoveAppDependency. */" },
		{ "DisplayName", "OnRemoveAppDependencyResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Purpose: The result of a call to RemoveAppDependency." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveAppDependencyResult = { "m_OnRemoveAppDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnRemoveAppDependencyResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveAppDependencyResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveAppDependencyResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveAppDependencyResult_MetaData)) }; // 719911689
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveUGCDependencyResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Purpose: The result of a call to RemoveDependency. */" },
		{ "DisplayName", "OnRemoveUGCDependencyResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Purpose: The result of a call to RemoveDependency." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveUGCDependencyResult = { "m_OnRemoveUGCDependencyResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnRemoveUGCDependencyResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoveUGCDependencyResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveUGCDependencyResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveUGCDependencyResult_MetaData)) }; // 1541482299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSetUserItemVoteResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when the user has voted on an item. */" },
		{ "DisplayName", "OnSetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when the user has voted on an item." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSetUserItemVoteResult = { "m_OnSetUserItemVoteResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnSetUserItemVoteResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSetUserItemVoteResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSetUserItemVoteResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSetUserItemVoteResult_MetaData)) }; // 4146671257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStartPlaytimeTrackingResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when workshop item playtime tracking has started. */" },
		{ "DisplayName", "OnStartPlaytimeTrackingResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when workshop item playtime tracking has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStartPlaytimeTrackingResult = { "m_OnStartPlaytimeTrackingResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnStartPlaytimeTrackingResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStartPlaytimeTrackingResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStartPlaytimeTrackingResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStartPlaytimeTrackingResult_MetaData)) }; // 926740604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSteamUGCQueryCompleted_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when a UGC query request completes. */" },
		{ "DisplayName", "OnSteamUGCQueryCompleted" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when a UGC query request completes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSteamUGCQueryCompleted = { "m_OnSteamUGCQueryCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnSteamUGCQueryCompleted), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamUGCQueryCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSteamUGCQueryCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSteamUGCQueryCompleted_MetaData)) }; // 4091679873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStopPlaytimeTrackingResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when workshop item playtime tracking has stopped. */" },
		{ "DisplayName", "OnStopPlaytimeTrackingResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when workshop item playtime tracking has stopped." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStopPlaytimeTrackingResult = { "m_OnStopPlaytimeTrackingResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnStopPlaytimeTrackingResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStopPlaytimeTrackingResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStopPlaytimeTrackingResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStopPlaytimeTrackingResult_MetaData)) }; // 1684731155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSubmitItemUpdateResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when an item update has completed. */" },
		{ "DisplayName", "OnSubmitItemUpdateResult" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when an item update has completed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSubmitItemUpdateResult = { "m_OnSubmitItemUpdateResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnSubmitItemUpdateResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSubmitItemUpdateResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSubmitItemUpdateResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSubmitItemUpdateResult_MetaData)) }; // 1124803403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnUserFavoriteItemsListChanged_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUGC" },
		{ "Comment", "/** Called when the user has added or removed an item to/from their favorites. */" },
		{ "DisplayName", "OnUserFavoriteItemsListChanged" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Called when the user has added or removed an item to/from their favorites." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnUserFavoriteItemsListChanged = { "m_OnUserFavoriteItemsListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUGC, m_OnUserFavoriteItemsListChanged), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserFavoriteItemsListChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnUserFavoriteItemsListChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnUserFavoriteItemsListChanged_MetaData)) }; // 473947453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamUGC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddAppDependencyResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnAddUGCDependencyResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnCreateItemResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDownloadItemResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetAppDependenciesResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnDeleteItemResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnGetUserItemVoteResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnItemInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveAppDependencyResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnRemoveUGCDependencyResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSetUserItemVoteResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStartPlaytimeTrackingResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSteamUGCQueryCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnStopPlaytimeTrackingResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnSubmitItemUpdateResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUGC_Statics::NewProp_m_OnUserFavoriteItemsListChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUGC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUGC_Statics::ClassParams = {
		&UISteamUGC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamUGC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamUGC()
	{
		if (!Z_Registration_Info_UClass_UISteamUGC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamUGC.OuterSingleton, Z_Construct_UClass_UISteamUGC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamUGC.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamUGC>()
	{
		return UISteamUGC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamUGC);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUGC, UISteamUGC::StaticClass, TEXT("UISteamUGC"), &Z_Registration_Info_UClass_UISteamUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUGC), 1419862527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_3262463056(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
