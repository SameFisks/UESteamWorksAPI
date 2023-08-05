// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamGameServerStats.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamGameServerStats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServerStats();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServerStats_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSStatsReceivedDelegate_Parms
		{
			ESteamResult Result;
			FSteamID SteamIDUser;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSStatsReceivedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSStatsReceivedDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSStatsReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSStatsReceivedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsReceivedDelegate, ESteamResult Result, FSteamID SteamIDUser)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSStatsReceivedDelegate_Parms
	{
		ESteamResult Result;
		FSteamID SteamIDUser;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSStatsReceivedDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamIDUser=SteamIDUser;
	OnGSStatsReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSStatsStoredDelegate_Parms
		{
			ESteamResult Result;
			FSteamID SteamIDUser;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSStatsStoredDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSStatsStoredDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSStatsStoredDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSStatsStoredDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSStatsStoredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsStoredDelegate, ESteamResult Result, FSteamID SteamIDUser)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSStatsStoredDelegate_Parms
	{
		ESteamResult Result;
		FSteamID SteamIDUser;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSStatsStoredDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamIDUser=SteamIDUser;
	OnGSStatsStoredDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSStatsUnloadedDelegate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSStatsUnloadedDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSStatsUnloadedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSStatsUnloadedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSStatsUnloadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloadedDelegate, FSteamID SteamIDUser)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSStatsUnloadedDelegate_Parms
	{
		FSteamID SteamIDUser;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSStatsUnloadedDelegate_Parms Parms;
	Parms.SteamIDUser=SteamIDUser;
	OnGSStatsUnloadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamGameServerStats::execUpdateUserAvgRateStat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateUserAvgRateStat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execSetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execSetUserStatInt)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execSetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execGetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execGetUserStatInt)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execGetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execClearUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServerStats::execGetSteamGameServerStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamGameServerStats**)Z_Param__Result=UISteamGameServerStats::GetSteamGameServerStats();
		P_NATIVE_END;
	}
	void UISteamGameServerStats::StaticRegisterNativesUISteamGameServerStats()
	{
		UClass* Class = UISteamGameServerStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearUserAchievement", &UISteamGameServerStats::execClearUserAchievement },
			{ "GetSteamGameServerStats", &UISteamGameServerStats::execGetSteamGameServerStats },
			{ "GetUserAchievement", &UISteamGameServerStats::execGetUserAchievement },
			{ "GetUserStatFloat", &UISteamGameServerStats::execGetUserStatFloat },
			{ "GetUserStatInt", &UISteamGameServerStats::execGetUserStatInt },
			{ "SetUserAchievement", &UISteamGameServerStats::execSetUserAchievement },
			{ "SetUserStatFloat", &UISteamGameServerStats::execSetUserStatFloat },
			{ "SetUserStatInt", &UISteamGameServerStats::execSetUserStatInt },
			{ "UpdateUserAvgRateStat", &UISteamGameServerStats::execUpdateUserAvgRateStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics
	{
		struct ISteamGameServerStats_eventClearUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventClearUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventClearUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventClearUserAchievement_Parms), &Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Resets the unlock status of an achievement for the specified user.\n\x09 * This is primarily only ever used for testing.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 * NOTE: This will work only on achievements that game servers are allowed to set. If the \"Set By\" field for this achievement is \"Official GS\" then only game servers that have been declared as officially -\n\x09 * controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - \x09The Steam ID of the user to clear the achievement for.\n\x09 * @param const FString & Name - The 'API Name' of the Achievement to reset.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 *\x09The specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\n\x09 *\x09RequestUserStats has completed and successfully returned its callback for the specified user.\n\x09 *\x09The stat must be allowed to be set by game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Resets the unlock status of an achievement for the specified user.\nThis is primarily only ever used for testing.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nNOTE: This will work only on achievements that game servers are allowed to set. If the \"Set By\" field for this achievement is \"Official GS\" then only game servers that have been declared as officially -\ncontrolled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\n@param FSteamID SteamIDUser -        The Steam ID of the user to clear the achievement for.\n@param const FString & Name - The 'API Name' of the Achievement to reset.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n     The specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\n     RequestUserStats has completed and successfully returned its callback for the specified user.\n     The stat must be allowed to be set by game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "ClearUserAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::ISteamGameServerStats_eventClearUserAchievement_Parms), Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics
	{
		struct ISteamGameServerStats_eventGetSteamGameServerStats_Parms
		{
			UISteamGameServerStats* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetSteamGameServerStats_Parms, ReturnValue), Z_Construct_UClass_UISteamGameServerStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamGameServerStats" },
		{ "DisplayName", "Steam Game Server Stats" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "GetSteamGameServerStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::ISteamGameServerStats_eventGetSteamGameServerStats_Parms), Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics
	{
		struct ISteamGameServerStats_eventGetUserAchievement_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Gets the unlock status of the Achievement.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the achievement for.\n\x09 * @param const FString & Name - The 'API Name' of the achievement.\n\x09 * @param bool & bAchieved - Returns the unlock status of the achievement.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * \x09The 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * If the call is successful then the unlock status is returned via the bAchieved parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the achievement for.\n@param const FString & Name - The 'API Name' of the achievement.\n@param bool & bAchieved - Returns the unlock status of the achievement.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nRequestUserStats has completed and successfully returned its callback.\n     The 'API Name' of the specified achievement exists in App Admin on the Steamworks website, and the changes are published.\nIf the call is successful then the unlock status is returned via the bAchieved parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "GetUserAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::ISteamGameServerStats_eventGetUserAchievement_Parms), Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics
	{
		struct ISteamGameServerStats_eventGetUserStatFloat_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "GetUserStatFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::ISteamGameServerStats_eventGetUserStatFloat_Parms), Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics
	{
		struct ISteamGameServerStats_eventGetUserStatInt_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserStatInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventGetUserStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventGetUserStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventGetUserStatInt_Parms), &Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Gets the current value of the a stat for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float & Data - The variable to return the stat value into.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to get the stat for.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float & Data - The variable to return the stat value into.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "GetUserStatInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::ISteamGameServerStats_eventGetUserStatInt_Parms), Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics
	{
		struct ISteamGameServerStats_eventSetUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventSetUserAchievement_Parms), &Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Unlocks an achievement for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 * NOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\n\x09 * officially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to unlock the achievement for.\n\x09 * @param const FString & Name - The 'API Name' of the Achievement to unlock.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback for the specified user.\n\x09 * The stat must be allowed to be set by game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Unlocks an achievement for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nNOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\nofficially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to unlock the achievement for.\n@param const FString & Name - The 'API Name' of the Achievement to unlock.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified achievement \"API Name\" exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback for the specified user.\nThe stat must be allowed to be set by game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "SetUserAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::ISteamGameServerStats_eventSetUserAchievement_Parms), Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics
	{
		struct ISteamGameServerStats_eventSetUserStatFloat_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventSetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventSetUserStatFloat_Parms), &Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 * NOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\n\x09 * officially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to set the stat on.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback for the specified user.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 * The stat must be allowed to be set by game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nNOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\nofficially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to set the stat on.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback for the specified user.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\nThe stat must be allowed to be set by game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "SetUserStatFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::ISteamGameServerStats_eventSetUserStatFloat_Parms), Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics
	{
		struct ISteamGameServerStats_eventSetUserStatInt_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserStatInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventSetUserStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventSetUserStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventSetUserStatInt_Parms), &Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Sets / updates the value of a given stat for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 * NOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\n\x09 * officially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to set the stat on.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback for the specified user.\n\x09 * The type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\n\x09 * The stat must be allowed to be set by game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nNOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\nofficially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to set the stat on.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float Data - The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback for the specified user.\nThe type passed to this function must match the type listed in the App Admin panel of the Steamworks website.\nThe stat must be allowed to be set by game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "SetUserStatInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::ISteamGameServerStats_eventSetUserStatInt_Parms), Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics
	{
		struct ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			float CountThisSession;
			float SessionLength;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms, SessionLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Updates an AVGRATE stat with new values for the specified user.\n\x09 * You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09 * This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09 * NOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\n\x09 * officially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The Steam ID of the user to update the AVGRATE stat for.\n\x09 * @param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09 * @param float CountThisSession - The value accumulation since the last call to this function.\n\x09 * @param float SessionLength - The amount of time in seconds since the last call to this function.\n\x09 * @return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\n\x09 * The specified stat exists in App Admin on the Steamworks website, and the changes are published.\n\x09 * RequestUserStats has completed and successfully returned its callback for the specified user.\n\x09 * The type must be AVGRATE in the Steamworks Partner backend.\n\x09 * The stat must be allowed to be set by game server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Updates an AVGRATE stat with new values for the specified user.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nNOTE: These updates will work only on stats that game servers are allowed to edit. If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as -\nofficially controlled by you will be able to set it. To do this you must set the IP range of your official servers in the Dedicated Servers section of App Admin.\n\n@param FSteamID SteamIDUser - The Steam ID of the user to update the AVGRATE stat for.\n@param const FString & Name - The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param float CountThisSession - The value accumulation since the last call to this function.\n@param float SessionLength - The amount of time in seconds since the last call to this function.\n@return bool - This function returns true upon success if all of the following conditions are met; otherwise, false.\nThe specified stat exists in App Admin on the Steamworks website, and the changes are published.\nRequestUserStats has completed and successfully returned its callback for the specified user.\nThe type must be AVGRATE in the Steamworks Partner backend.\nThe stat must be allowed to be set by game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServerStats, nullptr, "UpdateUserAvgRateStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::ISteamGameServerStats_eventUpdateUserAvgRateStat_Parms), Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamGameServerStats);
	UClass* Z_Construct_UClass_UISteamGameServerStats_NoRegister()
	{
		return UISteamGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UISteamGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSStatsReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSStatsReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSStatsStored_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSStatsStored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSStatsUnloaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSStatsUnloaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamGameServerStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamGameServerStats_ClearUserAchievement, "ClearUserAchievement" }, // 2305595079
		{ &Z_Construct_UFunction_UISteamGameServerStats_GetSteamGameServerStats, "GetSteamGameServerStats" }, // 580711944
		{ &Z_Construct_UFunction_UISteamGameServerStats_GetUserAchievement, "GetUserAchievement" }, // 4168017553
		{ &Z_Construct_UFunction_UISteamGameServerStats_GetUserStatFloat, "GetUserStatFloat" }, // 1478911247
		{ &Z_Construct_UFunction_UISteamGameServerStats_GetUserStatInt, "GetUserStatInt" }, // 4267376681
		{ &Z_Construct_UFunction_UISteamGameServerStats_SetUserAchievement, "SetUserAchievement" }, // 3406207727
		{ &Z_Construct_UFunction_UISteamGameServerStats_SetUserStatFloat, "SetUserStatFloat" }, // 2159608097
		{ &Z_Construct_UFunction_UISteamGameServerStats_SetUserStatInt, "SetUserStatInt" }, // 706168012
		{ &Z_Construct_UFunction_UISteamGameServerStats_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 2712491497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions to allow game servers to set stats and achievements on players.\n" },
		{ "IncludePath", "UISteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Functions to allow game servers to set stats and achievements on players." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsReceived_MetaData[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/** Result when getting the latests stats and achievements for a user from the server. */" },
		{ "DisplayName", "OnGSStatsReceived" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Result when getting the latests stats and achievements for a user from the server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsReceived = { "m_OnGSStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServerStats, m_OnGSStatsReceived), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsReceived_MetaData)) }; // 842817568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsStored_MetaData[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/** Result of a request to store the user stats. */" },
		{ "DisplayName", "OnGSStatsStored" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Result of a request to store the user stats." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsStored = { "m_OnGSStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServerStats, m_OnGSStatsStored), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsStoredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsStored_MetaData)) }; // 82586477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsUnloaded_MetaData[] = {
		{ "Category", "SteamAPI|UISteamGameServerStats" },
		{ "Comment", "/**\n\x09 * Callback indicating that a user's stats have been unloaded.\n\x09 * Call RequestUserStats again to access stats for this user.\n\x09 */" },
		{ "DisplayName", "OnGSStatsUnloaded" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Callback indicating that a user's stats have been unloaded.\nCall RequestUserStats again to access stats for this user." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsUnloaded = { "m_OnGSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServerStats, m_OnGSStatsUnloaded), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSStatsUnloadedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsUnloaded_MetaData)) }; // 1142987038
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamGameServerStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsStored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServerStats_Statics::NewProp_m_OnGSStatsUnloaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamGameServerStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamGameServerStats_Statics::ClassParams = {
		&UISteamGameServerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamGameServerStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServerStats_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamGameServerStats()
	{
		if (!Z_Registration_Info_UClass_UISteamGameServerStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamGameServerStats.OuterSingleton, Z_Construct_UClass_UISteamGameServerStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamGameServerStats.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamGameServerStats>()
	{
		return UISteamGameServerStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamGameServerStats);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamGameServerStats, UISteamGameServerStats::StaticClass, TEXT("UISteamGameServerStats"), &Z_Registration_Info_UClass_UISteamGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamGameServerStats), 1465233818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_2953861384(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
