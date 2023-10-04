// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamRemotePlay.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamRemotePlay() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamRemotePlay();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamRemotePlay_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDeviceFormFactor_();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionConnectedDelegate_Parms
		{
			int32 SessionID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionConnectedDelegate_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionConnectedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamRemotePlaySessionConnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnectedDelegate, int32 SessionID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionConnectedDelegate_Parms
	{
		int32 SessionID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionConnectedDelegate_Parms Parms;
	Parms.SessionID=SessionID;
	OnSteamRemotePlaySessionConnectedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionDisconnectedDelegate_Parms
		{
			int32 SessionID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionDisconnectedDelegate_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::NewProp_SessionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionDisconnectedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamRemotePlaySessionDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnectedDelegate, int32 SessionID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionDisconnectedDelegate_Parms
	{
		int32 SessionID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamRemotePlaySessionDisconnectedDelegate_Parms Parms;
	Parms.SessionID=SessionID;
	OnSteamRemotePlaySessionDisconnectedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamRemotePlay::execBSendRemotePlayTogetherInvite)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSendRemotePlayTogetherInvite(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execBGetSessionClientResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BGetSessionClientResolution(Z_Param_SessionID,Z_Param_Out_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execGetSessionClientFormFactor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamDeviceFormFactor_*)Z_Param__Result=P_THIS->GetSessionClientFormFactor(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execGetSessionClientName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSessionClientName(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execGetSessionSteamID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetSessionSteamID(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execGetSessionID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSessionID(Z_Param_SessionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execGetSessionCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSessionCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamRemotePlay::execGetSteamRemotePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamRemotePlay**)Z_Param__Result=UISteamRemotePlay::GetSteamRemotePlay();
		P_NATIVE_END;
	}
	void UISteamRemotePlay::StaticRegisterNativesUISteamRemotePlay()
	{
		UClass* Class = UISteamRemotePlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetSessionClientResolution", &UISteamRemotePlay::execBGetSessionClientResolution },
			{ "BSendRemotePlayTogetherInvite", &UISteamRemotePlay::execBSendRemotePlayTogetherInvite },
			{ "GetSessionClientFormFactor", &UISteamRemotePlay::execGetSessionClientFormFactor },
			{ "GetSessionClientName", &UISteamRemotePlay::execGetSessionClientName },
			{ "GetSessionCount", &UISteamRemotePlay::execGetSessionCount },
			{ "GetSessionID", &UISteamRemotePlay::execGetSessionID },
			{ "GetSessionSteamID", &UISteamRemotePlay::execGetSessionSteamID },
			{ "GetSteamRemotePlay", &UISteamRemotePlay::execGetSteamRemotePlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics
	{
		struct ISteamRemotePlay_eventBGetSessionClientResolution_Parms
		{
			int32 SessionID;
			FIntPoint Resolution;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventBGetSessionClientResolution_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventBGetSessionClientResolution_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemotePlay_eventBGetSessionClientResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemotePlay_eventBGetSessionClientResolution_Parms), &Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\x09 *\n\x09 * @param int32 SessionID - The session ID to get information about\n\x09 * @param FIntPoint & Resolution - device resolution\n\x09 * @return bool - true if the session ID is valid; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\n@param int32 SessionID - The session ID to get information about\n@param FIntPoint & Resolution - device resolution\n@return bool - true if the session ID is valid; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "BGetSessionClientResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::ISteamRemotePlay_eventBGetSessionClientResolution_Parms), Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics
	{
		struct ISteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms
		{
			FSteamID SteamIDFriend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms), &Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Invite a friend to join the game using Remote Play Together\n\x09 *\n\x09 * @param FSteamID SteamIDFriend - The Steam ID of the friend you'd like to invite\n\x09 * @return bool - true if the invite was successfully sent; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Invite a friend to join the game using Remote Play Together\n\n@param FSteamID SteamIDFriend - The Steam ID of the friend you'd like to invite\n@return bool - true if the invite was successfully sent; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "BSendRemotePlayTogetherInvite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::ISteamRemotePlay_eventBSendRemotePlayTogetherInvite_Parms), Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics
	{
		struct ISteamRemotePlay_eventGetSessionClientFormFactor_Parms
		{
			int32 SessionID;
			ESteamDeviceFormFactor_ ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionClientFormFactor_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionClientFormFactor_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamDeviceFormFactor_, METADATA_PARAMS(nullptr, 0) }; // 502354536
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Get the form factor of the session client device\n\x09 *\n\x09 * @param int32 SessionID - \x09The session ID to get information about\n\x09 * @return ESteamDeviceFormFactor_ - The form factor of the device associated with the Remote Play session, or k_ESteamDeviceFormFactorUnknown if the session ID is not valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Get the form factor of the session client device\n\n@param int32 SessionID -     The session ID to get information about\n@return ESteamDeviceFormFactor_ - The form factor of the device associated with the Remote Play session, or k_ESteamDeviceFormFactorUnknown if the session ID is not valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "GetSessionClientFormFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::ISteamRemotePlay_eventGetSessionClientFormFactor_Parms), Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics
	{
		struct ISteamRemotePlay_eventGetSessionClientName_Parms
		{
			int32 SessionID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionClientName_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionClientName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Get the name of the session client device\n\x09 *\n\x09 * @param int32 SessionID - The session ID to get information about\n\x09 * @return FString - The name of the device associated with the Remote Play session, or NULL if the session ID is not valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Get the name of the session client device\n\n@param int32 SessionID - The session ID to get information about\n@return FString - The name of the device associated with the Remote Play session, or NULL if the session ID is not valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "GetSessionClientName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::ISteamRemotePlay_eventGetSessionClientName_Parms), Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics
	{
		struct ISteamRemotePlay_eventGetSessionCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Get the number of currently connected Steam Remote Play sessions\n\x09 *\n\x09 * @return int32 - The number of currently connected Steam Remote Play sessions\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Get the number of currently connected Steam Remote Play sessions\n\n@return int32 - The number of currently connected Steam Remote Play sessions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "GetSessionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::ISteamRemotePlay_eventGetSessionCount_Parms), Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics
	{
		struct ISteamRemotePlay_eventGetSessionID_Parms
		{
			int32 SessionIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionID_Parms, SessionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::NewProp_SessionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Get the currently connected Steam Remote Play session ID at the specified index\n\x09 *\n\x09 * @param int32 SessionIndex - The index of the specified session\n\x09 * @return int32 - The session ID of the session at the specified index, or 0 if the index is less than 0 or greater than or equal to GetSessionCount()\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Get the currently connected Steam Remote Play session ID at the specified index\n\n@param int32 SessionIndex - The index of the specified session\n@return int32 - The session ID of the session at the specified index, or 0 if the index is less than 0 or greater than or equal to GetSessionCount()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "GetSessionID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::ISteamRemotePlay_eventGetSessionID_Parms), Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_GetSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_GetSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics
	{
		struct ISteamRemotePlay_eventGetSessionSteamID_Parms
		{
			int32 SessionID;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionSteamID_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSessionSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/**\n\x09 * Get the SteamID of the connected user\n\x09 *\n\x09 * @param int32 SessionID - The session ID to get information about\n\x09 * @return FSteamID - The Steam ID of the user associated with the Remote Play session. This would normally be the logged in user, or a friend in the case of Remote Play Together.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Get the SteamID of the connected user\n\n@param int32 SessionID - The session ID to get information about\n@return FSteamID - The Steam ID of the user associated with the Remote Play session. This would normally be the logged in user, or a friend in the case of Remote Play Together." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "GetSessionSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::ISteamRemotePlay_eventGetSessionSteamID_Parms), Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics
	{
		struct ISteamRemotePlay_eventGetSteamRemotePlay_Parms
		{
			UISteamRemotePlay* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamRemotePlay_eventGetSteamRemotePlay_Parms, ReturnValue), Z_Construct_UClass_UISteamRemotePlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamRemotePlay" },
		{ "DisplayName", "Steam Remote Play" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamRemotePlay, nullptr, "GetSteamRemotePlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::ISteamRemotePlay_eventGetSteamRemotePlay_Parms), Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamRemotePlay);
	UClass* Z_Construct_UClass_UISteamRemotePlay_NoRegister()
	{
		return UISteamRemotePlay::StaticClass();
	}
	struct Z_Construct_UClass_UISteamRemotePlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamRemotePlaySessionConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamRemotePlaySessionConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamRemotePlaySessionDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamRemotePlaySessionDisconnected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamRemotePlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamRemotePlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamRemotePlay_BGetSessionClientResolution, "BGetSessionClientResolution" }, // 1438357822
		{ &Z_Construct_UFunction_UISteamRemotePlay_BSendRemotePlayTogetherInvite, "BSendRemotePlayTogetherInvite" }, // 3283844297
		{ &Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientFormFactor, "GetSessionClientFormFactor" }, // 1619880693
		{ &Z_Construct_UFunction_UISteamRemotePlay_GetSessionClientName, "GetSessionClientName" }, // 2371204547
		{ &Z_Construct_UFunction_UISteamRemotePlay_GetSessionCount, "GetSessionCount" }, // 1833718578
		{ &Z_Construct_UFunction_UISteamRemotePlay_GetSessionID, "GetSessionID" }, // 1491527056
		{ &Z_Construct_UFunction_UISteamRemotePlay_GetSessionSteamID, "GetSessionSteamID" }, // 1582303021
		{ &Z_Construct_UFunction_UISteamRemotePlay_GetSteamRemotePlay, "GetSteamRemotePlay" }, // 979411595
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemotePlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamRemotePlay.h" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionConnected_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "Comment", "/** Delegates */" },
		{ "DisplayName", "OnSteamRemotePlaySessionConnected" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionConnected = { "m_OnSteamRemotePlaySessionConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemotePlay, m_OnSteamRemotePlaySessionConnected), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionConnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionConnected_MetaData)) }; // 441673747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionDisconnected_MetaData[] = {
		{ "Category", "SteamAPI|UISteamRemotePlay" },
		{ "DisplayName", "OnSteamRemotePlaySessionDisconnected" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionDisconnected = { "m_OnSteamRemotePlaySessionDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamRemotePlay, m_OnSteamRemotePlaySessionDisconnected), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamRemotePlaySessionDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionDisconnected_MetaData)) }; // 895621346
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamRemotePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamRemotePlay_Statics::NewProp_m_OnSteamRemotePlaySessionDisconnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamRemotePlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamRemotePlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamRemotePlay_Statics::ClassParams = {
		&UISteamRemotePlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamRemotePlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemotePlay_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamRemotePlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemotePlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamRemotePlay()
	{
		if (!Z_Registration_Info_UClass_UISteamRemotePlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamRemotePlay.OuterSingleton, Z_Construct_UClass_UISteamRemotePlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamRemotePlay.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamRemotePlay>()
	{
		return UISteamRemotePlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamRemotePlay);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamRemotePlay, UISteamRemotePlay::StaticClass, TEXT("UISteamRemotePlay"), &Z_Registration_Info_UClass_UISteamRemotePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamRemotePlay), 4167372009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_2571321065(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
