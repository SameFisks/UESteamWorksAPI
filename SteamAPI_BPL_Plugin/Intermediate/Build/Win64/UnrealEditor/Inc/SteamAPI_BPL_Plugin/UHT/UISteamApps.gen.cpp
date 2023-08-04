// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamApps.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamApps() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamApps();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamApps_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAppId_t();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamDepotId_t();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamApps::execGetAppBuildId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamApps::GetAppBuildId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetLaunchQueryParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamApps::GetLaunchQueryParam(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetAppInstallDir)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamApps::GetAppInstallDir(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetInstalledDepots)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamDepotId_t>*)Z_Param__Result=UISteamApps::GetInstalledDepots(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execMarkContentCorrupt)
	{
		P_GET_UBOOL(Z_Param_bMissingFilesOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetCurrentBetaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamApps::GetCurrentBetaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execRequestAppProofOfPurchaseKey)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamApps::RequestAppProofOfPurchaseKey(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execUninstallDLC)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamApps::UninstallDLC(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execInstallDLC)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamApps::InstallDLC(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetDLCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamApps::GetDLCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribedFromFreeWeekend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsSubscribedFromFreeWeekend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetEarliestPurchaseUnixTime)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamApps::GetEarliestPurchaseUnixTime(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribedApp)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsSubscribedApp(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetAvailableGameLanguages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamApps::GetAvailableGameLanguages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execGetCurrentGameLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamApps::GetCurrentGameLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsVACBanned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsVACBanned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsCybercafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsCybercafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsLowViolence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsLowViolence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsSubscribed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsSubscribed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsDlcInstalled)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsDlcInstalled(Z_Param_aAppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamApps::execBIsAppInstalled)
	{
		P_GET_STRUCT(FSteamAppId_t,Z_Param_aAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamApps::BIsAppInstalled(Z_Param_aAppId);
		P_NATIVE_END;
	}
	void UISteamApps::StaticRegisterNativesUISteamApps()
	{
		UClass* Class = UISteamApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BIsAppInstalled", &UISteamApps::execBIsAppInstalled },
			{ "BIsCybercafe", &UISteamApps::execBIsCybercafe },
			{ "BIsDlcInstalled", &UISteamApps::execBIsDlcInstalled },
			{ "BIsLowViolence", &UISteamApps::execBIsLowViolence },
			{ "BIsSubscribed", &UISteamApps::execBIsSubscribed },
			{ "BIsSubscribedApp", &UISteamApps::execBIsSubscribedApp },
			{ "BIsSubscribedFromFreeWeekend", &UISteamApps::execBIsSubscribedFromFreeWeekend },
			{ "BIsVACBanned", &UISteamApps::execBIsVACBanned },
			{ "GetAppBuildId", &UISteamApps::execGetAppBuildId },
			{ "GetAppInstallDir", &UISteamApps::execGetAppInstallDir },
			{ "GetAvailableGameLanguages", &UISteamApps::execGetAvailableGameLanguages },
			{ "GetCurrentBetaName", &UISteamApps::execGetCurrentBetaName },
			{ "GetCurrentGameLanguage", &UISteamApps::execGetCurrentGameLanguage },
			{ "GetDLCCount", &UISteamApps::execGetDLCCount },
			{ "GetEarliestPurchaseUnixTime", &UISteamApps::execGetEarliestPurchaseUnixTime },
			{ "GetInstalledDepots", &UISteamApps::execGetInstalledDepots },
			{ "GetLaunchQueryParam", &UISteamApps::execGetLaunchQueryParam },
			{ "InstallDLC", &UISteamApps::execInstallDLC },
			{ "MarkContentCorrupt", &UISteamApps::execMarkContentCorrupt },
			{ "RequestAppProofOfPurchaseKey", &UISteamApps::execRequestAppProofOfPurchaseKey },
			{ "UninstallDLC", &UISteamApps::execUninstallDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics
	{
		struct ISteamApps_eventBIsAppInstalled_Parms
		{
			FSteamAppId_t aAppId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBIsAppInstalled_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	void Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_aAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsAppInstalled" },
		{ "Keywords", "Steam ISteamApps BIsAppInstalled" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsAppInstalled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::ISteamApps_eventBIsAppInstalled_Parms), Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsAppInstalled_Statics::Function_MetaDataParams)) };
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
		{ "DisplayName", "Steam BIsCybercafe" },
		{ "Keywords", "Steam ISteamApps BIsCybercafe" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
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
			FSteamAppId_t aAppId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBIsDlcInstalled_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	void Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_aAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsDlcInstalled" },
		{ "Keywords", "Steam ISteamApps BIsDlcInstalled" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsDlcInstalled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::ISteamApps_eventBIsDlcInstalled_Parms), Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsDlcInstalled_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsLowViolence" },
		{ "Keywords", "Steam ISteamApps BIsLowViolence" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsLowViolence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::ISteamApps_eventBIsLowViolence_Parms), Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsLowViolence_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsSubscribed" },
		{ "Keywords", "Steam ISteamApps BIsSubscribed" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::ISteamApps_eventBIsSubscribed_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribed_Statics::Function_MetaDataParams)) };
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
			FSteamAppId_t aAppId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventBIsSubscribedApp_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	void Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamApps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamApps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_aAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsSubscribedApp" },
		{ "Keywords", "Steam ISteamApps BIsSubscribedApp" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribedApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::ISteamApps_eventBIsSubscribedApp_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_BIsSubscribedApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_BIsSubscribedApp_Statics::FuncParams);
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsSubscribedFromFreeWeekend" },
		{ "Keywords", "Steam ISteamApps BIsSubscribedFromFreeWeekend" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsSubscribedFromFreeWeekend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::ISteamApps_eventBIsSubscribedFromFreeWeekend_Parms), Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam BIsVACBanned" },
		{ "Keywords", "Steam ISteamApps BIsVACBanned" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "BIsVACBanned", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::ISteamApps_eventBIsVACBanned_Parms), Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_BIsVACBanned_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetDlcDownloadProgress\", Keywords = \"Steam ISteamApps GetDlcDownloadProgress\"), Category = \"SteamAPI|ISteamApps\")\n//\x09static bool GetDlcDownloadProgress(FSteamAppId_t aAppId, uint64& punBytesDownloaded, int64& punBytesTotal);\n" },
		{ "DisplayName", "Steam GetAppBuildId" },
		{ "Keywords", "Steam ISteamApps GetAppBuildId" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetDlcDownloadProgress\", Keywords = \"Steam ISteamApps GetDlcDownloadProgress\"), Category = \"SteamAPI|ISteamApps\")\n       static bool GetDlcDownloadProgress(FSteamAppId_t aAppId, uint64& punBytesDownloaded, int64& punBytesTotal);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::ISteamApps_eventGetAppBuildId_Parms), Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppBuildId_Statics::Function_MetaDataParams)) };
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
			FSteamAppId_t aAppId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppInstallDir_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_aAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetAppInstallDir" },
		{ "Keywords", "Steam ISteamApps GetAppInstallDir" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::ISteamApps_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetAppInstallDir_Statics::FuncParams);
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetAvailableGameLanguages" },
		{ "Keywords", "Steam ISteamApps GetAvailableGameLanguages" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::ISteamApps_eventGetAvailableGameLanguages_Parms), Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)) };
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
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetCurrentBetaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetCurrentBetaName" },
		{ "Keywords", "Steam ISteamApps GetCurrentBetaName" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetCurrentBetaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::ISteamApps_eventGetCurrentBetaName_Parms), Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentBetaName_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetCurrentGameLanguage" },
		{ "Keywords", "Steam ISteamApps GetCurrentGameLanguage" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::ISteamApps_eventGetCurrentGameLanguage_Parms), Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetDLCCount" },
		{ "Keywords", "Steam ISteamApps GetDLCCount" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetDLCCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::ISteamApps_eventGetDLCCount_Parms), Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetDLCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetDLCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics
	{
		struct ISteamApps_eventGetEarliestPurchaseUnixTime_Parms
		{
			FSteamAppId_t aAppId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetEarliestPurchaseUnixTime_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_aAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetEarliestPurchaseUnixTime" },
		{ "Keywords", "Steam ISteamApps GetEarliestPurchaseUnixTime" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::ISteamApps_eventGetEarliestPurchaseUnixTime_Parms), Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics
	{
		struct ISteamApps_eventGetInstalledDepots_Parms
		{
			FSteamAppId_t aAppId;
			TArray<FSteamDepotId_t> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetInstalledDepots_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamDepotId_t, METADATA_PARAMS(nullptr, 0) }; // 1202992811
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetInstalledDepots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1202992811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_aAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam GetInstalledDepots" },
		{ "Keywords", "Steam ISteamApps GetInstalledDepots" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetInstalledDepots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::ISteamApps_eventGetInstalledDepots_Parms), Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetInstalledDepots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetInstalledDepots_Statics::FuncParams);
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetAppOwner\", Keywords = \"Steam ISteamApps GetAppOwner\"), Category = \"SteamAPI|ISteamApps\")\n//\x09static FSteamId_t GetAppOwner();\n" },
		{ "DisplayName", "Steam GetLaunchQueryParam" },
		{ "Keywords", "Steam ISteamApps GetLaunchQueryParam" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetAppOwner\", Keywords = \"Steam ISteamApps GetAppOwner\"), Category = \"SteamAPI|ISteamApps\")\n       static FSteamId_t GetAppOwner();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "GetLaunchQueryParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::ISteamApps_eventGetLaunchQueryParam_Parms), Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_InstallDLC_Statics
	{
		struct ISteamApps_eventInstallDLC_Parms
		{
			FSteamAppId_t aAppId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventInstallDLC_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::NewProp_aAppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam BGetDLCDataByIndex\", Keywords = \"Steam ISteamApps BGetDLCDataByIndex\"), Category = \"SteamAPI|ISteamApps\")\n//\x09static bool BGetDLCDataByIndex(int32 iDLC, uint32 pAppID);\n" },
		{ "DisplayName", "Steam InstallDLC" },
		{ "Keywords", "Steam ISteamApps InstallDLC" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam BGetDLCDataByIndex\", Keywords = \"Steam ISteamApps BGetDLCDataByIndex\"), Category = \"SteamAPI|ISteamApps\")\n       static bool BGetDLCDataByIndex(int32 iDLC, uint32 pAppID);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "InstallDLC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::ISteamApps_eventInstallDLC_Parms), Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_InstallDLC_Statics::Function_MetaDataParams)) };
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
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam MarkContentCorrupt" },
		{ "Keywords", "Steam ISteamApps MarkContentCorrupt" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "MarkContentCorrupt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::ISteamApps_eventMarkContentCorrupt_Parms), Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_MarkContentCorrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_MarkContentCorrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics
	{
		struct ISteamApps_eventRequestAppProofOfPurchaseKey_Parms
		{
			FSteamAppId_t aAppId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventRequestAppProofOfPurchaseKey_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::NewProp_aAppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam RequestAppProofOfPurchaseKey" },
		{ "Keywords", "Steam ISteamApps RequestAppProofOfPurchaseKey" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "RequestAppProofOfPurchaseKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::ISteamApps_eventRequestAppProofOfPurchaseKey_Parms), Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics
	{
		struct ISteamApps_eventUninstallDLC_Parms
		{
			FSteamAppId_t aAppId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aAppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::NewProp_aAppId = { "aAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamApps_eventUninstallDLC_Parms, aAppId), Z_Construct_UScriptStruct_FSteamAppId_t, METADATA_PARAMS(nullptr, 0) }; // 424544938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::NewProp_aAppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamApps" },
		{ "DisplayName", "Steam UninstallDLC" },
		{ "Keywords", "Steam ISteamApps UninstallDLC" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamApps, nullptr, "UninstallDLC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::ISteamApps_eventUninstallDLC_Parms), Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamApps_UninstallDLC_Statics::Function_MetaDataParams)) };
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamApps_BIsAppInstalled, "BIsAppInstalled" }, // 1811293385
		{ &Z_Construct_UFunction_UISteamApps_BIsCybercafe, "BIsCybercafe" }, // 805026620
		{ &Z_Construct_UFunction_UISteamApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 40754299
		{ &Z_Construct_UFunction_UISteamApps_BIsLowViolence, "BIsLowViolence" }, // 3987234345
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribed, "BIsSubscribed" }, // 584156869
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 1407252725
		{ &Z_Construct_UFunction_UISteamApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 2615410722
		{ &Z_Construct_UFunction_UISteamApps_BIsVACBanned, "BIsVACBanned" }, // 1979856122
		{ &Z_Construct_UFunction_UISteamApps_GetAppBuildId, "GetAppBuildId" }, // 2458168499
		{ &Z_Construct_UFunction_UISteamApps_GetAppInstallDir, "GetAppInstallDir" }, // 572458838
		{ &Z_Construct_UFunction_UISteamApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 2772070215
		{ &Z_Construct_UFunction_UISteamApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 2022726878
		{ &Z_Construct_UFunction_UISteamApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 2574076605
		{ &Z_Construct_UFunction_UISteamApps_GetDLCCount, "GetDLCCount" }, // 3261636872
		{ &Z_Construct_UFunction_UISteamApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 2648198760
		{ &Z_Construct_UFunction_UISteamApps_GetInstalledDepots, "GetInstalledDepots" }, // 3089899728
		{ &Z_Construct_UFunction_UISteamApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 1725134840
		{ &Z_Construct_UFunction_UISteamApps_InstallDLC, "InstallDLC" }, // 675982654
		{ &Z_Construct_UFunction_UISteamApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 3306680335
		{ &Z_Construct_UFunction_UISteamApps_RequestAppProofOfPurchaseKey, "RequestAppProofOfPurchaseKey" }, // 3888588862
		{ &Z_Construct_UFunction_UISteamApps_UninstallDLC, "UninstallDLC" }, // 1313646360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamApps_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Exposes a wide range of information and actions for applications and Downloadable Content (DLC).\n" },
		{ "IncludePath", "UISteamApps.h" },
		{ "ModuleRelativePath", "Public/UISteamApps.h" },
		{ "ToolTip", "Exposes a wide range of information and actions for applications and Downloadable Content (DLC)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamApps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamApps_Statics::ClassParams = {
		&UISteamApps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
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
	UISteamApps::~UISteamApps() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamApps, UISteamApps::StaticClass, TEXT("UISteamApps"), &Z_Registration_Info_UClass_UISteamApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamApps), 1211646896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_1418902000(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamApps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
