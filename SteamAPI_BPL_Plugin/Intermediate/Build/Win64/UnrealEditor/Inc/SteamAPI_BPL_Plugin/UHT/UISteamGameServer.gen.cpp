// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamGameServer.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamGameServer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServer();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServer_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamBeginAuthSessionResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDenyReason();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserHasLicenseForAppResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHAuthTicket();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnAssociateWithClanResultDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnAssociateWithClanResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnAssociateWithClanResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnAssociateWithClanResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAssociateWithClanResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAssociateWithClanResultDelegate, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnAssociateWithClanResultDelegate_Parms
	{
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnAssociateWithClanResultDelegate_Parms Parms;
	Parms.Result=Result;
	OnAssociateWithClanResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms
		{
			ESteamResult Result;
			int32 PlayersThatDontLikeCandidate;
			int32 PlayersThatDoesntLikeCandidate;
			int32 ClanPlayersThatDontLikeCandidate;
			FSteamID SteamIDCandidate;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatDoesntLikeCandidate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDCandidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms, PlayersThatDontLikeCandidate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatDoesntLikeCandidate = { "PlayersThatDoesntLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms, PlayersThatDoesntLikeCandidate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_SteamIDCandidate = { "SteamIDCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms, SteamIDCandidate), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatDontLikeCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_PlayersThatDoesntLikeCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::NewProp_SteamIDCandidate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnComputeNewPlayerCompatibilityResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnComputeNewPlayerCompatibilityResultDelegate, ESteamResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatDoesntLikeCandidate, int32 ClanPlayersThatDontLikeCandidate, FSteamID SteamIDCandidate)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms
	{
		ESteamResult Result;
		int32 PlayersThatDontLikeCandidate;
		int32 PlayersThatDoesntLikeCandidate;
		int32 ClanPlayersThatDontLikeCandidate;
		FSteamID SteamIDCandidate;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnComputeNewPlayerCompatibilityResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PlayersThatDontLikeCandidate=PlayersThatDontLikeCandidate;
	Parms.PlayersThatDoesntLikeCandidate=PlayersThatDoesntLikeCandidate;
	Parms.ClanPlayersThatDontLikeCandidate=ClanPlayersThatDontLikeCandidate;
	Parms.SteamIDCandidate=SteamIDCandidate;
	OnComputeNewPlayerCompatibilityResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientApproveDelegate_Parms
		{
			FSteamID SteamID;
			FSteamID OwnerSteamID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientApproveDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientApproveDelegate_Parms, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::NewProp_OwnerSteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSClientApproveDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSClientApproveDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSClientApproveDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApproveDelegate, FSteamID SteamID, FSteamID OwnerSteamID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientApproveDelegate_Parms
	{
		FSteamID SteamID;
		FSteamID OwnerSteamID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSClientApproveDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.OwnerSteamID=OwnerSteamID;
	OnGSClientApproveDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms
		{
			FSteamID SteamID;
			ESteamDenyReason DenyReason;
			FString OptionalText;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms, DenyReason), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDenyReason, METADATA_PARAMS(nullptr, 0) }; // 2967194507
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms, OptionalText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_DenyReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_DenyReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::NewProp_OptionalText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSClientDenyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSClientDenyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDenyDelegate, FSteamID SteamID, ESteamDenyReason DenyReason, const FString& OptionalText)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms
	{
		FSteamID SteamID;
		ESteamDenyReason DenyReason;
		FString OptionalText;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSClientDenyDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.DenyReason=DenyReason;
	Parms.OptionalText=OptionalText;
	OnGSClientDenyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDGroup;
			bool bMember;
			bool bOfficer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
		static void NewProp_bMember_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMember;
		static void NewProp_bOfficer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOfficer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bMember_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms*)Obj)->bMember = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bMember = { "bMember", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bMember_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bOfficer_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms*)Obj)->bOfficer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bOfficer = { "bOfficer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bOfficer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_SteamIDGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::NewProp_bOfficer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSClientGroupStatusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSClientGroupStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatusDelegate, FSteamID SteamIDUser, FSteamID SteamIDGroup, bool bMember, bool bOfficer)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms
	{
		FSteamID SteamIDUser;
		FSteamID SteamIDGroup;
		bool bMember;
		bool bOfficer;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSClientGroupStatusDelegate_Parms Parms;
	Parms.SteamIDUser=SteamIDUser;
	Parms.SteamIDGroup=SteamIDGroup;
	Parms.bMember=bMember ? true : false;
	Parms.bOfficer=bOfficer ? true : false;
	OnGSClientGroupStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientKickDelegate_Parms
		{
			FSteamID SteamID;
			ESteamDenyReason DenyReason;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientKickDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGSClientKickDelegate_Parms, DenyReason), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDenyReason, METADATA_PARAMS(nullptr, 0) }; // 2967194507
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::NewProp_DenyReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::NewProp_DenyReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSClientKickDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSClientKickDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSClientKickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientKickDelegate, FSteamID SteamID, ESteamDenyReason DenyReason)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSClientKickDelegate_Parms
	{
		FSteamID SteamID;
		ESteamDenyReason DenyReason;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSClientKickDelegate_Parms Parms;
	Parms.SteamID=SteamID;
	Parms.DenyReason=DenyReason;
	OnGSClientKickDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGSPolicyResponseDelegate_Parms
		{
			bool bSecure;
		};
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGSPolicyResponseDelegate_Parms*)Obj)->bSecure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGSPolicyResponseDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::NewProp_bSecure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGSPolicyResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGSPolicyResponseDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGSPolicyResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponseDelegate, bool bSecure)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGSPolicyResponseDelegate_Parms
	{
		bool bSecure;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGSPolicyResponseDelegate_Parms Parms;
	Parms.bSecure=bSecure ? true : false;
	OnGSPolicyResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamGameServer::execWasRestartRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasRestartRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=P_THIS->UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetSpectatorServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SpectatorServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorServerName(Z_Param_SpectatorServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetSpectatorPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SpectatorPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorPort(Z_Param_SpectatorPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerName(Z_Param_ServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetRegion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_Region);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetProduct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Product);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProduct(Z_Param_Product);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetPasswordProtected)
	{
		P_GET_UBOOL(Z_Param_bPasswordProtected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPasswordProtected(Z_Param_bPasswordProtected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetModDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModDir(Z_Param_ModDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetMaxPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayersMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxPlayerCount(Z_Param_PlayersMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetMapName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapName(Z_Param_MapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetKeyValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyValue(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetGameTags)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameTags(Z_Param_GameTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetGameDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameDescription(Z_Param_GameDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetGameData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameData(Z_Param_GameData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetDedicatedServer)
	{
		P_GET_UBOOL(Z_Param_bDedicated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDedicatedServer(Z_Param_bDedicated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execSetBotPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BotPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBotPlayerCount(Z_Param_BotPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execRequestUserGroupStatus)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUserGroupStatus(Z_Param_SteamIDUser,Z_Param_SteamIDGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execLogOnAnonymous)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOnAnonymous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execLogOn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOn(Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execLogOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execGetSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execGetPublicIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPublicIP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AuthTicket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHAuthTicket*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_AuthTicket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAuthSession(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execClearAllKeyValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllKeyValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execCancelAuthTicket)
	{
		P_GET_STRUCT(FHAuthTicket,Z_Param_AuthTicketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAuthTicket(Z_Param_AuthTicketHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execBSecure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSecure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_AuthTicket);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=P_THIS->BeginAuthSession(Z_Param_AuthTicket,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execAssociateWithClan)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->AssociateWithClan(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameServer::execGetSteamGameServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamGameServer**)Z_Param__Result=UISteamGameServer::GetSteamGameServer();
		P_NATIVE_END;
	}
	void UISteamGameServer::StaticRegisterNativesUISteamGameServer()
	{
		UClass* Class = UISteamGameServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateWithClan", &UISteamGameServer::execAssociateWithClan },
			{ "BeginAuthSession", &UISteamGameServer::execBeginAuthSession },
			{ "BLoggedOn", &UISteamGameServer::execBLoggedOn },
			{ "BSecure", &UISteamGameServer::execBSecure },
			{ "CancelAuthTicket", &UISteamGameServer::execCancelAuthTicket },
			{ "ClearAllKeyValues", &UISteamGameServer::execClearAllKeyValues },
			{ "EndAuthSession", &UISteamGameServer::execEndAuthSession },
			{ "GetAuthSessionTicket", &UISteamGameServer::execGetAuthSessionTicket },
			{ "GetPublicIP", &UISteamGameServer::execGetPublicIP },
			{ "GetSteamGameServer", &UISteamGameServer::execGetSteamGameServer },
			{ "GetSteamID", &UISteamGameServer::execGetSteamID },
			{ "LogOff", &UISteamGameServer::execLogOff },
			{ "LogOn", &UISteamGameServer::execLogOn },
			{ "LogOnAnonymous", &UISteamGameServer::execLogOnAnonymous },
			{ "RequestUserGroupStatus", &UISteamGameServer::execRequestUserGroupStatus },
			{ "SetBotPlayerCount", &UISteamGameServer::execSetBotPlayerCount },
			{ "SetDedicatedServer", &UISteamGameServer::execSetDedicatedServer },
			{ "SetGameData", &UISteamGameServer::execSetGameData },
			{ "SetGameDescription", &UISteamGameServer::execSetGameDescription },
			{ "SetGameTags", &UISteamGameServer::execSetGameTags },
			{ "SetKeyValue", &UISteamGameServer::execSetKeyValue },
			{ "SetMapName", &UISteamGameServer::execSetMapName },
			{ "SetMaxPlayerCount", &UISteamGameServer::execSetMaxPlayerCount },
			{ "SetModDir", &UISteamGameServer::execSetModDir },
			{ "SetPasswordProtected", &UISteamGameServer::execSetPasswordProtected },
			{ "SetProduct", &UISteamGameServer::execSetProduct },
			{ "SetRegion", &UISteamGameServer::execSetRegion },
			{ "SetServerName", &UISteamGameServer::execSetServerName },
			{ "SetSpectatorPort", &UISteamGameServer::execSetSpectatorPort },
			{ "SetSpectatorServerName", &UISteamGameServer::execSetSpectatorServerName },
			{ "UserHasLicenseForApp", &UISteamGameServer::execUserHasLicenseForApp },
			{ "WasRestartRequested", &UISteamGameServer::execWasRestartRequested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics
	{
		struct ISteamGameServer_eventAssociateWithClan_Parms
		{
			FSteamID SteamIDClan;
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventAssociateWithClan_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventAssociateWithClan_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Associate this game server with this clan for the purposes of computing player compatibility.\n\x09 *\n\x09 * @param FSteamID SteamIDClan - The Steam ID of the group you want to be associated with.\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a AssociateWithClanResult_t call result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Associate this game server with this clan for the purposes of computing player compatibility.\n\n@param FSteamID SteamIDClan - The Steam ID of the group you want to be associated with.\n@return FSteamAPICall - SteamAPICall_t to be used with a AssociateWithClanResult_t call result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "AssociateWithClan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::ISteamGameServer_eventAssociateWithClan_Parms), Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_AssociateWithClan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_AssociateWithClan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics
	{
		struct ISteamGameServer_eventBeginAuthSession_Parms
		{
			TArray<uint8> AuthTicket;
			FSteamID SteamID;
			ESteamBeginAuthSessionResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AuthTicket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthTicket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_AuthTicket_Inner = { "AuthTicket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventBeginAuthSession_Parms, AuthTicket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) }; // 1611605321
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_AuthTicket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_AuthTicket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09 * The ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09 * This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09 * When the multiplayer session terminates you must call EndAuthSession.\n\x09 *\n\x09 * @param TArray<uint8> AuthTicket - The auth ticket to validate.\n\x09 * @param FSteamID SteamID - The entity's Steam ID that sent this ticket.\n\x09 * @return ESteamBeginAuthSessionResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\nThe ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param TArray<uint8> AuthTicket - The auth ticket to validate.\n@param FSteamID SteamID - The entity's Steam ID that sent this ticket.\n@return ESteamBeginAuthSessionResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::ISteamGameServer_eventBeginAuthSession_Parms), Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics
	{
		struct ISteamGameServer_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServer_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServer_eventBLoggedOn_Parms), &Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Checks if the game server is logged on.\n\x09 *\n\x09 * @return bool - true if the game server is logged on; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Checks if the game server is logged on.\n\n@return bool - true if the game server is logged on; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::ISteamGameServer_eventBLoggedOn_Parms), Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_BSecure_Statics
	{
		struct ISteamGameServer_eventBSecure_Parms
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
	void Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServer_eventBSecure_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServer_eventBSecure_Parms), &Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Checks whether the game server is in \"Secure\" mode.\n\x09 *\n\x09 * @return bool - true if the game server secure; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode.\n\n@return bool - true if the game server secure; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "BSecure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::ISteamGameServer_eventBSecure_Parms), Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_BSecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_BSecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics
	{
		struct ISteamGameServer_eventCancelAuthTicket_Parms
		{
			FHAuthTicket AuthTicketHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthTicketHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::NewProp_AuthTicketHandle = { "AuthTicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventCancelAuthTicket_Parms, AuthTicketHandle), Z_Construct_UScriptStruct_FHAuthTicket, METADATA_PARAMS(nullptr, 0) }; // 2885808569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::NewProp_AuthTicketHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09 *\n\x09 * @param FHAuthTicket AuthTicketHandle - The active auth ticket to cancel.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param FHAuthTicket AuthTicketHandle - The active auth ticket to cancel.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::ISteamGameServer_eventCancelAuthTicket_Parms), Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Clears the whole list of key/values that are sent in rules queries.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Clears the whole list of key/values that are sent in rules queries.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "ClearAllKeyValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics
	{
		struct ISteamGameServer_eventEndAuthSession_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09 *\n\x09 * @param FSteamID SteamID - The entity to end the active auth session with.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param FSteamID SteamID - The entity to end the active auth session with.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::ISteamGameServer_eventEndAuthSession_Parms), Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics
	{
		struct ISteamGameServer_eventGetAuthSessionTicket_Parms
		{
			TArray<uint8> AuthTicket;
			FHAuthTicket ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AuthTicket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthTicket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::NewProp_AuthTicket_Inner = { "AuthTicket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventGetAuthSessionTicket_Parms, AuthTicket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FHAuthTicket, METADATA_PARAMS(nullptr, 0) }; // 2885808569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::NewProp_AuthTicket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::NewProp_AuthTicket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09 * After calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\n\x09 * When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the API -\n\x09 * call before attempting to use the ticket to ensure that the ticket has been communicated to the server. If this callback does not come in a timely fashion (10 - 20 seconds), then your -\n\x09 * client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09 * Triggers a GetAuthSessionTicketResponse_t callback.\n\x09 *\n\x09 * @param TArray<uint8> & AuthTicket - \x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09 * @return FHAuthTicket - A handle to the auth ticket. When you're done interacting with the entity you must call CancelAuthTicket on the handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\nAfter calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the API -\ncall before attempting to use the ticket to ensure that the ticket has been communicated to the server. If this callback does not come in a timely fashion (10 - 20 seconds), then your -\nclient is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\nTriggers a GetAuthSessionTicketResponse_t callback.\n\n@param TArray<uint8> & AuthTicket -  The buffer where the new auth ticket will be copied into if the call was successful.\n@return FHAuthTicket - A handle to the auth ticket. When you're done interacting with the entity you must call CancelAuthTicket on the handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::ISteamGameServer_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics
	{
		struct ISteamGameServer_eventGetPublicIP_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventGetPublicIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Gets the public IP of the server according to Steam.\n\x09 * This is useful when the server is behind NAT and you want to advertise its IP in a lobby for other clients to directly connect to.\n\x09 *\n\x09 * @return FString - Returns the IP address (IPv4) as an FString\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Gets the public IP of the server according to Steam.\nThis is useful when the server is behind NAT and you want to advertise its IP in a lobby for other clients to directly connect to.\n\n@return FString - Returns the IP address (IPv4) as an FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "GetPublicIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::ISteamGameServer_eventGetPublicIP_Parms), Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_GetPublicIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_GetPublicIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics
	{
		struct ISteamGameServer_eventGetSteamGameServer_Parms
		{
			UISteamGameServer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventGetSteamGameServer_Parms, ReturnValue), Z_Construct_UClass_UISteamGameServer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore" },
		{ "CompactNodeTitle", "SteamGameServer" },
		{ "DisplayName", "Steam Game Server" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "GetSteamGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::ISteamGameServer_eventGetSteamGameServer_Parms), Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics
	{
		struct ISteamGameServer_eventGetSteamID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Gets the Steam ID of the game server.\n\x09 *\n\x09 * @return FSteamID\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server.\n\n@return FSteamID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "GetSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::ISteamGameServer_eventGetSteamID_Parms), Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_LogOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_LogOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Begin process of logging the game server out of steam.\n\x09 * Triggers a SteamServerConnectFailure_t callback.\n\x09 * Triggers a SteamServersConnected_t callback.\n\x09 * Triggers a SteamServersDisconnected_t callback.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Begin process of logging the game server out of steam.\nTriggers a SteamServerConnectFailure_t callback.\nTriggers a SteamServersConnected_t callback.\nTriggers a SteamServersDisconnected_t callback.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_LogOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "LogOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_LogOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_LogOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_LogOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_LogOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_LogOn_Statics
	{
		struct ISteamGameServer_eventLogOn_Parms
		{
			FString Token;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventLogOn_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::NewProp_Token,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Begin process to login to a persistent game server account.\n\x09 * Triggers a SteamServerConnectFailure_t callback.\n\x09 * Triggers a SteamServersConnected_t callback.\n\x09 * Triggers a SteamServersDisconnected_t callback.\n\x09 *\n\x09 * @param const FString & Token\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Begin process to login to a persistent game server account.\nTriggers a SteamServerConnectFailure_t callback.\nTriggers a SteamServersConnected_t callback.\nTriggers a SteamServersDisconnected_t callback.\n\n@param const FString & Token\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "LogOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::ISteamGameServer_eventLogOn_Parms), Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_LogOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_LogOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Login to a generic, anonymous account.\n\x09 * Triggers a SteamServerConnectFailure_t callback.\n\x09 * Triggers a SteamServersConnected_t callback.\n\x09 * Triggers a SteamServersDisconnected_t callback.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Login to a generic, anonymous account.\nTriggers a SteamServerConnectFailure_t callback.\nTriggers a SteamServersConnected_t callback.\nTriggers a SteamServersDisconnected_t callback.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "LogOnAnonymous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics
	{
		struct ISteamGameServer_eventRequestUserGroupStatus_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDGroup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServer_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServer_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Checks if a user is in the specified Steam group.\n\x09 * Triggers a GSClientGroupStatus_t callback.\n\x09 *\n\x09 * @param FSteamID SteamIDUser - The user to check the group status of.\n\x09 * @param FSteamID SteamIDGroup - The group to check.\n\x09 * @return bool - true if the call was successfully sent out to the Steam servers; otherwise, false if we're not connected to the steam servers or an invalid user or group was provided.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Checks if a user is in the specified Steam group.\nTriggers a GSClientGroupStatus_t callback.\n\n@param FSteamID SteamIDUser - The user to check the group status of.\n@param FSteamID SteamIDGroup - The group to check.\n@return bool - true if the call was successfully sent out to the Steam servers; otherwise, false if we're not connected to the steam servers or an invalid user or group was provided." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "RequestUserGroupStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::ISteamGameServer_eventRequestUserGroupStatus_Parms), Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics
	{
		struct ISteamGameServer_eventSetBotPlayerCount_Parms
		{
			int32 BotPlayers;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetBotPlayerCount_Parms, BotPlayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::NewProp_BotPlayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the number of bot/AI players on the game server. The default value is 0.\n\x09 *\n\x09 * @param int32 BotPlayers - The number of bot/AI players currently playing on the server.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the number of bot/AI players on the game server. The default value is 0.\n\n@param int32 BotPlayers - The number of bot/AI players currently playing on the server.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetBotPlayerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::ISteamGameServer_eventSetBotPlayerCount_Parms), Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics
	{
		struct ISteamGameServer_eventSetDedicatedServer_Parms
		{
			bool bDedicated;
		};
		static void NewProp_bDedicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
	{
		((ISteamGameServer_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServer_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\x09 * NOTE: This only be set before calling LogOn or LogOnAnonymous.\n\x09 *\n\x09 * @param bool bDedicated - Is this a dedicated server (true) or a listen server (false)?\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the whether this is a dedicated server or a listen server. The default is listen server.\nNOTE: This only be set before calling LogOn or LogOnAnonymous.\n\n@param bool bDedicated - Is this a dedicated server (true) or a listen server (false)?\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetDedicatedServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::ISteamGameServer_eventSetDedicatedServer_Parms), Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics
	{
		struct ISteamGameServer_eventSetGameData_Parms
		{
			FString GameData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::NewProp_GameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetGameData_Parms, GameData), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::NewProp_GameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::NewProp_GameData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::NewProp_GameData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets a string defining the \"gamedata\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09 * This is usually formatted as a comma or semicolon separated list.\n\x09 * Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09 *\n\x09 * @param const FString & GameData - The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gamedata\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param const FString & GameData - The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetGameData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::ISteamGameServer_eventSetGameData_Parms), Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics
	{
		struct ISteamGameServer_eventSetGameDescription_Parms
		{
			FString GameDescription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::NewProp_GameDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetGameDescription_Parms, GameDescription), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::NewProp_GameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::NewProp_GameDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::NewProp_GameDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the game description. Setting this to the full name of your game is recommended.\n\x09 * NOTE: This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09 *\n\x09 * @param const FString GameDescription - The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the game description. Setting this to the full name of your game is recommended.\nNOTE: This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param const FString GameDescription - The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetGameDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::ISteamGameServer_eventSetGameDescription_Parms), Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetGameDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetGameDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics
	{
		struct ISteamGameServer_eventSetGameTags_Parms
		{
			FString GameTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::NewProp_GameTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetGameTags_Parms, GameTags), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::NewProp_GameTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::NewProp_GameTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::NewProp_GameTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09 * This is usually formatted as a comma or semicolon separated list.\n\x09 * Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09 *\n\x09 * @param const FString & GameTags - The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param const FString & GameTags - The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetGameTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::ISteamGameServer_eventSetGameTags_Parms), Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetGameTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetGameTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics
	{
		struct ISteamGameServer_eventSetKeyValue_Parms
		{
			FString Key;
			FString Value;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetKeyValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetKeyValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Add/update a rules key/value pair.\n\x09 *\n\x09 * @param const FString & Key\n\x09 * @param const FString & Value\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Add/update a rules key/value pair.\n\n@param const FString & Key\n@param const FString & Value\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetKeyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::ISteamGameServer_eventSetKeyValue_Parms), Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics
	{
		struct ISteamGameServer_eventSetMapName_Parms
		{
			FString MapName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetMapName_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::NewProp_MapName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the name of map to report in the server browser.\n\x09 *\n\x09 * @param const FString & MapName - The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the name of map to report in the server browser.\n\n@param const FString & MapName - The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetMapName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::ISteamGameServer_eventSetMapName_Parms), Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics
	{
		struct ISteamGameServer_eventSetMaxPlayerCount_Parms
		{
			int32 PlayersMax;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax = { "PlayersMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetMaxPlayerCount_Parms, PlayersMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the maximum number of players allowed on the server at once.\n\x09 * This value may be changed at any time.\n\x09 *\n\x09 * @param int32 PlayersMax - The new maximum number of players allowed on this server.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the maximum number of players allowed on the server at once.\nThis value may be changed at any time.\n\n@param int32 PlayersMax - The new maximum number of players allowed on this server.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetMaxPlayerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::ISteamGameServer_eventSetMaxPlayerCount_Parms), Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics
	{
		struct ISteamGameServer_eventSetModDir_Parms
		{
			FString ModDir;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::NewProp_ModDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::NewProp_ModDir = { "ModDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetModDir_Parms, ModDir), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::NewProp_ModDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::NewProp_ModDir_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::NewProp_ModDir,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the game directory.\n\x09 * This should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\x09 * NOTE: This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09 *\n\x09 * @param const FString & ModDir - The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the game directory.\nThis should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\nNOTE: This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param const FString & ModDir - The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetModDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::ISteamGameServer_eventSetModDir_Parms), Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetModDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetModDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics
	{
		struct ISteamGameServer_eventSetPasswordProtected_Parms
		{
			bool bPasswordProtected;
		};
		static void NewProp_bPasswordProtected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
	{
		((ISteamGameServer_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServer_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Set whether the game server will require a password once when the user tries to join.\n\x09 *\n\x09 * @param bool bPasswordProtected - Enable (true) or disable (false) password protection.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Set whether the game server will require a password once when the user tries to join.\n\n@param bool bPasswordProtected - Enable (true) or disable (false) password protection.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetPasswordProtected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::ISteamGameServer_eventSetPasswordProtected_Parms), Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics
	{
		struct ISteamGameServer_eventSetProduct_Parms
		{
			FString Product;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::NewProp_Product_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetProduct_Parms, Product), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::NewProp_Product_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::NewProp_Product_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::NewProp_Product,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\x09 * Converting the games app ID to a string for this is recommended.\n\x09 * NOTE: This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09 *\n\x09 * @param const FString & Product - The unique identifier for your game. Must not be NULL or an empty string (\"\").\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the game product identifier. This is currently used by the master server for version checking purposes.\nConverting the games app ID to a string for this is recommended.\nNOTE: This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param const FString & Product - The unique identifier for your game. Must not be NULL or an empty string (\"\").\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetProduct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::ISteamGameServer_eventSetProduct_Parms), Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetProduct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetProduct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics
	{
		struct ISteamGameServer_eventSetRegion_Parms
		{
			FString Region;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetRegion_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::NewProp_Region_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\x09 *\n\x09 * @param const FString & Region\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\n@param const FString & Region\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::ISteamGameServer_eventSetRegion_Parms), Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics
	{
		struct ISteamGameServer_eventSetServerName_Parms
		{
			FString ServerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetServerName_Parms, ServerName), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::NewProp_ServerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the name of server as it will appear in the server browser.\n\x09 *\n\x09 * @param const FString & ServerName - The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the name of server as it will appear in the server browser.\n\n@param const FString & ServerName - The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::ISteamGameServer_eventSetServerName_Parms), Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics
	{
		struct ISteamGameServer_eventSetSpectatorPort_Parms
		{
			int32 SpectatorPort;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpectatorPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort = { "SpectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetSpectatorPort_Parms, SpectatorPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\x09 *\n\x09 * @param int32 SpectatorPort - The port for spectators to join.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\n@param int32 SpectatorPort - The port for spectators to join.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetSpectatorPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::ISteamGameServer_eventSetSpectatorPort_Parms), Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics
	{
		struct ISteamGameServer_eventSetSpectatorServerName_Parms
		{
			FString SpectatorServerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpectatorServerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName = { "SpectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventSetSpectatorServerName_Parms, SpectatorServerName), METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\x09 *\n\x09 * @param const FString & SpectatorServerName - The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\n@param const FString & SpectatorServerName - The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "SetSpectatorServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::ISteamGameServer_eventSetSpectatorServerName_Parms), Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics
	{
		struct ISteamGameServer_eventUserHasLicenseForApp_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameServer_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) }; // 4195797630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09 * This can only be called after sending the users auth ticket to BeginAuthSession/\n\x09 *\n\x09 * @param FSteamID SteamID - The Steam ID of the user that sent the auth ticket.\n\x09 * @param int32 AppID - The DLC App ID to check if the user owns it.\n\x09 * @return ESteamUserHasLicenseForAppResult\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\nThis can only be called after sending the users auth ticket to BeginAuthSession/\n\n@param FSteamID SteamID - The Steam ID of the user that sent the auth ticket.\n@param int32 AppID - The DLC App ID to check if the user owns it.\n@return ESteamUserHasLicenseForAppResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::ISteamGameServer_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics
	{
		struct ISteamGameServer_eventWasRestartRequested_Parms
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
	void Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameServer_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameServer_eventWasRestartRequested_Parms), &Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/**\n\x09 * Checks if the master server has alerted us that we are out of date.\n\x09 * This reverts back to false after calling this function.\n\x09 *\n\x09 * @return bool - true if the master server wants this game server to update and restart; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Checks if the master server has alerted us that we are out of date.\nThis reverts back to false after calling this function.\n\n@return bool - true if the master server wants this game server to update and restart; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameServer, nullptr, "WasRestartRequested", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::ISteamGameServer_eventWasRestartRequested_Parms), Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameServer_WasRestartRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameServer_WasRestartRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamGameServer);
	UClass* Z_Construct_UClass_UISteamGameServer_NoRegister()
	{
		return UISteamGameServer::StaticClass();
	}
	struct Z_Construct_UClass_UISteamGameServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnAssociateWithClanResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnAssociateWithClanResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnComputeNewPlayerCompatibilityResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnComputeNewPlayerCompatibilityResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSClientApprove_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSClientApprove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSClientDeny_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSClientDeny;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSClientGroupStatus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSClientGroupStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSClientKick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSClientKick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGSPolicyResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGSPolicyResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamGameServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamGameServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamGameServer_AssociateWithClan, "AssociateWithClan" }, // 1828526516
		{ &Z_Construct_UFunction_UISteamGameServer_BeginAuthSession, "BeginAuthSession" }, // 3812323
		{ &Z_Construct_UFunction_UISteamGameServer_BLoggedOn, "BLoggedOn" }, // 2347058973
		{ &Z_Construct_UFunction_UISteamGameServer_BSecure, "BSecure" }, // 270044911
		{ &Z_Construct_UFunction_UISteamGameServer_CancelAuthTicket, "CancelAuthTicket" }, // 1494919737
		{ &Z_Construct_UFunction_UISteamGameServer_ClearAllKeyValues, "ClearAllKeyValues" }, // 2119988226
		{ &Z_Construct_UFunction_UISteamGameServer_EndAuthSession, "EndAuthSession" }, // 3952672470
		{ &Z_Construct_UFunction_UISteamGameServer_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 2180166730
		{ &Z_Construct_UFunction_UISteamGameServer_GetPublicIP, "GetPublicIP" }, // 1330129036
		{ &Z_Construct_UFunction_UISteamGameServer_GetSteamGameServer, "GetSteamGameServer" }, // 1991988973
		{ &Z_Construct_UFunction_UISteamGameServer_GetSteamID, "GetSteamID" }, // 2554666255
		{ &Z_Construct_UFunction_UISteamGameServer_LogOff, "LogOff" }, // 1903608941
		{ &Z_Construct_UFunction_UISteamGameServer_LogOn, "LogOn" }, // 195182020
		{ &Z_Construct_UFunction_UISteamGameServer_LogOnAnonymous, "LogOnAnonymous" }, // 3619514898
		{ &Z_Construct_UFunction_UISteamGameServer_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 3007729351
		{ &Z_Construct_UFunction_UISteamGameServer_SetBotPlayerCount, "SetBotPlayerCount" }, // 2640718796
		{ &Z_Construct_UFunction_UISteamGameServer_SetDedicatedServer, "SetDedicatedServer" }, // 127543076
		{ &Z_Construct_UFunction_UISteamGameServer_SetGameData, "SetGameData" }, // 1630612287
		{ &Z_Construct_UFunction_UISteamGameServer_SetGameDescription, "SetGameDescription" }, // 2974793558
		{ &Z_Construct_UFunction_UISteamGameServer_SetGameTags, "SetGameTags" }, // 2626656171
		{ &Z_Construct_UFunction_UISteamGameServer_SetKeyValue, "SetKeyValue" }, // 2568959868
		{ &Z_Construct_UFunction_UISteamGameServer_SetMapName, "SetMapName" }, // 3251537077
		{ &Z_Construct_UFunction_UISteamGameServer_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 2616289549
		{ &Z_Construct_UFunction_UISteamGameServer_SetModDir, "SetModDir" }, // 1110072832
		{ &Z_Construct_UFunction_UISteamGameServer_SetPasswordProtected, "SetPasswordProtected" }, // 1051942906
		{ &Z_Construct_UFunction_UISteamGameServer_SetProduct, "SetProduct" }, // 4141583247
		{ &Z_Construct_UFunction_UISteamGameServer_SetRegion, "SetRegion" }, // 3715708189
		{ &Z_Construct_UFunction_UISteamGameServer_SetServerName, "SetServerName" }, // 1088309221
		{ &Z_Construct_UFunction_UISteamGameServer_SetSpectatorPort, "SetSpectatorPort" }, // 2421001583
		{ &Z_Construct_UFunction_UISteamGameServer_SetSpectatorServerName, "SetSpectatorServerName" }, // 998406131
		{ &Z_Construct_UFunction_UISteamGameServer_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 372686840
		{ &Z_Construct_UFunction_UISteamGameServer_WasRestartRequested, "WasRestartRequested" }, // 533982671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Provides the core of the Steam Game Servers API.\n" },
		{ "IncludePath", "UISteamGameServer.h" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Provides the core of the Steam Game Servers API." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnAssociateWithClanResult_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** Sent when the game server attempted to be associated with a Steam Group. */" },
		{ "DisplayName", "OnAssociateWithClanResult" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sent when the game server attempted to be associated with a Steam Group." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnAssociateWithClanResult = { "m_OnAssociateWithClanResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnAssociateWithClanResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnAssociateWithClanResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnAssociateWithClanResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnAssociateWithClanResult_MetaData)) }; // 2882789268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnComputeNewPlayerCompatibilityResult_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** Sent when the game server is checking if the new player is a good fit for the server based on the frenemy system. */" },
		{ "DisplayName", "OnComputeNewPlayerCompatibilityResult" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Sent when the game server is checking if the new player is a good fit for the server based on the frenemy system." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnComputeNewPlayerCompatibilityResult = { "m_OnComputeNewPlayerCompatibilityResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnComputeNewPlayerCompatibilityResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnComputeNewPlayerCompatibilityResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnComputeNewPlayerCompatibilityResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnComputeNewPlayerCompatibilityResult_MetaData)) }; // 3218219008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientApprove_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** A client has been approved to connect to this game server. */" },
		{ "DisplayName", "OnGSClientApprove" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "A client has been approved to connect to this game server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientApprove = { "m_OnGSClientApprove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnGSClientApprove), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientApproveDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientApprove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientApprove_MetaData)) }; // 1674719234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientDeny_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** Called when a user has been denied to connection to this game server. */" },
		{ "DisplayName", "OnGSClientDeny" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Called when a user has been denied to connection to this game server." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientDeny = { "m_OnGSClientDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnGSClientDeny), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientDenyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientDeny_MetaData)) }; // 844874461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientGroupStatus_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** Called when we have received the group status of a user. */" },
		{ "DisplayName", "OnGSClientGroupStatus" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Called when we have received the group status of a user." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientGroupStatus = { "m_OnGSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnGSClientGroupStatus), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientGroupStatusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientGroupStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientGroupStatus_MetaData)) }; // 3725153227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientKick_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** Called when the game server should kick the user. */" },
		{ "DisplayName", "OnGSClientKick" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Called when the game server should kick the user." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientKick = { "m_OnGSClientKick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnGSClientKick), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSClientKickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientKick_MetaData)) }; // 307080044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSPolicyResponse_MetaData[] = {
		{ "Category", "SteamBridgeCore|GameServer" },
		{ "Comment", "/** Received when the game server requests to be displayed as secure (VAC protected) */" },
		{ "DisplayName", "OnGSPolicyResponse" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Received when the game server requests to be displayed as secure (VAC protected)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSPolicyResponse = { "m_OnGSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamGameServer, m_OnGSPolicyResponse), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGSPolicyResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSPolicyResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSPolicyResponse_MetaData)) }; // 1194833496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnAssociateWithClanResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnComputeNewPlayerCompatibilityResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientApprove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientDeny,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientGroupStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSClientKick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamGameServer_Statics::NewProp_m_OnGSPolicyResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamGameServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamGameServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamGameServer_Statics::ClassParams = {
		&UISteamGameServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamGameServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamGameServer()
	{
		if (!Z_Registration_Info_UClass_UISteamGameServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamGameServer.OuterSingleton, Z_Construct_UClass_UISteamGameServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamGameServer.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamGameServer>()
	{
		return UISteamGameServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamGameServer);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamGameServer, UISteamGameServer::StaticClass, TEXT("UISteamGameServer"), &Z_Registration_Info_UClass_UISteamGameServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamGameServer), 2443012090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_2425247239(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
