// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUtils.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUtils();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUtils_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAPICallFailure_();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamGamepadTextInputLineMode();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamGamepadTextInputMode();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamNotificationPosition();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUniverse();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms
		{
			bool bSubmitted;
			int32 SubmittedTextLen;
		};
		static void NewProp_bSubmitted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubmittedTextLen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::NewProp_bSubmitted_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms*)Obj)->bSubmitted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::NewProp_SubmittedTextLen = { "SubmittedTextLen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms, SubmittedTextLen), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::NewProp_bSubmitted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::NewProp_SubmittedTextLen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnGamepadTextInputDismissedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGamepadTextInputDismissedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissedDelegate, bool bSubmitted, int32 SubmittedTextLen)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms
	{
		bool bSubmitted;
		int32 SubmittedTextLen;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnGamepadTextInputDismissedDelegate_Parms Parms;
	Parms.bSubmitted=bSubmitted ? true : false;
	Parms.SubmittedTextLen=SubmittedTextLen;
	OnGamepadTextInputDismissedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnIPCountryDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnIPCountryDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountryDelegate)
{
	OnIPCountryDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnLowBatteryPowerDelegate_Parms
		{
			uint8 MinutesBatteryLeft;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_MinutesBatteryLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::NewProp_MinutesBatteryLeft = { "MinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnLowBatteryPowerDelegate_Parms, MinutesBatteryLeft), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::NewProp_MinutesBatteryLeft,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnLowBatteryPowerDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnLowBatteryPowerDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLowBatteryPowerDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPowerDelegate, uint8 MinutesBatteryLeft)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnLowBatteryPowerDelegate_Parms
	{
		uint8 MinutesBatteryLeft;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnLowBatteryPowerDelegate_Parms Parms;
	Parms.MinutesBatteryLeft=MinutesBatteryLeft;
	OnLowBatteryPowerDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms
		{
			FSteamAPICall APICallHandle;
			int32 CallbackID;
			int32 CallbackSize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_APICallHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::NewProp_APICallHandle = { "APICallHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms, APICallHandle), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::NewProp_CallbackID = { "CallbackID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms, CallbackID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::NewProp_CallbackSize = { "CallbackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms, CallbackSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::NewProp_APICallHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::NewProp_CallbackID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::NewProp_CallbackSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamAPICallCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamAPICallCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAPICallCompletedDelegate, FSteamAPICall APICallHandle, int32 CallbackID, int32 CallbackSize)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms
	{
		FSteamAPICall APICallHandle;
		int32 CallbackID;
		int32 CallbackSize;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamAPICallCompletedDelegate_Parms Parms;
	Parms.APICallHandle=APICallHandle;
	Parms.CallbackID=CallbackID;
	Parms.CallbackSize=CallbackSize;
	OnSteamAPICallCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamShutdownDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamShutdownDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdownDelegate)
{
	OnSteamShutdownDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UISteamUtils::execStartVRDashboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartVRDashboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execShowGamepadTextInput)
	{
		P_GET_ENUM(ESteamGamepadTextInputMode,Z_Param_InputMode);
		P_GET_ENUM(ESteamGamepadTextInputLineMode,Z_Param_LineInputMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
		P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowGamepadTextInput(ESteamGamepadTextInputMode(Z_Param_InputMode),ESteamGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_ExistingText,Z_Param_CharMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execSetVRHeadsetStreamingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execSetOverlayNotificationPosition)
	{
		P_GET_ENUM(ESteamNotificationPosition,Z_Param_NotificationPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_NotificationPosition));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execSetOverlayNotificationInset)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Inset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayNotificationInset(Z_Param_Out_Inset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execIsVRHeadsetStreamingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVRHeadsetStreamingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execIsSteamRunningInVR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSteamRunningInVR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execIsSteamInBigPictureMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSteamInBigPictureMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execInitFilterText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitFilterText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execIsSteamChinaLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSteamChinaLauncher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execIsOverlayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverlayEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execIsAPICallCompleted)
	{
		P_GET_STRUCT(FSteamAPICall,Z_Param_SteamAPICall);
		P_GET_UBOOL_REF(Z_Param_Out_bFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAPICallCompleted(Z_Param_SteamAPICall,Z_Param_Out_bFailed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetSteamUILanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSteamUILanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetServerRealTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetServerRealTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetSecondsSinceComputerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSecondsSinceComputerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetSecondsSinceAppActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSecondsSinceAppActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetIPCountry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIPCountry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetIPCCallCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIPCCallCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetImageSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Image);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImageSize(Z_Param_Image,Z_Param_Out_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetImageRGBA)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Image);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImageRGBA(Z_Param_Image,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetEnteredGamepadTextLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEnteredGamepadTextLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetEnteredGamepadTextInput)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnteredGamepadTextInput(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetConnectedUniverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUniverse*)Z_Param__Result=P_THIS->GetConnectedUniverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetAPICallFailureReason)
	{
		P_GET_STRUCT(FSteamAPICall,Z_Param_SteamAPICall);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAPICallFailure_*)Z_Param__Result=P_THIS->GetAPICallFailureReason(Z_Param_SteamAPICall);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetCurrentBatteryPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamUtils::GetCurrentBatteryPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamUtils::GetAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execBOverlayNeedsPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamUtils::BOverlayNeedsPresent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamPlayerInfo>*)Z_Param__Result=UISteamUtils::GetFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamUtils::Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execRestartAppIfNecessary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamUtils::RestartAppIfNecessary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamUtils::Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execGetSteamUtils)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamUtils**)Z_Param__Result=UISteamUtils::GetSteamUtils();
		P_NATIVE_END;
	}
	void UISteamUtils::StaticRegisterNativesUISteamUtils()
	{
		UClass* Class = UISteamUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BOverlayNeedsPresent", &UISteamUtils::execBOverlayNeedsPresent },
			{ "GetAPICallFailureReason", &UISteamUtils::execGetAPICallFailureReason },
			{ "GetAppID", &UISteamUtils::execGetAppID },
			{ "GetConnectedUniverse", &UISteamUtils::execGetConnectedUniverse },
			{ "GetCurrentBatteryPower", &UISteamUtils::execGetCurrentBatteryPower },
			{ "GetEnteredGamepadTextInput", &UISteamUtils::execGetEnteredGamepadTextInput },
			{ "GetEnteredGamepadTextLength", &UISteamUtils::execGetEnteredGamepadTextLength },
			{ "GetFriends", &UISteamUtils::execGetFriends },
			{ "GetImageRGBA", &UISteamUtils::execGetImageRGBA },
			{ "GetImageSize", &UISteamUtils::execGetImageSize },
			{ "GetIPCCallCount", &UISteamUtils::execGetIPCCallCount },
			{ "GetIPCountry", &UISteamUtils::execGetIPCountry },
			{ "GetSecondsSinceAppActive", &UISteamUtils::execGetSecondsSinceAppActive },
			{ "GetSecondsSinceComputerActive", &UISteamUtils::execGetSecondsSinceComputerActive },
			{ "GetServerRealTime", &UISteamUtils::execGetServerRealTime },
			{ "GetSteamUILanguage", &UISteamUtils::execGetSteamUILanguage },
			{ "GetSteamUtils", &UISteamUtils::execGetSteamUtils },
			{ "Init", &UISteamUtils::execInit },
			{ "InitFilterText", &UISteamUtils::execInitFilterText },
			{ "IsAPICallCompleted", &UISteamUtils::execIsAPICallCompleted },
			{ "IsOverlayEnabled", &UISteamUtils::execIsOverlayEnabled },
			{ "IsSteamChinaLauncher", &UISteamUtils::execIsSteamChinaLauncher },
			{ "IsSteamInBigPictureMode", &UISteamUtils::execIsSteamInBigPictureMode },
			{ "IsSteamRunningInVR", &UISteamUtils::execIsSteamRunningInVR },
			{ "IsVRHeadsetStreamingEnabled", &UISteamUtils::execIsVRHeadsetStreamingEnabled },
			{ "RestartAppIfNecessary", &UISteamUtils::execRestartAppIfNecessary },
			{ "SetOverlayNotificationInset", &UISteamUtils::execSetOverlayNotificationInset },
			{ "SetOverlayNotificationPosition", &UISteamUtils::execSetOverlayNotificationPosition },
			{ "SetVRHeadsetStreamingEnabled", &UISteamUtils::execSetVRHeadsetStreamingEnabled },
			{ "ShowGamepadTextInput", &UISteamUtils::execShowGamepadTextInput },
			{ "Shutdown", &UISteamUtils::execShutdown },
			{ "StartVRDashboard", &UISteamUtils::execStartVRDashboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics
	{
		struct ISteamUtils_eventBOverlayNeedsPresent_Parms
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
	void Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "DisplayName", "Steam BOverlayNeedsPresent" },
		{ "Keywords", "Steam BOverlayNeedsPresent" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "BOverlayNeedsPresent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::ISteamUtils_eventBOverlayNeedsPresent_Parms), Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics
	{
		struct ISteamUtils_eventGetAPICallFailureReason_Parms
		{
			FSteamAPICall SteamAPICall;
			ESteamAPICallFailure_ ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamAPICall;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::NewProp_SteamAPICall = { "SteamAPICall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetAPICallFailureReason_Parms, SteamAPICall), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetAPICallFailureReason_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAPICallFailure_, METADATA_PARAMS(nullptr, 0) }; // 3525420612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::NewProp_SteamAPICall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetAPICallFailureReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::ISteamUtils_eventGetAPICallFailureReason_Parms), Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetAppID_Statics
	{
		struct ISteamUtils_eventGetAppID_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "DisplayName", "Steam GetSteamAppID" },
		{ "Keywords", "Steam GetSteamAppID" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetAppID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::ISteamUtils_eventGetAppID_Parms), Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics
	{
		struct ISteamUtils_eventGetConnectedUniverse_Parms
		{
			ESteamUniverse ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUniverse, METADATA_PARAMS(nullptr, 0) }; // 2143406117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetConnectedUniverse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::ISteamUtils_eventGetConnectedUniverse_Parms), Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics
	{
		struct ISteamUtils_eventGetCurrentBatteryPower_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Gets the current amount of battery power on the computer.\n\x09 *\n\x09 * @return uint8 - The current battery power ranging between [0..100]%. Returns 255 when the user is on AC power.\n\x09 */" },
		{ "DisplayName", "Steam GetCurrentBatteryPower" },
		{ "Keywords", "Steam GetCurrentBatteryPower" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Gets the current amount of battery power on the computer.\n\n@return uint8 - The current battery power ranging between [0..100]%. Returns 255 when the user is on AC power." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetCurrentBatteryPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::ISteamUtils_eventGetCurrentBatteryPower_Parms), Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics
	{
		struct ISteamUtils_eventGetEnteredGamepadTextInput_Parms
		{
			FString Text;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetEnteredGamepadTextInput_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Gets the gamepad text input from the Big Picture overlay.\n\x09 * This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09 * Provides the text input as UTF8.\n\x09 *\n\x09 * @param FString & Text - DESCHERE\n\x09 * @return bool - true if there was text to receive and cchText is the same size as GamepadTextInputDismissed_t.m_unSubmittedText; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Gets the gamepad text input from the Big Picture overlay.\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\nProvides the text input as UTF8.\n\n@param FString & Text - DESCHERE\n@return bool - true if there was text to receive and cchText is the same size as GamepadTextInputDismissed_t.m_unSubmittedText; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetEnteredGamepadTextInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::ISteamUtils_eventGetEnteredGamepadTextInput_Parms), Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics
	{
		struct ISteamUtils_eventGetEnteredGamepadTextLength_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Gets the length of the gamepad text input from the Big Picture overlay.\n\x09 * This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Gets the length of the gamepad text input from the Big Picture overlay.\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetEnteredGamepadTextLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::ISteamUtils_eventGetEnteredGamepadTextLength_Parms), Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetFriends_Statics
	{
		struct ISteamUtils_eventGetFriends_Parms
		{
			TArray<FSteamPlayerInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetFriends_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "DisplayName", "Steam GetFriends" },
		{ "Keywords", "Steam GetFriends" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetFriends", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::ISteamUtils_eventGetFriends_Parms), Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics
	{
		struct ISteamUtils_eventGetImageRGBA_Parms
		{
			int32 Image;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Image;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetImageRGBA_Parms, Image), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetImageRGBA_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Gets the image bytes from an image handle.\n\x09 * Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as:\n\x09 * width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer,\n\x09 * thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\x09 *\n\x09 * @param int32 Image - The handle to the image that will be obtained.\n\x09 * @param TArray<uint8> & Buffer - The buffer that will be filled.\n\x09 * @return bool - true upon success if the image handle is valid and the buffer was filled out, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Gets the image bytes from an image handle.\nPrior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as:\nwidth * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer,\nthus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\n@param int32 Image - The handle to the image that will be obtained.\n@param TArray<uint8> & Buffer - The buffer that will be filled.\n@return bool - true upon success if the image handle is valid and the buffer was filled out, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetImageRGBA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::ISteamUtils_eventGetImageRGBA_Parms), Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetImageRGBA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetImageRGBA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics
	{
		struct ISteamUtils_eventGetImageSize_Parms
		{
			int32 Image;
			FIntPoint Size;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Image;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetImageSize_Parms, Image), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetImageSize_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventGetImageSize_Parms), &Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Gets the size of a Steam image handle.\n\x09 * This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\x09 *\n\x09 * @param int32 Image - The image handle to get the size for.\n\x09 * @param FIntPoint & Size - Returns the width/height of the image.\n\x09 * @return bool - true upon success if the image handle is valid and the sizes were filled out, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Gets the size of a Steam image handle.\nThis must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\n@param int32 Image - The image handle to get the size for.\n@param FIntPoint & Size - Returns the width/height of the image.\n@return bool - true upon success if the image handle is valid and the sizes were filled out, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetImageSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::ISteamUtils_eventGetImageSize_Parms), Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics
	{
		struct ISteamUtils_eventGetIPCCallCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns the number of IPC calls made since the last time this function was called.\n\x09 * Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\n\x09 * Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns the number of IPC calls made since the last time this function was called.\nUsed for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\nEvery IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetIPCCallCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::ISteamUtils_eventGetIPCCallCount_Parms), Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetIPCCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetIPCCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics
	{
		struct ISteamUtils_eventGetIPCountry_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\x09 * This is looked up via an IP-to-location database.\n\x09 *\n\x09 * @return FString\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\nThis is looked up via an IP-to-location database.\n\n@return FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetIPCountry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::ISteamUtils_eventGetIPCountry_Parms), Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetIPCountry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetIPCountry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics
	{
		struct ISteamUtils_eventGetSecondsSinceAppActive_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns the number of seconds since the application was active.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns the number of seconds since the application was active.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetSecondsSinceAppActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::ISteamUtils_eventGetSecondsSinceAppActive_Parms), Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics
	{
		struct ISteamUtils_eventGetSecondsSinceComputerActive_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns the number of seconds since the user last moved the mouse.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns the number of seconds since the user last moved the mouse.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetSecondsSinceComputerActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::ISteamUtils_eventGetSecondsSinceComputerActive_Parms), Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics
	{
		struct ISteamUtils_eventGetServerRealTime_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetServerRealTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::ISteamUtils_eventGetServerRealTime_Parms), Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetServerRealTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetServerRealTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics
	{
		struct ISteamUtils_eventGetSteamUILanguage_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns the language the steam client is running in.\n\x09 * You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\x09 *\n\x09 * @return FString\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns the language the steam client is running in.\nYou probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\n@return FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetSteamUILanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::ISteamUtils_eventGetSteamUILanguage_Parms), Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics
	{
		struct ISteamUtils_eventGetSteamUtils_Parms
		{
			UISteamUtils* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventGetSteamUtils_Parms, ReturnValue), Z_Construct_UClass_UISteamUtils_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "DisplayName", "Steam GetSteamUtils" },
		{ "Keywords", "Steam GetSteamUtils" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "GetSteamUtils", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::ISteamUtils_eventGetSteamUtils_Parms), Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_GetSteamUtils()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_GetSteamUtils_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_Init_Statics
	{
		struct ISteamUtils_eventInit_Parms
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
	void Z_Construct_UFunction_UISteamUtils_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventInit_Parms), &Z_Construct_UFunction_UISteamUtils_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "DisplayName", "Steam Init" },
		{ "Keywords", "Steam Init" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_Init_Statics::ISteamUtils_eventInit_Parms), Z_Construct_UFunction_UISteamUtils_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics
	{
		struct ISteamUtils_eventInitFilterText_Parms
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
	void Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventInitFilterText_Parms), &Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Initializes text filtering, loading dictionaries for the language the game is running in.\n\x09 *\n\x09 * @return bool - true if initialization succeeds, false if filtering is unavailable for the game's language, in which case FilterText() will act as a passthrough.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Initializes text filtering, loading dictionaries for the language the game is running in.\n\n@return bool - true if initialization succeeds, false if filtering is unavailable for the game's language, in which case FilterText() will act as a passthrough." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "InitFilterText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::ISteamUtils_eventInitFilterText_Parms), Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_InitFilterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_InitFilterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics
	{
		struct ISteamUtils_eventIsAPICallCompleted_Parms
		{
			FSteamAPICall SteamAPICall;
			bool bFailed;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamAPICall;
		static void NewProp_bFailed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_SteamAPICall = { "SteamAPICall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventIsAPICallCompleted_Parms, SteamAPICall), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	void Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_bFailed_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsAPICallCompleted_Parms*)Obj)->bFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_bFailed = { "bFailed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsAPICallCompleted_Parms), &Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_bFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsAPICallCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsAPICallCompleted_Parms), &Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_SteamAPICall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_bFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Checks if an API Call is completed. Provides the backend of the CallResult wrapper.\n\x09 * It's generally not recommended that you use this yourself.\n\x09 *\n\x09 * @param FSteamAPICall SteamAPICall - The API Call handle to check.\n\x09 * @param bool & bFailed - Returns whether the API call has encountered a failure (true) or not (false).\n\x09 * @return bool - true if the API Call is valid and has completed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Checks if an API Call is completed. Provides the backend of the CallResult wrapper.\nIt's generally not recommended that you use this yourself.\n\n@param FSteamAPICall SteamAPICall - The API Call handle to check.\n@param bool & bFailed - Returns whether the API call has encountered a failure (true) or not (false).\n@return bool - true if the API Call is valid and has completed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "IsAPICallCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::ISteamUtils_eventIsAPICallCompleted_Parms), Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics
	{
		struct ISteamUtils_eventIsOverlayEnabled_Parms
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
	void Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Checks if the Steam Overlay is running & the user can access it.\n\x09 * The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\x09 *\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Checks if the Steam Overlay is running & the user can access it.\nThe overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "IsOverlayEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::ISteamUtils_eventIsOverlayEnabled_Parms), Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics
	{
		struct ISteamUtils_eventIsSteamChinaLauncher_Parms
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
	void Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\x09 *\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "IsSteamChinaLauncher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::ISteamUtils_eventIsSteamChinaLauncher_Parms), Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics
	{
		struct ISteamUtils_eventIsSteamInBigPictureMode_Parms
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
	void Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\x09 * Games must be launched through the Steam client to enable the Big Picture overlay.\n\x09 * During development, a game can be added as a non-steam game to the developers library to test this feature.\n\x09 *\n\x09 * @return bool - true if the Big Picture overlay is available; otherwise, false. This will always return false if your app is not the 'game' application type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Checks if Steam & the Steam Overlay are running in Big Picture mode.\nGames must be launched through the Steam client to enable the Big Picture overlay.\nDuring development, a game can be added as a non-steam game to the developers library to test this feature.\n\n@return bool - true if the Big Picture overlay is available; otherwise, false. This will always return false if your app is not the 'game' application type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "IsSteamInBigPictureMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::ISteamUtils_eventIsSteamInBigPictureMode_Parms), Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics
	{
		struct ISteamUtils_eventIsSteamRunningInVR_Parms
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
	void Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Checks if Steam is running in VR mode.\n\x09 *\n\x09 * @return bool - true if Steam itself is running in VR mode; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Checks if Steam is running in VR mode.\n\n@return bool - true if Steam itself is running in VR mode; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "IsSteamRunningInVR", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::ISteamUtils_eventIsSteamRunningInVR_Parms), Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics
	{
		struct ISteamUtils_eventIsVRHeadsetStreamingEnabled_Parms
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
	void Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Checks if the HMD view will be streamed via Steam Remote Play.\n\x09 *\n\x09 * @return bool - true if VR is enabled and the HMD view is currently being streamed; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Checks if the HMD view will be streamed via Steam Remote Play.\n\n@return bool - true if VR is enabled and the HMD view is currently being streamed; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "IsVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::ISteamUtils_eventIsVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "DisplayName", "Steam RestartAppIfNecessary" },
		{ "Keywords", "Steam RestartAppIfNecessary" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "RestartAppIfNecessary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics
	{
		struct ISteamUtils_eventSetOverlayNotificationInset_Parms
		{
			FIntPoint Inset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::NewProp_Inset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::NewProp_Inset = { "Inset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventSetOverlayNotificationInset_Parms, Inset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::NewProp_Inset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::NewProp_Inset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::NewProp_Inset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\x09 * A value of (0, 0) resets the position into the corner.\n\x09 * This position is per-game and is reset each launch.\n\x09 *\n\x09 * @param const FIntPoint & Inset - The horizontal (left-right) and vertical (up-down) distance in pixels from the corner.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\nA value of (0, 0) resets the position into the corner.\nThis position is per-game and is reset each launch.\n\n@param const FIntPoint & Inset - The horizontal (left-right) and vertical (up-down) distance in pixels from the corner.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "SetOverlayNotificationInset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::ISteamUtils_eventSetOverlayNotificationInset_Parms), Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics
	{
		struct ISteamUtils_eventSetOverlayNotificationPosition_Parms
		{
			ESteamNotificationPosition NotificationPosition;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamNotificationPosition, METADATA_PARAMS(nullptr, 0) }; // 590596807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Sets which corner the Steam overlay notification popup should display itself in.\n\x09 * You can also set the distance from the specified corner by using SetOverlayNotificationInset.\n\x09 * This position is per-game and is reset each launch.\n\x09 *\n\x09 * @param ESteamNotificationPosition NotificationPosition\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Sets which corner the Steam overlay notification popup should display itself in.\nYou can also set the distance from the specified corner by using SetOverlayNotificationInset.\nThis position is per-game and is reset each launch.\n\n@param ESteamNotificationPosition NotificationPosition\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "SetOverlayNotificationPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::ISteamUtils_eventSetOverlayNotificationPosition_Parms), Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics
	{
		struct ISteamUtils_eventSetVRHeadsetStreamingEnabled_Parms
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
	void Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ISteamUtils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Set whether the HMD content will be streamed via Steam Remote Play.\n\x09 * If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input\n\x09 * will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\n\x09 * This is useful for games that have asymmetric multiplayer gameplay.\n\x09 *\n\x09 * @param bool bEnabled - Turns VR HMD Streaming on (true) or off (false).\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Set whether the HMD content will be streamed via Steam Remote Play.\nIf this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input\nwill be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\nThis is useful for games that have asymmetric multiplayer gameplay.\n\n@param bool bEnabled - Turns VR HMD Streaming on (true) or off (false).\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "SetVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::ISteamUtils_eventSetVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics
	{
		struct ISteamUtils_eventShowGamepadTextInput_Parms
		{
			ESteamGamepadTextInputMode InputMode;
			ESteamGamepadTextInputLineMode LineInputMode;
			FString Description;
			FString ExistingText;
			int32 CharMax;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LineInputMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LineInputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExistingText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExistingText;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharMax;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamGamepadTextInputMode, METADATA_PARAMS(nullptr, 0) }; // 3216903410
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamGamepadTextInputLineMode, METADATA_PARAMS(nullptr, 0) }; // 287322069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUtils_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_CharMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Activates the Big Picture text input dialog which only supports gamepad input.\n\x09 *\n\x09 * @param ESteamGamepadTextInputMode InputMode - Selects the input mode to use, either Normal or Password (hidden text)\n\x09 * @param ESteamGamepadTextInputLineMode LineInputMode - Controls whether to use single or multi line input.\n\x09 * @param const FString & Description - Sets the description that should inform the user what the input dialog is for.\n\x09 * @param const FString & ExistingText - Sets the preexisting text which the user can edit.\n\x09 * @param int32 CharMax - The maximum number of characters that the user can input.\n\x09 * @return bool - true if the big picture overlay is running; otherwise, false.\n\x09 */" },
		{ "CPP_Default_CharMax", "200" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Activates the Big Picture text input dialog which only supports gamepad input.\n\n@param ESteamGamepadTextInputMode InputMode - Selects the input mode to use, either Normal or Password (hidden text)\n@param ESteamGamepadTextInputLineMode LineInputMode - Controls whether to use single or multi line input.\n@param const FString & Description - Sets the description that should inform the user what the input dialog is for.\n@param const FString & ExistingText - Sets the preexisting text which the user can edit.\n@param int32 CharMax - The maximum number of characters that the user can input.\n@return bool - true if the big picture overlay is running; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "ShowGamepadTextInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::ISteamUtils_eventShowGamepadTextInput_Parms), Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_Shutdown_Statics
	{
		struct ISteamUtils_eventShutdown_Parms
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
	void Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamUtils_eventShutdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamUtils_eventShutdown_Parms), &Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "DisplayName", "Steam Shutdown" },
		{ "Keywords", "Steam Shutdown" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "Shutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::ISteamUtils_eventShutdown_Parms), Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUtils_StartVRDashboard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUtils_StartVRDashboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/**\n\x09 * Asks Steam to create and render the OpenVR dashboard.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Asks Steam to create and render the OpenVR dashboard.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUtils_StartVRDashboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUtils, nullptr, "StartVRDashboard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUtils_StartVRDashboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUtils_StartVRDashboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUtils_StartVRDashboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUtils_StartVRDashboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamUtils);
	UClass* Z_Construct_UClass_UISteamUtils_NoRegister()
	{
		return UISteamUtils::StaticClass();
	}
	struct Z_Construct_UClass_UISteamUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnGamepadTextInputDismissed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnGamepadTextInputDismissed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnIPCountry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnIPCountry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnLowBatteryPower_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnLowBatteryPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamAPICallCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamAPICallCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamShutdown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamShutdown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 1547913006
		{ &Z_Construct_UFunction_UISteamUtils_GetAPICallFailureReason, "GetAPICallFailureReason" }, // 1264456182
		{ &Z_Construct_UFunction_UISteamUtils_GetAppID, "GetAppID" }, // 3278867812
		{ &Z_Construct_UFunction_UISteamUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 3049928397
		{ &Z_Construct_UFunction_UISteamUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 511763988
		{ &Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 800768627
		{ &Z_Construct_UFunction_UISteamUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 1193478413
		{ &Z_Construct_UFunction_UISteamUtils_GetFriends, "GetFriends" }, // 2800393371
		{ &Z_Construct_UFunction_UISteamUtils_GetImageRGBA, "GetImageRGBA" }, // 2143024504
		{ &Z_Construct_UFunction_UISteamUtils_GetImageSize, "GetImageSize" }, // 2644128961
		{ &Z_Construct_UFunction_UISteamUtils_GetIPCCallCount, "GetIPCCallCount" }, // 187340635
		{ &Z_Construct_UFunction_UISteamUtils_GetIPCountry, "GetIPCountry" }, // 3910482764
		{ &Z_Construct_UFunction_UISteamUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 3569954142
		{ &Z_Construct_UFunction_UISteamUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 1102359839
		{ &Z_Construct_UFunction_UISteamUtils_GetServerRealTime, "GetServerRealTime" }, // 2955304390
		{ &Z_Construct_UFunction_UISteamUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 191521140
		{ &Z_Construct_UFunction_UISteamUtils_GetSteamUtils, "GetSteamUtils" }, // 268006653
		{ &Z_Construct_UFunction_UISteamUtils_Init, "Init" }, // 3799166926
		{ &Z_Construct_UFunction_UISteamUtils_InitFilterText, "InitFilterText" }, // 1729038447
		{ &Z_Construct_UFunction_UISteamUtils_IsAPICallCompleted, "IsAPICallCompleted" }, // 439085850
		{ &Z_Construct_UFunction_UISteamUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 2187914175
		{ &Z_Construct_UFunction_UISteamUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 3322575199
		{ &Z_Construct_UFunction_UISteamUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 1348786668
		{ &Z_Construct_UFunction_UISteamUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 1612720173
		{ &Z_Construct_UFunction_UISteamUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 224555736
		{ &Z_Construct_UFunction_UISteamUtils_RestartAppIfNecessary, "RestartAppIfNecessary" }, // 2418344307
		{ &Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 1100469029
		{ &Z_Construct_UFunction_UISteamUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 4145680054
		{ &Z_Construct_UFunction_UISteamUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 335016751
		{ &Z_Construct_UFunction_UISteamUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 2722954790
		{ &Z_Construct_UFunction_UISteamUtils_Shutdown, "Shutdown" }, // 710996897
		{ &Z_Construct_UFunction_UISteamUtils_StartVRDashboard, "StartVRDashboard" }, // 2498513433
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\x09Interface which provides access to a range of miscellaneous utility functions.\n" },
		{ "IncludePath", "UISteamUtils.h" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Interface which provides access to a range of miscellaneous utility functions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnGamepadTextInputDismissed_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/** Called when the big picture gamepad text input has been closed. */" },
		{ "DisplayName", "OnGamepadTextInputDismissed" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Called when the big picture gamepad text input has been closed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnGamepadTextInputDismissed = { "m_OnGamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUtils, m_OnGamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnGamepadTextInputDismissedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnGamepadTextInputDismissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnGamepadTextInputDismissed_MetaData)) }; // 338595626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnIPCountry_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/** Called when the country of the user changed. The country should be updated with GetIPCountry. */" },
		{ "DisplayName", "OnIPCountry" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Called when the country of the user changed. The country should be updated with GetIPCountry." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnIPCountry = { "m_OnIPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUtils, m_OnIPCountry), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnIPCountryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnIPCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnIPCountry_MetaData)) }; // 1148894136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnLowBatteryPower_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/** Called when running on a laptop and less than 10 minutes of battery is left, and then fires then every minute afterwards. */" },
		{ "DisplayName", "OnLowBatteryPower" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Called when running on a laptop and less than 10 minutes of battery is left, and then fires then every minute afterwards." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnLowBatteryPower = { "m_OnLowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUtils, m_OnLowBatteryPower), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnLowBatteryPowerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnLowBatteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnLowBatteryPower_MetaData)) }; // 2896780361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamAPICallCompleted_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/** Called when a SteamAPICall_t has completed (or failed) */" },
		{ "DisplayName", "OnSteamAPICallCompleted" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Called when a SteamAPICall_t has completed (or failed)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamAPICallCompleted = { "m_OnSteamAPICallCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUtils, m_OnSteamAPICallCompleted), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamAPICallCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamAPICallCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamAPICallCompleted_MetaData)) }; // 1209697429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamShutdown_MetaData[] = {
		{ "Category", "SteamAPI|ISteamUtils" },
		{ "Comment", "/** Called when Steam wants to shutdown. */" },
		{ "DisplayName", "OnSteamShutdown" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Called when Steam wants to shutdown." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamShutdown = { "m_OnSteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamUtils, m_OnSteamShutdown), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamShutdownDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamShutdown_MetaData)) }; // 1536304101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamUtils_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnGamepadTextInputDismissed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnIPCountry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnLowBatteryPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamAPICallCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamUtils_Statics::NewProp_m_OnSteamShutdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUtils_Statics::ClassParams = {
		&UISteamUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamUtils()
	{
		if (!Z_Registration_Info_UClass_UISteamUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamUtils.OuterSingleton, Z_Construct_UClass_UISteamUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamUtils.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamUtils>()
	{
		return UISteamUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamUtils);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUtils, UISteamUtils::StaticClass, TEXT("UISteamUtils"), &Z_Registration_Info_UClass_UISteamUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUtils), 1314955190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_3847820631(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
