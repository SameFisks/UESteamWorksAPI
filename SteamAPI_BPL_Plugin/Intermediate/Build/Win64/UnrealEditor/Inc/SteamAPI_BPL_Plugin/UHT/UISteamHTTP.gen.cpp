// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamHTTP.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamHTTP() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamHTTP();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamHTTP_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamHTTPMethod();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamHTTPStatus();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHTTPCookieContainerHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHTTPRequestHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int64 ContextValue;
			bool bRequestSuccessful;
			TEnumAsByte<ESteamHTTPStatus::Type> HTTPStatus;
			int32 BodySize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextValue;
		static void NewProp_bRequestSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestSuccessful;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HTTPStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BodySize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_ContextValue = { "ContextValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms, ContextValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_bRequestSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms*)Obj)->bRequestSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_bRequestSuccessful = { "bRequestSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_bRequestSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_HTTPStatus = { "HTTPStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms, HTTPStatus), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamHTTPStatus, METADATA_PARAMS(nullptr, 0) }; // 2855291190
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_BodySize = { "BodySize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms, BodySize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_ContextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_bRequestSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_HTTPStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::NewProp_BodySize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnHTTPRequestCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHTTPRequestCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTTPRequestCompletedDelegate, FHTTPRequestHandle RequestHandle, int64 ContextValue, bool bRequestSuccessful, ESteamHTTPStatus::Type HTTPStatus, int32 BodySize)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms
	{
		FHTTPRequestHandle RequestHandle;
		int64 ContextValue;
		bool bRequestSuccessful;
		TEnumAsByte<ESteamHTTPStatus::Type> HTTPStatus;
		int32 BodySize;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestCompletedDelegate_Parms Parms;
	Parms.RequestHandle=RequestHandle;
	Parms.ContextValue=ContextValue;
	Parms.bRequestSuccessful=bRequestSuccessful ? true : false;
	Parms.HTTPStatus=HTTPStatus;
	Parms.BodySize=BodySize;
	OnHTTPRequestCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int64 ContextValue;
			int32 Offset;
			int32 BytesReceived;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_ContextValue = { "ContextValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms, ContextValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_BytesReceived = { "BytesReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms, BytesReceived), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_ContextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::NewProp_BytesReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnHTTPRequestDataReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHTTPRequestDataReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTTPRequestDataReceivedDelegate, FHTTPRequestHandle RequestHandle, int64 ContextValue, int32 Offset, int32 BytesReceived)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms
	{
		FHTTPRequestHandle RequestHandle;
		int64 ContextValue;
		int32 Offset;
		int32 BytesReceived;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestDataReceivedDelegate_Parms Parms;
	Parms.RequestHandle=RequestHandle;
	Parms.ContextValue=ContextValue;
	Parms.Offset=Offset;
	Parms.BytesReceived=BytesReceived;
	OnHTTPRequestDataReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestHeadersReceivedDelegate_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int64 ContextValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestHeadersReceivedDelegate_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::NewProp_ContextValue = { "ContextValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestHeadersReceivedDelegate_Parms, ContextValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::NewProp_ContextValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnHTTPRequestHeadersReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestHeadersReceivedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHTTPRequestHeadersReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTTPRequestHeadersReceivedDelegate, FHTTPRequestHandle RequestHandle, int64 ContextValue)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestHeadersReceivedDelegate_Parms
	{
		FHTTPRequestHandle RequestHandle;
		int64 ContextValue;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnHTTPRequestHeadersReceivedDelegate_Parms Parms;
	Parms.RequestHandle=RequestHandle;
	Parms.ContextValue=ContextValue;
	OnHTTPRequestHeadersReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestUserAgentInfo)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserAgentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestUserAgentInfo(Z_Param_RequestHandle,Z_Param_UserAgentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestRequiresVerifiedCertificate)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_UBOOL(Z_Param_bRequireVerifiedCertificate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestRequiresVerifiedCertificate(Z_Param_RequestHandle,Z_Param_bRequireVerifiedCertificate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestRawPostBody)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Body);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestRawPostBody(Z_Param_RequestHandle,Z_Param_ContentType,Z_Param_Out_Body);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestNetworkActivityTimeout)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeoutSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestNetworkActivityTimeout(Z_Param_RequestHandle,Z_Param_TimeoutSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestHeaderValue)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestHeaderValue(Z_Param_RequestHandle,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestGetOrPostParameter)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestGetOrPostParameter(Z_Param_RequestHandle,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestCookieContainer)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_STRUCT(FHTTPCookieContainerHandle,Z_Param_CookieContainerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestCookieContainer(Z_Param_RequestHandle,Z_Param_CookieContainerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestContextValue)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FInt64Property,Z_Param_ContextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestContextValue(Z_Param_RequestHandle,Z_Param_ContextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetHTTPRequestAbsoluteTimeoutMS)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHTTPRequestAbsoluteTimeoutMS(Z_Param_RequestHandle,Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSetCookie)
	{
		P_GET_STRUCT(FHTTPCookieContainerHandle,Z_Param_CookieContainerHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Host);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_Cookie);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCookie(Z_Param_CookieContainerHandle,Z_Param_Host,Z_Param_Url,Z_Param_Cookie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSendHTTPRequestAndStreamResponse)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_STRUCT_REF(FSteamAPICall,Z_Param_Out_CallHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendHTTPRequestAndStreamResponse(Z_Param_RequestHandle,Z_Param_Out_CallHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execSendHTTPRequest)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_STRUCT_REF(FSteamAPICall,Z_Param_Out_CallHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendHTTPRequest(Z_Param_RequestHandle,Z_Param_Out_CallHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execReleaseHTTPRequest)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseHTTPRequest(Z_Param_RequestHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execReleaseCookieContainer)
	{
		P_GET_STRUCT(FHTTPCookieContainerHandle,Z_Param_CookieContainerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseCookieContainer(Z_Param_CookieContainerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execPrioritizeHTTPRequest)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PrioritizeHTTPRequest(Z_Param_RequestHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPStreamingResponseBodyData)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_BodyDataBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPStreamingResponseBodyData(Z_Param_RequestHandle,Z_Param_Offset,Z_Param_Out_BodyDataBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPResponseHeaderValue)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_HeaderValueBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPResponseHeaderValue(Z_Param_RequestHandle,Z_Param_HeaderName,Z_Param_Out_HeaderValueBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPResponseHeaderSize)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResponseHeaderSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPResponseHeaderSize(Z_Param_RequestHandle,Z_Param_HeaderName,Z_Param_Out_ResponseHeaderSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPResponseBodySize)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BodySize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPResponseBodySize(Z_Param_RequestHandle,Z_Param_Out_BodySize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPResponseBodyData)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_BodyDataBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPResponseBodyData(Z_Param_RequestHandle,Z_Param_Out_BodyDataBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPRequestWasTimedOut)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_UBOOL_REF(Z_Param_Out_bWasTimedOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPRequestWasTimedOut(Z_Param_RequestHandle,Z_Param_Out_bWasTimedOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetHTTPDownloadProgressPct)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHTTPDownloadProgressPct(Z_Param_RequestHandle,Z_Param_Out_Percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execDeferHTTPRequest)
	{
		P_GET_STRUCT(FHTTPRequestHandle,Z_Param_RequestHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeferHTTPRequest(Z_Param_RequestHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execCreateHTTPRequest)
	{
		P_GET_ENUM(ESteamHTTPMethod,Z_Param_HTTPRequestMethod);
		P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHTTPRequestHandle*)Z_Param__Result=P_THIS->CreateHTTPRequest(ESteamHTTPMethod(Z_Param_HTTPRequestMethod),Z_Param_AbsoluteURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execCreateCookieContainer)
	{
		P_GET_UBOOL(Z_Param_bAllowResponsesToModify);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHTTPCookieContainerHandle*)Z_Param__Result=P_THIS->CreateCookieContainer(Z_Param_bAllowResponsesToModify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamHTTP::execGetSteamHTTP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamHTTP**)Z_Param__Result=UISteamHTTP::GetSteamHTTP();
		P_NATIVE_END;
	}
	void UISteamHTTP::StaticRegisterNativesUISteamHTTP()
	{
		UClass* Class = UISteamHTTP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCookieContainer", &UISteamHTTP::execCreateCookieContainer },
			{ "CreateHTTPRequest", &UISteamHTTP::execCreateHTTPRequest },
			{ "DeferHTTPRequest", &UISteamHTTP::execDeferHTTPRequest },
			{ "GetHTTPDownloadProgressPct", &UISteamHTTP::execGetHTTPDownloadProgressPct },
			{ "GetHTTPRequestWasTimedOut", &UISteamHTTP::execGetHTTPRequestWasTimedOut },
			{ "GetHTTPResponseBodyData", &UISteamHTTP::execGetHTTPResponseBodyData },
			{ "GetHTTPResponseBodySize", &UISteamHTTP::execGetHTTPResponseBodySize },
			{ "GetHTTPResponseHeaderSize", &UISteamHTTP::execGetHTTPResponseHeaderSize },
			{ "GetHTTPResponseHeaderValue", &UISteamHTTP::execGetHTTPResponseHeaderValue },
			{ "GetHTTPStreamingResponseBodyData", &UISteamHTTP::execGetHTTPStreamingResponseBodyData },
			{ "GetSteamHTTP", &UISteamHTTP::execGetSteamHTTP },
			{ "PrioritizeHTTPRequest", &UISteamHTTP::execPrioritizeHTTPRequest },
			{ "ReleaseCookieContainer", &UISteamHTTP::execReleaseCookieContainer },
			{ "ReleaseHTTPRequest", &UISteamHTTP::execReleaseHTTPRequest },
			{ "SendHTTPRequest", &UISteamHTTP::execSendHTTPRequest },
			{ "SendHTTPRequestAndStreamResponse", &UISteamHTTP::execSendHTTPRequestAndStreamResponse },
			{ "SetCookie", &UISteamHTTP::execSetCookie },
			{ "SetHTTPRequestAbsoluteTimeoutMS", &UISteamHTTP::execSetHTTPRequestAbsoluteTimeoutMS },
			{ "SetHTTPRequestContextValue", &UISteamHTTP::execSetHTTPRequestContextValue },
			{ "SetHTTPRequestCookieContainer", &UISteamHTTP::execSetHTTPRequestCookieContainer },
			{ "SetHTTPRequestGetOrPostParameter", &UISteamHTTP::execSetHTTPRequestGetOrPostParameter },
			{ "SetHTTPRequestHeaderValue", &UISteamHTTP::execSetHTTPRequestHeaderValue },
			{ "SetHTTPRequestNetworkActivityTimeout", &UISteamHTTP::execSetHTTPRequestNetworkActivityTimeout },
			{ "SetHTTPRequestRawPostBody", &UISteamHTTP::execSetHTTPRequestRawPostBody },
			{ "SetHTTPRequestRequiresVerifiedCertificate", &UISteamHTTP::execSetHTTPRequestRequiresVerifiedCertificate },
			{ "SetHTTPRequestUserAgentInfo", &UISteamHTTP::execSetHTTPRequestUserAgentInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics
	{
		struct ISteamHTTP_eventCreateCookieContainer_Parms
		{
			bool bAllowResponsesToModify;
			FHTTPCookieContainerHandle ReturnValue;
		};
		static void NewProp_bAllowResponsesToModify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowResponsesToModify;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::NewProp_bAllowResponsesToModify_SetBit(void* Obj)
	{
		((ISteamHTTP_eventCreateCookieContainer_Parms*)Obj)->bAllowResponsesToModify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::NewProp_bAllowResponsesToModify = { "bAllowResponsesToModify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventCreateCookieContainer_Parms), &Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::NewProp_bAllowResponsesToModify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventCreateCookieContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FHTTPCookieContainerHandle, METADATA_PARAMS(nullptr, 0) }; // 1081235675
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::NewProp_bAllowResponsesToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Creates a cookie container to store cookies during the lifetime of the process.\n\x09 * This API is just for during process lifetime, after steam restarts no cookies are persisted and you have no way to access the cookie container across repeat executions of your process.\n\x09 * If bAllowResponsesToModify is true then any response to your requests using this cookie container may add new cookies to the container which may be transmitted with future requests. Otherwise, if it's -\n\x09 * false then only cookies you explicitly set will be sent.\n\x09 * You can associate the cookie container with a http request by using SetHTTPRequestCookieContainer, and you can set a cookie using SetCookie.\n\x09 * Don't forget to free the container when you're done with it to prevent leaking memory by calling ReleaseCookieContainer!\n\x09 *\n\x09 * @param bool bAllowResponsesToModify - Set whether the server can set cookies in this container.\n\x09 * @return FHTTPCookieContainerHandle - Returns a new cookie container handle to be used with future calls to SteamHTTP functions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Creates a cookie container to store cookies during the lifetime of the process.\nThis API is just for during process lifetime, after steam restarts no cookies are persisted and you have no way to access the cookie container across repeat executions of your process.\nIf bAllowResponsesToModify is true then any response to your requests using this cookie container may add new cookies to the container which may be transmitted with future requests. Otherwise, if it's -\nfalse then only cookies you explicitly set will be sent.\nYou can associate the cookie container with a http request by using SetHTTPRequestCookieContainer, and you can set a cookie using SetCookie.\nDon't forget to free the container when you're done with it to prevent leaking memory by calling ReleaseCookieContainer!\n\n@param bool bAllowResponsesToModify - Set whether the server can set cookies in this container.\n@return FHTTPCookieContainerHandle - Returns a new cookie container handle to be used with future calls to SteamHTTP functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "CreateCookieContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::ISteamHTTP_eventCreateCookieContainer_Parms), Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics
	{
		struct ISteamHTTP_eventCreateHTTPRequest_Parms
		{
			ESteamHTTPMethod HTTPRequestMethod;
			FString AbsoluteURL;
			FHTTPRequestHandle ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_HTTPRequestMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HTTPRequestMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteURL;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_HTTPRequestMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_HTTPRequestMethod = { "HTTPRequestMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventCreateHTTPRequest_Parms, HTTPRequestMethod), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamHTTPMethod, METADATA_PARAMS(nullptr, 0) }; // 3235588232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_AbsoluteURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_AbsoluteURL = { "AbsoluteURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventCreateHTTPRequest_Parms, AbsoluteURL), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_AbsoluteURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_AbsoluteURL_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventCreateHTTPRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_HTTPRequestMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_HTTPRequestMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_AbsoluteURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Initializes a new HTTP request.\n\x09 * Requires the method such as GET or POST and the absolute URL for the request. Both http and https are supported, so this string must start with \"http://\" or \"https://\" and should look like -\n\x09 * \"http://store.steampowered.com/app/10/\" or similar. This call returns a handle that you can use to make further calls to setup and then send the HTTP request with SendHTTPRequest or SendHTTPRequestAndStreamResponse.\n\x09 * Don't forget to free the HTTP request when you're done with it to prevent leaking memory by calling ReleaseHTTPRequest!\n\x09 *\n\x09 * @param ESteamHTTPMethod HTTPRequestMethod - The type of request to make with this request.\n\x09 * @param const FString & AbsoluteURL - The url to request. Must start with \"http://\" or \"https://\".\n\x09 * @return FHTTPRequestHandle - Returns a new request handle to be used with future calls to SteamHTTP functions. Returns INVALID_HTTPREQUEST_HANDLE if pchAbsoluteURL is NULL or empty (\"\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Initializes a new HTTP request.\nRequires the method such as GET or POST and the absolute URL for the request. Both http and https are supported, so this string must start with \"http://\" or \"https://\" and should look like -\n\"http://store.steampowered.com/app/10/\" or similar. This call returns a handle that you can use to make further calls to setup and then send the HTTP request with SendHTTPRequest or SendHTTPRequestAndStreamResponse.\nDon't forget to free the HTTP request when you're done with it to prevent leaking memory by calling ReleaseHTTPRequest!\n\n@param ESteamHTTPMethod HTTPRequestMethod - The type of request to make with this request.\n@param const FString & AbsoluteURL - The url to request. Must start with \"http://\" or \"https://\".\n@return FHTTPRequestHandle - Returns a new request handle to be used with future calls to SteamHTTP functions. Returns INVALID_HTTPREQUEST_HANDLE if pchAbsoluteURL is NULL or empty (\"\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "CreateHTTPRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::ISteamHTTP_eventCreateHTTPRequest_Parms), Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics
	{
		struct ISteamHTTP_eventDeferHTTPRequest_Parms
		{
			FHTTPRequestHandle RequestHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventDeferHTTPRequest_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	void Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventDeferHTTPRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventDeferHTTPRequest_Parms), &Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Defers a request which has already been sent by moving it at the back of the queue.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to defer.\n\x09 * @return bool - Returns true if the request has been successfully defered. Otherwise false if hRequest is an invalid handle, or if the request has not been sent yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Defers a request which has already been sent by moving it at the back of the queue.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to defer.\n@return bool - Returns true if the request has been successfully defered. Otherwise false if hRequest is an invalid handle, or if the request has not been sent yet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "DeferHTTPRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::ISteamHTTP_eventDeferHTTPRequest_Parms), Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics
	{
		struct ISteamHTTP_eventGetHTTPDownloadProgressPct_Parms
		{
			FHTTPRequestHandle RequestHandle;
			float Percent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPDownloadProgressPct_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPDownloadProgressPct_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPDownloadProgressPct_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPDownloadProgressPct_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_Percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Gets progress on downloading the body for the request.\n\x09 * This will be zero unless a response header has already been received which included a content-length field. For responses that contain no content-length it will report zero for the duration of the request  -\n\x09 * as the size is unknown until the connection closes.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to get the download percentage for.\n\x09 * @param float & Percent - Returns the download percentage if the call was successful.\n\x09 * @return bool - Returns true upon success if the download percentage was successfully returned. Otherwise, false if the handle is invalid or pflPercentOut is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Gets progress on downloading the body for the request.\nThis will be zero unless a response header has already been received which included a content-length field. For responses that contain no content-length it will report zero for the duration of the request  -\nas the size is unknown until the connection closes.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to get the download percentage for.\n@param float & Percent - Returns the download percentage if the call was successful.\n@return bool - Returns true upon success if the download percentage was successfully returned. Otherwise, false if the handle is invalid or pflPercentOut is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPDownloadProgressPct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::ISteamHTTP_eventGetHTTPDownloadProgressPct_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics
	{
		struct ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms
		{
			FHTTPRequestHandle RequestHandle;
			bool bWasTimedOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static void NewProp_bWasTimedOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasTimedOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_bWasTimedOut_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms*)Obj)->bWasTimedOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_bWasTimedOut = { "bWasTimedOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_bWasTimedOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_bWasTimedOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Check if the reason the request failed was because we timed it out (rather than some harder failure).\n\x09 * You'll want to call this within the context of HTTPRequestCompleted_t if m_bRequestSuccessful is false.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to check the failure reason for.\n\x09 * @param bool & bWasTimedOut - Returns whether the request was timed out or not.\n\x09 * @return bool - Returns true upon success if we successfully checked .\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has not been sent or has not completed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Check if the reason the request failed was because we timed it out (rather than some harder failure).\nYou'll want to call this within the context of HTTPRequestCompleted_t if m_bRequestSuccessful is false.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to check the failure reason for.\n@param bool & bWasTimedOut - Returns whether the request was timed out or not.\n@return bool - Returns true upon success if we successfully checked .\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has not been sent or has not completed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPRequestWasTimedOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::ISteamHTTP_eventGetHTTPRequestWasTimedOut_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics
	{
		struct ISteamHTTP_eventGetHTTPResponseBodyData_Parms
		{
			FHTTPRequestHandle RequestHandle;
			uint8 BodyDataBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyDataBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseBodyData_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_BodyDataBuffer = { "BodyDataBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseBodyData_Parms, BodyDataBuffer), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPResponseBodyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPResponseBodyData_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_BodyDataBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Gets the body data from an HTTP response.\n\x09 * This must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t call result associated with this request handle. You should first call  -\n\x09 * GetHTTPResponseBodySize or use the m_unBodySize variable provided in the call result, you can then allocate a buffer with that size to pass into this function.\n\x09 * This is only for HTTP requests which were sent with SendHTTPRequest. Use GetHTTPStreamingResponseBodyData if you're using streaming HTTP requests via SendHTTPRequestAndStreamResponse.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to get the response body data for.\n\x09 * @param uint8 & BodyDataBuffer - The buffer where the data will be copied into.\n\x09 * @return bool - Returns true upon success indicating that pBodyDataBuffer has been filled with the body data.\n\x09 * Otherwise, returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has not been sent or has not completed.\n\x09 * The request is a streaming request.\n\x09 * pBodyDataBuffer is NULL.\n\x09 * unBufferSize is not the same size that was provided by GetHTTPResponseBodySize.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Gets the body data from an HTTP response.\nThis must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t call result associated with this request handle. You should first call  -\nGetHTTPResponseBodySize or use the m_unBodySize variable provided in the call result, you can then allocate a buffer with that size to pass into this function.\nThis is only for HTTP requests which were sent with SendHTTPRequest. Use GetHTTPStreamingResponseBodyData if you're using streaming HTTP requests via SendHTTPRequestAndStreamResponse.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to get the response body data for.\n@param uint8 & BodyDataBuffer - The buffer where the data will be copied into.\n@return bool - Returns true upon success indicating that pBodyDataBuffer has been filled with the body data.\nOtherwise, returns false under the following conditions:\nhRequest was invalid.\nThe request has not been sent or has not completed.\nThe request is a streaming request.\npBodyDataBuffer is NULL.\nunBufferSize is not the same size that was provided by GetHTTPResponseBodySize." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPResponseBodyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::ISteamHTTP_eventGetHTTPResponseBodyData_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics
	{
		struct ISteamHTTP_eventGetHTTPResponseBodySize_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int32 BodySize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BodySize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseBodySize_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_BodySize = { "BodySize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseBodySize_Parms, BodySize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPResponseBodySize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPResponseBodySize_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_BodySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Gets the size of the body data from an HTTP response.\n\x09 * This must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t or HTTPRequestDataReceived_t associated with this request handle. If this returns -\n\x09 * successfully, then you can allocate a buffer with the provided size to fill with the data obtained from GetHTTPResponseBodyData or GetHTTPStreamingResponseBodyData.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to get the response body size for.\n\x09 * @param int32 & BodySize - Returns the size of the response body.\n\x09 * @return bool - Returns true upon success indicating that unBodySize has been filled with the size.\n\x09 * Otherwise, returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has not been sent or has not completed.\n\x09 * unBodySize is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Gets the size of the body data from an HTTP response.\nThis must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t or HTTPRequestDataReceived_t associated with this request handle. If this returns -\nsuccessfully, then you can allocate a buffer with the provided size to fill with the data obtained from GetHTTPResponseBodyData or GetHTTPStreamingResponseBodyData.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to get the response body size for.\n@param int32 & BodySize - Returns the size of the response body.\n@return bool - Returns true upon success indicating that unBodySize has been filled with the size.\nOtherwise, returns false under the following conditions:\nhRequest was invalid.\nThe request has not been sent or has not completed.\nunBodySize is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPResponseBodySize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::ISteamHTTP_eventGetHTTPResponseBodySize_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics
	{
		struct ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FString HeaderName;
			int32 ResponseHeaderSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseHeaderSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_HeaderName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_ResponseHeaderSize = { "ResponseHeaderSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms, ResponseHeaderSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_ResponseHeaderSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Checks if a header is present in an HTTP response and returns its size.\n\x09 * This must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t call result associated with this request handle. If the response header exists in the -\n\x09 * response, then you can allocate a correctly sized buffer to get the associated value with GetHTTPResponseHeaderValue.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to check for the response header name.\n\x09 * @param const FString & HeaderName - The header name to check.\n\x09 * @param int32 & ResponseHeaderSize - \x09Returns the size of the response header, if it is present in the response.\n\x09 * @return bool - Returns true if the header name is present in the response and unResponseHeaderSize has been filled with the size of the header value.\n\x09 * Otherwise, returns false and sets unResponseHeaderSize to 0 under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has not been sent or has not completed.\n\x09 * pchHeaderName is NULL.\n\x09 * unResponseHeaderSize is NULL.\n\x09 * The header name is not present in the response.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Checks if a header is present in an HTTP response and returns its size.\nThis must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t call result associated with this request handle. If the response header exists in the -\nresponse, then you can allocate a correctly sized buffer to get the associated value with GetHTTPResponseHeaderValue.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to check for the response header name.\n@param const FString & HeaderName - The header name to check.\n@param int32 & ResponseHeaderSize -  Returns the size of the response header, if it is present in the response.\n@return bool - Returns true if the header name is present in the response and unResponseHeaderSize has been filled with the size of the header value.\nOtherwise, returns false and sets unResponseHeaderSize to 0 under the following conditions:\nhRequest was invalid.\nThe request has not been sent or has not completed.\npchHeaderName is NULL.\nunResponseHeaderSize is NULL.\nThe header name is not present in the response." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPResponseHeaderSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::ISteamHTTP_eventGetHTTPResponseHeaderSize_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics
	{
		struct ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FString HeaderName;
			uint8 HeaderValueBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeaderValueBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderValueBuffer = { "HeaderValueBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms, HeaderValueBuffer), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_HeaderValueBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Gets a header value from an HTTP response.\n\x09 * This must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t call result associated with this request handle. You should first call  -\n\x09 * GetHTTPResponseHeaderSize to check for the presence of the header and to get the size. You can then allocate a buffer with that size and pass it into this function.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to get the response header value for.\n\x09 * @param const FString & HeaderName - The header name to get the header value for.\n\x09 * @param uint8 & HeaderValueBuffer - The buffer where the value will be copied into.\n\x09 * @return bool - Returns true upon success indicating that pHeaderValueBuffer has been filled with the header value.\n\x09 * Otherwise, returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has not been sent or has not completed.\n\x09 * pchHeaderName is NULL.\n\x09 * pHeaderValueBuffer is NULL.\n\x09 * The header name is not present in the response.\n\x09 * unBufferSize is not large enough to hold the value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Gets a header value from an HTTP response.\nThis must be called after the HTTP request has completed and returned the HTTP response via the HTTPRequestCompleted_t call result associated with this request handle. You should first call  -\nGetHTTPResponseHeaderSize to check for the presence of the header and to get the size. You can then allocate a buffer with that size and pass it into this function.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to get the response header value for.\n@param const FString & HeaderName - The header name to get the header value for.\n@param uint8 & HeaderValueBuffer - The buffer where the value will be copied into.\n@return bool - Returns true upon success indicating that pHeaderValueBuffer has been filled with the header value.\nOtherwise, returns false under the following conditions:\nhRequest was invalid.\nThe request has not been sent or has not completed.\npchHeaderName is NULL.\npHeaderValueBuffer is NULL.\nThe header name is not present in the response.\nunBufferSize is not large enough to hold the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPResponseHeaderValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::ISteamHTTP_eventGetHTTPResponseHeaderValue_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics
	{
		struct ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int32 Offset;
			uint8 BodyDataBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyDataBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_BodyDataBuffer = { "BodyDataBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms, BodyDataBuffer), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms), &Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_BodyDataBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Gets the body data from a streaming HTTP response.\n\x09 * This must be called after data is received from a streaming HTTP request via the HTTPRequestDataReceived_t callback associated with this request handle. Typically you'll want to allocate a buffer associated -\n\x09 * with the request handle using the Content-Length HTTP response field to receive the total size of the data when you receive the header via HTTPRequestHeadersReceived_t. You can then append data to that buffer as it comes in.\n\x09 * This is only for streaming HTTP requests which were sent with SendHTTPRequestAndStreamResponse. Use GetHTTPResponseBodyData if you're using SendHTTPRequest.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to get the response body data for.\n\x09 * @param int32 Offset - This must be the offset provided by HTTPRequestDataReceived_t.\n\x09 * @param uint8 & BodyDataBuffer - Returns the data by copying it into this buffer.\n\x09 * @return bool - Returns true upon success indicating that pBodyDataBuffer has been filled with the body data.\n\x09 * Otherwise, returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has not been sent or has not completed.\n\x09 * The request is not a streaming request.\n\x09 * cOffset is not the same offset that was provided by HTTPRequestDataReceived_t.\n\x09 * unBufferSize is not the same size that was provided by HTTPRequestDataReceived_t.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Gets the body data from a streaming HTTP response.\nThis must be called after data is received from a streaming HTTP request via the HTTPRequestDataReceived_t callback associated with this request handle. Typically you'll want to allocate a buffer associated -\nwith the request handle using the Content-Length HTTP response field to receive the total size of the data when you receive the header via HTTPRequestHeadersReceived_t. You can then append data to that buffer as it comes in.\nThis is only for streaming HTTP requests which were sent with SendHTTPRequestAndStreamResponse. Use GetHTTPResponseBodyData if you're using SendHTTPRequest.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to get the response body data for.\n@param int32 Offset - This must be the offset provided by HTTPRequestDataReceived_t.\n@param uint8 & BodyDataBuffer - Returns the data by copying it into this buffer.\n@return bool - Returns true upon success indicating that pBodyDataBuffer has been filled with the body data.\nOtherwise, returns false under the following conditions:\nhRequest was invalid.\nThe request has not been sent or has not completed.\nThe request is not a streaming request.\ncOffset is not the same offset that was provided by HTTPRequestDataReceived_t.\nunBufferSize is not the same size that was provided by HTTPRequestDataReceived_t." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetHTTPStreamingResponseBodyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::ISteamHTTP_eventGetHTTPStreamingResponseBodyData_Parms), Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics
	{
		struct ISteamHTTP_eventGetSteamHTTP_Parms
		{
			UISteamHTTP* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventGetSteamHTTP_Parms, ReturnValue), Z_Construct_UClass_UISteamHTTP_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamHTTP" },
		{ "DisplayName", "Steam HTTP" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "GetSteamHTTP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::ISteamHTTP_eventGetSteamHTTP_Parms), Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics
	{
		struct ISteamHTTP_eventPrioritizeHTTPRequest_Parms
		{
			FHTTPRequestHandle RequestHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventPrioritizeHTTPRequest_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	void Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventPrioritizeHTTPRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventPrioritizeHTTPRequest_Parms), &Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Prioritizes a request which has already been sent by moving it at the front of the queue.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to prioritize.\n\x09 * @return bool - Returns true if the request has been successfully prioritized. Otherwise false if hRequest is an invalid handle, or if the request has not been sent yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Prioritizes a request which has already been sent by moving it at the front of the queue.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to prioritize.\n@return bool - Returns true if the request has been successfully prioritized. Otherwise false if hRequest is an invalid handle, or if the request has not been sent yet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "PrioritizeHTTPRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::ISteamHTTP_eventPrioritizeHTTPRequest_Parms), Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics
	{
		struct ISteamHTTP_eventReleaseCookieContainer_Parms
		{
			FHTTPCookieContainerHandle CookieContainerHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookieContainerHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::NewProp_CookieContainerHandle = { "CookieContainerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventReleaseCookieContainer_Parms, CookieContainerHandle), Z_Construct_UScriptStruct_FHTTPCookieContainerHandle, METADATA_PARAMS(nullptr, 0) }; // 1081235675
	void Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventReleaseCookieContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventReleaseCookieContainer_Parms), &Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::NewProp_CookieContainerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Releases a cookie container, freeing the memory allocated within Steam.\n\x09 * You MUST call this when you are done using each HTTPCookieContainerHandle that you obtained via CreateCookieContainer!\n\x09 *\n\x09 * @param FHTTPCookieContainerHandle CookieContainerHandle - The cookie container handle to release.\n\x09 * @return bool - Returns true if the handle has been freed; otherwise, false if the handle was invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Releases a cookie container, freeing the memory allocated within Steam.\nYou MUST call this when you are done using each HTTPCookieContainerHandle that you obtained via CreateCookieContainer!\n\n@param FHTTPCookieContainerHandle CookieContainerHandle - The cookie container handle to release.\n@return bool - Returns true if the handle has been freed; otherwise, false if the handle was invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "ReleaseCookieContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::ISteamHTTP_eventReleaseCookieContainer_Parms), Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics
	{
		struct ISteamHTTP_eventReleaseHTTPRequest_Parms
		{
			FHTTPRequestHandle RequestHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventReleaseHTTPRequest_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	void Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventReleaseHTTPRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventReleaseHTTPRequest_Parms), &Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Releases an HTTP request handle, freeing the memory allocated within Steam.\n\x09 * You MUST call this when you are done using each HTTPRequestHandle that you obtained via CreateHTTPRequest!\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to release.\n\x09 * @return bool - Returns true if the the handle was released successfully, false only if the handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Releases an HTTP request handle, freeing the memory allocated within Steam.\nYou MUST call this when you are done using each HTTPRequestHandle that you obtained via CreateHTTPRequest!\n\n@param FHTTPRequestHandle RequestHandle - The request handle to release.\n@return bool - Returns true if the the handle was released successfully, false only if the handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "ReleaseHTTPRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::ISteamHTTP_eventReleaseHTTPRequest_Parms), Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics
	{
		struct ISteamHTTP_eventSendHTTPRequest_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FSteamAPICall CallHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CallHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSendHTTPRequest_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_CallHandle = { "CallHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSendHTTPRequest_Parms, CallHandle), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	void Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSendHTTPRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSendHTTPRequest_Parms), &Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_CallHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Sends an HTTP request.\n\x09 * This call is asynchronous and provides a call result handle which you must use to track the call to its completion. If you have multiple requests in flight at the same time you can use PrioritizeHTTPRequest or DeferHTTPRequest to set the priority of the request.\n\x09 * If the user is in offline mode in Steam, then this will add an only-if-cached cache-control header and only do a local cache lookup rather than sending any actual remote request.\n\x09 * If the data you are expecting is large, you can use SendHTTPRequestAndStreamResponse to stream the data in chunks.\n\x09 * Triggers a HTTPRequestCompleted_t callback.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to send.\n\x09 * @param FSteamAPICall & CallHandle - Returns a call result handle to receive the response.\n\x09 * @return bool - Returns true upon successfully setting the parameter.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 * pCallHandle is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Sends an HTTP request.\nThis call is asynchronous and provides a call result handle which you must use to track the call to its completion. If you have multiple requests in flight at the same time you can use PrioritizeHTTPRequest or DeferHTTPRequest to set the priority of the request.\nIf the user is in offline mode in Steam, then this will add an only-if-cached cache-control header and only do a local cache lookup rather than sending any actual remote request.\nIf the data you are expecting is large, you can use SendHTTPRequestAndStreamResponse to stream the data in chunks.\nTriggers a HTTPRequestCompleted_t callback.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to send.\n@param FSteamAPICall & CallHandle - Returns a call result handle to receive the response.\n@return bool - Returns true upon successfully setting the parameter.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent.\npCallHandle is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SendHTTPRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::ISteamHTTP_eventSendHTTPRequest_Parms), Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics
	{
		struct ISteamHTTP_eventSendHTTPRequestAndStreamResponse_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FSteamAPICall CallHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CallHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSendHTTPRequestAndStreamResponse_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_CallHandle = { "CallHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSendHTTPRequestAndStreamResponse_Parms, CallHandle), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	void Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSendHTTPRequestAndStreamResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSendHTTPRequestAndStreamResponse_Parms), &Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_CallHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Sends an HTTP request and streams the response back in chunks.\n\x09 * This call is asynchronous and provides a call result handle which you must use to track the call to its completion. Typically you'll want to allocate a buffer associated with the request handle using the -\n\x09 * Content-Length HTTP response field to receive the total size of the data when you receive the header via HTTPRequestHeadersReceived_t. You can then append data to that buffer as it comes in.\n\x09 * If you have multiple requests in flight at the same time you can use PrioritizeHTTPRequest or DeferHTTPRequest to set the priority of the request.\n\x09 * If the user is in offline mode in Steam, then this will add an only-if-cached cache-control header and only do a local cache lookup rather than sending any actual remote request.\n\x09 * If the data you are expecting is small (on the order of a few megabytes or less) then you'll likely want to use SendHTTPRequest.\n\x09 * Triggers a HTTPRequestDataReceived_t callback.\n\x09 * Triggers a HTTPRequestHeadersReceived_t callback.\n\x09 * Triggers a HTTPRequestCompleted_t callback.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to send.\n\x09 * @param FSteamAPICall & CallHandle - \x09Returns a call result handle to receive the response.\n\x09 * @return bool - Returns true upon successfully setting the parameter.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 * pCallHandle is NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Sends an HTTP request and streams the response back in chunks.\nThis call is asynchronous and provides a call result handle which you must use to track the call to its completion. Typically you'll want to allocate a buffer associated with the request handle using the -\nContent-Length HTTP response field to receive the total size of the data when you receive the header via HTTPRequestHeadersReceived_t. You can then append data to that buffer as it comes in.\nIf you have multiple requests in flight at the same time you can use PrioritizeHTTPRequest or DeferHTTPRequest to set the priority of the request.\nIf the user is in offline mode in Steam, then this will add an only-if-cached cache-control header and only do a local cache lookup rather than sending any actual remote request.\nIf the data you are expecting is small (on the order of a few megabytes or less) then you'll likely want to use SendHTTPRequest.\nTriggers a HTTPRequestDataReceived_t callback.\nTriggers a HTTPRequestHeadersReceived_t callback.\nTriggers a HTTPRequestCompleted_t callback.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to send.\n@param FSteamAPICall & CallHandle -  Returns a call result handle to receive the response.\n@return bool - Returns true upon successfully setting the parameter.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent.\npCallHandle is NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SendHTTPRequestAndStreamResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::ISteamHTTP_eventSendHTTPRequestAndStreamResponse_Parms), Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics
	{
		struct ISteamHTTP_eventSetCookie_Parms
		{
			FHTTPCookieContainerHandle CookieContainerHandle;
			FString Host;
			FString Url;
			FString Cookie;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookieContainerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cookie_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cookie;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_CookieContainerHandle = { "CookieContainerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetCookie_Parms, CookieContainerHandle), Z_Construct_UScriptStruct_FHTTPCookieContainerHandle, METADATA_PARAMS(nullptr, 0) }; // 1081235675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Host_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetCookie_Parms, Host), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetCookie_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Cookie_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Cookie = { "Cookie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetCookie_Parms, Cookie), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Cookie_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Cookie_MetaData)) };
	void Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetCookie_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetCookie_Parms), &Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_CookieContainerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_Cookie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Adds a cookie to the specified cookie container that will be used with future requests.\n\x09 *\n\x09 * @param FHTTPCookieContainerHandle CookieContainerHandle - The cookie container to set the the cookie in.\n\x09 * @param const FString & Host - The host to set this cookie for.\n\x09 * @param const FString & Url - The url to set this cookie for.\n\x09 * @param const FString & Cookie - The cookie to set.\n\x09 * @return bool - Returns true if the cookie was set successfully. Otherwise, false if the request handle was invalid or if there was a security issue parsing the cookie.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Adds a cookie to the specified cookie container that will be used with future requests.\n\n@param FHTTPCookieContainerHandle CookieContainerHandle - The cookie container to set the the cookie in.\n@param const FString & Host - The host to set this cookie for.\n@param const FString & Url - The url to set this cookie for.\n@param const FString & Cookie - The cookie to set.\n@return bool - Returns true if the cookie was set successfully. Otherwise, false if the request handle was invalid or if there was a security issue parsing the cookie." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetCookie", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::ISteamHTTP_eventSetCookie_Parms), Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetCookie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetCookie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestAbsoluteTimeoutMS_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int32 Milliseconds;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestAbsoluteTimeoutMS_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestAbsoluteTimeoutMS_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestAbsoluteTimeoutMS_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestAbsoluteTimeoutMS_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_Milliseconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Set an absolute timeout in milliseconds for the HTTP request.\n\x09 * This is the total time timeout which is different than the network activity timeout which is set with SetHTTPRequestNetworkActivityTimeout which can bump everytime we get more data.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the timeout on.\n\x09 * @param int32 Milliseconds - The length of the timeout period in milliseconds.\n\x09 * @return bool - Returns true upon successfully setting the timeout.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Set an absolute timeout in milliseconds for the HTTP request.\nThis is the total time timeout which is different than the network activity timeout which is set with SetHTTPRequestNetworkActivityTimeout which can bump everytime we get more data.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the timeout on.\n@param int32 Milliseconds - The length of the timeout period in milliseconds.\n@return bool - Returns true upon successfully setting the timeout.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestAbsoluteTimeoutMS", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::ISteamHTTP_eventSetHTTPRequestAbsoluteTimeoutMS_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestContextValue_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int64 ContextValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ContextValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestContextValue_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_ContextValue = { "ContextValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestContextValue_Parms, ContextValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestContextValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestContextValue_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_ContextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Set a context value for the request, which will be returned in the HTTPRequestCompleted_t callback after sending the request.\n\x09 * This is just so the caller can easily keep track of which callbacks go with which request data.\n\x09 * Must be called before sending the request.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the context value on.\n\x09 * @param int64 ContextValue - \x09The context value to set.\n\x09 * @return bool - Returns true upon successfully setting the context value.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Set a context value for the request, which will be returned in the HTTPRequestCompleted_t callback after sending the request.\nThis is just so the caller can easily keep track of which callbacks go with which request data.\nMust be called before sending the request.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the context value on.\n@param int64 ContextValue -  The context value to set.\n@return bool - Returns true upon successfully setting the context value.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestContextValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::ISteamHTTP_eventSetHTTPRequestContextValue_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestCookieContainer_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FHTTPCookieContainerHandle CookieContainerHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookieContainerHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestCookieContainer_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_CookieContainerHandle = { "CookieContainerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestCookieContainer_Parms, CookieContainerHandle), Z_Construct_UScriptStruct_FHTTPCookieContainerHandle, METADATA_PARAMS(nullptr, 0) }; // 1081235675
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestCookieContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestCookieContainer_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_CookieContainerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Associates a cookie container to use for an HTTP request.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to associate the cookie container with.\n\x09 * @param FHTTPCookieContainerHandle CookieContainerHandle - The cookie container handle to associate with the request handle.\n\x09 * @return bool - Returns true upon successfully setting the cookie container.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * hCookieContainer was invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Associates a cookie container to use for an HTTP request.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to associate the cookie container with.\n@param FHTTPCookieContainerHandle CookieContainerHandle - The cookie container handle to associate with the request handle.\n@return bool - Returns true upon successfully setting the cookie container.\nReturns false under the following conditions:\nhRequest was invalid.\nhCookieContainer was invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestCookieContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::ISteamHTTP_eventSetHTTPRequestCookieContainer_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FString Name;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Set a GET or POST parameter value on the HTTP request.\n\x09 * Must be called prior to sending the request.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the parameter on.\n\x09 * @param const FString & Name - Parameter name field.\n\x09 * @param const FString & Value - Value to associate with the name field.\n\x09 * @return bool - Returns true upon successfully setting the parameter.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 * pchParamName or pchParamValue are NULL.\n\x09 * The request method set in CreateHTTPRequest is not k_EHTTPMethodGET, k_EHTTPMethodHEAD, or k_EHTTPMethodPOST.\n\x09 * If the request method is k_EHTTPMethodPOST and a POST body has already been set with SetHTTPRequestRawPostBody.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Set a GET or POST parameter value on the HTTP request.\nMust be called prior to sending the request.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the parameter on.\n@param const FString & Name - Parameter name field.\n@param const FString & Value - Value to associate with the name field.\n@return bool - Returns true upon successfully setting the parameter.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent.\npchParamName or pchParamValue are NULL.\nThe request method set in CreateHTTPRequest is not k_EHTTPMethodGET, k_EHTTPMethodHEAD, or k_EHTTPMethodPOST.\nIf the request method is k_EHTTPMethodPOST and a POST body has already been set with SetHTTPRequestRawPostBody." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestGetOrPostParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::ISteamHTTP_eventSetHTTPRequestGetOrPostParameter_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FString Name;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Set a request header value for the HTTP request.\n\x09 * Must be called before sending the request.\n\x09 * A full list of standard request fields are available here on wikipedia. The User-Agent field is explicitly disallowed as it gets overwritten when the request is sent.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the header value for.\n\x09 * @param const FString & Name - The header name field.\n\x09 * @param const FString & Value - Value to associate with the header name field.\n\x09 * @return bool - Returns true upon successfully setting the header value.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 * pchHeaderName is \"User-Agent\".\n\x09 * pchHeaderName or pchHeaderValue are NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Set a request header value for the HTTP request.\nMust be called before sending the request.\nA full list of standard request fields are available here on wikipedia. The User-Agent field is explicitly disallowed as it gets overwritten when the request is sent.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the header value for.\n@param const FString & Name - The header name field.\n@param const FString & Value - Value to associate with the header name field.\n@return bool - Returns true upon successfully setting the header value.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent.\npchHeaderName is \"User-Agent\".\npchHeaderName or pchHeaderValue are NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestHeaderValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::ISteamHTTP_eventSetHTTPRequestHeaderValue_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestNetworkActivityTimeout_Parms
		{
			FHTTPRequestHandle RequestHandle;
			int32 TimeoutSeconds;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeoutSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestNetworkActivityTimeout_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestNetworkActivityTimeout_Parms, TimeoutSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestNetworkActivityTimeout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestNetworkActivityTimeout_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_TimeoutSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Set the timeout in seconds for the HTTP request.\n\x09 * The default timeout is 60 seconds if you don't call this. This can get bumped everytime we get more data. Use SetHTTPRequestAbsoluteTimeoutMS if you need a strict maximum timeout.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the timeout on.\n\x09 * @param int32 TimeoutSeconds - The length of the timeout period in seconds.\n\x09 * @return bool - Returns true upon successfully setting the timeout.\n\x09 * Returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The request has already been sent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Set the timeout in seconds for the HTTP request.\nThe default timeout is 60 seconds if you don't call this. This can get bumped everytime we get more data. Use SetHTTPRequestAbsoluteTimeoutMS if you need a strict maximum timeout.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the timeout on.\n@param int32 TimeoutSeconds - The length of the timeout period in seconds.\n@return bool - Returns true upon successfully setting the timeout.\nReturns false under the following conditions:\nhRequest was invalid.\nThe request has already been sent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestNetworkActivityTimeout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::ISteamHTTP_eventSetHTTPRequestNetworkActivityTimeout_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FString ContentType;
			uint8 Body;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Body;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms, ContentType), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ContentType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms, Body), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Sets the body for an HTTP Post request.\n\x09 * Will fail and return false on a GET request, and will fail if POST params have already been set for the request. Setting this raw body makes it the only contents for the post, the pchContentType parameter will -\n\x09 * set the \"content-type\" header for the request to inform the server how to interpret the body.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the post body on.\n\x09 * @param const FString & ContentType - Sets the value of the calls \"content-type\" http header.\n\x09 * @param uint8 & Body - The raw POST body data to set.\n\x09 * @return bool - Returns true upon success indicating that the content-type field and the body data have been set.\n\x09 * Otherwise, returns false under the following conditions:\n\x09 * hRequest was invalid.\n\x09 * The HTTP Method set in CreateHTTPRequest is not k_EHTTPMethodPOST, k_EHTTPMethodPUT, or k_EHTTPMethodPATCH.\n\x09 * A POST body has already been set for this request either via this function or with SetHTTPRequestGetOrPostParameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Sets the body for an HTTP Post request.\nWill fail and return false on a GET request, and will fail if POST params have already been set for the request. Setting this raw body makes it the only contents for the post, the pchContentType parameter will -\nset the \"content-type\" header for the request to inform the server how to interpret the body.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the post body on.\n@param const FString & ContentType - Sets the value of the calls \"content-type\" http header.\n@param uint8 & Body - The raw POST body data to set.\n@return bool - Returns true upon success indicating that the content-type field and the body data have been set.\nOtherwise, returns false under the following conditions:\nhRequest was invalid.\nThe HTTP Method set in CreateHTTPRequest is not k_EHTTPMethodPOST, k_EHTTPMethodPUT, or k_EHTTPMethodPATCH.\nA POST body has already been set for this request either via this function or with SetHTTPRequestGetOrPostParameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestRawPostBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::ISteamHTTP_eventSetHTTPRequestRawPostBody_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms
		{
			FHTTPRequestHandle RequestHandle;
			bool bRequireVerifiedCertificate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static void NewProp_bRequireVerifiedCertificate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireVerifiedCertificate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_bRequireVerifiedCertificate_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms*)Obj)->bRequireVerifiedCertificate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_bRequireVerifiedCertificate = { "bRequireVerifiedCertificate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_bRequireVerifiedCertificate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_bRequireVerifiedCertificate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Sets that the HTTPS request should require verified SSL certificate via machines certificate trust store.\n\x09 * This currently only works Windows and macOS.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set whether the request requires a verified certificate.\n\x09 * @param bool bRequireVerifiedCertificate - Turn on verified certificate?\n\x09 * @return bool - Returns true upon success. Otherwise, false if the request handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Sets that the HTTPS request should require verified SSL certificate via machines certificate trust store.\nThis currently only works Windows and macOS.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set whether the request requires a verified certificate.\n@param bool bRequireVerifiedCertificate - Turn on verified certificate?\n@return bool - Returns true upon success. Otherwise, false if the request handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestRequiresVerifiedCertificate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::ISteamHTTP_eventSetHTTPRequestRequiresVerifiedCertificate_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics
	{
		struct ISteamHTTP_eventSetHTTPRequestUserAgentInfo_Parms
		{
			FHTTPRequestHandle RequestHandle;
			FString UserAgentInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserAgentInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserAgentInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestUserAgentInfo_Parms, RequestHandle), Z_Construct_UScriptStruct_FHTTPRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 2187089451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_UserAgentInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_UserAgentInfo = { "UserAgentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamHTTP_eventSetHTTPRequestUserAgentInfo_Parms, UserAgentInfo), METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_UserAgentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_UserAgentInfo_MetaData)) };
	void Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamHTTP_eventSetHTTPRequestUserAgentInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamHTTP_eventSetHTTPRequestUserAgentInfo_Parms), &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_RequestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_UserAgentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Set additional user agent info for a request.\n\x09 * This doesn't clobber the normal user agent, it just adds the extra info on the end. Sending NULL or an empty string resets the user agent info to the default value.\n\x09 *\n\x09 * @param FHTTPRequestHandle RequestHandle - The request handle to set the user agent info for.\n\x09 * @param const FString & UserAgentInfo - The string to append to the end of the user agent.\n\x09 * @return bool - Returns true upon success indicating that the user agent has been updated. Otherwise, false if the request handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Set additional user agent info for a request.\nThis doesn't clobber the normal user agent, it just adds the extra info on the end. Sending NULL or an empty string resets the user agent info to the default value.\n\n@param FHTTPRequestHandle RequestHandle - The request handle to set the user agent info for.\n@param const FString & UserAgentInfo - The string to append to the end of the user agent.\n@return bool - Returns true upon success indicating that the user agent has been updated. Otherwise, false if the request handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamHTTP, nullptr, "SetHTTPRequestUserAgentInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::ISteamHTTP_eventSetHTTPRequestUserAgentInfo_Parms), Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamHTTP);
	UClass* Z_Construct_UClass_UISteamHTTP_NoRegister()
	{
		return UISteamHTTP::StaticClass();
	}
	struct Z_Construct_UClass_UISteamHTTP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnHTTPRequestCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnHTTPRequestCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnHTTPRequestDataReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnHTTPRequestDataReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnHTTPRequestHeadersReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnHTTPRequestHeadersReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamHTTP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamHTTP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamHTTP_CreateCookieContainer, "CreateCookieContainer" }, // 1384305787
		{ &Z_Construct_UFunction_UISteamHTTP_CreateHTTPRequest, "CreateHTTPRequest" }, // 397037327
		{ &Z_Construct_UFunction_UISteamHTTP_DeferHTTPRequest, "DeferHTTPRequest" }, // 3356586329
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPDownloadProgressPct, "GetHTTPDownloadProgressPct" }, // 4007719125
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPRequestWasTimedOut, "GetHTTPRequestWasTimedOut" }, // 146136330
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodyData, "GetHTTPResponseBodyData" }, // 3794173416
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseBodySize, "GetHTTPResponseBodySize" }, // 3821715666
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderSize, "GetHTTPResponseHeaderSize" }, // 817827475
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPResponseHeaderValue, "GetHTTPResponseHeaderValue" }, // 2101975577
		{ &Z_Construct_UFunction_UISteamHTTP_GetHTTPStreamingResponseBodyData, "GetHTTPStreamingResponseBodyData" }, // 94251262
		{ &Z_Construct_UFunction_UISteamHTTP_GetSteamHTTP, "GetSteamHTTP" }, // 2237089339
		{ &Z_Construct_UFunction_UISteamHTTP_PrioritizeHTTPRequest, "PrioritizeHTTPRequest" }, // 3854864709
		{ &Z_Construct_UFunction_UISteamHTTP_ReleaseCookieContainer, "ReleaseCookieContainer" }, // 513511021
		{ &Z_Construct_UFunction_UISteamHTTP_ReleaseHTTPRequest, "ReleaseHTTPRequest" }, // 1824659957
		{ &Z_Construct_UFunction_UISteamHTTP_SendHTTPRequest, "SendHTTPRequest" }, // 2768405878
		{ &Z_Construct_UFunction_UISteamHTTP_SendHTTPRequestAndStreamResponse, "SendHTTPRequestAndStreamResponse" }, // 1881702691
		{ &Z_Construct_UFunction_UISteamHTTP_SetCookie, "SetCookie" }, // 2270730996
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS, "SetHTTPRequestAbsoluteTimeoutMS" }, // 3088500515
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestContextValue, "SetHTTPRequestContextValue" }, // 2241321989
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestCookieContainer, "SetHTTPRequestCookieContainer" }, // 4080434984
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestGetOrPostParameter, "SetHTTPRequestGetOrPostParameter" }, // 3155987821
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestHeaderValue, "SetHTTPRequestHeaderValue" }, // 787467087
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestNetworkActivityTimeout, "SetHTTPRequestNetworkActivityTimeout" }, // 1058043130
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRawPostBody, "SetHTTPRequestRawPostBody" }, // 3285691182
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate, "SetHTTPRequestRequiresVerifiedCertificate" }, // 1198072046
		{ &Z_Construct_UFunction_UISteamHTTP_SetHTTPRequestUserAgentInfo, "SetHTTPRequestUserAgentInfo" }, // 1363482205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamHTTP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//A small and easy to use HTTP client to send and receive data from the web.\n" },
		{ "IncludePath", "UISteamHTTP.h" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "A small and easy to use HTTP client to send and receive data from the web." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestCompleted_MetaData[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/**\n\x09 * Result when an HTTP request completes.\n\x09 * If you're using GetHTTPStreamingResponseBodyData then you should be using the HTTPRequestHeadersReceived_t or HTTPRequestDataReceived_t.\n\x09 */" },
		{ "DisplayName", "OnHTTPRequestCompleted" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Result when an HTTP request completes.\nIf you're using GetHTTPStreamingResponseBodyData then you should be using the HTTPRequestHeadersReceived_t or HTTPRequestDataReceived_t." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestCompleted = { "m_OnHTTPRequestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamHTTP, m_OnHTTPRequestCompleted), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestCompleted_MetaData)) }; // 3901747951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestDataReceived_MetaData[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/** Triggered when a chunk of data is received from a streaming HTTP request. */" },
		{ "DisplayName", "OnHTTPRequestDataReceived" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Triggered when a chunk of data is received from a streaming HTTP request." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestDataReceived = { "m_OnHTTPRequestDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamHTTP, m_OnHTTPRequestDataReceived), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestDataReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestDataReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestDataReceived_MetaData)) }; // 2001403071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestHeadersReceived_MetaData[] = {
		{ "Category", "SteamAPI|UISteamHTTP" },
		{ "Comment", "/** Triggered when HTTP headers are received from a streaming HTTP request. */" },
		{ "DisplayName", "OnHTTPRequestHeadersReceived" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "Triggered when HTTP headers are received from a streaming HTTP request." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestHeadersReceived = { "m_OnHTTPRequestHeadersReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamHTTP, m_OnHTTPRequestHeadersReceived), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnHTTPRequestHeadersReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestHeadersReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestHeadersReceived_MetaData)) }; // 2015991935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamHTTP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestDataReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamHTTP_Statics::NewProp_m_OnHTTPRequestHeadersReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamHTTP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamHTTP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamHTTP_Statics::ClassParams = {
		&UISteamHTTP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamHTTP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTTP_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamHTTP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTTP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamHTTP()
	{
		if (!Z_Registration_Info_UClass_UISteamHTTP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamHTTP.OuterSingleton, Z_Construct_UClass_UISteamHTTP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamHTTP.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamHTTP>()
	{
		return UISteamHTTP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamHTTP);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamHTTP, UISteamHTTP::StaticClass, TEXT("UISteamHTTP"), &Z_Registration_Info_UClass_UISteamHTTP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamHTTP), 2185880941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_1958371668(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
