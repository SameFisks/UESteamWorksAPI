// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUser.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUser() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUser();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUser_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAuthSessionResponse();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamBeginAuthSessionResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDenyReason();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDurationControlNotification();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDurationControlProgress();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFailureType();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserHasLicenseForAppResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamVoiceResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHAuthTicket();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHSteamUser();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms
		{
			int32 AppID;
			FString GameServerIP;
			int32 GameServerPort;
			bool bSecure;
			ESteamDenyReason Reason;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms, GameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms*)Obj)->bSecure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms, Reason), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDenyReason, METADATA_PARAMS(nullptr, 0) }; // 2967194507
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_bSecure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnClientGameServerDenyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClientGameServerDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnClientGameServerDenyDelegate, int32 AppID, const FString& GameServerIP, int32 GameServerPort, bool bSecure, ESteamDenyReason Reason)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms
	{
		int32 AppID;
		FString GameServerIP;
		int32 GameServerPort;
		bool bSecure;
		ESteamDenyReason Reason;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnClientGameServerDenyDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.GameServerIP=GameServerIP;
	Parms.GameServerPort=GameServerPort;
	Parms.bSecure=bSecure ? true : false;
	Parms.Reason=Reason;
	OnClientGameServerDenyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms
		{
			ESteamResult Result;
			int32 AppId;
			bool bApplicable;
			int32 csecsLast5h;
			ESteamDurationControlProgress Progress;
			ESteamDurationControlNotification Notification;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static void NewProp_bApplicable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplicable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_csecsLast5h;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Progress_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Notification_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Notification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_bApplicable_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms*)Obj)->bApplicable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_bApplicable = { "bApplicable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_bApplicable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_csecsLast5h = { "csecsLast5h", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms, csecsLast5h), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Progress_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms, Progress), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDurationControlProgress, METADATA_PARAMS(nullptr, 0) }; // 1912286286
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Notification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Notification = { "Notification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms, Notification), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDurationControlNotification, METADATA_PARAMS(nullptr, 0) }; // 1049381900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_bApplicable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_csecsLast5h,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Progress_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Notification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::NewProp_Notification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnDurationControlDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDurationControlDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDurationControlDelegate, ESteamResult Result, int32 AppId, bool bApplicable, int32 csecsLast5h, ESteamDurationControlProgress Progress, ESteamDurationControlNotification Notification)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms
	{
		ESteamResult Result;
		int32 AppId;
		bool bApplicable;
		int32 csecsLast5h;
		ESteamDurationControlProgress Progress;
		ESteamDurationControlNotification Notification;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnDurationControlDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.AppId=AppId;
	Parms.bApplicable=bApplicable ? true : false;
	Parms.csecsLast5h=csecsLast5h;
	Parms.Progress=Progress;
	Parms.Notification=Notification;
	OnDurationControlDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnEncryptedAppTicketResponseDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnEncryptedAppTicketResponseDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnEncryptedAppTicketResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnEncryptedAppTicketResponseDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEncryptedAppTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEncryptedAppTicketResponseDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnEncryptedAppTicketResponseDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnEncryptedAppTicketResponseDelegate_Parms Parms;
	Parms.Result=Result;
	OnEncryptedAppTicketResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGameWebCallbackDelegate_Parms
		{
			FString URL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGameWebCallbackDelegate_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGameWebCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGameWebCallbackDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGameWebCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameWebCallbackDelegate, const FString& URL)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGameWebCallbackDelegate_Parms
	{
		FString URL;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGameWebCallbackDelegate_Parms Parms;
	Parms.URL=URL;
	OnGameWebCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGetAuthSessionTicketResponseDelegate_Parms
		{
			FHAuthTicket AuthTicket;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAuthSessionTicketResponseDelegate_Parms, AuthTicket), Z_Construct_UScriptStruct_FHAuthTicket, METADATA_PARAMS(nullptr, 0) }; // 2885808569
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetAuthSessionTicketResponseDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthTicket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGetAuthSessionTicketResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGetAuthSessionTicketResponseDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetAuthSessionTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAuthSessionTicketResponseDelegate, FHAuthTicket AuthTicket, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGetAuthSessionTicketResponseDelegate_Parms
	{
		FHAuthTicket AuthTicket;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGetAuthSessionTicketResponseDelegate_Parms Parms;
	Parms.AuthTicket=AuthTicket;
	Parms.Result=Result;
	OnGetAuthSessionTicketResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnIPCFailureDelegate_Parms
		{
			ESteamFailureType FailureType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnIPCFailureDelegate_Parms, FailureType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFailureType, METADATA_PARAMS(nullptr, 0) }; // 2279131468
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::NewProp_FailureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::NewProp_FailureType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnIPCFailureDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnIPCFailureDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnIPCFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIPCFailureDelegate, ESteamFailureType FailureType)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnIPCFailureDelegate_Parms
	{
		ESteamFailureType FailureType;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnIPCFailureDelegate_Parms Parms;
	Parms.FailureType=FailureType;
	OnIPCFailureDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLicensesUpdatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLicensesUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdatedDelegate)
{
	OnLicensesUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms
		{
			int32 AppID;
			FString OrderID;
			bool bAuthorized;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrderID;
		static void NewProp_bAuthorized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthorized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms, OrderID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_bAuthorized_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms*)Obj)->bAuthorized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_bAuthorized = { "bAuthorized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_bAuthorized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_OrderID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::NewProp_bAuthorized,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMicroTxnAuthorizationResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMicroTxnAuthorizationResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMicroTxnAuthorizationResponseDelegate, int32 AppID, const FString& OrderID, bool bAuthorized)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms
	{
		int32 AppID;
		FString OrderID;
		bool bAuthorized;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMicroTxnAuthorizationResponseDelegate_Parms Parms;
	Parms.AppID=AppID;
	Parms.OrderID=OrderID;
	Parms.bAuthorized=bAuthorized ? true : false;
	OnMicroTxnAuthorizationResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms
		{
			ESteamResult Result;
			bool bStillRetrying;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_bStillRetrying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStillRetrying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_bStillRetrying_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms*)Obj)->bStillRetrying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_bStillRetrying = { "bStillRetrying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_bStillRetrying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::NewProp_bStillRetrying,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamServerConnectFailureDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamServerConnectFailureDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailureDelegate, ESteamResult Result, bool bStillRetrying)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms
	{
		ESteamResult Result;
		bool bStillRetrying;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamServerConnectFailureDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.bStillRetrying=bStillRetrying ? true : false;
	OnSteamServerConnectFailureDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamServersConnectedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamServersConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnectedDelegate)
{
	OnSteamServersConnectedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamServersDisconnectedDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamServersDisconnectedDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamServersDisconnectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamServersDisconnectedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamServersDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnectedDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamServersDisconnectedDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamServersDisconnectedDelegate_Parms Parms;
	Parms.Result=Result;
	OnSteamServersDisconnectedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnStoreAuthURLResponseDelegate_Parms
		{
			FString URL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnStoreAuthURLResponseDelegate_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnStoreAuthURLResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnStoreAuthURLResponseDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStoreAuthURLResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStoreAuthURLResponseDelegate, const FString& URL)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnStoreAuthURLResponseDelegate_Parms
	{
		FString URL;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnStoreAuthURLResponseDelegate_Parms Parms;
	Parms.URL=URL;
	OnStoreAuthURLResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms
		{
			FSteamID SteamID;
			ESteamAuthSessionResponse AuthSessionResponse;
			FSteamID OwnerSteamID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AuthSessionResponse_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AuthSessionResponse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthSessionResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthSessionResponse = { "AuthSessionResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms, AuthSessionResponse), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAuthSessionResponse, METADATA_PARAMS(nullptr, 0) }; // 1883153956
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthSessionResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_AuthSessionResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnValidateAuthTicketResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnValidateAuthTicketResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnValidateAuthTicketResponseDelegate, FSteamID SteamID, ESteamAuthSessionResponse AuthSessionResponse, FSteamID OwnerSteamID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms
	{
		FSteamID SteamID;
		ESteamAuthSessionResponse AuthSessionResponse;
		FSteamID OwnerSteamID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnValidateAuthTicketResponseDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.AuthSessionResponse=AuthSessionResponse;
	Parms.OwnerSteamID=OwnerSteamID;
	OnValidateAuthTicketResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamUser::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=P_THIS->UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execStopVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execStartVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetVoiceOptimalSampleRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVoiceOptimalSampleRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_VoiceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=P_THIS->GetVoice(Z_Param_Out_VoiceData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetPlayerSteamLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerSteamLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetHSteamUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHSteamUser*)Z_Param__Result=P_THIS->GetHSteamUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetGameBadgeLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nSeries);
		P_GET_UBOOL(Z_Param_bFoil);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGameBadgeLevel(Z_Param_nSeries,Z_Param_bFoil);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetEncryptedAppTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEncryptedAppTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetDurationControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->GetDurationControl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetAvailableVoice)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CompressedSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=P_THIS->GetAvailableVoice(Z_Param_Out_CompressedSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHAuthTicket*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAuthSession(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execDecompressVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedBuffer);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_UncompressedBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=P_THIS->DecompressVoice(Z_Param_Out_CompressedBuffer,Z_Param_Out_UncompressedBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execCancelAuthTicket)
	{
		P_GET_STRUCT(FHAuthTicket,Z_Param_AuthTicket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAuthTicket(Z_Param_AuthTicket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBIsTwoFactorEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsTwoFactorEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBIsPhoneVerified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsPhoneVerified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBIsPhoneRequiringVerification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsPhoneRequiringVerification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBIsPhoneIdentifying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsPhoneIdentifying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBIsBehindNAT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsBehindNAT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_Ticket);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=P_THIS->BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execAdvertiseGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvertiseGame(Z_Param_SteamID,Z_Param_IP,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetSteamUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamUser**)Z_Param__Result=UISteamUser::GetSteamUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execTerminateGameConnection_DEPRECATED)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_nIPServer);
		P_GET_PROPERTY(FIntProperty,Z_Param_nPortServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamUser::TerminateGameConnection_DEPRECATED(Z_Param_nIPServer,Z_Param_nPortServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execInitiateGameConnection)
	{
		P_GET_STRUCT(FSteamPlayerInfo,Z_Param_aSteamIDGameServer);
		P_GET_PROPERTY(FIntProperty,Z_Param_nIPServer);
		P_GET_PROPERTY(FIntProperty,Z_Param_nPortServer);
		P_GET_UBOOL(Z_Param_bSecure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UISteamUser::InitiateGameConnection(Z_Param_aSteamIDGameServer,Z_Param_nIPServer,Z_Param_nPortServer,Z_Param_bSecure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execSetInGameVoiceSpeaking)
	{
		P_GET_STRUCT(FSteamPlayerInfo,Z_Param_aSteamIDUser);
		P_GET_UBOOL(Z_Param_bSpeaking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamUser::SetInGameVoiceSpeaking(Z_Param_aSteamIDUser,Z_Param_bSpeaking);
		P_NATIVE_END;
	}
	void UISteamUser::StaticRegisterNativesUISteamUser()
	{
		UClass* Class = UISteamUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvertiseGame", &UISteamUser::execAdvertiseGame },
			{ "BeginAuthSession", &UISteamUser::execBeginAuthSession },
			{ "BIsBehindNAT", &UISteamUser::execBIsBehindNAT },
			{ "BIsPhoneIdentifying", &UISteamUser::execBIsPhoneIdentifying },
			{ "BIsPhoneRequiringVerification", &UISteamUser::execBIsPhoneRequiringVerification },
			{ "BIsPhoneVerified", &UISteamUser::execBIsPhoneVerified },
			{ "BIsTwoFactorEnabled", &UISteamUser::execBIsTwoFactorEnabled },
			{ "BLoggedOn", &UISteamUser::execBLoggedOn },
			{ "CancelAuthTicket", &UISteamUser::execCancelAuthTicket },
			{ "DecompressVoice", &UISteamUser::execDecompressVoice },
			{ "EndAuthSession", &UISteamUser::execEndAuthSession },
			{ "GetAuthSessionTicket", &UISteamUser::execGetAuthSessionTicket },
			{ "GetAvailableVoice", &UISteamUser::execGetAvailableVoice },
			{ "GetDurationControl", &UISteamUser::execGetDurationControl },
			{ "GetEncryptedAppTicket", &UISteamUser::execGetEncryptedAppTicket },
			{ "GetGameBadgeLevel", &UISteamUser::execGetGameBadgeLevel },
			{ "GetHSteamUser", &UISteamUser::execGetHSteamUser },
			{ "GetPlayerSteamLevel", &UISteamUser::execGetPlayerSteamLevel },
			{ "GetSteamID", &UISteamUser::execGetSteamID },
			{ "GetSteamUser", &UISteamUser::execGetSteamUser },
			{ "GetVoice", &UISteamUser::execGetVoice },
			{ "GetVoiceOptimalSampleRate", &UISteamUser::execGetVoiceOptimalSampleRate },
			{ "InitiateGameConnection", &UISteamUser::execInitiateGameConnection },
			{ "SetInGameVoiceSpeaking", &UISteamUser::execSetInGameVoiceSpeaking },
			{ "StartVoiceRecording", &UISteamUser::execStartVoiceRecording },
			{ "StopVoiceRecording", &UISteamUser::execStopVoiceRecording },
			{ "TerminateGameConnection_DEPRECATED", &UISteamUser::execTerminateGameConnection_DEPRECATED },
			{ "UserHasLicenseForApp", &UISteamUser::execUserHasLicenseForApp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics
	{
		struct ISteamUser_eventAdvertiseGame_Parms
		{
			FSteamID SteamID;
			FString IP;
			int32 Port;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventAdvertiseGame_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventAdvertiseGame_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_IP_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventAdvertiseGame_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\x09 *\n\x09 * When you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\x09 *\n\x09 * @param FSteamID SteamID - This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n\x09 * @param const FString & IP = \x09The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09 * @param int32 Port - The connection port of the game server, in host order.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\nWhen you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\n@param FSteamID SteamID - This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n@param const FString & IP =  The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param int32 Port - The connection port of the game server, in host order.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "AdvertiseGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::ISteamUser_eventAdvertiseGame_Parms), Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_AdvertiseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_AdvertiseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics
	{
		struct ISteamUser_eventBeginAuthSession_Parms
		{
			TArray<uint8> Ticket;
			FSteamID SteamID;
			ESteamBeginAuthSessionResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) }; // 1611605321
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09 * The ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09 * This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09 * When the multiplayer session terminates you must call EndAuthSession.\n\x09 * Triggers a ValidateAuthTicketResponse_t callback.\n\x09 *\n\x09 * @param TArray<uint8> Ticket - The auth ticket to validate.\n\x09 * @param FSteamID SteamID - The entity's Steam ID that sent this ticket.\n\x09 * @return ESteamBeginAuthSessionResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\nThe ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\nTriggers a ValidateAuthTicketResponse_t callback.\n\n@param TArray<uint8> Ticket - The auth ticket to validate.\n@param FSteamID SteamID - The entity's Steam ID that sent this ticket.\n@return ESteamBeginAuthSessionResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::ISteamUser_eventBeginAuthSession_Parms), Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics
	{
		struct ISteamUser_eventBIsBehindNAT_Parms
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
	void Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventBIsBehindNAT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventBIsBehindNAT_Parms), &Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks if the current users looks like they are behind a NAT device.\n\x09 * This is only valid if the user is connected to the Steam servers and may not catch all forms of NAT.\n\x09 *\n\x09 * @return bool - true if the current user is behind a NAT, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks if the current users looks like they are behind a NAT device.\nThis is only valid if the user is connected to the Steam servers and may not catch all forms of NAT.\n\n@return bool - true if the current user is behind a NAT, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BIsBehindNAT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::ISteamUser_eventBIsBehindNAT_Parms), Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BIsBehindNAT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BIsBehindNAT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics
	{
		struct ISteamUser_eventBIsPhoneIdentifying_Parms
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
	void Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventBIsPhoneIdentifying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventBIsPhoneIdentifying_Parms), &Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks whether the user's phone number is used to uniquely identify them.\n\x09 *\n\x09 * @return bool - true if the current user's phone uniquely verifies their identity; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks whether the user's phone number is used to uniquely identify them.\n\n@return bool - true if the current user's phone uniquely verifies their identity; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BIsPhoneIdentifying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::ISteamUser_eventBIsPhoneIdentifying_Parms), Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics
	{
		struct ISteamUser_eventBIsPhoneRequiringVerification_Parms
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
	void Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventBIsPhoneRequiringVerification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventBIsPhoneRequiringVerification_Parms), &Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks whether the current user's phone number is awaiting (re)verification.\n\x09 *\n\x09 * @return bool - true if the it is requiring verification; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks whether the current user's phone number is awaiting (re)verification.\n\n@return bool - true if the it is requiring verification; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BIsPhoneRequiringVerification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::ISteamUser_eventBIsPhoneRequiringVerification_Parms), Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics
	{
		struct ISteamUser_eventBIsPhoneVerified_Parms
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
	void Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventBIsPhoneVerified_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventBIsPhoneVerified_Parms), &Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks whether the current user has verified their phone number.\n\x09 *\n\x09 * @return bool - true if the current user has phone verification enabled; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks whether the current user has verified their phone number.\n\n@return bool - true if the current user has phone verification enabled; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BIsPhoneVerified", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::ISteamUser_eventBIsPhoneVerified_Parms), Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BIsPhoneVerified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BIsPhoneVerified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics
	{
		struct ISteamUser_eventBIsTwoFactorEnabled_Parms
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
	void Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventBIsTwoFactorEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventBIsTwoFactorEnabled_Parms), &Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks whether the current user has Steam Guard two factor authentication enabled on their account.\n\x09 *\n\x09 * @return bool - true if the current user has two factor authentication enabled; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks whether the current user has Steam Guard two factor authentication enabled on their account.\n\n@return bool - true if the current user has two factor authentication enabled; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BIsTwoFactorEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::ISteamUser_eventBIsTwoFactorEnabled_Parms), Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics
	{
		struct ISteamUser_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventBLoggedOn_Parms), &Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks if the current user's Steam client is connected to the Steam servers.\n\x09 * If it's not then no real-time services provided by the Steamworks API will be enabled. The Steam client will automatically be trying to recreate the connection as often as possible.\n\x09 * When the connection is restored a SteamServersConnected_t callback will be posted.\n\x09 * You usually don't need to check for this yourself. All of the API calls that rely on this will check internally. Forcefully disabling stuff when the player loses access is usually not a very -\n\x09 * good experience for the player and you could be preventing them from accessing APIs that do not need a live connection to Steam.\n\x09 *\n\x09 * @return bool - true if the Steam client current has a live connection to the Steam servers; otherwise, false if there is no active connection due to either a networking issue on the local machine, or the Steam server is down/busy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks if the current user's Steam client is connected to the Steam servers.\nIf it's not then no real-time services provided by the Steamworks API will be enabled. The Steam client will automatically be trying to recreate the connection as often as possible.\nWhen the connection is restored a SteamServersConnected_t callback will be posted.\nYou usually don't need to check for this yourself. All of the API calls that rely on this will check internally. Forcefully disabling stuff when the player loses access is usually not a very -\ngood experience for the player and you could be preventing them from accessing APIs that do not need a live connection to Steam.\n\n@return bool - true if the Steam client current has a live connection to the Steam servers; otherwise, false if there is no active connection due to either a networking issue on the local machine, or the Steam server is down/busy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::ISteamUser_eventBLoggedOn_Parms), Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics
	{
		struct ISteamUser_eventCancelAuthTicket_Parms
		{
			FHAuthTicket AuthTicket;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventCancelAuthTicket_Parms, AuthTicket), Z_Construct_UScriptStruct_FHAuthTicket, METADATA_PARAMS(nullptr, 0) }; // 2885808569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::NewProp_AuthTicket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09 *\n\x09 * @param FHAuthTicket AuthTicket - The active auth ticket to cancel.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param FHAuthTicket AuthTicket - The active auth ticket to cancel.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::ISteamUser_eventCancelAuthTicket_Parms), Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics
	{
		struct ISteamUser_eventDecompressVoice_Parms
		{
			TArray<uint8> CompressedBuffer;
			TArray<uint8> UncompressedBuffer;
			ESteamVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedBuffer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UncompressedBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UncompressedBuffer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, CompressedBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_UncompressedBuffer_Inner = { "UncompressedBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_UncompressedBuffer = { "UncompressedBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, UncompressedBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 751681834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_UncompressedBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_UncompressedBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Decodes the compressed voice data returned by GetVoice.\n\x09 * The output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\n\x09 * It is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\x09 *\n\x09 * @param const TArray<uint8> & CompressedBuffer - The compressed data received from GetVoice.\n\x09 * @param TArray<uint8> & UncompressedBuffer - The buffer where the raw audio data will be returned. This can then be passed to your audio subsystems for playback.\n\x09 * @return ESteamVoiceResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Decodes the compressed voice data returned by GetVoice.\nThe output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\nIt is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\n@param const TArray<uint8> & CompressedBuffer - The compressed data received from GetVoice.\n@param TArray<uint8> & UncompressedBuffer - The buffer where the raw audio data will be returned. This can then be passed to your audio subsystems for playback.\n@return ESteamVoiceResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "DecompressVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::ISteamUser_eventDecompressVoice_Parms), Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_DecompressVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics
	{
		struct ISteamUser_eventEndAuthSession_Parms
		{
			FSteamID SteamID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09 *\n\x09 * @param FSteamID SteamID - The entity to end the active auth session with\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param FSteamID SteamID - The entity to end the active auth session with\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::ISteamUser_eventEndAuthSession_Parms), Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics
	{
		struct ISteamUser_eventGetAuthSessionTicket_Parms
		{
			TArray<uint8> Ticket;
			FHAuthTicket ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FHAuthTicket, METADATA_PARAMS(nullptr, 0) }; // 2885808569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09 * After calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession to verify this entities integrity.\n\x09 * When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the API -\n\x09 * call before attempting to use the ticket to ensure that the ticket has been communicated to the server. If this callback does not come in a timely fashion (10 - 20 seconds), then your client -\n\x09 * is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09 * Triggers a GetAuthSessionTicketResponse_t callback.\n\x09 *\n\x09 * @param TArray<uint8> & Ticket - The buffer where the new auth ticket will be copied into if the call was successful.\n\x09 * @return FHAuthTicket - A handle to the auth ticket. When you're done interacting with the entity you must call CancelAuthTicket on the handle.\n\x09 * Returns k_HAuthTicketInvalid if the call fails.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\nAfter calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession to verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the API -\ncall before attempting to use the ticket to ensure that the ticket has been communicated to the server. If this callback does not come in a timely fashion (10 - 20 seconds), then your client -\nis not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\nTriggers a GetAuthSessionTicketResponse_t callback.\n\n@param TArray<uint8> & Ticket - The buffer where the new auth ticket will be copied into if the call was successful.\n@return FHAuthTicket - A handle to the auth ticket. When you're done interacting with the entity you must call CancelAuthTicket on the handle.\nReturns k_HAuthTicketInvalid if the call fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::ISteamUser_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics
	{
		struct ISteamUser_eventGetAvailableVoice_Parms
		{
			int32 CompressedSize;
			ESteamVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::NewProp_CompressedSize = { "CompressedSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetAvailableVoice_Parms, CompressedSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetAvailableVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 751681834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::NewProp_CompressedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\x09 * Most applications will only use compressed data and should ignore the other parameters, which exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\x09 *\n\x09 * @param int32 & CompressedSize - Returns the size of the available voice data in bytes.\n\x09 * @return ESteamVoiceResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\nMost applications will only use compressed data and should ignore the other parameters, which exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\n@param int32 & CompressedSize - Returns the size of the available voice data in bytes.\n@return ESteamVoiceResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetAvailableVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::ISteamUser_eventGetAvailableVoice_Parms), Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetAvailableVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetAvailableVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics
	{
		struct ISteamUser_eventGetDurationControl_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetDurationControl_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Retrieves anti indulgence / duration control for current user / game combination.\n\x09 *\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a DurationControl_t call result. Returns k_uAPICallInvalid if no connection to the Steam servers could be made.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Retrieves anti indulgence / duration control for current user / game combination.\n\n@return FSteamAPICall - SteamAPICall_t to be used with a DurationControl_t call result. Returns k_uAPICallInvalid if no connection to the Steam servers could be made." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetDurationControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::ISteamUser_eventGetDurationControl_Parms), Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetDurationControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetDurationControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics
	{
		struct ISteamUser_eventGetEncryptedAppTicket_Parms
		{
			TArray<uint8> Ticket;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetEncryptedAppTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUser_eventGetEncryptedAppTicket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventGetEncryptedAppTicket_Parms), &Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Retrieve an encrypted ticket.\n\x09 * This should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\n\x09 *\n\x09 * If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\x09 *\n\x09 * @param TArray<uint8> & Ticket - The encrypted app ticket is copied into this buffer.\n\x09 * @return bool - true if the call successfully returned an app ticket into pTicket.\n\x09 * false under the following conditions:\n\x09 * pcbTicket is NULL\n\x09 * pTicket is NULL\n\x09 * pTicket is too small to hold this ticket.\n\x09 * There was no ticket available. (Did you wait for EncryptedAppTicketResponse_t?)\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Retrieve an encrypted ticket.\nThis should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\n\nIf you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\n@param TArray<uint8> & Ticket - The encrypted app ticket is copied into this buffer.\n@return bool - true if the call successfully returned an app ticket into pTicket.\nfalse under the following conditions:\npcbTicket is NULL\npTicket is NULL\npTicket is too small to hold this ticket.\nThere was no ticket available. (Did you wait for EncryptedAppTicketResponse_t?)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetEncryptedAppTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::ISteamUser_eventGetEncryptedAppTicket_Parms), Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics
	{
		struct ISteamUser_eventGetGameBadgeLevel_Parms
		{
			int32 nSeries;
			bool bFoil;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_nSeries;
		static void NewProp_bFoil_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoil;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_nSeries = { "nSeries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetGameBadgeLevel_Parms, nSeries), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit(void* Obj)
	{
		((ISteamUser_eventGetGameBadgeLevel_Parms*)Obj)->bFoil = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_bFoil = { "bFoil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventGetGameBadgeLevel_Parms), &Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetGameBadgeLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_nSeries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_bFoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Gets the level of the users Steam badge for your game.\n\x09 * The user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\x09 *\n\x09 * @param int32 nSeries - If you only have one set of cards, the series will be 1.\n\x09 * @param bool bFoil - Check if they have received the foil badge.\n\x09 * @return int32 - The level of the badge, 0 if they don't have it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Gets the level of the users Steam badge for your game.\nThe user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\n@param int32 nSeries - If you only have one set of cards, the series will be 1.\n@param bool bFoil - Check if they have received the foil badge.\n@return int32 - The level of the badge, 0 if they don't have it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetGameBadgeLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::ISteamUser_eventGetGameBadgeLevel_Parms), Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics
	{
		struct ISteamUser_eventGetHSteamUser_Parms
		{
			FHSteamUser ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetHSteamUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FHSteamUser, METADATA_PARAMS(nullptr, 0) }; // 1889031587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Gets Steam user handle that this interface represents.\n\x09 * This is only used internally by the API, and by a few select interfaces that support multi-user.\n\x09 *\n\x09 * @return FHSteamUser\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Gets Steam user handle that this interface represents.\nThis is only used internally by the API, and by a few select interfaces that support multi-user.\n\n@return FHSteamUser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetHSteamUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::ISteamUser_eventGetHSteamUser_Parms), Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetHSteamUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics
	{
		struct ISteamUser_eventGetPlayerSteamLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetPlayerSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Gets the Steam level of the user, as shown on their Steam community profile.\n\x09 *\n\x09 * @return int32 - The level of the current user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Gets the Steam level of the user, as shown on their Steam community profile.\n\n@return int32 - The level of the current user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetPlayerSteamLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::ISteamUser_eventGetPlayerSteamLevel_Parms), Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetSteamID_Statics
	{
		struct ISteamUser_eventGetSteamID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09 * A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09 *\n\x09 * @return FSteamID\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\n@return FSteamID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::ISteamUser_eventGetSteamID_Parms), Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics
	{
		struct ISteamUser_eventGetSteamUser_Parms
		{
			UISteamUser* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetSteamUser_Parms, ReturnValue), Z_Construct_UClass_UISteamUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteaGetSteamUsermUser" },
		{ "DisplayName", "Get Steam User" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetSteamUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::ISteamUser_eventGetSteamUser_Parms), Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetSteamUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetSteamUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetVoice_Statics
	{
		struct ISteamUser_eventGetVoice_Parms
		{
			TArray<uint8> VoiceData;
			ESteamVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_VoiceData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VoiceData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_VoiceData_Inner = { "VoiceData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_VoiceData = { "VoiceData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetVoice_Parms, VoiceData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 751681834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_VoiceData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_VoiceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Read captured audio data from the microphone buffer.\n\x09 * The compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice on the other side.\n\x09 * The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\x09 * This should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible.\n\x09 * Calling this any less may result in gaps in the returned stream. It is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio. Static buffers are -\n\x09 * recommended for performance reasons. However, if you would like to allocate precisely the right amount of space for a buffer before each call you may use GetAvailableVoice to find out -\n\x09 * how much data is available to be read.\n\x09 * NOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications. It is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had -\n\x09 * silence removed, so the uncompressed audio could have a shorter duration than you expect. There may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to -\n\x09 * discard any leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the uncompressed size is requested. So if you really need to use uncompressed -\n\x09 * audio, you should call GetVoice frequently with two very large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore all of these details and simply -\n\x09 * leave the \"uncompressed\" parameters as NULL/0.\n\x09 *\n\x09 * @param TArray<uint8> & VoiceData - The buffer where the audio data will be copied into.\n\x09 * @return ESteamVoiceResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Read captured audio data from the microphone buffer.\nThe compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice on the other side.\nThe compressed data provided is in an arbitrary format and is not meant to be played directly.\nThis should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible.\nCalling this any less may result in gaps in the returned stream. It is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio. Static buffers are -\nrecommended for performance reasons. However, if you would like to allocate precisely the right amount of space for a buffer before each call you may use GetAvailableVoice to find out -\nhow much data is available to be read.\nNOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications. It is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had -\nsilence removed, so the uncompressed audio could have a shorter duration than you expect. There may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to -\ndiscard any leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the uncompressed size is requested. So if you really need to use uncompressed -\naudio, you should call GetVoice frequently with two very large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore all of these details and simply -\nleave the \"uncompressed\" parameters as NULL/0.\n\n@param TArray<uint8> & VoiceData - The buffer where the audio data will be copied into.\n@return ESteamVoiceResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetVoice_Statics::ISteamUser_eventGetVoice_Parms), Z_Construct_UFunction_UISteamUser_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics
	{
		struct ISteamUser_eventGetVoiceOptimalSampleRate_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetVoiceOptimalSampleRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Gets the native sample rate of the Steam voice decoder.\n\x09 * Using this sample rate for DecompressVoice will perform the least CPU processing.\n\x09 * However, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK) deals with lower sample rates.\n\x09 * You may find that you get the best audio output quality when you ignore this function and use the native sample rate of your audio output device, which is usually 48000 or 44100.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Gets the native sample rate of the Steam voice decoder.\nUsing this sample rate for DecompressVoice will perform the least CPU processing.\nHowever, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK) deals with lower sample rates.\nYou may find that you get the best audio output quality when you ignore this function and use the native sample rate of your audio output device, which is usually 48000 or 44100.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::ISteamUser_eventGetVoiceOptimalSampleRate_Parms), Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics
	{
		struct ISteamUser_eventInitiateGameConnection_Parms
		{
			FSteamPlayerInfo aSteamIDGameServer;
			int32 nIPServer;
			int32 nPortServer;
			bool bSecure;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aSteamIDGameServer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_nIPServer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_nPortServer;
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_aSteamIDGameServer = { "aSteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventInitiateGameConnection_Parms, aSteamIDGameServer), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_nIPServer = { "nIPServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventInitiateGameConnection_Parms, nIPServer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_nPortServer = { "nPortServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventInitiateGameConnection_Parms, nPortServer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((ISteamUser_eventInitiateGameConnection_Parms*)Obj)->bSecure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventInitiateGameConnection_Parms), &Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventInitiateGameConnection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_aSteamIDGameServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_nIPServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_nPortServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_bSecure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetSteamID\", Keywords = \"Steam ISteamUser GetSteamID\"), Category = \"SteamAPI|ISteamUser\")\n//\x09static FSteamPlayerInfo GetSteamID();\n" },
		{ "DisplayName", "Steam InitiateGameConnection" },
		{ "Keywords", "Steam ISteamUser InitiateGameConnection" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetSteamID\", Keywords = \"Steam ISteamUser GetSteamID\"), Category = \"SteamAPI|ISteamUser\")\n       static FSteamPlayerInfo GetSteamID();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "InitiateGameConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::ISteamUser_eventInitiateGameConnection_Parms), Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_InitiateGameConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_InitiateGameConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics
	{
		struct ISteamUser_eventSetInGameVoiceSpeaking_Parms
		{
			FSteamPlayerInfo aSteamIDUser;
			bool bSpeaking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aSteamIDUser;
		static void NewProp_bSpeaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::NewProp_aSteamIDUser = { "aSteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventSetInGameVoiceSpeaking_Parms, aSteamIDUser), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	void Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
	{
		((ISteamUser_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUser_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::NewProp_aSteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam StopVoiceRecording\", Keywords = \"Steam ISteamUser StopVoiceRecording\"), Category = \"SteamAPI|ISteamUser\")\n//\x09static void StopVoiceRecording();\n" },
		{ "DisplayName", "Steam SetInGameVoiceSpeaking" },
		{ "Keywords", "Steam ISteamUser SetInGameVoiceSpeaking" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam StopVoiceRecording\", Keywords = \"Steam ISteamUser StopVoiceRecording\"), Category = \"SteamAPI|ISteamUser\")\n       static void StopVoiceRecording();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "SetInGameVoiceSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::ISteamUser_eventSetInGameVoiceSpeaking_Parms), Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Starts voice recording.\n\x09 * Once started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Starts voice recording.\nOnce started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "StartVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_StartVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Stops voice recording.\n\x09 * Because people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until -\n\x09 * it returns k_EVoiceResultNotRecording, only then will voice recording be stopped.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Stops voice recording.\nBecause people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until -\nit returns k_EVoiceResultNotRecording, only then will voice recording be stopped.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "StopVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_StopVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics
	{
		struct ISteamUser_eventTerminateGameConnection_DEPRECATED_Parms
		{
			int32 nIPServer;
			int32 nPortServer;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_nIPServer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_nPortServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::NewProp_nIPServer = { "nIPServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventTerminateGameConnection_DEPRECATED_Parms, nIPServer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::NewProp_nPortServer = { "nPortServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventTerminateGameConnection_DEPRECATED_Parms, nPortServer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::NewProp_nIPServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::NewProp_nPortServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "DisplayName", "Steam TerminateGameConnection" },
		{ "Keywords", "Steam ISteamUser TerminateGameConnection" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "TerminateGameConnection_DEPRECATED", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::ISteamUser_eventTerminateGameConnection_DEPRECATED_Parms), Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics
	{
		struct ISteamUser_eventUserHasLicenseForApp_Parms
		{
			FSteamID SteamID;
			int32 AppID;
			ESteamUserHasLicenseForAppResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) }; // 4195797630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09 * This can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession\n\x09 *\n\x09 * @param FSteamID SteamID - The Steam ID of the user that sent the auth ticket.\n\x09 * @param int32 AppID - The DLC App ID to check if the user owns it.\n\x09 * @return ESteamUserHasLicenseForAppResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\nThis can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession\n\n@param FSteamID SteamID - The Steam ID of the user that sent the auth ticket.\n@param int32 AppID - The DLC App ID to check if the user owns it.\n@return ESteamUserHasLicenseForAppResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::ISteamUser_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamUser);
	UClass* Z_Construct_UClass_UISteamUser_NoRegister()
	{
		return UISteamUser::StaticClass();
	}
	struct Z_Construct_UClass_UISteamUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnClientGameServerDeny_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnClientGameServerDeny;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnDurationControl_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnDurationControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnEncryptedAppTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnEncryptedAppTicketResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGameWeb_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGameWeb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGetAuthSessionTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGetAuthSessionTicketResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_IPCFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_IPCFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLicensesUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLicensesUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMicroTxnAuthorizationResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMicroTxnAuthorizationResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamServerConnectFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamServerConnectFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamServersConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamServersConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamServersDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamServersDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnStoreAuthURLResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnStoreAuthURLResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnValidateAuthTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnValidateAuthTicketResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamUser_AdvertiseGame, "AdvertiseGame" }, // 3100620353
		{ &Z_Construct_UFunction_UISteamUser_BeginAuthSession, "BeginAuthSession" }, // 1888647267
		{ &Z_Construct_UFunction_UISteamUser_BIsBehindNAT, "BIsBehindNAT" }, // 1312276338
		{ &Z_Construct_UFunction_UISteamUser_BIsPhoneIdentifying, "BIsPhoneIdentifying" }, // 3132098507
		{ &Z_Construct_UFunction_UISteamUser_BIsPhoneRequiringVerification, "BIsPhoneRequiringVerification" }, // 1102337679
		{ &Z_Construct_UFunction_UISteamUser_BIsPhoneVerified, "BIsPhoneVerified" }, // 3442833127
		{ &Z_Construct_UFunction_UISteamUser_BIsTwoFactorEnabled, "BIsTwoFactorEnabled" }, // 1228253634
		{ &Z_Construct_UFunction_UISteamUser_BLoggedOn, "BLoggedOn" }, // 2499872968
		{ &Z_Construct_UFunction_UISteamUser_CancelAuthTicket, "CancelAuthTicket" }, // 4008983919
		{ &Z_Construct_UFunction_UISteamUser_DecompressVoice, "DecompressVoice" }, // 1511921861
		{ &Z_Construct_UFunction_UISteamUser_EndAuthSession, "EndAuthSession" }, // 3340814181
		{ &Z_Construct_UFunction_UISteamUser_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 757405265
		{ &Z_Construct_UFunction_UISteamUser_GetAvailableVoice, "GetAvailableVoice" }, // 2822550205
		{ &Z_Construct_UFunction_UISteamUser_GetDurationControl, "GetDurationControl" }, // 1060598918
		{ &Z_Construct_UFunction_UISteamUser_GetEncryptedAppTicket, "GetEncryptedAppTicket" }, // 2678621486
		{ &Z_Construct_UFunction_UISteamUser_GetGameBadgeLevel, "GetGameBadgeLevel" }, // 3161028982
		{ &Z_Construct_UFunction_UISteamUser_GetHSteamUser, "GetHSteamUser" }, // 8844702
		{ &Z_Construct_UFunction_UISteamUser_GetPlayerSteamLevel, "GetPlayerSteamLevel" }, // 1094541285
		{ &Z_Construct_UFunction_UISteamUser_GetSteamID, "GetSteamID" }, // 3058460541
		{ &Z_Construct_UFunction_UISteamUser_GetSteamUser, "GetSteamUser" }, // 4273809468
		{ &Z_Construct_UFunction_UISteamUser_GetVoice, "GetVoice" }, // 204085828
		{ &Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 860489938
		{ &Z_Construct_UFunction_UISteamUser_InitiateGameConnection, "InitiateGameConnection" }, // 581694134
		{ &Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 3921586655
		{ &Z_Construct_UFunction_UISteamUser_StartVoiceRecording, "StartVoiceRecording" }, // 901269618
		{ &Z_Construct_UFunction_UISteamUser_StopVoiceRecording, "StopVoiceRecording" }, // 145434370
		{ &Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED, "TerminateGameConnection_DEPRECATED" }, // 490294964
		{ &Z_Construct_UFunction_UISteamUser_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 1174697550
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions for accessing and manipulating Steam user information.\n" },
		{ "IncludePath", "UISteamUser.h" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Functions for accessing and manipulating Steam user information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnClientGameServerDeny_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Sent by the Steam server to the client telling it to disconnect from the specified game server, which it may be in the process of or already connected to.\n\x09 * The game client should immediately disconnect upon receiving this message.\n\x09 * This can usually occur if the user doesn't have rights to play on the game server.\n\x09 */" },
		{ "DisplayName", "OnClientGameServerDeny" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Sent by the Steam server to the client telling it to disconnect from the specified game server, which it may be in the process of or already connected to.\nThe game client should immediately disconnect upon receiving this message.\nThis can usually occur if the user doesn't have rights to play on the game server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnClientGameServerDeny = { "m_OnClientGameServerDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnClientGameServerDeny), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnClientGameServerDenyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnClientGameServerDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnClientGameServerDeny_MetaData)) }; // 406854841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnDurationControl_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Sent for games with enabled anti indulgence / duration control, for enabled users. Lets the game know whether persistent rewards or XP should be granted at normal rate, half rate, or zero rate.\n\x09 * This callback is fired asynchronously in response to timers triggering. It is also fired in response to calls to GetDurationControl().\n\x09 */" },
		{ "DisplayName", "OnDurationControl" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Sent for games with enabled anti indulgence / duration control, for enabled users. Lets the game know whether persistent rewards or XP should be granted at normal rate, half rate, or zero rate.\nThis callback is fired asynchronously in response to timers triggering. It is also fired in response to calls to GetDurationControl()." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnDurationControl = { "m_OnDurationControl", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnDurationControl), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnDurationControlDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnDurationControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnDurationControl_MetaData)) }; // 3649302076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnEncryptedAppTicketResponse_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/** Called when an encrypted application ticket has been received. */" },
		{ "DisplayName", "OnEncryptedAppTicketResponse" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called when an encrypted application ticket has been received." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnEncryptedAppTicketResponse = { "m_OnEncryptedAppTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnEncryptedAppTicketResponse), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnEncryptedAppTicketResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnEncryptedAppTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnEncryptedAppTicketResponse_MetaData)) }; // 2934587704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGameWeb_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Sent to your game in response to a steam://gamewebcallback/ command from a user clicking a link in the Steam overlay browser.\n\x09 * You can use this to add support for external site signups where you want to pop back into the browser after some web page signup sequence, and optionally get back some detail about that.\n\x09 */" },
		{ "DisplayName", "OnGameWebCallback" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Sent to your game in response to a steam://gamewebcallback/ command from a user clicking a link in the Steam overlay browser.\nYou can use this to add support for external site signups where you want to pop back into the browser after some web page signup sequence, and optionally get back some detail about that." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGameWeb = { "m_OnGameWeb", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnGameWeb), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGameWebCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGameWeb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGameWeb_MetaData)) }; // 2143918965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGetAuthSessionTicketResponse_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/** Result when creating an auth session ticket. */" },
		{ "DisplayName", "OnGetAuthSessionTicketResponse" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Result when creating an auth session ticket." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGetAuthSessionTicketResponse = { "m_OnGetAuthSessionTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnGetAuthSessionTicketResponse), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetAuthSessionTicketResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGetAuthSessionTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGetAuthSessionTicketResponse_MetaData)) }; // 4260852407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_IPCFailure_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Called when the callback system for this client is in an error state (and has flushed pending callbacks)\n\x09 * When getting this message the client should disconnect from Steam, reset any stored Steam state and reconnect.\n\x09 * This usually occurs in the rare event the Steam client has some kind of fatal error.\n\x09 */" },
		{ "DisplayName", "OnIPCFailure" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called when the callback system for this client is in an error state (and has flushed pending callbacks)\nWhen getting this message the client should disconnect from Steam, reset any stored Steam state and reconnect.\nThis usually occurs in the rare event the Steam client has some kind of fatal error." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_IPCFailure = { "m_IPCFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_IPCFailure), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCFailureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_IPCFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_IPCFailure_MetaData)) }; // 813028282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnLicensesUpdated_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/** Called whenever the users licenses (owned packages) changes. */" },
		{ "DisplayName", "OnLicensesUpdated" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called whenever the users licenses (owned packages) changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnLicensesUpdated = { "m_OnLicensesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnLicensesUpdated), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLicensesUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnLicensesUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnLicensesUpdated_MetaData)) }; // 2649864981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnMicroTxnAuthorizationResponse_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/** Called when a user has responded to a microtransaction authorization request. */" },
		{ "DisplayName", "OnMicroTxnAuthorizationResponse" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called when a user has responded to a microtransaction authorization request." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnMicroTxnAuthorizationResponse = { "m_OnMicroTxnAuthorizationResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnMicroTxnAuthorizationResponse), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMicroTxnAuthorizationResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnMicroTxnAuthorizationResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnMicroTxnAuthorizationResponse_MetaData)) }; // 4037927534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServerConnectFailure_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Called when a connection attempt has failed.\n\x09 * This will occur periodically if the Steam client is not connected, and has failed when retrying to establish a connection.\n\x09 */" },
		{ "DisplayName", "OnSteamServerConnectFailure" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called when a connection attempt has failed.\nThis will occur periodically if the Steam client is not connected, and has failed when retrying to establish a connection." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServerConnectFailure = { "m_OnSteamServerConnectFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnSteamServerConnectFailure), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServerConnectFailureDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServerConnectFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServerConnectFailure_MetaData)) }; // 3773858544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersConnected_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Called when a connections to the Steam back-end has been established.\n\x09 * This means the Steam client now has a working connection to the Steam servers.\n\x09 * Usually this will have occurred before the game has launched, and should only be seen if the user has dropped connection due to a networking issue or a Steam server update.\n\x09 */" },
		{ "DisplayName", "OnSteamServersConnected" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called when a connections to the Steam back-end has been established.\nThis means the Steam client now has a working connection to the Steam servers.\nUsually this will have occurred before the game has launched, and should only be seen if the user has dropped connection due to a networking issue or a Steam server update." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersConnected = { "m_OnSteamServersConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnSteamServersConnected), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersConnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersConnected_MetaData)) }; // 1836471462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersDisconnected_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/**\n\x09 * Called if the client has lost connection to the Steam servers.\n\x09 * Real-time services will be disabled until a matching SteamServersConnected_t has been posted.\n\x09 */" },
		{ "DisplayName", "OnSteamServersDisconnected" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called if the client has lost connection to the Steam servers.\nReal-time services will be disabled until a matching SteamServersConnected_t has been posted." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersDisconnected = { "m_OnSteamServersDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnSteamServersDisconnected), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamServersDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersDisconnected_MetaData)) }; // 381996480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnStoreAuthURLResponse_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/** Response when we have recieved the authentication URL after a call to RequestStoreAuthURL. */" },
		{ "DisplayName", "OnStoreAuthURLResponse" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Response when we have recieved the authentication URL after a call to RequestStoreAuthURL." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnStoreAuthURLResponse = { "m_OnStoreAuthURLResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnStoreAuthURLResponse), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnStoreAuthURLResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnStoreAuthURLResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnStoreAuthURLResponse_MetaData)) }; // 3148468929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "Comment", "/** Called when an auth ticket has been validated. */" },
		{ "DisplayName", "OnValidateAuthTicketResponse" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Called when an auth ticket has been validated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnValidateAuthTicketResponse = { "m_OnValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUser, m_OnValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnValidateAuthTicketResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnValidateAuthTicketResponse_MetaData)) }; // 3427305766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnClientGameServerDeny,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnDurationControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnEncryptedAppTicketResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGameWeb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnGetAuthSessionTicketResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_IPCFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnLicensesUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnMicroTxnAuthorizationResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServerConnectFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnSteamServersDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnStoreAuthURLResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUser_Statics::NewProp_m_OnValidateAuthTicketResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUser_Statics::ClassParams = {
		&UISteamUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamUser()
	{
		if (!Z_Registration_Info_UClass_UISteamUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamUser.OuterSingleton, Z_Construct_UClass_UISteamUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamUser.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamUser>()
	{
		return UISteamUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamUser);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUser, UISteamUser::StaticClass, TEXT("UISteamUser"), &Z_Registration_Info_UClass_UISteamUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUser), 1913328460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_2463558370(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
