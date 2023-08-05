// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMusic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMusic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusic();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusic_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAudioPlaybackStatus();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnPlaybackStatusHasChangedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlaybackStatusHasChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChangedDelegate)
{
	OnPlaybackStatusHasChangedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnVolumeHasChangedDelegate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnVolumeHasChangedDelegate_Parms, NewVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnVolumeHasChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnVolumeHasChangedDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnVolumeHasChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChangedDelegate, float NewVolume)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnVolumeHasChangedDelegate_Parms
	{
		float NewVolume;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnVolumeHasChangedDelegate_Parms Parms;
	Parms.NewVolume=NewVolume;
	OnVolumeHasChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamMusic::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execPlayPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayPrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execPlayNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execGetPlaybackStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAudioPlaybackStatus*)Z_Param__Result=P_THIS->GetPlaybackStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execBIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execBIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMusic::execGetSteamMusic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamMusic**)Z_Param__Result=UISteamMusic::GetSteamMusic();
		P_NATIVE_END;
	}
	void UISteamMusic::StaticRegisterNativesUISteamMusic()
	{
		UClass* Class = UISteamMusic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BIsEnabled", &UISteamMusic::execBIsEnabled },
			{ "BIsPlaying", &UISteamMusic::execBIsPlaying },
			{ "GetPlaybackStatus", &UISteamMusic::execGetPlaybackStatus },
			{ "GetSteamMusic", &UISteamMusic::execGetSteamMusic },
			{ "GetVolume", &UISteamMusic::execGetVolume },
			{ "Pause", &UISteamMusic::execPause },
			{ "Play", &UISteamMusic::execPlay },
			{ "PlayNext", &UISteamMusic::execPlayNext },
			{ "PlayPrevious", &UISteamMusic::execPlayPrevious },
			{ "SetVolume", &UISteamMusic::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics
	{
		struct ISteamMusic_eventBIsEnabled_Parms
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
	void Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusic_eventBIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusic_eventBIsEnabled_Parms), &Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Checks if Steam Music is enabled.\n\x09 *\n\x09 * @return bool - true if it is enabled; otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is enabled.\n\n@return bool - true if it is enabled; otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "BIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::ISteamMusic_eventBIsEnabled_Parms), Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_BIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_BIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics
	{
		struct ISteamMusic_eventBIsPlaying_Parms
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
	void Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMusic_eventBIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMusic_eventBIsPlaying_Parms), &Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\n\x09 * For finer grain control use GetPlaybackStatus.\n\x09 *\n\x09 * @return bool - true if a song is currently playing, paused, or queued up to play; otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\nFor finer grain control use GetPlaybackStatus.\n\n@return bool - true if a song is currently playing, paused, or queued up to play; otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "BIsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::ISteamMusic_eventBIsPlaying_Parms), Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_BIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_BIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics
	{
		struct ISteamMusic_eventGetPlaybackStatus_Parms
		{
			ESteamAudioPlaybackStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusic_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamAudioPlaybackStatus, METADATA_PARAMS(nullptr, 0) }; // 3155429033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Gets the current status of the Steam Music player.\n\x09 *\n\x09 * @return ESteamAudioPlaybackStatus\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Gets the current status of the Steam Music player.\n\n@return ESteamAudioPlaybackStatus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "GetPlaybackStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::ISteamMusic_eventGetPlaybackStatus_Parms), Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics
	{
		struct ISteamMusic_eventGetSteamMusic_Parms
		{
			UISteamMusic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusic_eventGetSteamMusic_Parms, ReturnValue), Z_Construct_UClass_UISteamMusic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamMusic" },
		{ "DisplayName", "Steam Music" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "GetSteamMusic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::ISteamMusic_eventGetSteamMusic_Parms), Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_GetSteamMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_GetSteamMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_GetVolume_Statics
	{
		struct ISteamMusic_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusic_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Gets the current volume of the Steam Music player.\n\x09 *\n\x09 * @return float - The volume is returned as a percentage between 0.0 and 1.0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Gets the current volume of the Steam Music player.\n\n@return float - The volume is returned as a percentage between 0.0 and 1.0." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "GetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::ISteamMusic_eventGetVolume_Parms), Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Pause the Steam Music player.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Pause the Steam Music player.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Have the Steam Music player resume playing.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player resume playing.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_PlayNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_PlayNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Have the Steam Music player skip to the next song.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player skip to the next song.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_PlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "PlayNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_PlayNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_PlayNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_PlayNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_PlayNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_PlayPrevious_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_PlayPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Have the Steam Music player play the previous song.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Have the Steam Music player play the previous song.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_PlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "PlayPrevious", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_PlayPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_PlayPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_PlayPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_PlayPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMusic_SetVolume_Statics
	{
		struct ISteamMusic_eventSetVolume_Parms
		{
			float Volume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMusic_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/**\n\x09 * Sets the volume of the Steam Music player.\n\x09 *\n\x09 * @param float Volume - The volume percentage to set from 0.0 to 1.0.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Sets the volume of the Steam Music player.\n\n@param float Volume - The volume percentage to set from 0.0 to 1.0.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMusic, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::ISteamMusic_eventSetVolume_Parms), Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMusic_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMusic_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMusic);
	UClass* Z_Construct_UClass_UISteamMusic_NoRegister()
	{
		return UISteamMusic::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMusic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnPlaybackStatusHasChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnPlaybackStatusHasChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnVolumeHasChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnVolumeHasChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMusic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamMusic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamMusic_BIsEnabled, "BIsEnabled" }, // 2561650900
		{ &Z_Construct_UFunction_UISteamMusic_BIsPlaying, "BIsPlaying" }, // 2114838579
		{ &Z_Construct_UFunction_UISteamMusic_GetPlaybackStatus, "GetPlaybackStatus" }, // 2316715423
		{ &Z_Construct_UFunction_UISteamMusic_GetSteamMusic, "GetSteamMusic" }, // 1781789638
		{ &Z_Construct_UFunction_UISteamMusic_GetVolume, "GetVolume" }, // 3493022108
		{ &Z_Construct_UFunction_UISteamMusic_Pause, "Pause" }, // 1057604010
		{ &Z_Construct_UFunction_UISteamMusic_Play, "Play" }, // 2695555700
		{ &Z_Construct_UFunction_UISteamMusic_PlayNext, "PlayNext" }, // 2220489814
		{ &Z_Construct_UFunction_UISteamMusic_PlayPrevious, "PlayPrevious" }, // 920198044
		{ &Z_Construct_UFunction_UISteamMusic_SetVolume, "SetVolume" }, // 699663712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions to control music playback in the steam client.\n" },
		{ "IncludePath", "UISteamMusic.h" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Functions to control music playback in the steam client." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnPlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "Comment", "/** Delegates */" },
		{ "DisplayName", "OnPlaybackStatusHasChanged" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnPlaybackStatusHasChanged = { "m_OnPlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusic, m_OnPlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnPlaybackStatusHasChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnPlaybackStatusHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnPlaybackStatusHasChanged_MetaData)) }; // 2047532871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnVolumeHasChanged_MetaData[] = {
		{ "Category", "SteamAPI|UISteamMusic" },
		{ "DisplayName", "OnVolumeHasChanged" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnVolumeHasChanged = { "m_OnVolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamMusic, m_OnVolumeHasChanged), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnVolumeHasChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnVolumeHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnVolumeHasChanged_MetaData)) }; // 180071165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamMusic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnPlaybackStatusHasChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamMusic_Statics::NewProp_m_OnVolumeHasChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMusic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMusic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMusic_Statics::ClassParams = {
		&UISteamMusic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamMusic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusic_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamMusic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMusic()
	{
		if (!Z_Registration_Info_UClass_UISteamMusic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMusic.OuterSingleton, Z_Construct_UClass_UISteamMusic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMusic.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMusic>()
	{
		return UISteamMusic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMusic);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMusic, UISteamMusic::StaticClass, TEXT("UISteamMusic"), &Z_Registration_Info_UClass_UISteamMusic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMusic), 8346612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_141603906(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
