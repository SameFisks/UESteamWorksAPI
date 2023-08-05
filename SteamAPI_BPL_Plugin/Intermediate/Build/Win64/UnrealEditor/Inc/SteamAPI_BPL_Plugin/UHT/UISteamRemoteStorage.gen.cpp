// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamRemoteStorage.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamRemoteStorage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamRemoteStorage();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamRemoteStorage_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamRemoteStoragePlatform();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileId();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUGCHandle();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms
		{
			ESteamResult Result;
			FUGCHandle FileHandle;
			int32 AppID;
			int32 SizeInBytes;
			FString FileName;
			FSteamID SteamIDOwner;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeInBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_FileHandle = { "FileHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms, FileHandle), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms, SizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_FileHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_SizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::NewProp_SteamIDOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageDownloadUGCResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageDownloadUGCResultDelegate, ESteamResult Result, FUGCHandle FileHandle, int32 AppID, int32 SizeInBytes, const FString& FileName, FSteamID SteamIDOwner)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms
	{
		ESteamResult Result;
		FUGCHandle FileHandle;
		int32 AppID;
		int32 SizeInBytes;
		FString FileName;
		FSteamID SteamIDOwner;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageDownloadUGCResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.FileHandle=FileHandle;
	Parms.AppID=AppID;
	Parms.SizeInBytes=SizeInBytes;
	Parms.FileName=FileName;
	Parms.SteamIDOwner=SteamIDOwner;
	OnRemoteStorageDownloadUGCResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms
		{
			FSteamAPICall FileReadAsyncHandle;
			ESteamResult Result;
			int32 Offset;
			int32 BytesRead;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileReadAsyncHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesRead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_FileReadAsyncHandle = { "FileReadAsyncHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms, FileReadAsyncHandle), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_BytesRead = { "BytesRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms, BytesRead), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_FileReadAsyncHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_BytesRead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageFileReadAsyncCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileReadAsyncCompleteDelegate, FSteamAPICall FileReadAsyncHandle, ESteamResult Result, int32 Offset, int32 BytesRead)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms
	{
		FSteamAPICall FileReadAsyncHandle;
		ESteamResult Result;
		int32 Offset;
		int32 BytesRead;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileReadAsyncCompleteDelegate_Parms Parms;
	Parms.FileReadAsyncHandle=FileReadAsyncHandle;
	Parms.Result=Result;
	Parms.Offset=Offset;
	Parms.BytesRead=BytesRead;
	OnRemoteStorageFileReadAsyncCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms
		{
			ESteamResult Result;
			FUGCHandle FileHandle;
			FString FileName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileHandle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_FileHandle = { "FileHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms, FileHandle), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_FileHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStorageFileShareResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageFileShareResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileShareResultDelegate, ESteamResult Result, FUGCHandle FileHandle, const FString& FileName)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms
	{
		ESteamResult Result;
		FUGCHandle FileHandle;
		FString FileName;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileShareResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.FileHandle=FileHandle;
	Parms.FileName=FileName;
	OnRemoteStorageFileShareResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileWriteAsyncCompleteDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileWriteAsyncCompleteDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileWriteAsyncCompleteDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageFileWriteAsyncCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageFileWriteAsyncCompleteDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileWriteAsyncCompleteDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageFileWriteAsyncCompleteDelegate_Parms Parms;
	Parms.Result=Result;
	OnRemoteStorageFileWriteAsyncCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileSubscribedDelegate_Parms
		{
			FPublishedFileId PublishedFileID;
			int32 AppID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileSubscribedDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileSubscribedDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileSubscribedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStoragePublishedFileSubscribedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribedDelegate, FPublishedFileId PublishedFileID, int32 AppID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileSubscribedDelegate_Parms
	{
		FPublishedFileId PublishedFileID;
		int32 AppID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileSubscribedDelegate_Parms Parms;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppID=AppID;
	OnRemoteStoragePublishedFileSubscribedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileUnsubscribedDelegate_Parms
		{
			FPublishedFileId PublishedFileID;
			int32 AppID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileUnsubscribedDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileUnsubscribedDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileUnsubscribedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStoragePublishedFileUnsubscribedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribedDelegate, FPublishedFileId PublishedFileID, int32 AppID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileUnsubscribedDelegate_Parms
	{
		FPublishedFileId PublishedFileID;
		int32 AppID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStoragePublishedFileUnsubscribedDelegate_Parms Parms;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppID=AppID;
	OnRemoteStoragePublishedFileUnsubscribedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageSubscribePublishedFileResultDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageSubscribePublishedFileResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageSubscribePublishedFileResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageSubscribePublishedFileResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageSubscribePublishedFileResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageSubscribePublishedFileResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageSubscribePublishedFileResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	OnRemoteStorageSubscribePublishedFileResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageUnsubscribePublishedFileResultDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageUnsubscribePublishedFileResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageUnsubscribePublishedFileResultDelegate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageUnsubscribePublishedFileResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageUnsubscribePublishedFileResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResultDelegate, ESteamResult Result, FPublishedFileId PublishedFileID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageUnsubscribePublishedFileResultDelegate_Parms
	{
		ESteamResult Result;
		FPublishedFileId PublishedFileID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnRemoteStorageUnsubscribePublishedFileResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	OnRemoteStorageUnsubscribePublishedFileResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamRemoteStorage::execUGCDownloadToLocation)
	{
		P_GET_STRUCT(FUGCHandle,Z_Param_ContentHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->UGCDownloadToLocation(Z_Param_ContentHandle,Z_Param_Location,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execUGCDownload)
	{
		P_GET_STRUCT(FUGCHandle,Z_Param_ContentHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->UGCDownload(Z_Param_ContentHandle,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execSetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_ENUM(ESteamRemoteStoragePlatform,Z_Param_RemoteStoragePlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSyncPlatforms(Z_Param_FileName,ESteamRemoteStoragePlatform(Z_Param_RemoteStoragePlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execSetCloudEnabledForApp)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCloudEnabledForApp(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execIsCloudEnabledForApp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCloudEnabledForApp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execIsCloudEnabledForAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCloudEnabledForAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetUGCDownloadProgress)
	{
		P_GET_STRUCT(FUGCHandle,Z_Param_ContentHandle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUGCDownloadProgress(Z_Param_ContentHandle,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamRemoteStoragePlatform*)Z_Param__Result=P_THIS->GetSyncPlatforms(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetQuota)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TotalBytes);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_AvailableBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuota(Z_Param_Out_TotalBytes,Z_Param_Out_AvailableBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetFileTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetFileTimestamp(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetFileSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileSize(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetFileNameAndSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FileIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFileNameAndSize(Z_Param_FileIndex,Z_Param_Out_FileSizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetCachedUGCHandle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CachedContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCHandle*)Z_Param__Result=P_THIS->GetCachedUGCHandle(Z_Param_CachedContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetCachedUGCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCachedUGCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileWriteStreamWriteChunk)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_WriteHandle);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileWriteStreamWriteChunk(Z_Param_WriteHandle,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileWriteStreamOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCFileWriteStreamHandle*)Z_Param__Result=P_THIS->FileWriteStreamOpen(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileWriteStreamClose)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_WriteHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileWriteStreamClose(Z_Param_WriteHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileWriteStreamCancel)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_WriteHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileWriteStreamCancel(Z_Param_WriteHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileWrite(Z_Param_FileName,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileShare)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->FileShare(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FileRead(Z_Param_FileName,Z_Param_Out_Data,Z_Param_DataToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFilePersisted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FilePersisted(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileForget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileForget(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileExists(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execFileDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FileDelete(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemoteStorage::execGetSteamRemoteStorage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamRemoteStorage**)Z_Param__Result=UISteamRemoteStorage::GetSteamRemoteStorage();
		P_NATIVE_END;
	}
	void UISteamRemoteStorage::StaticRegisterNativesUISteamRemoteStorage()
	{
		UClass* Class = UISteamRemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileDelete", &UISteamRemoteStorage::execFileDelete },
			{ "FileExists", &UISteamRemoteStorage::execFileExists },
			{ "FileForget", &UISteamRemoteStorage::execFileForget },
			{ "FilePersisted", &UISteamRemoteStorage::execFilePersisted },
			{ "FileRead", &UISteamRemoteStorage::execFileRead },
			{ "FileShare", &UISteamRemoteStorage::execFileShare },
			{ "FileWrite", &UISteamRemoteStorage::execFileWrite },
			{ "FileWriteStreamCancel", &UISteamRemoteStorage::execFileWriteStreamCancel },
			{ "FileWriteStreamClose", &UISteamRemoteStorage::execFileWriteStreamClose },
			{ "FileWriteStreamOpen", &UISteamRemoteStorage::execFileWriteStreamOpen },
			{ "FileWriteStreamWriteChunk", &UISteamRemoteStorage::execFileWriteStreamWriteChunk },
			{ "GetCachedUGCCount", &UISteamRemoteStorage::execGetCachedUGCCount },
			{ "GetCachedUGCHandle", &UISteamRemoteStorage::execGetCachedUGCHandle },
			{ "GetFileCount", &UISteamRemoteStorage::execGetFileCount },
			{ "GetFileNameAndSize", &UISteamRemoteStorage::execGetFileNameAndSize },
			{ "GetFileSize", &UISteamRemoteStorage::execGetFileSize },
			{ "GetFileTimestamp", &UISteamRemoteStorage::execGetFileTimestamp },
			{ "GetQuota", &UISteamRemoteStorage::execGetQuota },
			{ "GetSteamRemoteStorage", &UISteamRemoteStorage::execGetSteamRemoteStorage },
			{ "GetSyncPlatforms", &UISteamRemoteStorage::execGetSyncPlatforms },
			{ "GetUGCDownloadProgress", &UISteamRemoteStorage::execGetUGCDownloadProgress },
			{ "IsCloudEnabledForAccount", &UISteamRemoteStorage::execIsCloudEnabledForAccount },
			{ "IsCloudEnabledForApp", &UISteamRemoteStorage::execIsCloudEnabledForApp },
			{ "SetCloudEnabledForApp", &UISteamRemoteStorage::execSetCloudEnabledForApp },
			{ "SetSyncPlatforms", &UISteamRemoteStorage::execSetSyncPlatforms },
			{ "UGCDownload", &UISteamRemoteStorage::execUGCDownload },
			{ "UGCDownloadToLocation", &UISteamRemoteStorage::execUGCDownloadToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics
	{
		struct ISteamRemoteStorage_eventFileDelete_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileDelete_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_FileName_MetaData)) };
	void Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileDelete_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Deletes a file from the local disk, and propagates that delete to the cloud.\n\x09 * This is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\n\x09 * When a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file that will be deleted.\n\x09 * @return bool - true if the file exists and has been successfully deleted; otherwise, false if the file did not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Deletes a file from the local disk, and propagates that delete to the cloud.\nThis is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\nWhen a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\n@param const FString & FileName - The name of the file that will be deleted.\n@return bool - true if the file exists and has been successfully deleted; otherwise, false if the file did not exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileDelete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::ISteamRemoteStorage_eventFileDelete_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics
	{
		struct ISteamRemoteStorage_eventFileExists_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileExists_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_FileName_MetaData)) };
	void Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileExists_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Checks whether the specified file exists.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file.\n\x09 * @return bool - true if the file exists; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Checks whether the specified file exists.\n\n@param const FString & FileName - The name of the file.\n@return bool - true if the file exists; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::ISteamRemoteStorage_eventFileExists_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics
	{
		struct ISteamRemoteStorage_eventFileForget_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileForget_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_FileName_MetaData)) };
	void Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileForget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileForget_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\x09 * When you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\n\x09 * How you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\n\x09 * Requiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended. For instance, \"Which file would you like to delete so that you may store this new one?\" removes a\n\x09 * significant advantage of using the Cloud in the first place: its transparency.\n\x09 * Once a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file that will be forgotten.\n\x09 * @return bool - true if the file exists and has been successfully forgotten; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\nWhen you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\nHow you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\nRequiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended. For instance, \"Which file would you like to delete so that you may store this new one?\" removes a\nsignificant advantage of using the Cloud in the first place: its transparency.\nOnce a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\n@param const FString & FileName - The name of the file that will be forgotten.\n@return bool - true if the file exists and has been successfully forgotten; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileForget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::ISteamRemoteStorage_eventFileForget_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileForget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileForget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics
	{
		struct ISteamRemoteStorage_eventFilePersisted_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFilePersisted_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_FileName_MetaData)) };
	void Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFilePersisted_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Checks if a specific file is persisted in the steam cloud.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file.\n\x09 * @return bool - true if the file exists and the file is persisted in the Steam Cloud. false if FileForget was called on it and is only available locally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Checks if a specific file is persisted in the steam cloud.\n\n@param const FString & FileName - The name of the file.\n@return bool - true if the file exists and the file is persisted in the Steam Cloud. false if FileForget was called on it and is only available locally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FilePersisted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::ISteamRemoteStorage_eventFilePersisted_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics
	{
		struct ISteamRemoteStorage_eventFileRead_Parms
		{
			FString FileName;
			TArray<uint8> Data;
			int32 DataToRead;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileRead_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileRead_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileRead_Parms, DataToRead), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_DataToRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\x09 * NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. To avoid \"hitching\"\n\x09 * due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file to read from.\n\x09 * @param TArray<uint8> & Data - The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n\x09 * @param int32 DataToRead - The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp.\n\x09 * @return int32 - The number of bytes read. Returns 0 if the file doesn't exist or the read fails.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. To avoid \"hitching\"\ndue to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\n@param const FString & FileName - The name of the file to read from.\n@param TArray<uint8> & Data - The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n@param int32 DataToRead - The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp.\n@return int32 - The number of bytes read. Returns 0 if the file doesn't exist or the read fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileRead", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::ISteamRemoteStorage_eventFileRead_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics
	{
		struct ISteamRemoteStorage_eventFileShare_Parms
		{
			FString FileName;
			FSteamAPICall ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileShare_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileShare_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * SteamAPICall_t to be used with a RemoteStorageFileShareResult_t call result.\n\x09 *\n\x09 * @param const FString & FileName - The file\n\x09 * @return FSteamAPICall\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "SteamAPICall_t to be used with a RemoteStorageFileShareResult_t call result.\n\n@param const FString & FileName - The file\n@return FSteamAPICall" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileShare", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::ISteamRemoteStorage_eventFileShare_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileShare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileShare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics
	{
		struct ISteamRemoteStorage_eventFileWrite_Parms
		{
			FString FileName;
			TArray<uint8> Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWrite_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileWrite_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\x09 * NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. To avoid \"hitching\"\n\x09 * due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file to write to.\n\x09 * @param const TArray<uint8> & Data - The bytes to write to the file.\n\x09 * @return bool - true if the write was successful.\n\x09 * Otherwise, false under the following conditions:\n\x09 * \x09The file you're trying to write is larger than 100MiB as defined by k_unMaxCloudFileChunkSize.\n\x09 * cubData is less than 0.\n\x09 * pvData is NULL.\n\x09 * You tried to write to an invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n\x09 * The current user's Steam Cloud storage quota has been exceeded. They may have run out of space, or have too many files.\n\x09 * Steam could not write to the disk, the location might be read-only.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. To avoid \"hitching\"\ndue to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\n@param const FString & FileName - The name of the file to write to.\n@param const TArray<uint8> & Data - The bytes to write to the file.\n@return bool - true if the write was successful.\nOtherwise, false under the following conditions:\n     The file you're trying to write is larger than 100MiB as defined by k_unMaxCloudFileChunkSize.\ncubData is less than 0.\npvData is NULL.\nYou tried to write to an invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\nThe current user's Steam Cloud storage quota has been exceeded. They may have run out of space, or have too many files.\nSteam could not write to the disk, the location might be read-only." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileWrite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::ISteamRemoteStorage_eventFileWrite_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics
	{
		struct ISteamRemoteStorage_eventFileWriteStreamCancel_Parms
		{
			FUGCFileWriteStreamHandle WriteHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WriteHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::NewProp_WriteHandle = { "WriteHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWriteStreamCancel_Parms, WriteHandle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1706874362
	void Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::NewProp_WriteHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Cancels a file write stream that was started by FileWriteStreamOpen. This trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\x09 *\n\x09 * @param FUGCFileWriteStreamHandle WriteHandle - The file write stream to cancel.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Cancels a file write stream that was started by FileWriteStreamOpen. This trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\n@param FUGCFileWriteStreamHandle WriteHandle - The file write stream to cancel.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileWriteStreamCancel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::ISteamRemoteStorage_eventFileWriteStreamCancel_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics
	{
		struct ISteamRemoteStorage_eventFileWriteStreamClose_Parms
		{
			FUGCFileWriteStreamHandle WriteHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WriteHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::NewProp_WriteHandle = { "WriteHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWriteStreamClose_Parms, WriteHandle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1706874362
	void Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::NewProp_WriteHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Closes a file write stream that was started by FileWriteStreamOpen. This flushes the stream to the disk, overwriting the existing file if there was one.\n\x09 *\n\x09 * @param FUGCFileWriteStreamHandle WriteHandle - The file write stream to close.\n\x09 * @return bool - true if the file write stream was successfully closed, the file has been committed to the disk. false if writeHandle is not a valid file write stream.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Closes a file write stream that was started by FileWriteStreamOpen. This flushes the stream to the disk, overwriting the existing file if there was one.\n\n@param FUGCFileWriteStreamHandle WriteHandle - The file write stream to close.\n@return bool - true if the file write stream was successfully closed, the file has been committed to the disk. false if writeHandle is not a valid file write stream." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileWriteStreamClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::ISteamRemoteStorage_eventFileWriteStreamClose_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics
	{
		struct ISteamRemoteStorage_eventFileWriteStreamOpen_Parms
		{
			FString FileName;
			FUGCFileWriteStreamHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWriteStreamOpen_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1706874362
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\x09 * To write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file to write to.\n\x09 * @return FUGCFileWriteStreamHandle - Returns k_UGCFileStreamHandleInvalid under the following conditions:\n\x09 * You tried to write to an invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n\x09 * The current user's Steam Cloud storage quota has been exceeded. They may have run out of space, or have too many files.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\nTo write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\n@param const FString & FileName - The name of the file to write to.\n@return FUGCFileWriteStreamHandle - Returns k_UGCFileStreamHandleInvalid under the following conditions:\nYou tried to write to an invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\nThe current user's Steam Cloud storage quota has been exceeded. They may have run out of space, or have too many files." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileWriteStreamOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::ISteamRemoteStorage_eventFileWriteStreamOpen_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics
	{
		struct ISteamRemoteStorage_eventFileWriteStreamWriteChunk_Parms
		{
			FUGCFileWriteStreamHandle WriteHandle;
			TArray<uint8> Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WriteHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_WriteHandle = { "WriteHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWriteStreamWriteChunk_Parms, WriteHandle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1706874362
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventFileWriteStreamWriteChunk_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_WriteHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Writes a blob of data to the file write stream.\n\x09 *\n\x09 * @param FUGCFileWriteStreamHandle WriteHandle - The file write stream to write to.\n\x09 * @param const TArray<uint8> & Data - The data to write to the stream.\n\x09 * @return bool - true if the data was successfully written to the file write stream.\n\x09 * false if writeHandle is not a valid file write stream, cubData is negative or larger than k_unMaxCloudFileChunkSize, or the current user's Steam Cloud storage quota has been exceeded. They may have run out of space, or have too many files.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Writes a blob of data to the file write stream.\n\n@param FUGCFileWriteStreamHandle WriteHandle - The file write stream to write to.\n@param const TArray<uint8> & Data - The data to write to the stream.\n@return bool - true if the data was successfully written to the file write stream.\nfalse if writeHandle is not a valid file write stream, cubData is negative or larger than k_unMaxCloudFileChunkSize, or the current user's Steam Cloud storage quota has been exceeded. They may have run out of space, or have too many files." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "FileWriteStreamWriteChunk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::ISteamRemoteStorage_eventFileWriteStreamWriteChunk_Parms), Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics
	{
		struct ISteamRemoteStorage_eventGetCachedUGCCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetCachedUGCCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::ISteamRemoteStorage_eventGetCachedUGCCount_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics
	{
		struct ISteamRemoteStorage_eventGetCachedUGCHandle_Parms
		{
			int32 CachedContent;
			FUGCHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedContent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::NewProp_CachedContent = { "CachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetCachedUGCHandle_Parms, CachedContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::NewProp_CachedContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetCachedUGCHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::ISteamRemoteStorage_eventGetCachedUGCHandle_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics
	{
		struct ISteamRemoteStorage_eventGetFileCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Gets the total number of local files synchronized by Steam Cloud. Used for enumeration with GetFileNameAndSize.\n\x09 *\n\x09 * @return int32 - The number of files present for the current user, including files in subfolders.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Gets the total number of local files synchronized by Steam Cloud. Used for enumeration with GetFileNameAndSize.\n\n@return int32 - The number of files present for the current user, including files in subfolders." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetFileCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::ISteamRemoteStorage_eventGetFileCount_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics
	{
		struct ISteamRemoteStorage_eventGetFileNameAndSize_Parms
		{
			int32 FileIndex;
			int32 FileSizeInBytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::NewProp_FileIndex = { "FileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileNameAndSize_Parms, FileIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileNameAndSize_Parms, FileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::NewProp_FileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Gets the file name and size of a file from the index.\n\x09 * NOTE: You must call GetFileCount first to get the number of files.\n\x09 *\n\x09 * @param int32 FileIndex - The index of the file, this should be between 0 and GetFileCount.\n\x09 * @param int32 & FileSizeInBytes - Returns the file size in bytes.\n\x09 * @return FString - The name of the file at the specified index, if it exists. Returns an empty string (\"\") if the file doesn't exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Gets the file name and size of a file from the index.\nNOTE: You must call GetFileCount first to get the number of files.\n\n@param int32 FileIndex - The index of the file, this should be between 0 and GetFileCount.\n@param int32 & FileSizeInBytes - Returns the file size in bytes.\n@return FString - The name of the file at the specified index, if it exists. Returns an empty string (\"\") if the file doesn't exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetFileNameAndSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::ISteamRemoteStorage_eventGetFileNameAndSize_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics
	{
		struct ISteamRemoteStorage_eventGetFileSize_Parms
		{
			FString FileName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileSize_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Gets the specified files size in bytes.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file.\n\x09 * @return int32 - The size of the file in bytes. Returns0 if the file does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Gets the specified files size in bytes.\n\n@param const FString & FileName - The name of the file.\n@return int32 - The size of the file in bytes. Returns0 if the file does not exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetFileSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::ISteamRemoteStorage_eventGetFileSize_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics
	{
		struct ISteamRemoteStorage_eventGetFileTimestamp_Parms
		{
			FString FileName;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileTimestamp_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetFileTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\x09 *\n\x09 * @param const FString & FileName - The name of the file.\n\x09 * @return int64 - The last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\n@param const FString & FileName - The name of the file.\n@return int64 - The last modified timestamp in Unix epoch format (seconds since Jan 1st 1970)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetFileTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::ISteamRemoteStorage_eventGetFileTimestamp_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics
	{
		struct ISteamRemoteStorage_eventGetQuota_Parms
		{
			int64 TotalBytes;
			int64 AvailableBytes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalBytes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_AvailableBytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetQuota_Parms, TotalBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_AvailableBytes = { "AvailableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetQuota_Parms, AvailableBytes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventGetQuota_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_TotalBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_AvailableBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Gets the number of bytes available, and used on the users Steam Cloud storage.\n\x09 *\n\x09 * @param int64 & TotalBytes - Returns the total amount of bytes the user has access to.\n\x09 * @param int64 & AvailableBytes - Returns the number of bytes available.\n\x09 * @return bool - This function always returns true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Gets the number of bytes available, and used on the users Steam Cloud storage.\n\n@param int64 & TotalBytes - Returns the total amount of bytes the user has access to.\n@param int64 & AvailableBytes - Returns the number of bytes available.\n@return bool - This function always returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetQuota", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::ISteamRemoteStorage_eventGetQuota_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetQuota()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetQuota_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics
	{
		struct ISteamRemoteStorage_eventGetSteamRemoteStorage_Parms
		{
			UISteamRemoteStorage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetSteamRemoteStorage_Parms, ReturnValue), Z_Construct_UClass_UISteamRemoteStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamRemoteStorage" },
		{ "DisplayName", "Steam Remote Storage" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetSteamRemoteStorage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::ISteamRemoteStorage_eventGetSteamRemoteStorage_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics
	{
		struct ISteamRemoteStorage_eventGetSyncPlatforms_Parms
		{
			FString FileName;
			ESteamRemoteStoragePlatform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetSyncPlatforms_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) }; // 425048942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Obtains the platforms that the specified file will syncronize to.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file.\n\x09 * @return ESteamRemoteStoragePlatform - Bitfield containing the platforms that the file was set to with SetSyncPlatforms.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Obtains the platforms that the specified file will syncronize to.\n\n@param const FString & FileName - The name of the file.\n@return ESteamRemoteStoragePlatform - Bitfield containing the platforms that the file was set to with SetSyncPlatforms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetSyncPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::ISteamRemoteStorage_eventGetSyncPlatforms_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics
	{
		struct ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms
		{
			FUGCHandle ContentHandle;
			int32 BytesDownloaded;
			int32 BytesExpected;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesExpected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ContentHandle = { "ContentHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms, ContentHandle), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected = { "BytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms, BytesExpected), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ContentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "// #NOTE: No docs for this method currently\n// #TODO: GetUGCDetails\n" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "#NOTE: No docs for this method currently\n#TODO: GetUGCDetails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "GetUGCDownloadProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::ISteamRemoteStorage_eventGetUGCDownloadProgress_Parms), Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics
	{
		struct ISteamRemoteStorage_eventIsCloudEnabledForAccount_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\x09 * Ensure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive.\n\x09 *\n\x09 * @return bool - true if Steam Cloud is enabled for this account; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\nEnsure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive.\n\n@return bool - true if Steam Cloud is enabled for this account; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "IsCloudEnabledForAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::ISteamRemoteStorage_eventIsCloudEnabledForAccount_Parms), Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics
	{
		struct ISteamRemoteStorage_eventIsCloudEnabledForApp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\x09 * Ensure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\n\x09 * It's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp.\n\x09 *\n\x09 * @return bool - true if Steam Cloud is enabled for this app; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\nEnsure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\nIt's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp.\n\n@return bool - true if Steam Cloud is enabled for this app; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "IsCloudEnabledForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::ISteamRemoteStorage_eventIsCloudEnabledForApp_Parms), Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics
	{
		struct ISteamRemoteStorage_eventSetCloudEnabledForApp_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Toggles whether the Steam Cloud is enabled for your application. This setting can be queried with IsCloudEnabledForApp.\n\x09 * NOTE: This must only ever be called as the direct result of the user explicitly requesting that it's enabled or not. This is typically accomplished with a checkbox within your in-game options.\n\x09 *\n\x09 * @param bool bEnabled - Enable (true) or disable (false) the Steam Cloud for this application?\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Toggles whether the Steam Cloud is enabled for your application. This setting can be queried with IsCloudEnabledForApp.\nNOTE: This must only ever be called as the direct result of the user explicitly requesting that it's enabled or not. This is typically accomplished with a checkbox within your in-game options.\n\n@param bool bEnabled - Enable (true) or disable (false) the Steam Cloud for this application?\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "SetCloudEnabledForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::ISteamRemoteStorage_eventSetCloudEnabledForApp_Parms), Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics
	{
		struct ISteamRemoteStorage_eventSetSyncPlatforms_Parms
		{
			FString FileName;
			ESteamRemoteStoragePlatform RemoteStoragePlatform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteStoragePlatform_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoteStoragePlatform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventSetSyncPlatforms_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform = { "RemoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventSetSyncPlatforms_Parms, RemoteStoragePlatform), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) }; // 425048942
	void Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemoteStorage_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemoteStorage_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * Allows you to specify which operating systems a file will be synchronized to.\n\x09 * Use this if you have a multiplatform game but have data which is incompatible between platforms.\n\x09 * Files default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\x09 *\n\x09 * @param const FString & FileName - The name of the file.\n\x09 * @param ESteamRemoteStoragePlatform RemoteStoragePlatform - \x09The platforms that the file will be syncronized to.\n\x09 * @return bool - true if the file exists, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Allows you to specify which operating systems a file will be synchronized to.\nUse this if you have a multiplatform game but have data which is incompatible between platforms.\nFiles default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\n@param const FString & FileName - The name of the file.\n@param ESteamRemoteStoragePlatform RemoteStoragePlatform -   The platforms that the file will be syncronized to.\n@return bool - true if the file exists, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "SetSyncPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::ISteamRemoteStorage_eventSetSyncPlatforms_Parms), Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics
	{
		struct ISteamRemoteStorage_eventUGCDownload_Parms
		{
			FUGCHandle ContentHandle;
			int32 Priority;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::NewProp_ContentHandle = { "ContentHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownload_Parms, ContentHandle), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownload_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownload_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::NewProp_ContentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * SteamAPICall_t to be used with a RemoteStorageDownloadUGCResult_t call result.\n\x09 *\n\x09 * @param FUGCHandle ContentHandle\n\x09 * @param int32 Priority\n\x09 * @return FSteamAPICall\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "SteamAPICall_t to be used with a RemoteStorageDownloadUGCResult_t call result.\n\n@param FUGCHandle ContentHandle\n@param int32 Priority\n@return FSteamAPICall" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "UGCDownload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::ISteamRemoteStorage_eventUGCDownload_Parms), Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics
	{
		struct ISteamRemoteStorage_eventUGCDownloadToLocation_Parms
		{
			FUGCHandle ContentHandle;
			FString Location;
			int32 Priority;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_ContentHandle = { "ContentHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownloadToLocation_Parms, ContentHandle), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownloadToLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownloadToLocation_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemoteStorage_eventUGCDownloadToLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_ContentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/**\n\x09 * SteamAPICall_t to be used with a RemoteStorageDownloadUGCResult_t call result.\n\x09 *\n\x09 * @param FUGCHandle ContentHandle\n\x09 * @param const FString & Location\n\x09 * @param int32 Priority\n\x09 * @return FSteamAPICall\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "SteamAPICall_t to be used with a RemoteStorageDownloadUGCResult_t call result.\n\n@param FUGCHandle ContentHandle\n@param const FString & Location\n@param int32 Priority\n@return FSteamAPICall" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemoteStorage, nullptr, "UGCDownloadToLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::ISteamRemoteStorage_eventUGCDownloadToLocation_Parms), Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamRemoteStorage);
	UClass* Z_Construct_UClass_UISteamRemoteStorage_NoRegister()
	{
		return UISteamRemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_UISteamRemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStorageDownloadUGCResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStorageDownloadUGCResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStorageFileReadAsyncComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStorageFileReadAsyncComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStorageFileShareResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStorageFileShareResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStorageFileWriteAsyncComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStorageFileWriteAsyncComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStoragePublishedFileSubscribed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStoragePublishedFileSubscribed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStoragePublishedFileUnsubscribed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStoragePublishedFileUnsubscribed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStorageSubscribePublishedFileResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStorageSubscribePublishedFileResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamRemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamRemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileDelete, "FileDelete" }, // 2370234925
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileExists, "FileExists" }, // 1335287452
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileForget, "FileForget" }, // 1133482223
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FilePersisted, "FilePersisted" }, // 2450289934
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileRead, "FileRead" }, // 2253554729
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileShare, "FileShare" }, // 312047267
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileWrite, "FileWrite" }, // 1509746518
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 3522234813
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamClose, "FileWriteStreamClose" }, // 2786613365
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 2214140767
		{ &Z_Construct_UFunction_UISteamRemoteStorage_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 3042166548
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCCount, "GetCachedUGCCount" }, // 2453997731
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 2792633885
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetFileCount, "GetFileCount" }, // 2864457654
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetFileNameAndSize, "GetFileNameAndSize" }, // 664551747
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetFileSize, "GetFileSize" }, // 2897911187
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetFileTimestamp, "GetFileTimestamp" }, // 2205257187
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetQuota, "GetQuota" }, // 1546273438
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetSteamRemoteStorage, "GetSteamRemoteStorage" }, // 2763652974
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetSyncPlatforms, "GetSyncPlatforms" }, // 2702696215
		{ &Z_Construct_UFunction_UISteamRemoteStorage_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 1096464184
		{ &Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 2147682522
		{ &Z_Construct_UFunction_UISteamRemoteStorage_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 536715434
		{ &Z_Construct_UFunction_UISteamRemoteStorage_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 622468753
		{ &Z_Construct_UFunction_UISteamRemoteStorage_SetSyncPlatforms, "SetSyncPlatforms" }, // 420315829
		{ &Z_Construct_UFunction_UISteamRemoteStorage_UGCDownload, "UGCDownload" }, // 3713545254
		{ &Z_Construct_UFunction_UISteamRemoteStorage_UGCDownloadToLocation, "UGCDownloadToLocation" }, // 3614227417
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamRemoteStorage.h" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageDownloadUGCResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/** Delegates */" },
		{ "DisplayName", "OnRemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageDownloadUGCResult = { "m_OnRemoteStorageDownloadUGCResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStorageDownloadUGCResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageDownloadUGCResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageDownloadUGCResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageDownloadUGCResult_MetaData)) }; // 2260610367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileReadAsyncComplete_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/** Response when reading a file asyncrounously with FileReadAsync. */" },
		{ "DisplayName", "OnRemoteStorageFileReadAsyncComplete" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Response when reading a file asyncrounously with FileReadAsync." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileReadAsyncComplete = { "m_OnRemoteStorageFileReadAsyncComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStorageFileReadAsyncComplete), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileReadAsyncCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileReadAsyncComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileReadAsyncComplete_MetaData)) }; // 1165624602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileShareResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "DisplayName", "OnRemoteStorageFileShareResult" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileShareResult = { "m_OnRemoteStorageFileShareResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStorageFileShareResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileShareResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileShareResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileShareResult_MetaData)) }; // 3930983326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileWriteAsyncComplete_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/** Response when writing a file asyncrounously with FileWriteAsync. */" },
		{ "DisplayName", "OnRemoteStorageFileWriteAsyncComplete" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Response when writing a file asyncrounously with FileWriteAsync." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileWriteAsyncComplete = { "m_OnRemoteStorageFileWriteAsyncComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStorageFileWriteAsyncComplete), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageFileWriteAsyncCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileWriteAsyncComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileWriteAsyncComplete_MetaData)) }; // 379675237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileSubscribed_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "DisplayName", "OnRemoteStoragePublishedFileSubscribed" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileSubscribed = { "m_OnRemoteStoragePublishedFileSubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStoragePublishedFileSubscribed), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileSubscribedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileSubscribed_MetaData)) }; // 4206234464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileUnsubscribed_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "DisplayName", "OnRemoteStoragePublishedFileUnsubscribed" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileUnsubscribed = { "m_OnRemoteStoragePublishedFileUnsubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStoragePublishedFileUnsubscribed), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStoragePublishedFileUnsubscribedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileUnsubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileUnsubscribed_MetaData)) }; // 2294109957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageSubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/** Called when the user has subscribed to a piece of UGC. Result from ISteamUGC::SubscribeItem. */" },
		{ "DisplayName", "OnRemoteStorageSubscribePublishedFileResult" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Called when the user has subscribed to a piece of UGC. Result from ISteamUGC::SubscribeItem." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageSubscribePublishedFileResult = { "m_OnRemoteStorageSubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStorageSubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageSubscribePublishedFileResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageSubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageSubscribePublishedFileResult_MetaData)) }; // 3396763707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemoteStorage" },
		{ "Comment", "/** Called when the user has unsubscribed from a piece of UGC. Result from ISteamUGC::UnsubscribeItem. */" },
		{ "DisplayName", "OnRemoteStorageUnsubscribePublishedFileResult" },
		{ "ModuleRelativePath", "Public/UISteamRemoteStorage.h" },
		{ "ToolTip", "Called when the user has unsubscribed from a piece of UGC. Result from ISteamUGC::UnsubscribeItem." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult = { "m_OnRemoteStorageUnsubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemoteStorage, m_OnRemoteStorageUnsubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnRemoteStorageUnsubscribePublishedFileResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult_MetaData)) }; // 1762828194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamRemoteStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageDownloadUGCResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileReadAsyncComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileShareResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageFileWriteAsyncComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileSubscribed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStoragePublishedFileUnsubscribed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageSubscribePublishedFileResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemoteStorage_Statics::NewProp_m_OnRemoteStorageUnsubscribePublishedFileResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamRemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamRemoteStorage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamRemoteStorage_Statics::ClassParams = {
		&UISteamRemoteStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamRemoteStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamRemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamRemoteStorage()
	{
		if (!Z_Registration_Info_UClass_UISteamRemoteStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamRemoteStorage.OuterSingleton, Z_Construct_UClass_UISteamRemoteStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamRemoteStorage.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamRemoteStorage>()
	{
		return UISteamRemoteStorage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamRemoteStorage);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamRemoteStorage, UISteamRemoteStorage::StaticClass, TEXT("UISteamRemoteStorage"), &Z_Registration_Info_UClass_UISteamRemoteStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamRemoteStorage), 1414268544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_1756873713(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemoteStorage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
