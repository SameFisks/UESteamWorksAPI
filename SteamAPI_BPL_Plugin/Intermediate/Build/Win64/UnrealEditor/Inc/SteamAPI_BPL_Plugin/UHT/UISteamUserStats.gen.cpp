// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUserStats.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUserStats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUserStats();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUserStats_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardDataRequest();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardDisplayType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardSortMethod();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardUploadScoreMethod();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUGCHandle();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGlobalAchievementPercentagesReadyDelegate_Parms
		{
			int64 GameID;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGlobalAchievementPercentagesReadyDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGlobalAchievementPercentagesReadyDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGlobalAchievementPercentagesReadyDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGlobalAchievementPercentagesReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalAchievementPercentagesReadyDelegate, int64 GameID, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGlobalAchievementPercentagesReadyDelegate_Parms
	{
		int64 GameID;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGlobalAchievementPercentagesReadyDelegate_Parms Parms;
	Parms.GameID=GameID;
	Parms.Result=Result;
	OnGlobalAchievementPercentagesReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGlobalStatsReceivedDelegate_Parms
		{
			int64 GameID;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGlobalStatsReceivedDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGlobalStatsReceivedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGlobalStatsReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGlobalStatsReceivedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGlobalStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalStatsReceivedDelegate, int64 GameID, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGlobalStatsReceivedDelegate_Parms
	{
		int64 GameID;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGlobalStatsReceivedDelegate_Parms Parms;
	Parms.GameID=GameID;
	Parms.Result=Result;
	OnGlobalStatsReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			bool bLeaderboardFound;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static void NewProp_bLeaderboardFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms*)Obj)->bLeaderboardFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::NewProp_bLeaderboardFound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLeaderboardFindResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLeaderboardFindResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFindResultDelegate, FSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		bool bLeaderboardFound;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardFindResultDelegate_Parms Parms;
	Parms.SteamLeaderboard=SteamLeaderboard;
	Parms.bLeaderboardFound=bLeaderboardFound ? true : false;
	OnLeaderboardFindResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			FSteamLeaderboardEntries LeaderboardEntries;
			int32 EntryCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::NewProp_LeaderboardEntries = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms, LeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(nullptr, 0) }; // 1114286822
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms, EntryCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::NewProp_LeaderboardEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::NewProp_EntryCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLeaderboardScoresDownloadedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLeaderboardScoresDownloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoresDownloadedDelegate, FSteamLeaderboard SteamLeaderboard, FSteamLeaderboardEntries LeaderboardEntries, int32 EntryCount)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		FSteamLeaderboardEntries LeaderboardEntries;
		int32 EntryCount;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoresDownloadedDelegate_Parms Parms;
	Parms.SteamLeaderboard=SteamLeaderboard;
	Parms.LeaderboardEntries=LeaderboardEntries;
	Parms.EntryCount=EntryCount;
	OnLeaderboardScoresDownloadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms
		{
			bool bSuccess;
			FSteamLeaderboard SteamLeaderboard;
			int32 Score;
			bool bScoreChanged;
			int32 GlobalRankNew;
			int32 GlobalRankPrevious;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static void NewProp_bScoreChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms*)Obj)->bScoreChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms, GlobalRankNew), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms, GlobalRankPrevious), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_bScoreChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_GlobalRankNew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::NewProp_GlobalRankPrevious,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLeaderboardScoreUploadedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLeaderboardScoreUploadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardScoreUploadedDelegate, bool bSuccess, FSteamLeaderboard SteamLeaderboard, int32 Score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms
	{
		bool bSuccess;
		FSteamLeaderboard SteamLeaderboard;
		int32 Score;
		bool bScoreChanged;
		int32 GlobalRankNew;
		int32 GlobalRankPrevious;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardScoreUploadedDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.SteamLeaderboard=SteamLeaderboard;
	Parms.Score=Score;
	Parms.bScoreChanged=bScoreChanged ? true : false;
	Parms.GlobalRankNew=GlobalRankNew;
	Parms.GlobalRankPrevious=GlobalRankPrevious;
	OnLeaderboardScoreUploadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardUGCSetDelegate_Parms
		{
			ESteamResult Result;
			FSteamLeaderboard SteamLeaderboard;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardUGCSetDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardUGCSetDelegate_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::NewProp_SteamLeaderboard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLeaderboardUGCSetDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardUGCSetDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLeaderboardUGCSetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardUGCSetDelegate, ESteamResult Result, FSteamLeaderboard SteamLeaderboard)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLeaderboardUGCSetDelegate_Parms
	{
		ESteamResult Result;
		FSteamLeaderboard SteamLeaderboard;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLeaderboardUGCSetDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamLeaderboard=SteamLeaderboard;
	OnLeaderboardUGCSetDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms
		{
			bool bSuccess;
			int32 PlayersNum;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::NewProp_PlayersNum = { "PlayersNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms, PlayersNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::NewProp_PlayersNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnNumberOfCurrentPlayersDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNumberOfCurrentPlayersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNumberOfCurrentPlayersDelegate, bool bSuccess, int32 PlayersNum)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms
	{
		bool bSuccess;
		int32 PlayersNum;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnNumberOfCurrentPlayersDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.PlayersNum=PlayersNum;
	OnNumberOfCurrentPlayersDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms
		{
			int64 GameID;
			FString AchievementName;
			bool bAchieved;
			int32 IconHandle;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IconHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms, AchievementName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_IconHandle = { "IconHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms, IconHandle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_AchievementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::NewProp_IconHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnUserAchievementIconFetchedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserAchievementIconFetchedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetchedDelegate, int64 GameID, const FString& AchievementName, bool bAchieved, int32 IconHandle)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms
	{
		int64 GameID;
		FString AchievementName;
		bool bAchieved;
		int32 IconHandle;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementIconFetchedDelegate_Parms Parms;
	Parms.GameID=GameID;
	Parms.AchievementName=AchievementName;
	Parms.bAchieved=bAchieved ? true : false;
	Parms.IconHandle=IconHandle;
	OnUserAchievementIconFetchedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms
		{
			int64 GameID;
			bool bGroupAchievement;
			FString AchievementName;
			int32 CurProgress;
			int32 MaxProgress;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
		static void NewProp_bGroupAchievement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms*)Obj)->bGroupAchievement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms, AchievementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_CurProgress = { "CurProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms, CurProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms, MaxProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_bGroupAchievement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_AchievementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_CurProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::NewProp_MaxProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnUserAchievementStoredDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserAchievementStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStoredDelegate, int64 GameID, bool bGroupAchievement, const FString& AchievementName, int32 CurProgress, int32 MaxProgress)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms
	{
		int64 GameID;
		bool bGroupAchievement;
		FString AchievementName;
		int32 CurProgress;
		int32 MaxProgress;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnUserAchievementStoredDelegate_Parms Parms;
	Parms.GameID=GameID;
	Parms.bGroupAchievement=bGroupAchievement ? true : false;
	Parms.AchievementName=AchievementName;
	Parms.CurProgress=CurProgress;
	Parms.MaxProgress=MaxProgress;
	OnUserAchievementStoredDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms
		{
			int64 GameID;
			ESteamResult Result;
			FSteamID SteamIDUser;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnUserStatsReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceivedDelegate, int64 GameID, ESteamResult Result, FSteamID SteamIDUser)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms
	{
		int64 GameID;
		ESteamResult Result;
		FSteamID SteamIDUser;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnUserStatsReceivedDelegate_Parms Parms;
	Parms.GameID=GameID;
	Parms.Result=Result;
	Parms.SteamIDUser=SteamIDUser;
	OnUserStatsReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnUserStatsStoredDelegate_Parms
		{
			int64 GameID;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserStatsStoredDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserStatsStoredDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnUserStatsStoredDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnUserStatsStoredDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserStatsStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStoredDelegate, int64 GameID, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnUserStatsStoredDelegate_Parms
	{
		int64 GameID;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnUserStatsStoredDelegate_Parms Parms;
	Parms.GameID=GameID;
	Parms.Result=Result;
	OnUserStatsStoredDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnUserStatsUnloadedDelegate_Parms
		{
			FSteamID SteamIDUser;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnUserStatsUnloadedDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnUserStatsUnloadedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnUserStatsUnloadedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserStatsUnloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloadedDelegate, FSteamID SteamIDUser)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnUserStatsUnloadedDelegate_Parms
	{
		FSteamID SteamIDUser;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnUserStatsUnloadedDelegate_Parms Parms;
	Parms.SteamIDUser=SteamIDUser;
	OnUserStatsUnloadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamUserStats::execUploadLeaderboardScore)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_LeaderboardUploadScoreMethod);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ScoreDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->UploadLeaderboardScore(Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_LeaderboardUploadScoreMethod),Z_Param_Score,Z_Param_Out_ScoreDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execUpdateAvgRateStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateAvgRateStat(Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execStoreStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StoreStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execSetStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStatFloat(Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execSetStatInt32)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStatInt32(Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execSetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAchievement(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execResetAllStats)
	{
		P_GET_UBOOL(Z_Param_bAchievementsToo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetAllStats(Z_Param_bAchievementsToo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execRequestUserStats)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RequestUserStats(Z_Param_SteamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execRequestGlobalStats)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RequestGlobalStats(Z_Param_HistoryDays);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execRequestGlobalAchievementPercentages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RequestGlobalAchievementPercentages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execRequestCurrentStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCurrentStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execIndicateAchievementProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IndicateAchievementProgress(Z_Param_Name,Z_Param_CurProgress,Z_Param_MaxProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetUserStatInt32)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatInt32(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetUserAchievementAndUnlockTime)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserAchievementAndUnlockTime(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStatFloat(Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetStatInt32)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStatInt32(Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetNumberOfCurrentPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->GetNumberOfCurrentPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetNumAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumAchievements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetNextMostAchievedAchievementInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IteratorPrevious);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNextMostAchievedAchievementInfo(Z_Param_IteratorPrevious,Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetMostAchievedAchievementInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMostAchievedAchievementInfo(Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetLeaderboardSortMethod)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamLeaderboardSortMethod*)Z_Param__Result=P_THIS->GetLeaderboardSortMethod(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetLeaderboardName)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLeaderboardName(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetLeaderboardEntryCount)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLeaderboardEntryCount(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetLeaderboardDisplayType)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamLeaderboardDisplayType*)Z_Param__Result=P_THIS->GetLeaderboardDisplayType(Z_Param_SteamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetGlobalStatHistoryFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGlobalStatHistoryFloat(Z_Param_StatName,Z_Param_Out_Data,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetGlobalStatHistoryInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_TARRAY_REF(int64,Z_Param_Out_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGlobalStatHistoryInt64(Z_Param_StatName,Z_Param_Out_Data,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetGlobalStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGlobalStatFloat(Z_Param_StatName,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetGlobalStatInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGlobalStatInt64(Z_Param_StatName,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetDownloadedLeaderboardEntry)
	{
		P_GET_STRUCT(FSteamLeaderboardEntries,Z_Param_SteamLeaderboardEntries);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FSteamLeaderboardEntry,Z_Param_Out_LeaderboardEntry);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Details);
		P_GET_PROPERTY(FIntProperty,Z_Param_DetailsMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDownloadedLeaderboardEntry(Z_Param_SteamLeaderboardEntries,Z_Param_index,Z_Param_Out_LeaderboardEntry,Z_Param_Out_Details,Z_Param_DetailsMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetAchievementName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AchievementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAchievementName(Z_Param_AchievementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetAchievementIcon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAchievementIcon(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetAchievementDisplayAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAchievementDisplayAttribute(Z_Param_Name,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetAchievementAndUnlockTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAchievementAndUnlockTime(Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetAchievementAchievedPercent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAchievementAchievedPercent(Z_Param_Name,Z_Param_Out_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAchievement(Z_Param_Name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execFindOrCreateLeaderboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_LeaderboardSortMethod);
		P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_LeaderboardDisplayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->FindOrCreateLeaderboard(Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_LeaderboardSortMethod),ESteamLeaderboardDisplayType(Z_Param_LeaderboardDisplayType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execFindLeaderboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->FindLeaderboard(Z_Param_LeaderboardName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execDownloadLeaderboardEntries)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_LeaderboardDataRequest);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->DownloadLeaderboardEntries(Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_LeaderboardDataRequest),Z_Param_RangeStart,Z_Param_RangeEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execClearAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearAchievement(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execAttachLeaderboardUGC)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_STRUCT(FUGCHandle,Z_Param_UGC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->AttachLeaderboardUGC(Z_Param_SteamLeaderboard,Z_Param_UGC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUserStats::execGetSteamUserStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamUserStats**)Z_Param__Result=UISteamUserStats::GetSteamUserStats();
		P_NATIVE_END;
	}
	void UISteamUserStats::StaticRegisterNativesUISteamUserStats()
	{
		UClass* Class = UISteamUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachLeaderboardUGC", &UISteamUserStats::execAttachLeaderboardUGC },
			{ "ClearAchievement", &UISteamUserStats::execClearAchievement },
			{ "DownloadLeaderboardEntries", &UISteamUserStats::execDownloadLeaderboardEntries },
			{ "FindLeaderboard", &UISteamUserStats::execFindLeaderboard },
			{ "FindOrCreateLeaderboard", &UISteamUserStats::execFindOrCreateLeaderboard },
			{ "GetAchievement", &UISteamUserStats::execGetAchievement },
			{ "GetAchievementAchievedPercent", &UISteamUserStats::execGetAchievementAchievedPercent },
			{ "GetAchievementAndUnlockTime", &UISteamUserStats::execGetAchievementAndUnlockTime },
			{ "GetAchievementDisplayAttribute", &UISteamUserStats::execGetAchievementDisplayAttribute },
			{ "GetAchievementIcon", &UISteamUserStats::execGetAchievementIcon },
			{ "GetAchievementName", &UISteamUserStats::execGetAchievementName },
			{ "GetDownloadedLeaderboardEntry", &UISteamUserStats::execGetDownloadedLeaderboardEntry },
			{ "GetGlobalStatFloat", &UISteamUserStats::execGetGlobalStatFloat },
			{ "GetGlobalStatHistoryFloat", &UISteamUserStats::execGetGlobalStatHistoryFloat },
			{ "GetGlobalStatHistoryInt64", &UISteamUserStats::execGetGlobalStatHistoryInt64 },
			{ "GetGlobalStatInt64", &UISteamUserStats::execGetGlobalStatInt64 },
			{ "GetLeaderboardDisplayType", &UISteamUserStats::execGetLeaderboardDisplayType },
			{ "GetLeaderboardEntryCount", &UISteamUserStats::execGetLeaderboardEntryCount },
			{ "GetLeaderboardName", &UISteamUserStats::execGetLeaderboardName },
			{ "GetLeaderboardSortMethod", &UISteamUserStats::execGetLeaderboardSortMethod },
			{ "GetMostAchievedAchievementInfo", &UISteamUserStats::execGetMostAchievedAchievementInfo },
			{ "GetNextMostAchievedAchievementInfo", &UISteamUserStats::execGetNextMostAchievedAchievementInfo },
			{ "GetNumAchievements", &UISteamUserStats::execGetNumAchievements },
			{ "GetNumberOfCurrentPlayers", &UISteamUserStats::execGetNumberOfCurrentPlayers },
			{ "GetStatFloat", &UISteamUserStats::execGetStatFloat },
			{ "GetStatInt32", &UISteamUserStats::execGetStatInt32 },
			{ "GetSteamUserStats", &UISteamUserStats::execGetSteamUserStats },
			{ "GetUserAchievement", &UISteamUserStats::execGetUserAchievement },
			{ "GetUserAchievementAndUnlockTime", &UISteamUserStats::execGetUserAchievementAndUnlockTime },
			{ "GetUserStatFloat", &UISteamUserStats::execGetUserStatFloat },
			{ "GetUserStatInt32", &UISteamUserStats::execGetUserStatInt32 },
			{ "IndicateAchievementProgress", &UISteamUserStats::execIndicateAchievementProgress },
			{ "RequestCurrentStats", &UISteamUserStats::execRequestCurrentStats },
			{ "RequestGlobalAchievementPercentages", &UISteamUserStats::execRequestGlobalAchievementPercentages },
			{ "RequestGlobalStats", &UISteamUserStats::execRequestGlobalStats },
			{ "RequestUserStats", &UISteamUserStats::execRequestUserStats },
			{ "ResetAllStats", &UISteamUserStats::execResetAllStats },
			{ "SetAchievement", &UISteamUserStats::execSetAchievement },
			{ "SetStatFloat", &UISteamUserStats::execSetStatFloat },
			{ "SetStatInt32", &UISteamUserStats::execSetStatInt32 },
			{ "StoreStats", &UISteamUserStats::execStoreStats },
			{ "UpdateAvgRateStat", &UISteamUserStats::execUpdateAvgRateStat },
			{ "UploadLeaderboardScore", &UISteamUserStats::execUploadLeaderboardScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics
	{
		struct ISteamUserStats_eventAttachLeaderboardUGC_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			FUGCHandle UGC;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UGC;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventAttachLeaderboardUGC_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::NewProp_UGC = { "UGC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventAttachLeaderboardUGC_Parms, UGC), Z_Construct_UScriptStruct_FUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2683138002
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventAttachLeaderboardUGC_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::NewProp_UGC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Attaches a piece of user generated content the current user's entry on a leaderboard.\n\x09 * This content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using\n\x09 * `1\x09`GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\n\x09 * Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\n\x09 * You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param FUGCHandle UGC - Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardUGCSet_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Attaches a piece of user generated content the current user's entry on a leaderboard.\nThis content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using\n`1   `GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\nOnce attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param FUGCHandle UGC - Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n@return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardUGCSet_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "AttachLeaderboardUGC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::ISteamUserStats_eventAttachLeaderboardUGC_Parms), Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics
	{
		struct ISteamUserStats_eventClearAchievement_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventClearAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventClearAchievement_Parms), &Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Resets the unlock status of an achievement.\n\x09 * This is primarily only ever used for testing.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the Achievement to reset.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Resets the unlock status of an achievement.\nThis is primarily only ever used for testing.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param const FString & Name - The 'API Name' of the Achievement to reset.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "ClearAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::ISteamUserStats_eventClearAchievement_Parms), Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_ClearAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_ClearAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics
	{
		struct ISteamUserStats_eventDownloadLeaderboardEntries_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardDataRequest LeaderboardDataRequest;
			int32 RangeStart;
			int32 RangeEnd;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeaderboardDataRequest_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeaderboardDataRequest;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventDownloadLeaderboardEntries_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardDataRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardDataRequest = { "LeaderboardDataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventDownloadLeaderboardEntries_Parms, LeaderboardDataRequest), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardDataRequest, METADATA_PARAMS(nullptr, 0) }; // 3094654058
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventDownloadLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventDownloadLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventDownloadLeaderboardEntries_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardDataRequest_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_LeaderboardDataRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Fetches a series of leaderboard entries for a specified leaderboard.\n\x09 * You can ask for more entries than exist, then this will return as many as do exist.\n\x09 * If you want to download entries for an arbitrary set of users, such as all of the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\x09 * You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param ESteamLeaderboardDataRequest LeaderboardDataRequest - The type of data request to make.\n\x09 * @param int32 RangeStart - The index to start downloading entries relative to eLeaderboardDataRequest.\n\x09 * @param int32 RangeEnd - The last index to retrieve entries for relative to eLeaderboardDataRequest.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardScoresDownloaded_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Fetches a series of leaderboard entries for a specified leaderboard.\nYou can ask for more entries than exist, then this will return as many as do exist.\nIf you want to download entries for an arbitrary set of users, such as all of the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param ESteamLeaderboardDataRequest LeaderboardDataRequest - The type of data request to make.\n@param int32 RangeStart - The index to start downloading entries relative to eLeaderboardDataRequest.\n@param int32 RangeEnd - The last index to retrieve entries for relative to eLeaderboardDataRequest.\n@return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardScoresDownloaded_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "DownloadLeaderboardEntries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::ISteamUserStats_eventDownloadLeaderboardEntries_Parms), Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics
	{
		struct ISteamUserStats_eventFindLeaderboard_Parms
		{
			FString LeaderboardName;
			FSteamAPICall ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventFindLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventFindLeaderboard_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets a leaderboard by name.\n\x09 * You must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09 *\n\x09 * @param const FString & LeaderboardName - The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardFindResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets a leaderboard by name.\nYou must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\n@param const FString & LeaderboardName - The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n@return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardFindResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "FindLeaderboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::ISteamUserStats_eventFindLeaderboard_Parms), Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_FindLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_FindLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics
	{
		struct ISteamUserStats_eventFindOrCreateLeaderboard_Parms
		{
			FString LeaderboardName;
			ESteamLeaderboardSortMethod LeaderboardSortMethod;
			ESteamLeaderboardDisplayType LeaderboardDisplayType;
			FSteamAPICall ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeaderboardSortMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeaderboardSortMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeaderboardDisplayType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeaderboardDisplayType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventFindOrCreateLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardSortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardSortMethod = { "LeaderboardSortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventFindOrCreateLeaderboard_Parms, LeaderboardSortMethod), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) }; // 3889509117
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardDisplayType = { "LeaderboardDisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventFindOrCreateLeaderboard_Parms, LeaderboardDisplayType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) }; // 2524954045
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventFindOrCreateLeaderboard_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardSortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardSortMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets a leaderboard by name, it will create it if it's not yet created.\n\x09 * You must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09 * Leaderboards created with this function will not automatically show up in the Steam Community. You must manually set the Community Name field in the App Admin panel of the Steamworks website. As such it's generally\n\x09 * recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\n\x09 * You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone for eLeaderboardDisplayType as this is undefined behavior.\n\x09 *\n\x09 * @param const FString & LeaderboardName - The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n\x09 * @param ESteamLeaderboardSortMethod LeaderboardSortMethod - The sort order of the new leaderboard if it's created.\n\x09 * @param ESteamLeaderboardDisplayType LeaderboardDisplayType - The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardFindResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets a leaderboard by name, it will create it if it's not yet created.\nYou must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\nLeaderboards created with this function will not automatically show up in the Steam Community. You must manually set the Community Name field in the App Admin panel of the Steamworks website. As such it's generally\nrecommended to prefer creating the leaderboards in the App Admin panel on the Steamworks website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\nYou should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone for eLeaderboardDisplayType as this is undefined behavior.\n\n@param const FString & LeaderboardName - The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n@param ESteamLeaderboardSortMethod LeaderboardSortMethod - The sort order of the new leaderboard if it's created.\n@param ESteamLeaderboardDisplayType LeaderboardDisplayType - The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n@return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardFindResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "FindOrCreateLeaderboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::ISteamUserStats_eventFindOrCreateLeaderboard_Parms), Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics
	{
		struct ISteamUserStats_eventGetAchievement_Parms
		{
			FString Name;
			bool bAchieved;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the unlock status of the Achievement.\n\x09 * The equivalent function for other users is GetUserAchievement.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param bool & bAchieved - Returns the unlock status of the achievement.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * If the call is successful then the unlock status is returned via the pbAchieved parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\nThe equivalent function for other users is GetUserAchievement.\n\n@param const FString & Name - The 'API Name' of the achievement.\n@param bool & bAchieved - Returns the unlock status of the achievement.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestCurrentStats has completed and successfully returned its callback.\nThe 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nIf the call is successful then the unlock status is returned via the pbAchieved parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::ISteamUserStats_eventGetAchievement_Parms), Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics
	{
		struct ISteamUserStats_eventGetAchievementAchievedPercent_Parms
		{
			FString Name;
			float Percent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementAchievedPercent_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementAchievedPercent_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetAchievementAchievedPercent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetAchievementAchievedPercent_Parms), &Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Returns the percentage of users who have unlocked the specified achievement.\n\x09 * You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param float & Percent - Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09 * @return bool - Returns true upon success; otherwise false if RequestGlobalAchievementPercentages has not been called or if the specified 'API Name' does not exist in the global achievement percentages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Returns the percentage of users who have unlocked the specified achievement.\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\n@param const FString & Name - The 'API Name' of the achievement.\n@param float & Percent - Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@return bool - Returns true upon success; otherwise false if RequestGlobalAchievementPercentages has not been called or if the specified 'API Name' does not exist in the global achievement percentages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetAchievementAchievedPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::ISteamUserStats_eventGetAchievementAchievedPercent_Parms), Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics
	{
		struct ISteamUserStats_eventGetAchievementAndUnlockTime_Parms
		{
			FString Name;
			bool bAchieved;
			int32 UnlockTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the achievement status, and the time it was unlocked if unlocked.\n\x09 * If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09 * The equivalent function for other users is GetUserAchievementAndUnlockTime.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param bool & bAchieved - Returns whether the current user has unlocked the achievement.\n\x09 * @param int32 & UnlockTime - Returns the time that the achievement was unlocked; if pbAchieved is true.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * If the call is successful then the achieved status and unlock time are provided via the arguments pbAchieved and punUnlockTime.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for other users is GetUserAchievementAndUnlockTime.\n\n@param const FString & Name - The 'API Name' of the achievement.\n@param bool & bAchieved - Returns whether the current user has unlocked the achievement.\n@param int32 & UnlockTime - Returns the time that the achievement was unlocked; if pbAchieved is true.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestCurrentStats has completed and successfully returned its callback.\nThe 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nIf the call is successful then the achieved status and unlock time are provided via the arguments pbAchieved and punUnlockTime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetAchievementAndUnlockTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::ISteamUserStats_eventGetAchievementAndUnlockTime_Parms), Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics
	{
		struct ISteamUserStats_eventGetAchievementDisplayAttribute_Parms
		{
			FString Name;
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementDisplayAttribute_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementDisplayAttribute_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\x09 * This receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\x09 * \"name\" to retrive the localized achievement name in UTF8\n\x09 * \"desc\" to retrive the localized achievement description in UTF8\n\x09 * \"hidden\" for retrieving if an achievement is hidden. Returns \"0\" when not hidden, \"1\" when hidden\n\x09 * This localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param const FString & Key - The 'key' to get a value for.\n\x09 * @return FString - This function returns the value as a string upon success if all of the following conditions are met; otherwise, an empty string: \"\".\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * The specified pchKey is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\nThis receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\"name\" to retrive the localized achievement name in UTF8\n\"desc\" to retrive the localized achievement description in UTF8\n\"hidden\" for retrieving if an achievement is hidden. Returns \"0\" when not hidden, \"1\" when hidden\nThis localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\n@param const FString & Name - The 'API Name' of the achievement.\n@param const FString & Key - The 'key' to get a value for.\n@return FString - This function returns the value as a string upon success if all of the following conditions are met; otherwise, an empty string: \"\".\nRequestCurrentStats has completed and successfully returned its callback.\nThe specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nThe specified pchKey is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetAchievementDisplayAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::ISteamUserStats_eventGetAchievementDisplayAttribute_Parms), Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics
	{
		struct ISteamUserStats_eventGetAchievementIcon_Parms
		{
			FString Name;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementIcon_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementIcon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the icon for an achievement.\n\x09 * Triggers a UserAchievementIconFetched_t callback.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @return int32 - The image is returned as a handle to be used with ISteamUtils::GetImageRGBA to get the actual image data.\n\x09 * An invalid handle of 0 will be returned under the following conditions:\n\x09 * RequestCurrentStats has not completed and successfully returned its callback.\n\x09 * The specified achievement does not exist in App Admin on the Steamworks website, or the changes are not published.\n\x09 * Steam is still fetching the image data from the server. This will trigger a UserAchievementIconFetched_t callback which will notify you when the image data is ready and provide you with a new handle.\n\x09 * If the m_nIconHandle in the callback is still 0, then there is no image set for the specified achievement.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the icon for an achievement.\nTriggers a UserAchievementIconFetched_t callback.\n\n@param const FString & Name - The 'API Name' of the achievement.\n@return int32 - The image is returned as a handle to be used with ISteamUtils::GetImageRGBA to get the actual image data.\nAn invalid handle of 0 will be returned under the following conditions:\nRequestCurrentStats has not completed and successfully returned its callback.\nThe specified achievement does not exist in App Admin on the Steamworks website, or the changes are not published.\nSteam is still fetching the image data from the server. This will trigger a UserAchievementIconFetched_t callback which will notify you when the image data is ready and provide you with a new handle.\nIf the m_nIconHandle in the callback is still 0, then there is no image set for the specified achievement." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetAchievementIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::ISteamUserStats_eventGetAchievementIcon_Parms), Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics
	{
		struct ISteamUserStats_eventGetAchievementName_Parms
		{
			int32 AchievementIndex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AchievementIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::NewProp_AchievementIndex = { "AchievementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementName_Parms, AchievementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetAchievementName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::NewProp_AchievementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\x09 * This function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\n\x09 * In general games should not need these functions as they should have the list of achievements compiled into them.\n\x09 *\n\x09 * @param int32 AchievementIndex - Index of the achievement.\n\x09 * @return FString - The 'API Name' of the achievement, returns an empty string if iAchievement is not a valid index. RequestCurrentStats must have been called and successfully returned its callback, and the current\n\x09 * App ID must have achievements.\n\x09 */" },
		{ "CPP_Default_AchievementIndex", "0" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\nThis function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\nIn general games should not need these functions as they should have the list of achievements compiled into them.\n\n@param int32 AchievementIndex - Index of the achievement.\n@return FString - The 'API Name' of the achievement, returns an empty string if iAchievement is not a valid index. RequestCurrentStats must have been called and successfully returned its callback, and the current\nApp ID must have achievements." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetAchievementName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::ISteamUserStats_eventGetAchievementName_Parms), Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetAchievementName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetAchievementName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics
	{
		struct ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms
		{
			FSteamLeaderboardEntries SteamLeaderboardEntries;
			int32 index;
			FSteamLeaderboardEntry LeaderboardEntry;
			TArray<int32> Details;
			int32 DetailsMax;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntry;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Details_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DetailsMax;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(nullptr, 0) }; // 1114286822
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry = { "LeaderboardEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntry), Z_Construct_UScriptStruct_FSteamLeaderboardEntry, METADATA_PARAMS(nullptr, 0) }; // 526720548
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_DetailsMax = { "DetailsMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms, DetailsMax), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms), &Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_SteamLeaderboardEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_DetailsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Retrieves the data for a single leaderboard entry.\n\x09 * You should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries. Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t handle will become invalid.\n\x09 * Optionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\x09 *\n\x09 * @param FSteamLeaderboardEntries SteamLeaderboardEntries - A leaderboard entries handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n\x09 * @param int32 index - The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n\x09 * @param FSteamLeaderboardEntry & LeaderboardEntry - Variable where the entry will be returned to.\n\x09 * @param TArray<int32> & Details - A preallocated array where the details of this entry get returned into.\n\x09 * @param int32 DetailsMax - The length of the pDetails array.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * hSteamLeaderboardEntries must be a valid handle from the last received LeaderboardScoresDownloaded_t call result.\n\x09 * index must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount\n\x09 * If the call is successful then the entry is returned via the parameter pLeaderboardEntry and if cDetailsMax is not 0 then pDetails is filled with the unlock details.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Retrieves the data for a single leaderboard entry.\nYou should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries. Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t handle will become invalid.\nOptionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\n@param FSteamLeaderboardEntries SteamLeaderboardEntries - A leaderboard entries handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n@param int32 index - The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n@param FSteamLeaderboardEntry & LeaderboardEntry - Variable where the entry will be returned to.\n@param TArray<int32> & Details - A preallocated array where the details of this entry get returned into.\n@param int32 DetailsMax - The length of the pDetails array.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nhSteamLeaderboardEntries must be a valid handle from the last received LeaderboardScoresDownloaded_t call result.\nindex must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount\nIf the call is successful then the entry is returned via the parameter pLeaderboardEntry and if cDetailsMax is not 0 then pDetails is filled with the unlock details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetDownloadedLeaderboardEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::ISteamUserStats_eventGetDownloadedLeaderboardEntry_Parms), Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics
	{
		struct ISteamUserStats_eventGetGlobalStatFloat_Parms
		{
			FString StatName;
			float Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatFloat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetGlobalStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetGlobalStatFloat_Parms), &Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the lifetime totals for an aggregated stat.\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestGlobalStats has completed and successfully returned its callback.\n\x09 * The type matches the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestGlobalStats has completed and successfully returned its callback.\nThe type matches the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetGlobalStatFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::ISteamUserStats_eventGetGlobalStatFloat_Parms), Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics
	{
		struct ISteamUserStats_eventGetGlobalStatHistoryFloat_Parms
		{
			FString StatName;
			TArray<float> Data;
			int32 Size;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryFloat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryFloat_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryFloat_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the daily history for an aggregated stat. pData will be filled with daily values, starting with today. So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param TArray<float> & Data - Array that the daily history will be returned into.\n\x09 * @param int32 Size - The total size in bytes of the pData array.\n\x09 * @return int32 - The number of elements returned in the pData array.\n\x09 * A value of 0 indicates failure for one of the following reasons:\n\x09 * The specified stat does not exist in App Admin on the Steamworks website, or the changes aren't published.\n\x09 * RequestGlobalStats has not been called or returned its callback, with at least 1 day of history.\n\x09 * The type does not match the type listed in the App Admin panel of the Steamworks website.\n\x09 * There is no history available.\n\x09 */" },
		{ "CPP_Default_Size", "10" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the daily history for an aggregated stat. pData will be filled with daily values, starting with today. So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param TArray<float> & Data - Array that the daily history will be returned into.\n@param int32 Size - The total size in bytes of the pData array.\n@return int32 - The number of elements returned in the pData array.\nA value of 0 indicates failure for one of the following reasons:\nThe specified stat does not exist in App Admin on the Steamworks website, or the changes aren't published.\nRequestGlobalStats has not been called or returned its callback, with at least 1 day of history.\nThe type does not match the type listed in the App Admin panel of the Steamworks website.\nThere is no history available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetGlobalStatHistoryFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::ISteamUserStats_eventGetGlobalStatHistoryFloat_Parms), Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics
	{
		struct ISteamUserStats_eventGetGlobalStatHistoryInt64_Parms
		{
			FString StatName;
			TArray<int64> Data;
			int32 Size;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryInt64_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_StatName_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryInt64_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryInt64_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatHistoryInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the daily history for an aggregated stat. pData will be filled with daily values, starting with today. So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param TArray<int64> & Data - Array that the daily history will be returned into.\n\x09 * @param int32 Size - The total size in bytes of the pData array.\n\x09 * @return int32 - The number of elements returned in the pData array.\n\x09 * A value of 0 indicates failure for one of the following reasons:\n\x09 * The specified stat does not exist in App Admin on the Steamworks website, or the changes aren't published.\n\x09 * RequestGlobalStats has not been called or returned its callback, with at least 1 day of history.\n\x09 * The type does not match the type listed in the App Admin panel of the Steamworks website.\n\x09 * There is no history available.\n\x09 */" },
		{ "CPP_Default_Size", "10" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the daily history for an aggregated stat. pData will be filled with daily values, starting with today. So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param TArray<int64> & Data - Array that the daily history will be returned into.\n@param int32 Size - The total size in bytes of the pData array.\n@return int32 - The number of elements returned in the pData array.\nA value of 0 indicates failure for one of the following reasons:\nThe specified stat does not exist in App Admin on the Steamworks website, or the changes aren't published.\nRequestGlobalStats has not been called or returned its callback, with at least 1 day of history.\nThe type does not match the type listed in the App Admin panel of the Steamworks website.\nThere is no history available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetGlobalStatHistoryInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::ISteamUserStats_eventGetGlobalStatHistoryInt64_Parms), Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics
	{
		struct ISteamUserStats_eventGetGlobalStatInt64_Parms
		{
			FString StatName;
			int64 Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatInt64_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_StatName_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetGlobalStatInt64_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetGlobalStatInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetGlobalStatInt64_Parms), &Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the lifetime totals for an aggregated stat.\n\x09 * You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param int64 & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestGlobalStats has completed and successfully returned its callback.\n\x09 * The type matches the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param const FString & StatName - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param int64 & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestGlobalStats has completed and successfully returned its callback.\nThe type matches the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetGlobalStatInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::ISteamUserStats_eventGetGlobalStatInt64_Parms), Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics
	{
		struct ISteamUserStats_eventGetLeaderboardDisplayType_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardDisplayType ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardDisplayType_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardDisplayType_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) }; // 2524954045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Returns the display type of a leaderboard handle.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @return ESteamLeaderboardDisplayType - The display type of the leaderboard. Returns k_ELeaderboardDisplayTypeNone if the leaderboard handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Returns the display type of a leaderboard handle.\n\n@param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@return ESteamLeaderboardDisplayType - The display type of the leaderboard. Returns k_ELeaderboardDisplayTypeNone if the leaderboard handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetLeaderboardDisplayType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::ISteamUserStats_eventGetLeaderboardDisplayType_Parms), Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics
	{
		struct ISteamUserStats_eventGetLeaderboardEntryCount_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardEntryCount_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardEntryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Returns the total number of entries in a leaderboard.\n\x09 * This is cached on a per leaderboard basis upon the first call to FindLeaderboard or FindOrCreateLeaderboard and is refreshed on each successful call to DownloadLeaderboardEntries, DownloadLeaderboardEntriesForUsers, and UploadLeaderboardScore.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - \x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @return int32 - The number of entries in the leaderboard. Returns 0 if the leaderboard handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Returns the total number of entries in a leaderboard.\nThis is cached on a per leaderboard basis upon the first call to FindLeaderboard or FindOrCreateLeaderboard and is refreshed on each successful call to DownloadLeaderboardEntries, DownloadLeaderboardEntriesForUsers, and UploadLeaderboardScore.\n\n@param FSteamLeaderboard SteamLeaderboard -  A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@return int32 - The number of entries in the leaderboard. Returns 0 if the leaderboard handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetLeaderboardEntryCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::ISteamUserStats_eventGetLeaderboardEntryCount_Parms), Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics
	{
		struct ISteamUserStats_eventGetLeaderboardName_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardName_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Returns the name of a leaderboard handle.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @return FString - The name of the leaderboard. Returns an empty string if the leaderboard handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Returns the name of a leaderboard handle.\n\n@param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@return FString - The name of the leaderboard. Returns an empty string if the leaderboard handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetLeaderboardName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::ISteamUserStats_eventGetLeaderboardName_Parms), Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics
	{
		struct ISteamUserStats_eventGetLeaderboardSortMethod_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardSortMethod ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardSortMethod_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetLeaderboardSortMethod_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) }; // 3889509117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Returns the sort order of a leaderboard handle.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @return ESteamLeaderboardSortMethod - The sort method of the leaderboard. Returns k_ELeaderboardSortMethodNone if the leaderboard handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Returns the sort order of a leaderboard handle.\n\n@param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@return ESteamLeaderboardSortMethod - The sort method of the leaderboard. Returns k_ELeaderboardSortMethodNone if the leaderboard handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetLeaderboardSortMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::ISteamUserStats_eventGetLeaderboardSortMethod_Parms), Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics
	{
		struct ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms
		{
			FString Name;
			float Percent;
			bool bAchieved;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the info on the most achieved achievement for the game.\n\x09 * You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param FString & Name - String buffer to return the 'API Name' of the achievement into.\n\x09 * @param float & Percent - Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09 * @param bool & bAchieved - Variable to return whether the current user has unlocked this achievement.\n\x09 * @return int32 - Returns -1 if RequestGlobalAchievementPercentages has not been called or if there are no global achievement percentages for this app Id.\n\x09 * If the call is successful it returns an iterator which should be used with GetNextMostAchievedAchievementInfo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the info on the most achieved achievement for the game.\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\n@param FString & Name - String buffer to return the 'API Name' of the achievement into.\n@param float & Percent - Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param bool & bAchieved - Variable to return whether the current user has unlocked this achievement.\n@return int32 - Returns -1 if RequestGlobalAchievementPercentages has not been called or if there are no global achievement percentages for this app Id.\nIf the call is successful it returns an iterator which should be used with GetNextMostAchievedAchievementInfo." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetMostAchievedAchievementInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::ISteamUserStats_eventGetMostAchievedAchievementInfo_Parms), Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics
	{
		struct ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms
		{
			int32 IteratorPrevious;
			FString Name;
			float Percent;
			bool bAchieved;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IteratorPrevious;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious = { "IteratorPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, IteratorPrevious), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the info on the next most achieved achievement for the game.\n\x09 * You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param int32 IteratorPrevious - Iterator returned from the previous call to this function or from GetMostAchievedAchievementInfo\n\x09 * @param FString & Name - String buffer to return the 'API Name' of the achievement into.\n\x09 * @param float & Percent - Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09 * @param bool & bAchieved - Variable to return whether the current user has unlocked this achievement.\n\x09 * @return int32 - Returns -1 if RequestGlobalAchievementPercentages has not been called or if there are no global achievement percentages for this app Id.\n\x09 * If the call is successful it returns an iterator which should be used with subsequent calls to this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the info on the next most achieved achievement for the game.\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\n@param int32 IteratorPrevious - Iterator returned from the previous call to this function or from GetMostAchievedAchievementInfo\n@param FString & Name - String buffer to return the 'API Name' of the achievement into.\n@param float & Percent - Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param bool & bAchieved - Variable to return whether the current user has unlocked this achievement.\n@return int32 - Returns -1 if RequestGlobalAchievementPercentages has not been called or if there are no global achievement percentages for this app Id.\nIf the call is successful it returns an iterator which should be used with subsequent calls to this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetNextMostAchievedAchievementInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::ISteamUserStats_eventGetNextMostAchievedAchievementInfo_Parms), Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics
	{
		struct ISteamUserStats_eventGetNumAchievements_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetNumAchievements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\x09 * This is used for iterating through all of the achievements with GetAchievementName.\n\x09 * In general games should not need these functions because they should have a list of existing achievements compiled into them.\n\x09 *\n\x09 * @return int32 - The number of achievements. Returns 0 if RequestCurrentStats has not been called and successfully returned its callback, or the current App ID has no achievements.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Get the number of achievements defined in the App Admin panel of the Steamworks website.\nThis is used for iterating through all of the achievements with GetAchievementName.\nIn general games should not need these functions because they should have a list of existing achievements compiled into them.\n\n@return int32 - The number of achievements. Returns 0 if RequestCurrentStats has not been called and successfully returned its callback, or the current App ID has no achievements." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetNumAchievements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::ISteamUserStats_eventGetNumAchievements_Parms), Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetNumAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetNumAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics
	{
		struct ISteamUserStats_eventGetNumberOfCurrentPlayers_Parms
		{
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetNumberOfCurrentPlayers_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\x09 *\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a NumberOfCurrentPlayers_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\n@return FSteamAPICall - SteamAPICall_t to be used with a NumberOfCurrentPlayers_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::ISteamUserStats_eventGetNumberOfCurrentPlayers_Parms), Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics
	{
		struct ISteamUserStats_eventGetStatFloat_Parms
		{
			FString Name;
			float Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetStatFloat_Parms), &Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the current user.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09 * To receive stats for other users use GetUserStat.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetStatFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::ISteamUserStats_eventGetStatFloat_Parms), Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics
	{
		struct ISteamUserStats_eventGetStatInt32_Parms
		{
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetStatInt32_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetStatInt32_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetStatInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetStatInt32_Parms), &Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the current user.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09 * To receive stats for other users use GetUserStat.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param int32 & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param int32 & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetStatInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::ISteamUserStats_eventGetStatInt32_Parms), Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetStatInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetStatInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics
	{
		struct ISteamUserStats_eventGetSteamUserStats_Parms
		{
			UISteamUserStats* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetSteamUserStats_Parms, ReturnValue), Z_Construct_UClass_UISteamUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "GetSteamUserStats" },
		{ "DisplayName", "Get Steam User Stats" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetSteamUserStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::ISteamUserStats_eventGetSteamUserStats_Parms), Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics
	{
		struct ISteamUserStats_eventGetUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool bAchieved;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the unlock status of the Achievement.\n\x09 * The equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the achievement for.\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param bool & bAchieved - Returns the unlock status of the achievement.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * The 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * If the call is successful then the unlock status is returned via the pbAchieved parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\nThe equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the achievement for.\n@param const FString & Name - The 'API Name' of the achievement.\n@param bool & bAchieved - Returns the unlock status of the achievement.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestUserStats has completed and successfully returned its callback.\nThe 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nIf the call is successful then the unlock status is returned via the pbAchieved parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetUserAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::ISteamUserStats_eventGetUserAchievement_Parms), Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics
	{
		struct ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool bAchieved;
			int32 UnlockTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the achievement status, and the time it was unlocked if unlocked.\n\x09 * If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09 * The equivalent function for the local user is GetAchievementAndUnlockTime.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the achievement for.\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param bool & bAchieved - Returns whether the current user has unlocked the achievement.\n\x09 * @param int32 & UnlockTime - Returns the time that the achievement was unlocked; if pbAchieved is true.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * The 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * If the call is successful then the achieved status and unlock time are provided via the arguments pbAchieved and punUnlockTime.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for the local user is GetAchievementAndUnlockTime.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the achievement for.\n@param const FString & Name - The 'API Name' of the achievement.\n@param bool & bAchieved - Returns whether the current user has unlocked the achievement.\n@param int32 & UnlockTime - Returns the time that the achievement was unlocked; if pbAchieved is true.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestUserStats has completed and successfully returned its callback.\nThe 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nIf the call is successful then the achieved status and unlock time are provided via the arguments pbAchieved and punUnlockTime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetUserAchievementAndUnlockTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::ISteamUserStats_eventGetUserAchievementAndUnlockTime_Parms), Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics
	{
		struct ISteamUserStats_eventGetUserStatFloat_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			float Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\n\x09 * The equivalent function for the local user is GetStat, the equivalent function for game servers is ISteamGameServerStats::GetUserStat.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * The type does not match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\nThe equivalent function for the local user is GetStat, the equivalent function for game servers is ISteamGameServerStats::GetUserStat.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback.\nThe type does not match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetUserStatFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::ISteamUserStats_eventGetUserStatFloat_Parms), Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics
	{
		struct ISteamUserStats_eventGetUserStatInt32_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserStatInt32_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserStatInt32_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventGetUserStatInt32_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventGetUserStatInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventGetUserStatInt32_Parms), &Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\n\x09 * The equivalent function for the local user is GetStat, the equivalent function for game servers is ISteamGameServerStats::GetUserStat.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param int32 & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * The type does not match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\nThe equivalent function for the local user is GetStat, the equivalent function for game servers is ISteamGameServerStats::GetUserStat.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param int32 & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback.\nThe type does not match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "GetUserStatInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::ISteamUserStats_eventGetUserStatInt32_Parms), Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics
	{
		struct ISteamUserStats_eventIndicateAchievementProgress_Parms
		{
			FString Name;
			int32 CurProgress;
			int32 MaxProgress;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurProgress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventIndicateAchievementProgress_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_CurProgress = { "CurProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventIndicateAchievementProgress_Parms, CurProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventIndicateAchievementProgress_Parms, MaxProgress), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventIndicateAchievementProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventIndicateAchievementProgress_Parms), &Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_CurProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Shows the user a pop-up notification with the current progress of an achievement.\n\x09 * Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\x09 * Triggers a UserStatsStored_t callback.\n\x09 * Triggers a UserAchievementStored_t callback.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param int32 CurProgress - The current progress.\n\x09 * @param int32 MaxProgress - The progress required to unlock the achievement.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * The specified achievement is not already unlocked.\n\x09 * nCurProgress is less than nMaxProgress.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Shows the user a pop-up notification with the current progress of an achievement.\nCalling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\nTriggers a UserStatsStored_t callback.\nTriggers a UserAchievementStored_t callback.\n\n@param const FString & Name - The 'API Name' of the achievement.\n@param int32 CurProgress - The current progress.\n@param int32 MaxProgress - The progress required to unlock the achievement.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestCurrentStats has completed and successfully returned its callback.\nThe specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nThe specified achievement is not already unlocked.\nnCurProgress is less than nMaxProgress." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "IndicateAchievementProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::ISteamUserStats_eventIndicateAchievementProgress_Parms), Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics
	{
		struct ISteamUserStats_eventRequestCurrentStats_Parms
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
	void Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventRequestCurrentStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventRequestCurrentStats_Parms), &Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Asynchronously request the user's current stats and achievements from the server.\n\x09 * You must always call this first to get the initial status of stats and achievements.\n\x09 * Only after the resulting callback comes back can you start calling the rest of the stats and achievement functions for the current user.\n\x09 * The equivalent function for other users is RequestUserStats.\n\x09 * Triggers a UserStatsReceived_t callback.\n\x09 *\n\x09 * @return bool - Only returns false if there is no user logged in; otherwise, true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Asynchronously request the user's current stats and achievements from the server.\nYou must always call this first to get the initial status of stats and achievements.\nOnly after the resulting callback comes back can you start calling the rest of the stats and achievement functions for the current user.\nThe equivalent function for other users is RequestUserStats.\nTriggers a UserStatsReceived_t callback.\n\n@return bool - Only returns false if there is no user logged in; otherwise, true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "RequestCurrentStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::ISteamUserStats_eventRequestCurrentStats_Parms), Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics
	{
		struct ISteamUserStats_eventRequestGlobalAchievementPercentages_Parms
		{
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventRequestGlobalAchievementPercentages_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 *\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a GlobalAchievementPercentagesReady_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\n@return FSteamAPICall - SteamAPICall_t to be used with a GlobalAchievementPercentagesReady_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "RequestGlobalAchievementPercentages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::ISteamUserStats_eventRequestGlobalAchievementPercentages_Parms), Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics
	{
		struct ISteamUserStats_eventRequestGlobalStats_Parms
		{
			int32 HistoryDays;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventRequestGlobalStats_Parms, HistoryDays), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventRequestGlobalStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param int32 HistoryDays - How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a GlobalStatsReceived_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\n@param int32 HistoryDays - How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n@return FSteamAPICall - SteamAPICall_t to be used with a GlobalStatsReceived_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "RequestGlobalStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::ISteamUserStats_eventRequestGlobalStats_Parms), Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics
	{
		struct ISteamUserStats_eventRequestUserStats_Parms
		{
			FSteamID SteamIDUser;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventRequestUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventRequestUserStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Asynchronously downloads stats and achievements for the specified user from the server.\n\x09 * These stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\n\x09 * To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a UserStatsUnloaded_t callback is sent.\n\x09 * After receiving this callback the user's stats will be unavailable until this function is called again.\n\x09 * The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to request stats for.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a UserStatsReceived_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\nThese stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\nTo keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a UserStatsUnloaded_t callback is sent.\nAfter receiving this callback the user's stats will be unavailable until this function is called again.\nThe equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to request stats for.\n@return FSteamAPICall - SteamAPICall_t to be used with a UserStatsReceived_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "RequestUserStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::ISteamUserStats_eventRequestUserStats_Parms), Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_RequestUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_RequestUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics
	{
		struct ISteamUserStats_eventResetAllStats_Parms
		{
			bool bAchievementsToo;
			bool ReturnValue;
		};
		static void NewProp_bAchievementsToo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchievementsToo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit(void* Obj)
	{
		((ISteamUserStats_eventResetAllStats_Parms*)Obj)->bAchievementsToo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo = { "bAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventResetAllStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Resets the current users stats and, optionally achievements.\n\x09 * This automatically calls StoreStats to persist the changes to the server. This should typically only be used for testing purposes during development. Ensure that you sync up your stats with the new default values\n\x09 * provided by Steam after calling this by calling RequestCurrentStats.\n\x09 *\n\x09 * @param bool bAchievementsToo - Also reset the user's achievements?\n\x09 * @return bool - true indicating success if RequestCurrentStats has been called and successfully returned its callback; otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Resets the current users stats and, optionally achievements.\nThis automatically calls StoreStats to persist the changes to the server. This should typically only be used for testing purposes during development. Ensure that you sync up your stats with the new default values\nprovided by Steam after calling this by calling RequestCurrentStats.\n\n@param bool bAchievementsToo - Also reset the user's achievements?\n@return bool - true indicating success if RequestCurrentStats has been called and successfully returned its callback; otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "ResetAllStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::ISteamUserStats_eventResetAllStats_Parms), Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_ResetAllStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_ResetAllStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics
	{
		struct ISteamUserStats_eventSetAchievement_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventSetAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventSetAchievement_Parms), &Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Unlocks an achievement.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 * You can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set. This call only modifies Steam's in-memory state so it is quite cheap.\n\x09 * To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the Achievement to unlock.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Unlocks an achievement.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nYou can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set. This call only modifies Steam's in-memory state so it is quite cheap.\nTo send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param const FString & Name - The 'API Name' of the Achievement to unlock.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "SetAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::ISteamUserStats_eventSetAchievement_Parms), Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_SetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_SetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics
	{
		struct ISteamUserStats_eventSetStatFloat_Parms
		{
			FString Name;
			float Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventSetStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventSetStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventSetStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventSetStatFloat_Parms), &Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the current user.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09 * To submit the stats to the server you must call StoreStats.\n\x09 * If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "SetStatFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::ISteamUserStats_eventSetStatFloat_Parms), Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_SetStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_SetStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics
	{
		struct ISteamUserStats_eventSetStatInt32_Parms
		{
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventSetStatInt32_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventSetStatInt32_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventSetStatInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventSetStatInt32_Parms), &Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the current user.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09 * To submit the stats to the server you must call StoreStats.\n\x09 * If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param int32 Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param int32 Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "SetStatInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::ISteamUserStats_eventSetStatInt32_Parms), Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_SetStatInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_SetStatInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics
	{
		struct ISteamUserStats_eventStoreStats_Parms
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
	void Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventStoreStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventStoreStats_Parms), &Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Send the changed stats and achievements data to the server for permanent storage.\n\x09 * If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09 * This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds. You should only be calling this during major state changes such as the end of a round, the map changing,\n\x09 * or the user leaving a server. This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\n\x09 * If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\x09 * You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09 * Triggers a UserStatsStored_t callback.\n\x09 * Triggers a UserAchievementStored_t callback.\n\x09 *\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The current game has stats associated with it in the Steamworks Partner backend, and those stats are published.\n\x09 * If the call is successful you will receive a UserStatsStored_t callback.\n\x09 * If m_eResult has a result of k_EResultInvalidParam, then one or more stats uploaded has been rejected, either because they broke constraints or were out of date. In this case the server sends back updated values\n\x09 * and the stats should be updated locally to keep in sync.\n\x09 * If one or more achievements has been unlocked then this will also trigger a UserAchievementStored_t callback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage.\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds. You should only be calling this during major state changes such as the end of a round, the map changing,\nor the user leaving a server. This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\nTriggers a UserStatsStored_t callback.\nTriggers a UserAchievementStored_t callback.\n\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestCurrentStats has completed and successfully returned its callback.\nThe current game has stats associated with it in the Steamworks Partner backend, and those stats are published.\nIf the call is successful you will receive a UserStatsStored_t callback.\nIf m_eResult has a result of k_EResultInvalidParam, then one or more stats uploaded has been rejected, either because they broke constraints or were out of date. In this case the server sends back updated values\nand the stats should be updated locally to keep in sync.\nIf one or more achievements has been unlocked then this will also trigger a UserAchievementStored_t callback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "StoreStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::ISteamUserStats_eventStoreStats_Parms), Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_StoreStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_StoreStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics
	{
		struct ISteamUserStats_eventUpdateAvgRateStat_Parms
		{
			FString Name;
			float CountThisSession;
			float SessionLength;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUpdateAvgRateStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUpdateAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUpdateAvgRateStat_Parms, SessionLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUserStats_eventUpdateAvgRateStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUserStats_eventUpdateAvgRateStat_Parms), &Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Updates an AVGRATE stat with new values.\n\x09 * You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09 * To submit the stats to the server you must call StoreStats.\n\x09 * If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09 *\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float CountThisSession - The value accumulation since the last call to this function.\n\x09 * @param float SessionLength - The amount of time in seconds since the last call to this function.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestCurrentStats has completed and successfully returned its callback.\n\x09 * The type must be AVGRATE in the Steamworks Partner backend.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Updates an AVGRATE stat with new values.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float CountThisSession - The value accumulation since the last call to this function.\n@param float SessionLength - The amount of time in seconds since the last call to this function.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestCurrentStats has completed and successfully returned its callback.\nThe type must be AVGRATE in the Steamworks Partner backend." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "UpdateAvgRateStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::ISteamUserStats_eventUpdateAvgRateStat_Parms), Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics
	{
		struct ISteamUserStats_eventUploadLeaderboardScore_Parms
		{
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod;
			int32 Score;
			TArray<int32> ScoreDetails;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeaderboardUploadScoreMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeaderboardUploadScoreMethod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUploadLeaderboardScore_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) }; // 1972831675
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_LeaderboardUploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_LeaderboardUploadScoreMethod = { "LeaderboardUploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUploadLeaderboardScore_Parms, LeaderboardUploadScoreMethod), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(nullptr, 0) }; // 2102717771
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUploadLeaderboardScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUploadLeaderboardScore_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUserStats_eventUploadLeaderboardScore_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_LeaderboardUploadScoreMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_LeaderboardUploadScoreMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Uploads a user score to a specified leaderboard.\n\x09 * Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard you could store the timestamps when the player hits each checkpoint.\n\x09 * If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\n\x09 * Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\x09 *\n\x09 * @param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09 * @param ESteamLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod - Do you want to force the score to change, or keep the previous score if it was better?\n\x09 * @param int32 Score - The score to upload.\n\x09 * @param const TArray<int32> & ScoreDetails - Optional: Array containing the details surrounding the unlocking of this score.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardScoreUploaded_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Uploads a user score to a specified leaderboard.\nDetails are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard you could store the timestamps when the player hits each checkpoint.\nIf you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\nUploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\n@param FSteamLeaderboard SteamLeaderboard - A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param ESteamLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod - Do you want to force the score to change, or keep the previous score if it was better?\n@param int32 Score - The score to upload.\n@param const TArray<int32> & ScoreDetails - Optional: Array containing the details surrounding the unlocking of this score.\n@return FSteamAPICall - SteamAPICall_t to be used with a LeaderboardScoreUploaded_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUserStats, nullptr, "UploadLeaderboardScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::ISteamUserStats_eventUploadLeaderboardScore_Parms), Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamUserStats);
	UClass* Z_Construct_UClass_UISteamUserStats_NoRegister()
	{
		return UISteamUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UISteamUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGlobalAchievementPercentagesReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGlobalAchievementPercentagesReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGlobalStatsReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGlobalStatsReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLeaderboardFindResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLeaderboardFindResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLeaderboardScoresDownloaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLeaderboardScoresDownloaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLeaderboardScoreUploaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLeaderboardScoreUploaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLeaderboardUGCSet_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLeaderboardUGCSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnNumberOfCurrentPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnNumberOfCurrentPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnUserAchievementIconFetched_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnUserAchievementIconFetched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnUserAchievementStored_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnUserAchievementStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnUserStatsReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnUserStatsReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnUserStatsStored_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnUserStatsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnUserStatsUnloaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnUserStatsUnloaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamUserStats_AttachLeaderboardUGC, "AttachLeaderboardUGC" }, // 687221317
		{ &Z_Construct_UFunction_UISteamUserStats_ClearAchievement, "ClearAchievement" }, // 2731557063
		{ &Z_Construct_UFunction_UISteamUserStats_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 1692259843
		{ &Z_Construct_UFunction_UISteamUserStats_FindLeaderboard, "FindLeaderboard" }, // 967351622
		{ &Z_Construct_UFunction_UISteamUserStats_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 1968594655
		{ &Z_Construct_UFunction_UISteamUserStats_GetAchievement, "GetAchievement" }, // 3992312306
		{ &Z_Construct_UFunction_UISteamUserStats_GetAchievementAchievedPercent, "GetAchievementAchievedPercent" }, // 2815477748
		{ &Z_Construct_UFunction_UISteamUserStats_GetAchievementAndUnlockTime, "GetAchievementAndUnlockTime" }, // 2652910901
		{ &Z_Construct_UFunction_UISteamUserStats_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 944304281
		{ &Z_Construct_UFunction_UISteamUserStats_GetAchievementIcon, "GetAchievementIcon" }, // 106412303
		{ &Z_Construct_UFunction_UISteamUserStats_GetAchievementName, "GetAchievementName" }, // 1312962469
		{ &Z_Construct_UFunction_UISteamUserStats_GetDownloadedLeaderboardEntry, "GetDownloadedLeaderboardEntry" }, // 2624781375
		{ &Z_Construct_UFunction_UISteamUserStats_GetGlobalStatFloat, "GetGlobalStatFloat" }, // 1569334236
		{ &Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryFloat, "GetGlobalStatHistoryFloat" }, // 2004687191
		{ &Z_Construct_UFunction_UISteamUserStats_GetGlobalStatHistoryInt64, "GetGlobalStatHistoryInt64" }, // 1870057968
		{ &Z_Construct_UFunction_UISteamUserStats_GetGlobalStatInt64, "GetGlobalStatInt64" }, // 1928335019
		{ &Z_Construct_UFunction_UISteamUserStats_GetLeaderboardDisplayType, "GetLeaderboardDisplayType" }, // 1232160131
		{ &Z_Construct_UFunction_UISteamUserStats_GetLeaderboardEntryCount, "GetLeaderboardEntryCount" }, // 566089550
		{ &Z_Construct_UFunction_UISteamUserStats_GetLeaderboardName, "GetLeaderboardName" }, // 3121323897
		{ &Z_Construct_UFunction_UISteamUserStats_GetLeaderboardSortMethod, "GetLeaderboardSortMethod" }, // 3635022057
		{ &Z_Construct_UFunction_UISteamUserStats_GetMostAchievedAchievementInfo, "GetMostAchievedAchievementInfo" }, // 2302772174
		{ &Z_Construct_UFunction_UISteamUserStats_GetNextMostAchievedAchievementInfo, "GetNextMostAchievedAchievementInfo" }, // 915434837
		{ &Z_Construct_UFunction_UISteamUserStats_GetNumAchievements, "GetNumAchievements" }, // 2943315739
		{ &Z_Construct_UFunction_UISteamUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 1588651388
		{ &Z_Construct_UFunction_UISteamUserStats_GetStatFloat, "GetStatFloat" }, // 4139559051
		{ &Z_Construct_UFunction_UISteamUserStats_GetStatInt32, "GetStatInt32" }, // 2983198601
		{ &Z_Construct_UFunction_UISteamUserStats_GetSteamUserStats, "GetSteamUserStats" }, // 1599885328
		{ &Z_Construct_UFunction_UISteamUserStats_GetUserAchievement, "GetUserAchievement" }, // 3543191917
		{ &Z_Construct_UFunction_UISteamUserStats_GetUserAchievementAndUnlockTime, "GetUserAchievementAndUnlockTime" }, // 3415427097
		{ &Z_Construct_UFunction_UISteamUserStats_GetUserStatFloat, "GetUserStatFloat" }, // 813135780
		{ &Z_Construct_UFunction_UISteamUserStats_GetUserStatInt32, "GetUserStatInt32" }, // 643482491
		{ &Z_Construct_UFunction_UISteamUserStats_IndicateAchievementProgress, "IndicateAchievementProgress" }, // 793387857
		{ &Z_Construct_UFunction_UISteamUserStats_RequestCurrentStats, "RequestCurrentStats" }, // 1015513578
		{ &Z_Construct_UFunction_UISteamUserStats_RequestGlobalAchievementPercentages, "RequestGlobalAchievementPercentages" }, // 4248412484
		{ &Z_Construct_UFunction_UISteamUserStats_RequestGlobalStats, "RequestGlobalStats" }, // 2918863764
		{ &Z_Construct_UFunction_UISteamUserStats_RequestUserStats, "RequestUserStats" }, // 1758386127
		{ &Z_Construct_UFunction_UISteamUserStats_ResetAllStats, "ResetAllStats" }, // 3513753459
		{ &Z_Construct_UFunction_UISteamUserStats_SetAchievement, "SetAchievement" }, // 1099235940
		{ &Z_Construct_UFunction_UISteamUserStats_SetStatFloat, "SetStatFloat" }, // 3490436783
		{ &Z_Construct_UFunction_UISteamUserStats_SetStatInt32, "SetStatInt32" }, // 1866203444
		{ &Z_Construct_UFunction_UISteamUserStats_StoreStats, "StoreStats" }, // 3162541078
		{ &Z_Construct_UFunction_UISteamUserStats_UpdateAvgRateStat, "UpdateAvgRateStat" }, // 3287825782
		{ &Z_Construct_UFunction_UISteamUserStats_UploadLeaderboardScore, "UploadLeaderboardScore" }, // 3533985899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamUserStats.h" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalAchievementPercentagesReady_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Called when the global achievement percentages have been received from the server. */" },
		{ "DisplayName", "OnGlobalAchievementPercentagesReady" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Called when the global achievement percentages have been received from the server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalAchievementPercentagesReady = { "m_OnGlobalAchievementPercentagesReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnGlobalAchievementPercentagesReady), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalAchievementPercentagesReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalAchievementPercentagesReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalAchievementPercentagesReady_MetaData)) }; // 3394118993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalStatsReceived_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Called when the global stats have been received from the server. */" },
		{ "DisplayName", "OnGlobalStatsReceived" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Called when the global stats have been received from the server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalStatsReceived = { "m_OnGlobalStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnGlobalStatsReceived), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGlobalStatsReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalStatsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalStatsReceived_MetaData)) }; // 1090985846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardFindResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Result when finding a leaderboard. */" },
		{ "DisplayName", "OnLeaderboardFindResult" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Result when finding a leaderboard." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardFindResult = { "m_OnLeaderboardFindResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnLeaderboardFindResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardFindResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardFindResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardFindResult_MetaData)) }; // 3220771824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoresDownloaded_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Called when scores for a leaderboard have been downloaded and are ready to be retrieved.\n\x09 * After calling you must use GetDownloadedLeaderboardEntry to retrieve the info for each downloaded entry.\n\x09 */" },
		{ "DisplayName", "OnLeaderboardScoresDownloaded" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Called when scores for a leaderboard have been downloaded and are ready to be retrieved.\nAfter calling you must use GetDownloadedLeaderboardEntry to retrieve the info for each downloaded entry." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoresDownloaded = { "m_OnLeaderboardScoresDownloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnLeaderboardScoresDownloaded), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoresDownloadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoresDownloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoresDownloaded_MetaData)) }; // 3959930510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoreUploaded_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Result indicating that a leaderboard score has been uploaded. */" },
		{ "DisplayName", "OnLeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Result indicating that a leaderboard score has been uploaded." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoreUploaded = { "m_OnLeaderboardScoreUploaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnLeaderboardScoreUploaded), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardScoreUploadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoreUploaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoreUploaded_MetaData)) }; // 2554552835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardUGCSet_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Result indicating that user generated content has been attached to one of the current user's leaderboard entries. */" },
		{ "DisplayName", "OnLeaderboardUGCSet" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Result indicating that user generated content has been attached to one of the current user's leaderboard entries." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardUGCSet = { "m_OnLeaderboardUGCSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnLeaderboardUGCSet), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLeaderboardUGCSetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardUGCSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardUGCSet_MetaData)) }; // 833765276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnNumberOfCurrentPlayers_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Gets the current number of players for the current AppId. */" },
		{ "DisplayName", "OnNumberOfCurrentPlayers" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Gets the current number of players for the current AppId." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnNumberOfCurrentPlayers = { "m_OnNumberOfCurrentPlayers", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnNumberOfCurrentPlayers), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnNumberOfCurrentPlayersDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnNumberOfCurrentPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnNumberOfCurrentPlayers_MetaData)) }; // 3245276078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementIconFetched_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Result of an achievement icon that has been fetched */" },
		{ "DisplayName", "OnUserAchievementIconFetched" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Result of an achievement icon that has been fetched" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementIconFetched = { "m_OnUserAchievementIconFetched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnUserAchievementIconFetched), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementIconFetchedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementIconFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementIconFetched_MetaData)) }; // 221678890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementStored_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Result of a request to store the achievements on the server, or an \"indicate progress\" call. If both m_nCurProgress and m_nMaxProgress are zero, that means the achievement has been fully unlocked. */" },
		{ "DisplayName", "OnUserAchievementStored" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Result of a request to store the achievements on the server, or an \"indicate progress\" call. If both m_nCurProgress and m_nMaxProgress are zero, that means the achievement has been fully unlocked." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementStored = { "m_OnUserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnUserAchievementStored), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserAchievementStoredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementStored_MetaData)) }; // 715869564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsReceived_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Called when the latest stats and achievements for a specific user (including the local user) have been received from the server. */" },
		{ "DisplayName", "OnUserStatsReceived" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Called when the latest stats and achievements for a specific user (including the local user) have been received from the server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsReceived = { "m_OnUserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnUserStatsReceived), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsReceived_MetaData)) }; // 3818593841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsStored_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/** Result of a request to store the user stats.*/" },
		{ "DisplayName", "OnUserStatsStored" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Result of a request to store the user stats." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsStored = { "m_OnUserStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnUserStatsStored), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsStoredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsStored_MetaData)) }; // 3996317742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsUnloaded_MetaData[] = {
		{ "Category", "SteamAPI|UISteamUserStats" },
		{ "Comment", "/**\n\x09 * Callback indicating that a user's stats have been unloaded.\n\x09 * Call RequestUserStats again before accessing stats for this user.\n\x09 */" },
		{ "DisplayName", "OnUserStatsUnloaded" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
		{ "ToolTip", "Callback indicating that a user's stats have been unloaded.\nCall RequestUserStats again before accessing stats for this user." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsUnloaded = { "m_OnUserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUserStats, m_OnUserStatsUnloaded), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnUserStatsUnloadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsUnloaded_MetaData)) }; // 919818029
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamUserStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalAchievementPercentagesReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnGlobalStatsReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardFindResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoresDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardScoreUploaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnLeaderboardUGCSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnNumberOfCurrentPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementIconFetched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserAchievementStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUserStats_Statics::NewProp_m_OnUserStatsUnloaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUserStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUserStats_Statics::ClassParams = {
		&UISteamUserStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamUserStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamUserStats()
	{
		if (!Z_Registration_Info_UClass_UISteamUserStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamUserStats.OuterSingleton, Z_Construct_UClass_UISteamUserStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamUserStats.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamUserStats>()
	{
		return UISteamUserStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamUserStats);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUserStats, UISteamUserStats::StaticClass, TEXT("UISteamUserStats"), &Z_Registration_Info_UClass_UISteamUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUserStats), 1839959430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_2319360135(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
