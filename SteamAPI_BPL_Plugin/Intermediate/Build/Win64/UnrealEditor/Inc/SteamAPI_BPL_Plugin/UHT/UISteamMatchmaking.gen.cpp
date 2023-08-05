// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMatchmaking.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMatchmaking() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmaking();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmaking_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatEntryType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatMemberStateChange();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatRoomEnterResponse();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFavoriteFlags();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyComparison();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyDistanceFilter();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAccountID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnFavoritesListAccountsUpdatedDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListAccountsUpdatedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnFavoritesListAccountsUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListAccountsUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFavoritesListAccountsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdatedDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnFavoritesListAccountsUpdatedDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListAccountsUpdatedDelegate_Parms Parms;
	Parms.Result=Result;
	OnFavoritesListAccountsUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms
		{
			FString IP;
			int32 QueryPort;
			int32 ConnectionPort;
			int32 AppID;
			TArray<ESteamFavoriteFlags> Flags;
			bool bAdd;
			FAccountID AccountID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static void NewProp_bAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccountID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 4276100710
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4276100710
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_bAdd_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms*)Obj)->bAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_AccountID = { "AccountID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms, AccountID), Z_Construct_UScriptStruct_FAccountID, METADATA_PARAMS(nullptr, 0) }; // 2096624723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_ConnectionPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_bAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::NewProp_AccountID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnFavoritesListChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFavoritesListChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChangedDelegate, const FString& IP, int32 QueryPort, int32 ConnectionPort, int32 AppID, const TArray<ESteamFavoriteFlags>& Flags, bool bAdd, FAccountID AccountID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms
	{
		FString IP;
		int32 QueryPort;
		int32 ConnectionPort;
		int32 AppID;
		TArray<ESteamFavoriteFlags> Flags;
		bool bAdd;
		FAccountID AccountID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnFavoritesListChangedDelegate_Parms Parms;
	Parms.IP=IP;
	Parms.QueryPort=QueryPort;
	Parms.ConnectionPort=ConnectionPort;
	Parms.AppID=AppID;
	Parms.Flags=Flags;
	Parms.bAdd=bAdd ? true : false;
	Parms.AccountID=AccountID;
	OnFavoritesListChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDUser;
			ESteamChatEntryType ChatEntryType;
			int32 ChatID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms, ChatEntryType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 4212727605
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms, ChatID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::NewProp_ChatID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyChatMsgDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyChatMsgDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsgDelegate, FSteamID SteamIDLobby, FSteamID SteamIDUser, ESteamChatEntryType ChatEntryType, int32 ChatID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDUser;
		ESteamChatEntryType ChatEntryType;
		int32 ChatID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatMsgDelegate_Parms Parms;
	Parms.SteamIDLobby=SteamIDLobby;
	Parms.SteamIDUser=SteamIDUser;
	Parms.ChatEntryType=ChatEntryType;
	Parms.ChatID=ChatID;
	OnLobbyChatMsgDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDUserChanged;
			FSteamID SteamIDMakingChange;
			TArray<ESteamChatMemberStateChange> ChatMemberStateChange;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserChanged;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMakingChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDUserChanged = { "SteamIDUserChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms, SteamIDUserChanged), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDMakingChange = { "SteamIDMakingChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms, SteamIDMakingChange), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatMemberStateChange, METADATA_PARAMS(nullptr, 0) }; // 1922648419
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1922648419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDUserChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDMakingChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::NewProp_ChatMemberStateChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyChatUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyChatUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdateDelegate, FSteamID SteamIDLobby, FSteamID SteamIDUserChanged, FSteamID SteamIDMakingChange, const TArray<ESteamChatMemberStateChange>& ChatMemberStateChange)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDUserChanged;
		FSteamID SteamIDMakingChange;
		TArray<ESteamChatMemberStateChange> ChatMemberStateChange;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyChatUpdateDelegate_Parms Parms;
	Parms.SteamIDLobby=SteamIDLobby;
	Parms.SteamIDUserChanged=SteamIDUserChanged;
	Parms.SteamIDMakingChange=SteamIDMakingChange;
	Parms.ChatMemberStateChange=ChatMemberStateChange;
	OnLobbyChatUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyCreatedDelegate_Parms
		{
			ESteamResult Result;
			FSteamID SteamIDLobby;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyCreatedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyCreatedDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyCreatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyCreatedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyCreatedDelegate, ESteamResult Result, FSteamID SteamIDLobby)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyCreatedDelegate_Parms
	{
		ESteamResult Result;
		FSteamID SteamIDLobby;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyCreatedDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamIDLobby=SteamIDLobby;
	OnLobbyCreatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDMember;
			bool bSuccess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMember;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDMember = { "SteamIDMember", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms, SteamIDMember), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_SteamIDMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyDataUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyDataUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdateDelegate, FSteamID SteamIDLobby, FSteamID SteamIDMember, bool bSuccess)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDMember;
		bool bSuccess;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyDataUpdateDelegate_Parms Parms;
	Parms.SteamIDLobby=SteamIDLobby;
	Parms.SteamIDMember=SteamIDMember;
	Parms.bSuccess=bSuccess ? true : false;
	OnLobbyDataUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms
		{
			FSteamID SteamIDLobby;
			bool bLocked;
			ESteamChatRoomEnterResponse ChatRoomEnterResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms, ChatRoomEnterResponse), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatRoomEnterResponse, METADATA_PARAMS(nullptr, 0) }; // 4102373091
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyEnterDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyEnterDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnterDelegate, FSteamID SteamIDLobby, bool bLocked, ESteamChatRoomEnterResponse ChatRoomEnterResponse)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms
	{
		FSteamID SteamIDLobby;
		bool bLocked;
		ESteamChatRoomEnterResponse ChatRoomEnterResponse;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyEnterDelegate_Parms Parms;
	Parms.SteamIDLobby=SteamIDLobby;
	Parms.bLocked=bLocked ? true : false;
	Parms.ChatRoomEnterResponse=ChatRoomEnterResponse;
	OnLobbyEnterDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDGameServer;
			FString IP;
			int32 Port;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_SteamIDGameServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyGameCreatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyGameCreatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreatedDelegate, FSteamID SteamIDLobby, FSteamID SteamIDGameServer, const FString& IP, int32 Port)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDGameServer;
		FString IP;
		int32 Port;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyGameCreatedDelegate_Parms Parms;
	Parms.SteamIDLobby=SteamIDLobby;
	Parms.SteamIDGameServer=SteamIDGameServer;
	Parms.IP=IP;
	Parms.Port=Port;
	OnLobbyGameCreatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDLobby;
			int32 GameID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms, GameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::NewProp_GameID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyInviteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyInviteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInviteDelegate, FSteamID SteamIDUser, FSteamID SteamIDLobby, int32 GameID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms
	{
		FSteamID SteamIDUser;
		FSteamID SteamIDLobby;
		int32 GameID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyInviteDelegate_Parms Parms;
	Parms.SteamIDUser=SteamIDUser;
	Parms.SteamIDLobby=SteamIDLobby;
	Parms.GameID=GameID;
	OnLobbyInviteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyMatchListDelegate_Parms
		{
			int32 LobbiesMatching;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LobbiesMatching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::NewProp_LobbiesMatching = { "LobbiesMatching", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLobbyMatchListDelegate_Parms, LobbiesMatching), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::NewProp_LobbiesMatching,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyKickedDelegate); // currently unused\n" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyKickedDelegate);  currently unused" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLobbyMatchListDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLobbyMatchListDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLobbyMatchListDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMatchListDelegate, int32 LobbiesMatching)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLobbyMatchListDelegate_Parms
	{
		int32 LobbiesMatching;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLobbyMatchListDelegate_Parms Parms;
	Parms.LobbiesMatching=LobbiesMatching;
	OnLobbyMatchListDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLobbyType(Z_Param_SteamIDLobby,ESteamLobbyType(Z_Param_LobbyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLobbyOwner(Z_Param_SteamIDLobby,Z_Param_SteamIDNewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FByteProperty,Z_Param_MaxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLobbyMemberLimit(Z_Param_SteamIDLobby,Z_Param_MaxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyMemberData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyJoinable)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_UBOOL(Z_Param_bLobbyJoinable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLobbyJoinable(Z_Param_SteamIDLobby,Z_Param_bLobbyJoinable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyGameServer)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_GameServerIP,Z_Param_GameServerPort,Z_Param_SteamIDGameServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execSendLobbyChatMsg)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendLobbyChatMsg(Z_Param_SteamIDLobby,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execRequestLobbyList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RequestLobbyList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execRequestLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLobbyData(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execRemoveFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
		P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnPort,Z_Param_QueryPort,Z_Param_Out_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execLeaveLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeaveLobby(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execJoinLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->JoinLobby(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execInviteUserToLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDInvitee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InviteUserToLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDInvitee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetNumLobbyMembers)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLobbyMembers(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetLobbyOwner(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLobbyMemberLimit(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyMemberData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_SteamIDUser,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_MemberIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetLobbyMemberByIndex(Z_Param_SteamIDLobby,Z_Param_MemberIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyGameServer)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameServerIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameServerPort);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDGameServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_Out_GameServerIP,Z_Param_Out_GameServerPort,Z_Param_Out_SteamIDGameServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyDataCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLobbyDataCount(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyDataByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_LobbyData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLobbyDataByIndex(Z_Param_SteamIDLobby,Z_Param_LobbyData,Z_Param_Out_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyChatEntry)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChatID);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDUser);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLobbyChatEntry(Z_Param_SteamIDLobby,Z_Param_ChatID,Z_Param_Out_SteamIDUser,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetLobbyByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LobbyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetLobbyByIndex(Z_Param_LobbyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetFavoriteGameCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFavoriteGameCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GameIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnPort);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
		P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeLastPlayedOnServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFavoriteGame(Z_Param_GameIndex,Z_Param_Out_AppID,Z_Param_Out_IP,Z_Param_Out_ConnPort,Z_Param_Out_QueryPort,Z_Param_Out_Flags,Z_Param_Out_TimeLastPlayedOnServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execDeleteLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execCreateLobby)
	{
		P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
		P_GET_PROPERTY(FByteProperty,Z_Param_MaxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->CreateLobby(ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddRequestLobbyListStringFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FStrProperty,Z_Param_ValueToMatch);
		P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRequestLobbyListStringFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddRequestLobbyListResultCountFilter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddRequestLobbyListNumericalFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_ValueToMatch);
		P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRequestLobbyListNumericalFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddRequestLobbyListNearValueFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddRequestLobbyListDistanceFilter)
	{
		P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_LobbyDistanceFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execAddFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
		P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastPlayedOnServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnPort,Z_Param_QueryPort,Z_Param_Out_Flags,Z_Param_TimeLastPlayedOnServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmaking::execGetSteamMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamMatchmaking**)Z_Param__Result=UISteamMatchmaking::GetSteamMatchmaking();
		P_NATIVE_END;
	}
	void UISteamMatchmaking::StaticRegisterNativesUISteamMatchmaking()
	{
		UClass* Class = UISteamMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFavoriteGame", &UISteamMatchmaking::execAddFavoriteGame },
			{ "AddRequestLobbyListDistanceFilter", &UISteamMatchmaking::execAddRequestLobbyListDistanceFilter },
			{ "AddRequestLobbyListFilterSlotsAvailable", &UISteamMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
			{ "AddRequestLobbyListNearValueFilter", &UISteamMatchmaking::execAddRequestLobbyListNearValueFilter },
			{ "AddRequestLobbyListNumericalFilter", &UISteamMatchmaking::execAddRequestLobbyListNumericalFilter },
			{ "AddRequestLobbyListResultCountFilter", &UISteamMatchmaking::execAddRequestLobbyListResultCountFilter },
			{ "AddRequestLobbyListStringFilter", &UISteamMatchmaking::execAddRequestLobbyListStringFilter },
			{ "CreateLobby", &UISteamMatchmaking::execCreateLobby },
			{ "DeleteLobbyData", &UISteamMatchmaking::execDeleteLobbyData },
			{ "GetFavoriteGame", &UISteamMatchmaking::execGetFavoriteGame },
			{ "GetFavoriteGameCount", &UISteamMatchmaking::execGetFavoriteGameCount },
			{ "GetLobbyByIndex", &UISteamMatchmaking::execGetLobbyByIndex },
			{ "GetLobbyChatEntry", &UISteamMatchmaking::execGetLobbyChatEntry },
			{ "GetLobbyData", &UISteamMatchmaking::execGetLobbyData },
			{ "GetLobbyDataByIndex", &UISteamMatchmaking::execGetLobbyDataByIndex },
			{ "GetLobbyDataCount", &UISteamMatchmaking::execGetLobbyDataCount },
			{ "GetLobbyGameServer", &UISteamMatchmaking::execGetLobbyGameServer },
			{ "GetLobbyMemberByIndex", &UISteamMatchmaking::execGetLobbyMemberByIndex },
			{ "GetLobbyMemberData", &UISteamMatchmaking::execGetLobbyMemberData },
			{ "GetLobbyMemberLimit", &UISteamMatchmaking::execGetLobbyMemberLimit },
			{ "GetLobbyOwner", &UISteamMatchmaking::execGetLobbyOwner },
			{ "GetNumLobbyMembers", &UISteamMatchmaking::execGetNumLobbyMembers },
			{ "GetSteamMatchmaking", &UISteamMatchmaking::execGetSteamMatchmaking },
			{ "InviteUserToLobby", &UISteamMatchmaking::execInviteUserToLobby },
			{ "JoinLobby", &UISteamMatchmaking::execJoinLobby },
			{ "LeaveLobby", &UISteamMatchmaking::execLeaveLobby },
			{ "RemoveFavoriteGame", &UISteamMatchmaking::execRemoveFavoriteGame },
			{ "RequestLobbyData", &UISteamMatchmaking::execRequestLobbyData },
			{ "RequestLobbyList", &UISteamMatchmaking::execRequestLobbyList },
			{ "SendLobbyChatMsg", &UISteamMatchmaking::execSendLobbyChatMsg },
			{ "SetLobbyData", &UISteamMatchmaking::execSetLobbyData },
			{ "SetLobbyGameServer", &UISteamMatchmaking::execSetLobbyGameServer },
			{ "SetLobbyJoinable", &UISteamMatchmaking::execSetLobbyJoinable },
			{ "SetLobbyMemberData", &UISteamMatchmaking::execSetLobbyMemberData },
			{ "SetLobbyMemberLimit", &UISteamMatchmaking::execSetLobbyMemberLimit },
			{ "SetLobbyOwner", &UISteamMatchmaking::execSetLobbyOwner },
			{ "SetLobbyType", &UISteamMatchmaking::execSetLobbyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics
	{
		struct ISteamMatchmaking_eventAddFavoriteGame_Parms
		{
			int32 AppID;
			FString IP;
			int32 ConnPort;
			int32 QueryPort;
			TArray<ESteamFavoriteFlags> Flags;
			int32 TimeLastPlayedOnServer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, ConnPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 4276100710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_MetaData)) }; // 4276100710
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_ConnPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddFavoriteGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::ISteamMatchmaking_eventAddFavoriteGame_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics
	{
		struct ISteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms
		{
			ESteamLobbyDistanceFilter LobbyDistanceFilter;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyDistanceFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyDistanceFilter, METADATA_PARAMS(nullptr, 0) }; // 2478792224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::ISteamMatchmaking_eventAddRequestLobbyListDistanceFilter_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
	{
		struct ISteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
		{
			int32 SlotsAvailable;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::ISteamMatchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics
	{
		struct ISteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms
		{
			FString KeyToMatch;
			int32 ValueToBeCloseTo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::ISteamMatchmaking_eventAddRequestLobbyListNearValueFilter_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics
	{
		struct ISteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms
		{
			FString KeyToMatch;
			int32 ValueToMatch;
			ESteamLobbyComparison ComparisonType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) }; // 2729710899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::ISteamMatchmaking_eventAddRequestLobbyListNumericalFilter_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics
	{
		struct ISteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms
		{
			int32 MaxResults;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::ISteamMatchmaking_eventAddRequestLobbyListResultCountFilter_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics
	{
		struct ISteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms
		{
			FString KeyToMatch;
			FString ValueToMatch;
			ESteamLobbyComparison ComparisonType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) }; // 2729710899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "AddRequestLobbyListStringFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::ISteamMatchmaking_eventAddRequestLobbyListStringFilter_Parms), Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics
	{
		struct ISteamMatchmaking_eventCreateLobby_Parms
		{
			ESteamLobbyType LobbyType;
			uint8 MaxMembers;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxMembers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) }; // 3316003094
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventCreateLobby_Parms, MaxMembers), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventCreateLobby_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_LobbyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_MaxMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "CPP_Default_LobbyType", "FriendsOnly" },
		{ "CPP_Default_MaxMembers", "1" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "CreateLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::ISteamMatchmaking_eventCreateLobby_Parms), Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics
	{
		struct ISteamMatchmaking_eventDeleteLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventDeleteLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "DeleteLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::ISteamMatchmaking_eventDeleteLobbyData_Parms), Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics
	{
		struct ISteamMatchmaking_eventGetFavoriteGame_Parms
		{
			int32 GameIndex;
			int32 AppID;
			FString IP;
			int32 ConnPort;
			int32 QueryPort;
			TArray<ESteamFavoriteFlags> Flags;
			int32 TimeLastPlayedOnServer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_GameIndex = { "GameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, GameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, ConnPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 4276100710
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4276100710
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_GameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_ConnPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetFavoriteGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::ISteamMatchmaking_eventGetFavoriteGame_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics
	{
		struct ISteamMatchmaking_eventGetFavoriteGameCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetFavoriteGameCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::ISteamMatchmaking_eventGetFavoriteGameCount_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyByIndex_Parms
		{
			int32 LobbyIndex;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::NewProp_LobbyIndex = { "LobbyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyByIndex_Parms, LobbyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::NewProp_LobbyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::ISteamMatchmaking_eventGetLobbyByIndex_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyChatEntry_Parms
		{
			FSteamID SteamIDLobby;
			int32 ChatID;
			FSteamID SteamIDUser;
			FString Message;
			ESteamChatEntryType ChatEntryType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyChatEntry_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyChatEntry_Parms, ChatID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 4212727605
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyChatEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::ISteamMatchmaking_eventGetLobbyChatEntry_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::ISteamMatchmaking_eventGetLobbyData_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyDataByIndex_Parms
		{
			FSteamID SteamIDLobby;
			int32 LobbyData;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyDataByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData = { "LobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyDataByIndex_Parms, LobbyData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyDataByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::ISteamMatchmaking_eventGetLobbyDataByIndex_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyDataCount_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyDataCount_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyDataCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::ISteamMatchmaking_eventGetLobbyDataCount_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyGameServer_Parms
		{
			FSteamID SteamIDLobby;
			FString GameServerIP;
			int32 GameServerPort;
			FSteamID SteamIDGameServer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::ISteamMatchmaking_eventGetLobbyGameServer_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyMemberByIndex_Parms
		{
			FSteamID SteamIDLobby;
			int32 MemberIndex;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemberIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_MemberIndex = { "MemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberByIndex_Parms, MemberIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_MemberIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyMemberByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::ISteamMatchmaking_eventGetLobbyMemberByIndex_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyMemberData_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDUser;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyMemberData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::ISteamMatchmaking_eventGetLobbyMemberData_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyMemberLimit_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyMemberLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::ISteamMatchmaking_eventGetLobbyMemberLimit_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics
	{
		struct ISteamMatchmaking_eventGetLobbyOwner_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetLobbyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::ISteamMatchmaking_eventGetLobbyOwner_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics
	{
		struct ISteamMatchmaking_eventGetNumLobbyMembers_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetNumLobbyMembers_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetNumLobbyMembers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::ISteamMatchmaking_eventGetNumLobbyMembers_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics
	{
		struct ISteamMatchmaking_eventGetSteamMatchmaking_Parms
		{
			UISteamMatchmaking* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventGetSteamMatchmaking_Parms, ReturnValue), Z_Construct_UClass_UISteamMatchmaking_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamMatchmaking" },
		{ "DisplayName", "Steam Matchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "GetSteamMatchmaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::ISteamMatchmaking_eventGetSteamMatchmaking_Parms), Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics
	{
		struct ISteamMatchmaking_eventInviteUserToLobby_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDInvitee;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDInvitee;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventInviteUserToLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee = { "SteamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventInviteUserToLobby_Parms, SteamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "InviteUserToLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::ISteamMatchmaking_eventInviteUserToLobby_Parms), Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics
	{
		struct ISteamMatchmaking_eventJoinLobby_Parms
		{
			FSteamID SteamIDLobby;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventJoinLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventJoinLobby_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "JoinLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::ISteamMatchmaking_eventJoinLobby_Parms), Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics
	{
		struct ISteamMatchmaking_eventLeaveLobby_Parms
		{
			FSteamID SteamIDLobby;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventLeaveLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "LeaveLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::ISteamMatchmaking_eventLeaveLobby_Parms), Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics
	{
		struct ISteamMatchmaking_eventRemoveFavoriteGame_Parms
		{
			int32 AppID;
			FString IP;
			int32 ConnPort;
			int32 QueryPort;
			TArray<ESteamFavoriteFlags> Flags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRemoveFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnPort = { "ConnPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRemoveFavoriteGame_Parms, ConnPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 4276100710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_MetaData)) }; // 4276100710
	void Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "RemoveFavoriteGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::ISteamMatchmaking_eventRemoveFavoriteGame_Parms), Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics
	{
		struct ISteamMatchmaking_eventRequestLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRequestLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "RequestLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::ISteamMatchmaking_eventRequestLobbyData_Parms), Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics
	{
		struct ISteamMatchmaking_eventRequestLobbyList_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventRequestLobbyList_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "RequestLobbyList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::ISteamMatchmaking_eventRequestLobbyList_Parms), Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics
	{
		struct ISteamMatchmaking_eventSendLobbyChatMsg_Parms
		{
			FSteamID SteamIDLobby;
			FString Message;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSendLobbyChatMsg_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SendLobbyChatMsg", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::ISteamMatchmaking_eventSendLobbyChatMsg_Parms), Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::ISteamMatchmaking_eventSetLobbyData_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyGameServer_Parms
		{
			FSteamID SteamIDLobby;
			FString GameServerIP;
			int32 GameServerPort;
			FSteamID SteamIDGameServer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::ISteamMatchmaking_eventSetLobbyGameServer_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyJoinable_Parms
		{
			FSteamID SteamIDLobby;
			bool bLobbyJoinable;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_bLobbyJoinable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyJoinable_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyJoinable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::ISteamMatchmaking_eventSetLobbyJoinable_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyMemberData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyMemberData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::ISteamMatchmaking_eventSetLobbyMemberData_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyMemberLimit_Parms
		{
			FSteamID SteamIDLobby;
			uint8 MaxMembers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxMembers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyMemberLimit_Parms, MaxMembers), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "CPP_Default_MaxMembers", "5" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyMemberLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::ISteamMatchmaking_eventSetLobbyMemberLimit_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyOwner_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDNewOwner;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner = { "SteamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyOwner_Parms, SteamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::ISteamMatchmaking_eventSetLobbyOwner_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics
	{
		struct ISteamMatchmaking_eventSetLobbyType_Parms
		{
			FSteamID SteamIDLobby;
			ESteamLobbyType LobbyType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyType_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmaking_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) }; // 3316003094
	void Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_LobbyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmaking, nullptr, "SetLobbyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::ISteamMatchmaking_eventSetLobbyType_Parms), Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMatchmaking);
	UClass* Z_Construct_UClass_UISteamMatchmaking_NoRegister()
	{
		return UISteamMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnFavoritesListAccountsUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnFavoritesListAccountsUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnFavoritesListChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnFavoritesListChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyChatMsg_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyChatMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyChatUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyChatUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyDataUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyDataUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyEnter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyEnter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyGameCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyGameCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyInvite_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyInvite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLobbyMatchList_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLobbyMatchList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 3498970611
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 1592243057
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 2581883150
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 3946429518
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 3033568590
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 519703344
		{ &Z_Construct_UFunction_UISteamMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 3771132945
		{ &Z_Construct_UFunction_UISteamMatchmaking_CreateLobby, "CreateLobby" }, // 294379437
		{ &Z_Construct_UFunction_UISteamMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 224279284
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 931063940
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 3232227176
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 2371667207
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 1338585251
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyData, "GetLobbyData" }, // 844110062
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 3324884164
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 3536887571
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 2952587758
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 2803755542
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 989927013
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 3265993902
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 3848838240
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 1132729383
		{ &Z_Construct_UFunction_UISteamMatchmaking_GetSteamMatchmaking, "GetSteamMatchmaking" }, // 1956840209
		{ &Z_Construct_UFunction_UISteamMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 628098312
		{ &Z_Construct_UFunction_UISteamMatchmaking_JoinLobby, "JoinLobby" }, // 889975598
		{ &Z_Construct_UFunction_UISteamMatchmaking_LeaveLobby, "LeaveLobby" }, // 1875255891
		{ &Z_Construct_UFunction_UISteamMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 499614991
		{ &Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 4060059131
		{ &Z_Construct_UFunction_UISteamMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 3603324670
		{ &Z_Construct_UFunction_UISteamMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 2532816430
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyData, "SetLobbyData" }, // 3812575084
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 2465771168
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 2593273845
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 2773982118
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 878711752
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 4141070520
		{ &Z_Construct_UFunction_UISteamMatchmaking_SetLobbyType, "SetLobbyType" }, // 3191634343
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions for clients to access matchmaking services, favorites, and to operate on game lobbies.\n" },
		{ "IncludePath", "UISteamMatchmaking.h" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
		{ "ToolTip", "Functions for clients to access matchmaking services, favorites, and to operate on game lobbies." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "Comment", "/** Delegates */" },
		{ "DisplayName", "OnFavoritesListAccountsUpdated" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListAccountsUpdated = { "m_OnFavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnFavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListAccountsUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListAccountsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListAccountsUpdated_MetaData)) }; // 2516802028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListChanged_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnFavoritesListChanged" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListChanged = { "m_OnFavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnFavoritesListChanged), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnFavoritesListChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListChanged_MetaData)) }; // 1748919435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatMsg_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyChatMsg" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatMsg = { "m_OnLobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyChatMsg), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatMsgDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatMsg_MetaData)) }; // 3250103825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatUpdate_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyChatUpdate" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatUpdate = { "m_OnLobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyChatUpdate), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyChatUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatUpdate_MetaData)) }; // 601639745
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyCreated_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyCreated" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyCreated = { "m_OnLobbyCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyCreated), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyCreatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyCreated_MetaData)) }; // 1196348335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyDataUpdate_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyDataUpdate" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyDataUpdate = { "m_OnLobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyDataUpdate), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyDataUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyDataUpdate_MetaData)) }; // 4293839165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyEnter_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyEnter" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyEnter = { "m_OnLobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyEnter), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyEnterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyEnter_MetaData)) }; // 1036264461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyGameCreated_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyGameCreated" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyGameCreated = { "m_OnLobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyGameCreated), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyGameCreatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyGameCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyGameCreated_MetaData)) }; // 2897397668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyInvite_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "DisplayName", "OnLobbyInvite" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyInvite = { "m_OnLobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyInvite), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyInviteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyInvite_MetaData)) }; // 1725648771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyMatchList_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMatchmaking" },
		{ "Comment", "/*UPROPERTY(BlueprintAssignable, Category = \"SteamAPI|UISteamMatchmaking\", meta = (DisplayName = \"OnLobbyKicked\"))\n\x09""FOnLobbyKickedDelegate m_OnLobbyKicked;*/" },
		{ "DisplayName", "OnLobbyMatchList" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
		{ "ToolTip", "UPROPERTY(BlueprintAssignable, Category = \"SteamAPI|UISteamMatchmaking\", meta = (DisplayName = \"OnLobbyKicked\"))\n       FOnLobbyKickedDelegate m_OnLobbyKicked;" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyMatchList = { "m_OnLobbyMatchList", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMatchmaking, m_OnLobbyMatchList), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLobbyMatchListDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyMatchList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyMatchList_MetaData)) }; // 3755012870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamMatchmaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListAccountsUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnFavoritesListChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyChatUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyDataUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyEnter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyGameCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyInvite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMatchmaking_Statics::NewProp_m_OnLobbyMatchList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMatchmaking>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMatchmaking_Statics::ClassParams = {
		&UISteamMatchmaking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMatchmaking()
	{
		if (!Z_Registration_Info_UClass_UISteamMatchmaking.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMatchmaking.OuterSingleton, Z_Construct_UClass_UISteamMatchmaking_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMatchmaking.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMatchmaking>()
	{
		return UISteamMatchmaking::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMatchmaking);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMatchmaking, UISteamMatchmaking::StaticClass, TEXT("UISteamMatchmaking"), &Z_Registration_Info_UClass_UISteamMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMatchmaking), 1060723042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_964622478(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
