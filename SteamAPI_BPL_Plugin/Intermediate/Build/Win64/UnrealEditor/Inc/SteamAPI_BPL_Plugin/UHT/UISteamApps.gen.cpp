// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamApps.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamApps() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamApps();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamApps_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnDlcInstalledDelegate_Parms
		{
			int32 AppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDlcInstalledDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnDlcInstalledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnDlcInstalledDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDlcInstalledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDlcInstalledDelegate, int32 AppID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnDlcInstalledDelegate_Parms
	{
		int32 AppID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnDlcInstalledDelegate_Parms Parms;
	Parms.AppID=AppID;
	OnDlcInstalledDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms
		{
			ESteamResult Result;
			int64 FileSize;
			FString FileSHA;
			int32 flags;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_FileSize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileSHA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms, FileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_FileSHA = { "FileSHA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms, FileSHA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms, flags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_FileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_FileSHA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_flags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnFileDetailsResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, ESteamResult Result, int64 FileSize, const FString& FileSHA, int32 flags)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms
	{
		ESteamResult Result;
		int64 FileSize;
		FString FileSHA;
		int32 flags;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnFileDetailsResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.FileSize=FileSize;
	Parms.FileSHA=FileSHA;
	Parms.flags=flags;
	OnFileDetailsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnNewUrlLaunchParametersDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate)
{
	OnNewUrlLaunchParametersDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UISteamApps::execUninstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninstallDLC(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execMarkContentCorrupt)
	{
		P_GET_UBOOL(Z_Param_bMissingFilesOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MarkContentCorrupt(Z_Param_bMissingFilesOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execInstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstallDLC(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetLaunchQueryParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLaunchQueryParam(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetLaunchCommandLine)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLaunchCommandLine(Z_Param_Out_CommandLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetInstalledDepots)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Depots);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxDepots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstalledDepots(Z_Param_AppID,Z_Param_Out_Depots,Z_Param_MaxDepots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetFileDetails)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->GetFileDetails(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetEarliestPurchaseUnixTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEarliestPurchaseUnixTime(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetDlcDownloadProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDlcDownloadProgress(Z_Param_AppID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetDLCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDLCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetCurrentGameLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentGameLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetCurrentBetaName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentBetaName(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetAvailableGameLanguages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAvailableGameLanguages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetAppOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetAppOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetAppInstallDir)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetAppBuildId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppBuildId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsVACBanned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsVACBanned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribedFromFreeWeekend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsSubscribedFromFreeWeekend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribedFromFamilySharing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsSubscribedFromFamilySharing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribedApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsSubscribedApp(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsSubscribed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsLowViolence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsLowViolence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsDlcInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsDlcInstalled(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsCybercafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsCybercafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsAppInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsAppInstalled(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBGetDLCDataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DLC);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
		P_GET_UBOOL_REF(Z_Param_Out_bAvailable);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BGetDLCDataByIndex(Z_Param_DLC,Z_Param_Out_AppID,Z_Param_Out_bAvailable,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetSteamApps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamApps**)Z_Param__Result=UISteamApps::GetSteamApps();
		P_NATIVE_END;
	}
	void UISteamApps::StaticRegisterNativesUISteamApps()
	{
		UClass* Class = UISteamApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetDLCDataByIndex", &UISteamApps::execBGetDLCDataByIndex },
			{ "BIsAppInstalled", &UISteamApps::execBIsAppInstalled },
			{ "BIsCybercafe", &UISteamApps::execBIsCybercafe },
			{ "BIsDlcInstalled", &UISteamApps::execBIsDlcInstalled },
			{ "BIsLowViolence", &UISteamApps::execBIsLowViolence },
			{ "BIsSubscribed", &UISteamApps::execBIsSubscribed },
			{ "BIsSubscribedApp", &UISteamApps::execBIsSubscribedApp },
			{ "BIsSubscribedFromFamilySharing", &UISteamApps::execBIsSubscribedFromFamilySharing },
			{ "BIsSubscribedFromFreeWeekend", &UISteamApps::execBIsSubscribedFromFreeWeekend },
			{ "BIsVACBanned", &UISteamApps::execBIsVACBanned },
			{ "GetAppBuildId", &UISteamApps::execGetAppBuildId },
			{ "GetAppInstallDir", &UISteamApps::execGetAppInstallDir },
			{ "GetAppOwner", &UISteamApps::execGetAppOwner },
			{ "GetAvailableGameLanguages", &UISteamApps::execGetAvailableGameLanguages },
			{ "GetCurrentBetaName", &UISteamApps::execGetCurrentBetaName },
			{ "GetCurrentGameLanguage", &UISteamApps::execGetCurrentGameLanguage },
			{ "GetDLCCount", &UISteamApps::execGetDLCCount },
			{ "GetDlcDownloadProgress", &UISteamApps::execGetDlcDownloadProgress },
			{ "GetEarliestPurchaseUnixTime", &UISteamApps::execGetEarliestPurchaseUnixTime },
			{ "GetFileDetails", &UISteamApps::execGetFileDetails },
			{ "GetInstalledDepots", &UISteamApps::execGetInstalledDepots },
			{ "GetLaunchCommandLine", &UISteamApps::execGetLaunchCommandLine },
			{ "GetLaunchQueryParam", &UISteamApps::execGetLaunchQueryParam },
			{ "GetSteamApps", &UISteamApps::execGetSteamApps },
			{ "InstallDLC", &UISteamApps::execInstallDLC },
			{ "MarkContentCorrupt", &UISteamApps::execMarkContentCorrupt },
			{ "UninstallDLC", &UISteamApps::execUninstallDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics
	{
		struct ISteamApps_eventBGetDLCDataByIndex_Parms
		{
			int32 DLC;
			int32 AppID;
			bool bAvailable;
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DLC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_DLC = { "DLC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBGetDLCDataByIndex_Parms, DLC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBGetDLCDataByIndex_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
	{
		((ISteamApps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_DLC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Returns metadata for a DLC by index.\n\x09 *\n\x09 * @param int32 DLC - Index of the DLC to get between 0 and GetDLCCount.\n\x09 * @param int32 & AppID - Returns the App ID of the DLC.\n\x09 * @param bool & bAvailable - Returns whether the DLC is currently available.\n\x09 * @param FString & Name - Returns the name of the DLC.\n\x09 * @return bool - true if the current App ID has DLC's associated with it and iDLC falls between the range of 0 to GetDLCCount, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Returns metadata for a DLC by index.\n\n@param int32 DLC - Index of the DLC to get between 0 and GetDLCCount.\n@param int32 & AppID - Returns the App ID of the DLC.\n@param bool & bAvailable - Returns whether the DLC is currently available.\n@param FString & Name - Returns the name of the DLC.\n@return bool - true if the current App ID has DLC's associated with it and iDLC falls between the range of 0 to GetDLCCount, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BGetDLCDataByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::ISteamApps_eventBGetDLCDataByIndex_Parms), Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics
	{
		struct ISteamApps_eventBIsAppInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if a specific app is installed.\n\x09 * The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\x09 * This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09 *\n\x09 * @param int32 AppID - The App ID of the application to check.\n\x09 * @return bool - true if the specified App ID is installed; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if a specific app is installed.\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param int32 AppID - The App ID of the application to check.\n@return bool - true if the specified App ID is installed; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsAppInstalled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::ISteamApps_eventBIsAppInstalled_Parms), Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsAppInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics
	{
		struct ISteamApps_eventBIsCybercafe_Parms
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
	void Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "Comment", "/**\n\x09* Checks if Is Cybercafe\n\x09* @return bool - true if if Is Cybercafe, otherwise false.\n\x09*/" },
		{ "DisplayName", "Steam BIsCybercafe" },
		{ "Keywords", "Steam ISteamApps BIsCybercafe" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if Is Cybercafe\n@return bool - true if if Is Cybercafe, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsCybercafe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::ISteamApps_eventBIsCybercafe_Parms), Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsCybercafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsCybercafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics
	{
		struct ISteamApps_eventBIsDlcInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the user owns a specific DLC and if the DLC is installed\n\x09 * Note: Should only be used for simple client side checks - not intended for granting in-game items.\n\x09 *\n\x09 * @param int32 AppID - The App ID of the DLC to check.\n\x09 * @return bool - true if the user owns the DLC and it's currently installed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the user owns a specific DLC and if the DLC is installed\nNote: Should only be used for simple client side checks - not intended for granting in-game items.\n\n@param int32 AppID - The App ID of the DLC to check.\n@return bool - true if the user owns the DLC and it's currently installed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsDlcInstalled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::ISteamApps_eventBIsDlcInstalled_Parms), Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsDlcInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics
	{
		struct ISteamApps_eventBIsLowViolence_Parms
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
	void Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the license owned by the user provides low violence depots.\n\x09 * Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09 *\n\x09 * @return bool - true if the license owned by the user provides low violence depots; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\nLow violence depots are useful for copies sold in countries that have content restrictions.\n\n@return bool - true if the license owned by the user provides low violence depots; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsLowViolence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::ISteamApps_eventBIsLowViolence_Parms), Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsLowViolence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics
	{
		struct ISteamApps_eventBIsSubscribed_Parms
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
	void Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the active user is subscribed to the current App ID.\n\x09 * This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\x09 *\n\x09 * @return bool - true if the active user owns the current AppId, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to the current App ID.\nThis will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\n@return bool - true if the active user owns the current AppId, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::ISteamApps_eventBIsSubscribed_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsSubscribed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics
	{
		struct ISteamApps_eventBIsSubscribedApp_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBIsSubscribedApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the active user is subscribed to a specified AppId.\n\x09 * Only use this if you need to check ownership of another game related to yours, a demo for example.\n\x09 *\n\x09 * @param int32 AppID - The App ID to check.\n\x09 * @return bool - true if the active user is subscribed to the specified App ID, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to a specified AppId.\nOnly use this if you need to check ownership of another game related to yours, a demo for example.\n\n@param int32 AppID - The App ID to check.\n@return bool - true if the active user is subscribed to the specified App ID, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribedApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::ISteamApps_eventBIsSubscribedApp_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsSubscribedApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics
	{
		struct ISteamApps_eventBIsSubscribedFromFamilySharing_Parms
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
	void Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\x09 * If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\x09 *\n\x09 * @return bool - true if the active user is accessing the current appID via family sharing, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\nIf you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\n@return bool - true if the active user is accessing the current appID via family sharing, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribedFromFamilySharing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::ISteamApps_eventBIsSubscribedFromFamilySharing_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics
	{
		struct ISteamApps_eventBIsSubscribedFromFreeWeekend_Parms
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
	void Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the user is subscribed to the current App ID through a free weekend.\n\x09 * Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\x09 *\n\x09 * @return bool - true if the active user is subscribed to the current App Id via a free weekend otherwise false any other type of license.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the user is subscribed to the current App ID through a free weekend.\nBefore using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\n@return bool - true if the active user is subscribed to the current App Id via a free weekend otherwise false any other type of license." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribedFromFreeWeekend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::ISteamApps_eventBIsSubscribedFromFreeWeekend_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics
	{
		struct ISteamApps_eventBIsVACBanned_Parms
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
	void Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the user has a VAC ban on their account\n\x09 *\n\x09 * @return bool - true if the user has a VAC ban on their account; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the user has a VAC ban on their account\n\n@return bool - true if the user has a VAC ban on their account; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsVACBanned", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::ISteamApps_eventBIsVACBanned_Parms), Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsVACBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics
	{
		struct ISteamApps_eventGetAppBuildId_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the buildid of this app, may change at any time based on backend updates to the game.\n\x09 *\n\x09 * @return int32 - The current Build Id of this App. Defaults to 0 if you're not running a build downloaded from steam.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the buildid of this app, may change at any time based on backend updates to the game.\n\n@return int32 - The current Build Id of this App. Defaults to 0 if you're not running a build downloaded from steam." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::ISteamApps_eventGetAppBuildId_Parms), Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetAppBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics
	{
		struct ISteamApps_eventGetAppInstallDir_Parms
		{
			int32 AppID;
			FString Folder;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppInstallDir_Parms, Folder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the install folder for a specific AppID.\n\x09 * This works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\x09 *\n\x09 * @param int32 AppID - The App ID to get the install dir for.\n\x09 * @param FString & Folder - The string buffer that the folder path will be copied into.\n\x09 * @return int32 - Returns the install directory path as a string into the buffer provided in pchFolder and returns the number of bytes that were copied into that buffer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the install folder for a specific AppID.\nThis works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\n@param int32 AppID - The App ID to get the install dir for.\n@param FString & Folder - The string buffer that the folder path will be copied into.\n@return int32 - Returns the install directory path as a string into the buffer provided in pchFolder and returns the number of bytes that were copied into that buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::ISteamApps_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics
	{
		struct ISteamApps_eventGetAppOwner_Parms
		{
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\x09 *\n\x09 * @return FSteamID - The original owner of the current app.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\n@return FSteamID - The original owner of the current app." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAppOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::ISteamApps_eventGetAppOwner_Parms), Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetAppOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetAppOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics
	{
		struct ISteamApps_eventGetAvailableGameLanguages_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets a comma separated list of the languages the current app supports.\n\x09 *\n\x09 * @return FString - Returns a comma separated list of languages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets a comma separated list of the languages the current app supports.\n\n@return FString - Returns a comma separated list of languages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::ISteamApps_eventGetAvailableGameLanguages_Parms), Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics
	{
		struct ISteamApps_eventGetCurrentBetaName_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\x09 *\n\x09 * @param FString & Name - The buffer where the beta name will be copied in to.\n\x09 * @return bool - true if the user is on a beta branch; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\n@param FString & Name - The buffer where the beta name will be copied in to.\n@return bool - true if the user is on a beta branch; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetCurrentBetaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::ISteamApps_eventGetCurrentBetaName_Parms), Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetCurrentBetaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics
	{
		struct ISteamApps_eventGetCurrentGameLanguage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the current language that the user has set.\n\x09 * This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\x09 *\n\x09 * @return FString\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the current language that the user has set.\nThis falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\n@return FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::ISteamApps_eventGetCurrentGameLanguage_Parms), Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics
	{
		struct ISteamApps_eventGetDLCCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the number of DLC pieces for the current app.\n\x09 * This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\x09 *\n\x09 * @return int32 - The number of DLC pieces for the current app. Note that this value may max out at 64, depending on how much unowned DLC the user has. If your app has a large number of DLC, you should set your -\n\x09 * own internal list of known DLC to check against.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the number of DLC pieces for the current app.\nThis is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\n@return int32 - The number of DLC pieces for the current app. Note that this value may max out at 64, depending on how much unowned DLC the user has. If your app has a large number of DLC, you should set your -\nown internal list of known DLC to check against." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetDLCCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::ISteamApps_eventGetDLCCount_Parms), Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetDLCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics
	{
		struct ISteamApps_eventGetDlcDownloadProgress_Parms
		{
			int32 AppID;
			int64 BytesDownloaded;
			int64 BytesTotal;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetDlcDownloadProgress_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetDlcDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetDlcDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the download progress for optional DLC.\n\x09 *\n\x09 * @param int32 AppID - The App ID of the DLC to monitor\n\x09 * @param int64 & BytesDownloaded - Returns the number of bytes downloaded.\n\x09 * @param int64 & BytesTotal - Returns the total size of the download in bytes.\n\x09 * @return bool - true if the specified DLC exists and is currently downloading; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the download progress for optional DLC.\n\n@param int32 AppID - The App ID of the DLC to monitor\n@param int64 & BytesDownloaded - Returns the number of bytes downloaded.\n@param int64 & BytesTotal - Returns the total size of the download in bytes.\n@return bool - true if the specified DLC exists and is currently downloading; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetDlcDownloadProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::ISteamApps_eventGetDlcDownloadProgress_Parms), Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics
	{
		struct ISteamApps_eventGetEarliestPurchaseUnixTime_Parms
		{
			int32 AppID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetEarliestPurchaseUnixTime_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\x09 * This is useful for rewarding users based on their initial purchase date.\n\x09 *\n\x09 * @param int32 AppID - The App ID to get the purchase time for.\n\x09 * @return int32 - The earliest purchase time in Unix epoch format (seconds since Jan 1st, 1970).\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\nThis is useful for rewarding users based on their initial purchase date.\n\n@param int32 AppID - The App ID to get the purchase time for.\n@return int32 - The earliest purchase time in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::ISteamApps_eventGetEarliestPurchaseUnixTime_Parms), Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics
	{
		struct ISteamApps_eventGetFileDetails_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetFileDetails_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetFileDetails_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09 *\n\x09 * @param const FString & FileName - The absolute path and name to the file.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a FileDetailsResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\n@param const FString & FileName - The absolute path and name to the file.\n@return FSteamAPICall - SteamAPICall_t to be used with a FileDetailsResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetFileDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::ISteamApps_eventGetFileDetails_Parms), Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics
	{
		struct ISteamApps_eventGetInstalledDepots_Parms
		{
			int32 AppID;
			TArray<int32> Depots;
			int32 MaxDepots;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Depots_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Depots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetInstalledDepots_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_Depots_Inner = { "Depots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_Depots = { "Depots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetInstalledDepots_Parms, Depots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_MaxDepots = { "MaxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetInstalledDepots_Parms, MaxDepots), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_Depots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_Depots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_MaxDepots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets a list of all installed depots for a given App ID in mount order.\n\x09 *\n\x09 * @param int32 AppID - The App to list the depots for.\n\x09 * @param TArray<int32> & Depots - A preallocated array that will be filled with the list of depots.\n\x09 * @param int32 MaxDepots - The maximum number of depots to obtain, typically the size of Depots.\n\x09 * @return int32 - The number of depots returned.\n\x09 */" },
		{ "CPP_Default_MaxDepots", "1" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets a list of all installed depots for a given App ID in mount order.\n\n@param int32 AppID - The App to list the depots for.\n@param TArray<int32> & Depots - A preallocated array that will be filled with the list of depots.\n@param int32 MaxDepots - The maximum number of depots to obtain, typically the size of Depots.\n@return int32 - The number of depots returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetInstalledDepots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::ISteamApps_eventGetInstalledDepots_Parms), Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetInstalledDepots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics
	{
		struct ISteamApps_eventGetLaunchCommandLine_Parms
		{
			FString CommandLine;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLine;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::NewProp_CommandLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. This method is preferable to launching with a command line via the operating system, -\n\x09 * which can be a security risk. In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the -\n\x09 * Installation > General page on your app.\n\x09 *\n\x09 * @param FString & CommandLine - The string buffer that the command line will be copied into.\n\x09 * @return int32 - Returns the command line as a string into the buffer provided in CommandLine and returns the number of bytes that were copied into that buffer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. This method is preferable to launching with a command line via the operating system, -\nwhich can be a security risk. In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the -\nInstallation > General page on your app.\n\n@param FString & CommandLine - The string buffer that the command line will be copied into.\n@return int32 - Returns the command line as a string into the buffer provided in CommandLine and returns the number of bytes that were copied into that buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetLaunchCommandLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::ISteamApps_eventGetLaunchCommandLine_Parms), Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics
	{
		struct ISteamApps_eventGetLaunchQueryParam_Parms
		{
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\x09 * Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.\n\x09 * Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\x09 *\n\x09 * @param const FString & Key - The launch key to test for. Ex: param1\n\x09 * @return FString - The value associated with the key provided. Returns an empty string (\"\") if the specified key does not exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\nParameter names starting with the character '@' are reserved for internal use and will always return an empty string.\nParameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\n@param const FString & Key - The launch key to test for. Ex: param1\n@return FString - The value associated with the key provided. Returns an empty string (\"\") if the specified key does not exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetLaunchQueryParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::ISteamApps_eventGetLaunchQueryParam_Parms), Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics
	{
		struct ISteamApps_eventGetSteamApps_Parms
		{
			UISteamApps* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetSteamApps_Parms, ReturnValue), Z_Construct_UClass_UISteamApps_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamApps" },
		{ "DisplayName", "Steam Apps" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetSteamApps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::ISteamApps_eventGetSteamApps_Parms), Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetSteamApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetSteamApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_InstallDLC_Statics
	{
		struct ISteamApps_eventInstallDLC_Parms
		{
			int32 AppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventInstallDLC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Allows you to install an optional DLC.\n\x09 * Triggers a DlcInstalled_t callback.\n\x09 *\n\x09 * @param int32 AppID - The DLC you want to install.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Allows you to install an optional DLC.\nTriggers a DlcInstalled_t callback.\n\n@param int32 AppID - The DLC you want to install.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "InstallDLC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::ISteamApps_eventInstallDLC_Parms), Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_InstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics
	{
		struct ISteamApps_eventMarkContentCorrupt_Parms
		{
			bool bMissingFilesOnly;
			bool ReturnValue;
		};
		static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
	{
		((ISteamApps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Allows you to force verify game content on next launch.\n\x09 * If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server), you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\x09 *\n\x09 * @param bool bMissingFilesOnly - \x09Only scan for missing files, don't verify the checksum of each file.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Allows you to force verify game content on next launch.\nIf you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server), you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\n@param bool bMissingFilesOnly -      Only scan for missing files, don't verify the checksum of each file.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "MarkContentCorrupt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::ISteamApps_eventMarkContentCorrupt_Parms), Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_MarkContentCorrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics
	{
		struct ISteamApps_eventUninstallDLC_Parms
		{
			int32 AppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventUninstallDLC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Allows you to uninstall an optional DLC.\n\x09 *\n\x09 * @param int32 AppID - The DLC you want to uninstall.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Allows you to uninstall an optional DLC.\n\n@param int32 AppID - The DLC you want to uninstall.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "UninstallDLC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::ISteamApps_eventUninstallDLC_Parms), Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_UninstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamApps);
	UClass* Z_Construct_UClass_UISteamApps_NoRegister()
	{
		return UISteamApps::StaticClass();
	}
	struct Z_Construct_UClass_UISteamApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnDlcInstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnDlcInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnFileDetailsResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnFileDetailsResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnNewUrlLaunchParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnNewUrlLaunchParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 551494465
		{ &Z_Construct_UFunction_UISteamApps_BIsAppInstalled, "BIsAppInstalled" }, // 3692868511
		{ &Z_Construct_UFunction_UISteamApps_BIsCybercafe, "BIsCybercafe" }, // 1939276462
		{ &Z_Construct_UFunction_UISteamApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 3556843222
		{ &Z_Construct_UFunction_UISteamApps_BIsLowViolence, "BIsLowViolence" }, // 3064050950
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribed, "BIsSubscribed" }, // 3720719385
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 1877118810
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 3250156710
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 266402969
		{ &Z_Construct_UFunction_UISteamApps_BIsVACBanned, "BIsVACBanned" }, // 1157910345
		{ &Z_Construct_UFunction_UISteamApps_GetAppBuildId, "GetAppBuildId" }, // 3854683973
		{ &Z_Construct_UFunction_UISteamApps_GetAppInstallDir, "GetAppInstallDir" }, // 3335348663
		{ &Z_Construct_UFunction_UISteamApps_GetAppOwner, "GetAppOwner" }, // 2926040671
		{ &Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 3195343528
		{ &Z_Construct_UFunction_UISteamApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 1381152459
		{ &Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 1176596300
		{ &Z_Construct_UFunction_UISteamApps_GetDLCCount, "GetDLCCount" }, // 2984670992
		{ &Z_Construct_UFunction_UISteamApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 861455777
		{ &Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 3911535890
		{ &Z_Construct_UFunction_UISteamApps_GetFileDetails, "GetFileDetails" }, // 2407147330
		{ &Z_Construct_UFunction_UISteamApps_GetInstalledDepots, "GetInstalledDepots" }, // 2057640606
		{ &Z_Construct_UFunction_UISteamApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 2712647323
		{ &Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 3366560698
		{ &Z_Construct_UFunction_UISteamApps_GetSteamApps, "GetSteamApps" }, // 1962934368
		{ &Z_Construct_UFunction_UISteamApps_InstallDLC, "InstallDLC" }, // 2329226690
		{ &Z_Construct_UFunction_UISteamApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 2998912339
		{ &Z_Construct_UFunction_UISteamApps_UninstallDLC, "UninstallDLC" }, // 935167184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamApps_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Exposes a wide range of information and actions for applications and Downloadable Content (DLC).\n" },
		{ "IncludePath", "UISteamApps.h" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Exposes a wide range of information and actions for applications and Downloadable Content (DLC)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnDlcInstalled_MetaData[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/** Triggered after the current user gains ownership of DLC and that DLC is installed. */" },
		{ "DisplayName", "OnDlcInstalled" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Triggered after the current user gains ownership of DLC and that DLC is installed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnDlcInstalled = { "m_OnDlcInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamApps, m_OnDlcInstalled), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDlcInstalledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnDlcInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnDlcInstalled_MetaData)) }; // 2769993353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnFileDetailsResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/** Called after requesting the details of a specific file. */" },
		{ "DisplayName", "OnFileDetailsResult" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Called after requesting the details of a specific file." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnFileDetailsResult = { "m_OnFileDetailsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamApps, m_OnFileDetailsResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnFileDetailsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnFileDetailsResult_MetaData)) }; // 1745264929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnNewUrlLaunchParameters_MetaData[] = {
		{ "Category", "SteamAPI|UISteamApps" },
		{ "Comment", "/**\n\x09 * Posted after the user executes a steam url with command line or query parameters such as steam://run/<appid>//?param1=value1;param2=value2;param3=value3; while the game is already running.\n\x09 * The new params can be queried with GetLaunchCommandLine and GetLaunchQueryParam.\n\x09 */" },
		{ "DisplayName", "OnNewUrlLaunchParameters" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Posted after the user executes a steam url with command line or query parameters such as steam://run/<appid>//?param1=value1;param2=value2;param3=value3; while the game is already running.\nThe new params can be queried with GetLaunchCommandLine and GetLaunchQueryParam." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnNewUrlLaunchParameters = { "m_OnNewUrlLaunchParameters", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamApps, m_OnNewUrlLaunchParameters), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNewUrlLaunchParametersDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnNewUrlLaunchParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnNewUrlLaunchParameters_MetaData)) }; // 1221422167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnDlcInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnFileDetailsResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamApps_Statics::NewProp_m_OnNewUrlLaunchParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamApps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamApps_Statics::ClassParams = {
		&UISteamApps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamApps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamApps_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamApps()
	{
		if (!Z_Registration_Info_UClass_UISteamApps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamApps.OuterSingleton, Z_Construct_UClass_UISteamApps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamApps.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamApps>()
	{
		return UISteamApps::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamApps);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamApps, UISteamApps::StaticClass, TEXT("UISteamApps"), &Z_Registration_Info_UClass_UISteamApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamApps), 2186880935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_1513708543(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
