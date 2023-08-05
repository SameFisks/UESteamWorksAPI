// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMusicRemote.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMusicRemote() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusicRemote();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusicRemote_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAudioPlaybackStatus();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerRemoteToFrontDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerRemoteToFrontDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteToFrontDelegate)
{
	OnMusicPlayerRemoteToFrontDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerRemoteWillActivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteWillActivateDelegate)
{
	OnMusicPlayerRemoteWillActivateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerRemoteWillDeactivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerRemoteWillDeactivateDelegate)
{
	OnMusicPlayerRemoteWillDeactivateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsPlaylistEntryDelegate_Parms
		{
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsPlaylistEntryDelegate_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsPlaylistEntryDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerSelectsPlaylistEntryDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerSelectsPlaylistEntryDelegate, int32 ID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsPlaylistEntryDelegate_Parms
	{
		int32 ID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsPlaylistEntryDelegate_Parms Parms;
	Parms.ID=ID;
	OnMusicPlayerSelectsPlaylistEntryDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsQueueEntryDelegate_Parms
		{
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsQueueEntryDelegate_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsQueueEntryDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerSelectsQueueEntryDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerSelectsQueueEntryDelegate, int32 ID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsQueueEntryDelegate_Parms
	{
		int32 ID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerSelectsQueueEntryDelegate_Parms Parms;
	Parms.ID=ID;
	OnMusicPlayerSelectsQueueEntryDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsLoopedDelegate_Parms
		{
			bool bLooped;
		};
		static void NewProp_bLooped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::NewProp_bLooped_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsLoopedDelegate_Parms*)Obj)->bLooped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::NewProp_bLooped = { "bLooped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsLoopedDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::NewProp_bLooped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::NewProp_bLooped,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsLoopedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsLoopedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsLoopedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsLoopedDelegate, bool bLooped)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsLoopedDelegate_Parms
	{
		bool bLooped;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsLoopedDelegate_Parms Parms;
	Parms.bLooped=bLooped ? true : false;
	OnMusicPlayerWantsLoopedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsPauseDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsPauseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPauseDelegate)
{
	OnMusicPlayerWantsPauseDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsPlayingRepeatStatusDelegate_Parms
		{
			int32 RepeatStatus;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RepeatStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::NewProp_RepeatStatus = { "RepeatStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsPlayingRepeatStatusDelegate_Parms, RepeatStatus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::NewProp_RepeatStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsPlayingRepeatStatusDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsPlayingRepeatStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayingRepeatStatusDelegate, int32 RepeatStatus)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsPlayingRepeatStatusDelegate_Parms
	{
		int32 RepeatStatus;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsPlayingRepeatStatusDelegate_Parms Parms;
	Parms.RepeatStatus=RepeatStatus;
	OnMusicPlayerWantsPlayingRepeatStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsPlayNextDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsPlayNextDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayNextDelegate)
{
	OnMusicPlayerWantsPlayNextDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsPlayPreviousDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayPreviousDelegate)
{
	OnMusicPlayerWantsPlayPreviousDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsPlayDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsPlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsPlayDelegate)
{
	OnMusicPlayerWantsPlayDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsShuffledDelegate_Parms
		{
			bool bShuffled;
		};
		static void NewProp_bShuffled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::NewProp_bShuffled_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsShuffledDelegate_Parms*)Obj)->bShuffled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::NewProp_bShuffled = { "bShuffled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsShuffledDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::NewProp_bShuffled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::NewProp_bShuffled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsShuffledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsShuffledDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsShuffledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsShuffledDelegate, bool bShuffled)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsShuffledDelegate_Parms
	{
		bool bShuffled;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsShuffledDelegate_Parms Parms;
	Parms.bShuffled=bShuffled ? true : false;
	OnMusicPlayerWantsShuffledDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsVolumeDelegate_Parms
		{
			float NewVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsVolumeDelegate_Parms, NewVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWantsVolumeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsVolumeDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWantsVolumeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWantsVolumeDelegate, float NewVolume)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsVolumeDelegate_Parms
	{
		float NewVolume;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnMusicPlayerWantsVolumeDelegate_Parms Parms;
	Parms.NewVolume=NewVolume;
	OnMusicPlayerWantsVolumeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnMusicPlayerWillQuitDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMusicPlayerWillQuitDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMusicPlayerWillQuitDelegate)
{
	OnMusicPlayerWillQuitDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UISteamMusicRemote::execUpdateVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateVolume(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execUpdateShuffled)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateShuffled(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execUpdatePlaybackStatus)
	{
		P_GET_ENUM(ESteamAudioPlaybackStatus,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdatePlaybackStatus(ESteamAudioPlaybackStatus(Z_Param_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execUpdateLooped)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateLooped(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execUpdateCurrentEntryText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateCurrentEntryText(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execUpdateCurrentEntryElapsedSeconds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateCurrentEntryElapsedSeconds(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execSetQueueEntry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Position);
		P_GET_PROPERTY(FStrProperty,Z_Param_EntryText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetQueueEntry(Z_Param_ID,Z_Param_Position,Z_Param_EntryText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execSetPlaylistEntry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Position);
		P_GET_PROPERTY(FStrProperty,Z_Param_EntryText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPlaylistEntry(Z_Param_ID,Z_Param_Position,Z_Param_EntryText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execSetDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDisplayName(Z_Param_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execSetCurrentQueueEntry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentQueueEntry(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execSetCurrentPlaylistEntry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentPlaylistEntry(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execResetQueueEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetQueueEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execResetPlaylistEntries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetPlaylistEntries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execRegisterSteamMusicRemote)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterSteamMusicRemote(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execQueueWillChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueueWillChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execQueueDidChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueueDidChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execPlaylistWillChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlaylistWillChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execPlaylistDidChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlaylistDidChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execEnableShuffled)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableShuffled(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execEnableQueue)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableQueue(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execEnablePlayPrevious)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnablePlayPrevious(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execEnablePlayNext)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnablePlayNext(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execEnablePlaylists)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnablePlaylists(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execEnableLooped)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableLooped(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execDeregisterSteamMusicRemote)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeregisterSteamMusicRemote();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execCurrentEntryWillChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CurrentEntryWillChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execCurrentEntryIsAvailable)
	{
		P_GET_UBOOL(Z_Param_bAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CurrentEntryIsAvailable(Z_Param_bAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execBIsCurrentMusicRemote)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsCurrentMusicRemote();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execBActivationSuccess)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BActivationSuccess(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusicRemote::execGetSteamMusicRemote)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamMusicRemote**)Z_Param__Result=UISteamMusicRemote::GetSteamMusicRemote();
		P_NATIVE_END;
	}
	void UISteamMusicRemote::StaticRegisterNativesUISteamMusicRemote()
	{
		UClass* Class = UISteamMusicRemote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BActivationSuccess", &UISteamMusicRemote::execBActivationSuccess },
			{ "BIsCurrentMusicRemote", &UISteamMusicRemote::execBIsCurrentMusicRemote },
			{ "CurrentEntryIsAvailable", &UISteamMusicRemote::execCurrentEntryIsAvailable },
			{ "CurrentEntryWillChange", &UISteamMusicRemote::execCurrentEntryWillChange },
			{ "DeregisterSteamMusicRemote", &UISteamMusicRemote::execDeregisterSteamMusicRemote },
			{ "EnableLooped", &UISteamMusicRemote::execEnableLooped },
			{ "EnablePlaylists", &UISteamMusicRemote::execEnablePlaylists },
			{ "EnablePlayNext", &UISteamMusicRemote::execEnablePlayNext },
			{ "EnablePlayPrevious", &UISteamMusicRemote::execEnablePlayPrevious },
			{ "EnableQueue", &UISteamMusicRemote::execEnableQueue },
			{ "EnableShuffled", &UISteamMusicRemote::execEnableShuffled },
			{ "GetSteamMusicRemote", &UISteamMusicRemote::execGetSteamMusicRemote },
			{ "PlaylistDidChange", &UISteamMusicRemote::execPlaylistDidChange },
			{ "PlaylistWillChange", &UISteamMusicRemote::execPlaylistWillChange },
			{ "QueueDidChange", &UISteamMusicRemote::execQueueDidChange },
			{ "QueueWillChange", &UISteamMusicRemote::execQueueWillChange },
			{ "RegisterSteamMusicRemote", &UISteamMusicRemote::execRegisterSteamMusicRemote },
			{ "ResetPlaylistEntries", &UISteamMusicRemote::execResetPlaylistEntries },
			{ "ResetQueueEntries", &UISteamMusicRemote::execResetQueueEntries },
			{ "SetCurrentPlaylistEntry", &UISteamMusicRemote::execSetCurrentPlaylistEntry },
			{ "SetCurrentQueueEntry", &UISteamMusicRemote::execSetCurrentQueueEntry },
			{ "SetDisplayName", &UISteamMusicRemote::execSetDisplayName },
			{ "SetPlaylistEntry", &UISteamMusicRemote::execSetPlaylistEntry },
			{ "SetQueueEntry", &UISteamMusicRemote::execSetQueueEntry },
			{ "UpdateCurrentEntryElapsedSeconds", &UISteamMusicRemote::execUpdateCurrentEntryElapsedSeconds },
			{ "UpdateCurrentEntryText", &UISteamMusicRemote::execUpdateCurrentEntryText },
			{ "UpdateLooped", &UISteamMusicRemote::execUpdateLooped },
			{ "UpdatePlaybackStatus", &UISteamMusicRemote::execUpdatePlaybackStatus },
			{ "UpdateShuffled", &UISteamMusicRemote::execUpdateShuffled },
			{ "UpdateVolume", &UISteamMusicRemote::execUpdateVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics
	{
		struct ISteamMusicRemote_eventBActivationSuccess_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventBActivationSuccess_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventBActivationSuccess_Parms), &Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventBActivationSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventBActivationSuccess_Parms), &Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "BActivationSuccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::ISteamMusicRemote_eventBActivationSuccess_Parms), Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics
	{
		struct ISteamMusicRemote_eventBIsCurrentMusicRemote_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventBIsCurrentMusicRemote_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventBIsCurrentMusicRemote_Parms), &Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "BIsCurrentMusicRemote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::ISteamMusicRemote_eventBIsCurrentMusicRemote_Parms), Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics
	{
		struct ISteamMusicRemote_eventCurrentEntryIsAvailable_Parms
		{
			bool bAvailable;
			bool ReturnValue;
		};
		static void NewProp_bAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_bAvailable_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventCurrentEntryIsAvailable_Parms*)Obj)->bAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventCurrentEntryIsAvailable_Parms), &Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventCurrentEntryIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventCurrentEntryIsAvailable_Parms), &Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_bAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "CurrentEntryIsAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::ISteamMusicRemote_eventCurrentEntryIsAvailable_Parms), Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics
	{
		struct ISteamMusicRemote_eventCurrentEntryWillChange_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventCurrentEntryWillChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventCurrentEntryWillChange_Parms), &Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "CurrentEntryWillChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::ISteamMusicRemote_eventCurrentEntryWillChange_Parms), Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics
	{
		struct ISteamMusicRemote_eventDeregisterSteamMusicRemote_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventDeregisterSteamMusicRemote_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventDeregisterSteamMusicRemote_Parms), &Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "DeregisterSteamMusicRemote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::ISteamMusicRemote_eventDeregisterSteamMusicRemote_Parms), Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics
	{
		struct ISteamMusicRemote_eventEnableLooped_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnableLooped_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnableLooped_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnableLooped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnableLooped_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "EnableLooped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::ISteamMusicRemote_eventEnableLooped_Parms), Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_EnableLooped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_EnableLooped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics
	{
		struct ISteamMusicRemote_eventEnablePlaylists_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnablePlaylists_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnablePlaylists_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnablePlaylists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnablePlaylists_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "EnablePlaylists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::ISteamMusicRemote_eventEnablePlaylists_Parms), Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics
	{
		struct ISteamMusicRemote_eventEnablePlayNext_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnablePlayNext_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnablePlayNext_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnablePlayNext_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnablePlayNext_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "EnablePlayNext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::ISteamMusicRemote_eventEnablePlayNext_Parms), Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics
	{
		struct ISteamMusicRemote_eventEnablePlayPrevious_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnablePlayPrevious_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnablePlayPrevious_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnablePlayPrevious_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnablePlayPrevious_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "EnablePlayPrevious", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::ISteamMusicRemote_eventEnablePlayPrevious_Parms), Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics
	{
		struct ISteamMusicRemote_eventEnableQueue_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnableQueue_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnableQueue_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnableQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnableQueue_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "EnableQueue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::ISteamMusicRemote_eventEnableQueue_Parms), Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_EnableQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_EnableQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics
	{
		struct ISteamMusicRemote_eventEnableShuffled_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnableShuffled_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnableShuffled_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventEnableShuffled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventEnableShuffled_Parms), &Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "EnableShuffled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::ISteamMusicRemote_eventEnableShuffled_Parms), Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics
	{
		struct ISteamMusicRemote_eventGetSteamMusicRemote_Parms
		{
			UISteamMusicRemote* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventGetSteamMusicRemote_Parms, ReturnValue), Z_Construct_UClass_UISteamMusicRemote_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamMusicRemote" },
		{ "DisplayName", "Steam Music Remote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "GetSteamMusicRemote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::ISteamMusicRemote_eventGetSteamMusicRemote_Parms), Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics
	{
		struct ISteamMusicRemote_eventPlaylistDidChange_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventPlaylistDidChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventPlaylistDidChange_Parms), &Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "PlaylistDidChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::ISteamMusicRemote_eventPlaylistDidChange_Parms), Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics
	{
		struct ISteamMusicRemote_eventPlaylistWillChange_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventPlaylistWillChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventPlaylistWillChange_Parms), &Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "PlaylistWillChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::ISteamMusicRemote_eventPlaylistWillChange_Parms), Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics
	{
		struct ISteamMusicRemote_eventQueueDidChange_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventQueueDidChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventQueueDidChange_Parms), &Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "QueueDidChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::ISteamMusicRemote_eventQueueDidChange_Parms), Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics
	{
		struct ISteamMusicRemote_eventQueueWillChange_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventQueueWillChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventQueueWillChange_Parms), &Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "QueueWillChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::ISteamMusicRemote_eventQueueWillChange_Parms), Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics
	{
		struct ISteamMusicRemote_eventRegisterSteamMusicRemote_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventRegisterSteamMusicRemote_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventRegisterSteamMusicRemote_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventRegisterSteamMusicRemote_Parms), &Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "RegisterSteamMusicRemote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::ISteamMusicRemote_eventRegisterSteamMusicRemote_Parms), Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics
	{
		struct ISteamMusicRemote_eventResetPlaylistEntries_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventResetPlaylistEntries_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventResetPlaylistEntries_Parms), &Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "ResetPlaylistEntries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::ISteamMusicRemote_eventResetPlaylistEntries_Parms), Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics
	{
		struct ISteamMusicRemote_eventResetQueueEntries_Parms
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
	void Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventResetQueueEntries_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventResetQueueEntries_Parms), &Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "ResetQueueEntries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::ISteamMusicRemote_eventResetQueueEntries_Parms), Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics
	{
		struct ISteamMusicRemote_eventSetCurrentPlaylistEntry_Parms
		{
			int32 ID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetCurrentPlaylistEntry_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventSetCurrentPlaylistEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventSetCurrentPlaylistEntry_Parms), &Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "SetCurrentPlaylistEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::ISteamMusicRemote_eventSetCurrentPlaylistEntry_Parms), Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics
	{
		struct ISteamMusicRemote_eventSetCurrentQueueEntry_Parms
		{
			int32 ID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetCurrentQueueEntry_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventSetCurrentQueueEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventSetCurrentQueueEntry_Parms), &Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "SetCurrentQueueEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::ISteamMusicRemote_eventSetCurrentQueueEntry_Parms), Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics
	{
		struct ISteamMusicRemote_eventSetDisplayName_Parms
		{
			FString DisplayName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetDisplayName_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_DisplayName_MetaData)) };
	void Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventSetDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventSetDisplayName_Parms), &Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "SetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::ISteamMusicRemote_eventSetDisplayName_Parms), Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics
	{
		struct ISteamMusicRemote_eventSetPlaylistEntry_Parms
		{
			int32 ID;
			int32 Position;
			FString EntryText;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntryText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetPlaylistEntry_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetPlaylistEntry_Parms, Position), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_EntryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_EntryText = { "EntryText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetPlaylistEntry_Parms, EntryText), METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_EntryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_EntryText_MetaData)) };
	void Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventSetPlaylistEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventSetPlaylistEntry_Parms), &Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_EntryText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "SetPlaylistEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::ISteamMusicRemote_eventSetPlaylistEntry_Parms), Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics
	{
		struct ISteamMusicRemote_eventSetQueueEntry_Parms
		{
			int32 ID;
			int32 Position;
			FString EntryText;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntryText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetQueueEntry_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetQueueEntry_Parms, Position), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_EntryText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_EntryText = { "EntryText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventSetQueueEntry_Parms, EntryText), METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_EntryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_EntryText_MetaData)) };
	void Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventSetQueueEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventSetQueueEntry_Parms), &Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_EntryText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "Comment", "// #TODO: SetPNGIcon_64x64\n" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
		{ "ToolTip", "#TODO: SetPNGIcon_64x64" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "SetQueueEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::ISteamMusicRemote_eventSetQueueEntry_Parms), Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics
	{
		struct ISteamMusicRemote_eventUpdateCurrentEntryElapsedSeconds_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventUpdateCurrentEntryElapsedSeconds_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateCurrentEntryElapsedSeconds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateCurrentEntryElapsedSeconds_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "Comment", "// #TODO: UpdateCurrentEntryCoverArt\n" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
		{ "ToolTip", "#TODO: UpdateCurrentEntryCoverArt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "UpdateCurrentEntryElapsedSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::ISteamMusicRemote_eventUpdateCurrentEntryElapsedSeconds_Parms), Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics
	{
		struct ISteamMusicRemote_eventUpdateCurrentEntryText_Parms
		{
			FString Text;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventUpdateCurrentEntryText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateCurrentEntryText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateCurrentEntryText_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "UpdateCurrentEntryText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::ISteamMusicRemote_eventUpdateCurrentEntryText_Parms), Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics
	{
		struct ISteamMusicRemote_eventUpdateLooped_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateLooped_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateLooped_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateLooped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateLooped_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "UpdateLooped", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::ISteamMusicRemote_eventUpdateLooped_Parms), Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics
	{
		struct ISteamMusicRemote_eventUpdatePlaybackStatus_Parms
		{
			ESteamAudioPlaybackStatus Status;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventUpdatePlaybackStatus_Parms, Status), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAudioPlaybackStatus, METADATA_PARAMS(nullptr, 0) }; // 3155429033
	void Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdatePlaybackStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdatePlaybackStatus_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "UpdatePlaybackStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::ISteamMusicRemote_eventUpdatePlaybackStatus_Parms), Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics
	{
		struct ISteamMusicRemote_eventUpdateShuffled_Parms
		{
			bool bValue;
			bool ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateShuffled_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateShuffled_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateShuffled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateShuffled_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "UpdateShuffled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::ISteamMusicRemote_eventUpdateShuffled_Parms), Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics
	{
		struct ISteamMusicRemote_eventUpdateVolume_Parms
		{
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusicRemote_eventUpdateVolume_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusicRemote_eventUpdateVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusicRemote_eventUpdateVolume_Parms), &Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusicRemote, nullptr, "UpdateVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::ISteamMusicRemote_eventUpdateVolume_Parms), Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMusicRemote);
	UClass* Z_Construct_UClass_UISteamMusicRemote_NoRegister()
	{
		return UISteamMusicRemote::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMusicRemote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerRemoteToFront_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerRemoteToFront;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerRemoteWillActivate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerRemoteWillActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerRemoteWillDeactivate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerRemoteWillDeactivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerSelectsPlaylistEntry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerSelectsPlaylistEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerSelectsQueueEntry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerSelectsQueueEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsLooped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsLooped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsPause_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsPause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsPlayNext_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsPlayNext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsPlayPrevious_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsPlayPrevious;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsPlay_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsShuffled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsShuffled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWantsVolume_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWantsVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnMusicPlayerWillQuit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnMusicPlayerWillQuit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMusicRemote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamMusicRemote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamMusicRemote_BActivationSuccess, "BActivationSuccess" }, // 3108163558
		{ &Z_Construct_UFunction_UISteamMusicRemote_BIsCurrentMusicRemote, "BIsCurrentMusicRemote" }, // 2656004254
		{ &Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryIsAvailable, "CurrentEntryIsAvailable" }, // 2887469732
		{ &Z_Construct_UFunction_UISteamMusicRemote_CurrentEntryWillChange, "CurrentEntryWillChange" }, // 1093991967
		{ &Z_Construct_UFunction_UISteamMusicRemote_DeregisterSteamMusicRemote, "DeregisterSteamMusicRemote" }, // 25022397
		{ &Z_Construct_UFunction_UISteamMusicRemote_EnableLooped, "EnableLooped" }, // 1967660604
		{ &Z_Construct_UFunction_UISteamMusicRemote_EnablePlaylists, "EnablePlaylists" }, // 3997127445
		{ &Z_Construct_UFunction_UISteamMusicRemote_EnablePlayNext, "EnablePlayNext" }, // 2737304947
		{ &Z_Construct_UFunction_UISteamMusicRemote_EnablePlayPrevious, "EnablePlayPrevious" }, // 395943999
		{ &Z_Construct_UFunction_UISteamMusicRemote_EnableQueue, "EnableQueue" }, // 2757939964
		{ &Z_Construct_UFunction_UISteamMusicRemote_EnableShuffled, "EnableShuffled" }, // 3713152919
		{ &Z_Construct_UFunction_UISteamMusicRemote_GetSteamMusicRemote, "GetSteamMusicRemote" }, // 3213447286
		{ &Z_Construct_UFunction_UISteamMusicRemote_PlaylistDidChange, "PlaylistDidChange" }, // 2747769613
		{ &Z_Construct_UFunction_UISteamMusicRemote_PlaylistWillChange, "PlaylistWillChange" }, // 829401821
		{ &Z_Construct_UFunction_UISteamMusicRemote_QueueDidChange, "QueueDidChange" }, // 172610435
		{ &Z_Construct_UFunction_UISteamMusicRemote_QueueWillChange, "QueueWillChange" }, // 3453189594
		{ &Z_Construct_UFunction_UISteamMusicRemote_RegisterSteamMusicRemote, "RegisterSteamMusicRemote" }, // 1773349695
		{ &Z_Construct_UFunction_UISteamMusicRemote_ResetPlaylistEntries, "ResetPlaylistEntries" }, // 3439530562
		{ &Z_Construct_UFunction_UISteamMusicRemote_ResetQueueEntries, "ResetQueueEntries" }, // 3730950517
		{ &Z_Construct_UFunction_UISteamMusicRemote_SetCurrentPlaylistEntry, "SetCurrentPlaylistEntry" }, // 524489519
		{ &Z_Construct_UFunction_UISteamMusicRemote_SetCurrentQueueEntry, "SetCurrentQueueEntry" }, // 574001854
		{ &Z_Construct_UFunction_UISteamMusicRemote_SetDisplayName, "SetDisplayName" }, // 554083482
		{ &Z_Construct_UFunction_UISteamMusicRemote_SetPlaylistEntry, "SetPlaylistEntry" }, // 2853335580
		{ &Z_Construct_UFunction_UISteamMusicRemote_SetQueueEntry, "SetQueueEntry" }, // 2456928078
		{ &Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryElapsedSeconds, "UpdateCurrentEntryElapsedSeconds" }, // 2934362726
		{ &Z_Construct_UFunction_UISteamMusicRemote_UpdateCurrentEntryText, "UpdateCurrentEntryText" }, // 1940873332
		{ &Z_Construct_UFunction_UISteamMusicRemote_UpdateLooped, "UpdateLooped" }, // 4066237879
		{ &Z_Construct_UFunction_UISteamMusicRemote_UpdatePlaybackStatus, "UpdatePlaybackStatus" }, // 2441952661
		{ &Z_Construct_UFunction_UISteamMusicRemote_UpdateShuffled, "UpdateShuffled" }, // 399815171
		{ &Z_Construct_UFunction_UISteamMusicRemote_UpdateVolume, "UpdateVolume" }, // 2997607675
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamMusicRemote.h" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteToFront_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "Comment", "/** Delegates */" },
		{ "DisplayName", "OnMusicPlayerRemoteToFront" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteToFront = { "m_OnMusicPlayerRemoteToFront", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerRemoteToFront), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteToFrontDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteToFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteToFront_MetaData)) }; // 2559651675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillActivate_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerRemoteWillActivate" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillActivate = { "m_OnMusicPlayerRemoteWillActivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerRemoteWillActivate), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillActivateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillActivate_MetaData)) }; // 3087898460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillDeactivate_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerRemoteWillDeactivate" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillDeactivate = { "m_OnMusicPlayerRemoteWillDeactivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerRemoteWillDeactivate), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerRemoteWillDeactivateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillDeactivate_MetaData)) }; // 329889247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsPlaylistEntry_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerSelectsPlaylistEntry" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsPlaylistEntry = { "m_OnMusicPlayerSelectsPlaylistEntry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerSelectsPlaylistEntry), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsPlaylistEntryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsPlaylistEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsPlaylistEntry_MetaData)) }; // 2403801271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsQueueEntry_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerSelectsQueueEntry" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsQueueEntry = { "m_OnMusicPlayerSelectsQueueEntry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerSelectsQueueEntry), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerSelectsQueueEntryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsQueueEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsQueueEntry_MetaData)) }; // 2133175146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsLooped_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsLooped" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsLooped = { "m_OnMusicPlayerWantsLooped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsLooped), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsLoopedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsLooped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsLooped_MetaData)) }; // 1393881713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPause_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsPause" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPause = { "m_OnMusicPlayerWantsPause", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsPause), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPauseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPause_MetaData)) }; // 253720132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsPlayingRepeatStatus" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus = { "m_OnMusicPlayerWantsPlayingRepeatStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsPlayingRepeatStatus), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayingRepeatStatusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus_MetaData)) }; // 1136200310
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayNext_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsPlayNext" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayNext = { "m_OnMusicPlayerWantsPlayNext", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsPlayNext), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayNextDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayNext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayNext_MetaData)) }; // 4056743455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayPrevious_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsPlayPrevious" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayPrevious = { "m_OnMusicPlayerWantsPlayPrevious", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsPlayPrevious), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayPreviousDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayPrevious_MetaData)) }; // 4170844767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlay_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsPlay" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlay = { "m_OnMusicPlayerWantsPlay", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsPlay), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsPlayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlay_MetaData)) }; // 3166441126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsShuffled_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsShuffled" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsShuffled = { "m_OnMusicPlayerWantsShuffled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsShuffled), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsShuffledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsShuffled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsShuffled_MetaData)) }; // 2026404040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsVolume_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWantsVolume" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsVolume = { "m_OnMusicPlayerWantsVolume", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWantsVolume), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWantsVolumeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsVolume_MetaData)) }; // 1011218721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWillQuit_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusicRemote" },
		{ "DisplayName", "OnMusicPlayerWillQuit" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWillQuit = { "m_OnMusicPlayerWillQuit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusicRemote, m_OnMusicPlayerWillQuit), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnMusicPlayerWillQuitDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWillQuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWillQuit_MetaData)) }; // 1931041585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamMusicRemote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteToFront,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerRemoteWillDeactivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsPlaylistEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerSelectsQueueEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsLooped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayingRepeatStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayNext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlayPrevious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsShuffled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWantsVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusicRemote_Statics::NewProp_m_OnMusicPlayerWillQuit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMusicRemote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMusicRemote>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMusicRemote_Statics::ClassParams = {
		&UISteamMusicRemote::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamMusicRemote_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMusicRemote()
	{
		if (!Z_Registration_Info_UClass_UISteamMusicRemote.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMusicRemote.OuterSingleton, Z_Construct_UClass_UISteamMusicRemote_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMusicRemote.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMusicRemote>()
	{
		return UISteamMusicRemote::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMusicRemote);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMusicRemote, UISteamMusicRemote::StaticClass, TEXT("UISteamMusicRemote"), &Z_Registration_Info_UClass_UISteamMusicRemote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMusicRemote), 1118070838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_935367562(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
