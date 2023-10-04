// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamVideo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamVideo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamVideo();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamVideo_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGetOPFSettingsResultDelegate_Parms
		{
			ESteamResult Result;
			int32 VideoAppID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetOPFSettingsResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetOPFSettingsResultDelegate_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGetOPFSettingsResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGetOPFSettingsResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetOPFSettingsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResultDelegate, ESteamResult Result, int32 VideoAppID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGetOPFSettingsResultDelegate_Parms
	{
		ESteamResult Result;
		int32 VideoAppID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGetOPFSettingsResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.VideoAppID=VideoAppID;
	OnGetOPFSettingsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms
		{
			ESteamResult Result;
			int32 VideoAppID;
			FString URL;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_VideoAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGetVideoURLResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetVideoURLResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResultDelegate, ESteamResult Result, int32 VideoAppID, const FString& URL)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms
	{
		ESteamResult Result;
		int32 VideoAppID;
		FString URL;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGetVideoURLResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.VideoAppID=VideoAppID;
	Parms.URL=URL;
	OnGetVideoURLResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamVideo::execIsBroadcasting)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumViewers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBroadcasting(Z_Param_Out_NumViewers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamVideo::execGetVideoURL)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVideoURL(Z_Param_VideoAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamVideo::execGetOPFStringForApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OPFString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOPFStringForApp(Z_Param_VideoAppID,Z_Param_Out_OPFString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamVideo::execGetOPFSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOPFSettings(Z_Param_VideoAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamVideo::execGetSteamVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamVideo**)Z_Param__Result=UISteamVideo::GetSteamVideo();
		P_NATIVE_END;
	}
	void UISteamVideo::StaticRegisterNativesUISteamVideo()
	{
		UClass* Class = UISteamVideo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOPFSettings", &UISteamVideo::execGetOPFSettings },
			{ "GetOPFStringForApp", &UISteamVideo::execGetOPFStringForApp },
			{ "GetSteamVideo", &UISteamVideo::execGetSteamVideo },
			{ "GetVideoURL", &UISteamVideo::execGetVideoURL },
			{ "IsBroadcasting", &UISteamVideo::execIsBroadcasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics
	{
		struct ISteamVideo_eventGetOPFSettings_Parms
		{
			int32 VideoAppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamVideo_eventGetOPFSettings_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamVideo" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamVideo, nullptr, "GetOPFSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::ISteamVideo_eventGetOPFSettings_Parms), Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamVideo_GetOPFSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamVideo_GetOPFSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics
	{
		struct ISteamVideo_eventGetOPFStringForApp_Parms
		{
			int32 VideoAppID;
			FString OPFString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OPFString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamVideo_eventGetOPFStringForApp_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_OPFString = { "OPFString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamVideo_eventGetOPFStringForApp_Parms, OPFString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamVideo_eventGetOPFStringForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamVideo_eventGetOPFStringForApp_Parms), &Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_OPFString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamVideo" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamVideo, nullptr, "GetOPFStringForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::ISteamVideo_eventGetOPFStringForApp_Parms), Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics
	{
		struct ISteamVideo_eventGetSteamVideo_Parms
		{
			UISteamVideo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamVideo_eventGetSteamVideo_Parms, ReturnValue), Z_Construct_UClass_UISteamVideo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "DisplayName", "Steam GetSteamVideo" },
		{ "Keywords", "Steam GetSteamVideo" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamVideo, nullptr, "GetSteamVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::ISteamVideo_eventGetSteamVideo_Parms), Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamVideo_GetSteamVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamVideo_GetSteamVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics
	{
		struct ISteamVideo_eventGetVideoURL_Parms
		{
			int32 VideoAppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamVideo_eventGetVideoURL_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamVideo" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamVideo, nullptr, "GetVideoURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::ISteamVideo_eventGetVideoURL_Parms), Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamVideo_GetVideoURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamVideo_GetVideoURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics
	{
		struct ISteamVideo_eventIsBroadcasting_Parms
		{
			int32 NumViewers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumViewers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::NewProp_NumViewers = { "NumViewers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamVideo_eventIsBroadcasting_Parms, NumViewers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamVideo_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamVideo_eventIsBroadcasting_Parms), &Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::NewProp_NumViewers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamVideo" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamVideo, nullptr, "IsBroadcasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::ISteamVideo_eventIsBroadcasting_Parms), Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamVideo_IsBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamVideo_IsBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamVideo);
	UClass* Z_Construct_UClass_UISteamVideo_NoRegister()
	{
		return UISteamVideo::StaticClass();
	}
	struct Z_Construct_UClass_UISteamVideo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGetOPFSettingsResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGetOPFSettingsResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGetVideoURLResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGetVideoURLResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamVideo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamVideo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamVideo_GetOPFSettings, "GetOPFSettings" }, // 1859398875
		{ &Z_Construct_UFunction_UISteamVideo_GetOPFStringForApp, "GetOPFStringForApp" }, // 384602837
		{ &Z_Construct_UFunction_UISteamVideo_GetSteamVideo, "GetSteamVideo" }, // 1748967694
		{ &Z_Construct_UFunction_UISteamVideo_GetVideoURL, "GetVideoURL" }, // 3158268672
		{ &Z_Construct_UFunction_UISteamVideo_IsBroadcasting, "IsBroadcasting" }, // 574663405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamVideo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Provides functions to interface with the Steam video and broadcasting platforms.\n" },
		{ "IncludePath", "UISteamVideo.h" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
		{ "ToolTip", "Provides functions to interface with the Steam video and broadcasting platforms." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetOPFSettingsResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamVideo" },
		{ "DisplayName", "OnGetOPFSettingsResult" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetOPFSettingsResult = { "m_OnGetOPFSettingsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamVideo, m_OnGetOPFSettingsResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetOPFSettingsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetOPFSettingsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetOPFSettingsResult_MetaData)) }; // 2645400403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetVideoURLResult_MetaData[] = {
		{ "Category", "SteamAPI|ISteamVideo" },
		{ "DisplayName", "OnGetVideoURLResult" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetVideoURLResult = { "m_OnGetVideoURLResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamVideo, m_OnGetVideoURLResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGetVideoURLResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetVideoURLResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetVideoURLResult_MetaData)) }; // 3852915005
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetOPFSettingsResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamVideo_Statics::NewProp_m_OnGetVideoURLResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamVideo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamVideo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamVideo_Statics::ClassParams = {
		&UISteamVideo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamVideo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamVideo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamVideo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamVideo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamVideo()
	{
		if (!Z_Registration_Info_UClass_UISteamVideo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamVideo.OuterSingleton, Z_Construct_UClass_UISteamVideo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamVideo.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamVideo>()
	{
		return UISteamVideo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamVideo);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamVideo, UISteamVideo::StaticClass, TEXT("UISteamVideo"), &Z_Registration_Info_UClass_UISteamVideo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamVideo), 2918889050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_2934450833(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
