// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUser.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUser() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUser();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUser_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
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
	DEFINE_FUNCTION(UISteamUser::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamUser::BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetHSteamUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamUser::GetHSteamUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execDecompressVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedData);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamEVoiceResult*)Z_Param__Result=UISteamUser::DecompressVoice(Z_Param_Out_CompressedData,Z_Param_Out_DestBuffer,Z_Param_DesiredSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execGetVoiceOptimalSampleRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamUser::GetVoiceOptimalSampleRate();
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
	DEFINE_FUNCTION(UISteamUser::execStopVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamUser::StopVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUser::execStartVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamUser::StartVoiceRecording();
		P_NATIVE_END;
	}
	void UISteamUser::StaticRegisterNativesUISteamUser()
	{
		UClass* Class = UISteamUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BLoggedOn", &UISteamUser::execBLoggedOn },
			{ "DecompressVoice", &UISteamUser::execDecompressVoice },
			{ "GetHSteamUser", &UISteamUser::execGetHSteamUser },
			{ "GetVoiceOptimalSampleRate", &UISteamUser::execGetVoiceOptimalSampleRate },
			{ "InitiateGameConnection", &UISteamUser::execInitiateGameConnection },
			{ "SetInGameVoiceSpeaking", &UISteamUser::execSetInGameVoiceSpeaking },
			{ "StartVoiceRecording", &UISteamUser::execStartVoiceRecording },
			{ "StopVoiceRecording", &UISteamUser::execStopVoiceRecording },
			{ "TerminateGameConnection_DEPRECATED", &UISteamUser::execTerminateGameConnection_DEPRECATED },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "DisplayName", "Steam BLoggedOn" },
		{ "Keywords", "Steam ISteamUser BLoggedOn" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::ISteamUser_eventBLoggedOn_Parms), Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics
	{
		struct ISteamUser_eventDecompressVoice_Parms
		{
			TArray<uint8> CompressedData;
			TArray<uint8> DestBuffer;
			int32 DesiredSampleRate;
			FSteamEVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData_Inner = { "CompressedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData = { "CompressedData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, CompressedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, DesiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_FSteamEVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 1679007127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_CompressedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_DestBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_DesiredSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "DisplayName", "Steam DecompressVoice" },
		{ "Keywords", "Steam ISteamUser DecompressVoice" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "DecompressVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::ISteamUser_eventDecompressVoice_Parms), Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_DecompressVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_DecompressVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics
	{
		struct ISteamUser_eventGetHSteamUser_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamUser_eventGetHSteamUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamUser" },
		{ "DisplayName", "Steam GetHSteamUser" },
		{ "Keywords", "Steam ISteamUser GetHSteamUser" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetHSteamUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::ISteamUser_eventGetHSteamUser_Parms), Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamUser_GetHSteamUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamUser_GetHSteamUser_Statics::FuncParams);
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
		{ "DisplayName", "Steam GetVoiceOptimalSampleRate" },
		{ "Keywords", "Steam ISteamUser GetVoiceOptimalSampleRate" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::ISteamUser_eventGetVoiceOptimalSampleRate_Parms), Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams)) };
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
		{ "DisplayName", "Steam SetInGameVoiceSpeaking" },
		{ "Keywords", "Steam ISteamUser SetInGameVoiceSpeaking" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
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
		{ "DisplayName", "Steam StartVoiceRecording" },
		{ "Keywords", "Steam ISteamUser StartVoiceRecording" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "StartVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_StartVoiceRecording_Statics::Function_MetaDataParams)) };
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
		{ "DisplayName", "Steam StopVoiceRecording" },
		{ "Keywords", "Steam ISteamUser StopVoiceRecording" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamUser, nullptr, "StopVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamUser_StopVoiceRecording_Statics::Function_MetaDataParams)) };
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamUser_BLoggedOn, "BLoggedOn" }, // 1018958407
		{ &Z_Construct_UFunction_UISteamUser_DecompressVoice, "DecompressVoice" }, // 3753124909
		{ &Z_Construct_UFunction_UISteamUser_GetHSteamUser, "GetHSteamUser" }, // 3065268130
		{ &Z_Construct_UFunction_UISteamUser_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 424504177
		{ &Z_Construct_UFunction_UISteamUser_InitiateGameConnection, "InitiateGameConnection" }, // 581694134
		{ &Z_Construct_UFunction_UISteamUser_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 2795106348
		{ &Z_Construct_UFunction_UISteamUser_StartVoiceRecording, "StartVoiceRecording" }, // 4101344547
		{ &Z_Construct_UFunction_UISteamUser_StopVoiceRecording, "StopVoiceRecording" }, // 2830930643
		{ &Z_Construct_UFunction_UISteamUser_TerminateGameConnection_DEPRECATED, "TerminateGameConnection_DEPRECATED" }, // 490294964
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions for accessing and manipulating Steam user information.\n" },
		{ "IncludePath", "UISteamUser.h" },
		{ "ModuleRelativePath", "Public/UISteamUser.h" },
		{ "ToolTip", "Functions for accessing and manipulating Steam user information." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUser_Statics::ClassParams = {
		&UISteamUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
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
	UISteamUser::~UISteamUser() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUser, UISteamUser::StaticClass, TEXT("UISteamUser"), &Z_Registration_Info_UClass_UISteamUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUser), 1800514074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_2433991661(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
