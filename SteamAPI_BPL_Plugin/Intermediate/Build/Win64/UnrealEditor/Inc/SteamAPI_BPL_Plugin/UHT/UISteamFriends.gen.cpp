// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamFriends.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamFriends() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamFriends();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamFriends_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamFriends::execGetPersonaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamFriends::GetPersonaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execSetRichPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pchKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_pchValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamFriends::SetRichPresence(Z_Param_pchKey,Z_Param_pchValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execGetClanCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamFriends::GetClanCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execGetFriendPersonaName)
	{
		P_GET_STRUCT(FSteamPlayerInfo,Z_Param_aPlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UISteamFriends::GetFriendPersonaName(Z_Param_aPlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execGetFriendPersonaState)
	{
		P_GET_STRUCT(FSteamPlayerInfo,Z_Param_aPlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UISteamFriends::GetFriendPersonaState(Z_Param_aPlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execGetFriendRelationship)
	{
		P_GET_STRUCT(FSteamPlayerInfo,Z_Param_aPlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamFriendRelationship*)Z_Param__Result=UISteamFriends::GetFriendRelationship(Z_Param_aPlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execGetFriendByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_iFriendFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamPlayerInfo*)Z_Param__Result=UISteamFriends::GetFriendByIndex(Z_Param_iFriend,Z_Param_iFriendFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execGetFriendCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iFriendFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamFriends::GetFriendCount(Z_Param_iFriendFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execActivateGameOverlayToUser)
	{
		P_GET_ENUM(ESteamUserOverlayType,Z_Param_DialogType);
		P_GET_STRUCT(FSteamPlayerInfo,Z_Param_aPlayerInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamFriends::ActivateGameOverlayToUser(ESteamUserOverlayType(Z_Param_DialogType),Z_Param_aPlayerInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamFriends::execActivateGameOverlay)
	{
		P_GET_ENUM(ESteamUserOverlayType,Z_Param_DialogType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamFriends::ActivateGameOverlay(ESteamUserOverlayType(Z_Param_DialogType));
		P_NATIVE_END;
	}
	void UISteamFriends::StaticRegisterNativesUISteamFriends()
	{
		UClass* Class = UISteamFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGameOverlay", &UISteamFriends::execActivateGameOverlay },
			{ "ActivateGameOverlayToUser", &UISteamFriends::execActivateGameOverlayToUser },
			{ "GetClanCount", &UISteamFriends::execGetClanCount },
			{ "GetFriendByIndex", &UISteamFriends::execGetFriendByIndex },
			{ "GetFriendCount", &UISteamFriends::execGetFriendCount },
			{ "GetFriendPersonaName", &UISteamFriends::execGetFriendPersonaName },
			{ "GetFriendPersonaState", &UISteamFriends::execGetFriendPersonaState },
			{ "GetFriendRelationship", &UISteamFriends::execGetFriendRelationship },
			{ "GetPersonaName", &UISteamFriends::execGetPersonaName },
			{ "SetRichPresence", &UISteamFriends::execSetRichPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics
	{
		struct ISteamFriends_eventActivateGameOverlay_Parms
		{
			ESteamUserOverlayType DialogType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DialogType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::NewProp_DialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventActivateGameOverlay_Parms, DialogType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType, METADATA_PARAMS(nullptr, 0) }; // 2377987520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::NewProp_DialogType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::NewProp_DialogType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam ActivateGameOverlay" },
		{ "Keywords", "Steam ISteamFriends ActivateGameOverlay" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "ActivateGameOverlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::ISteamFriends_eventActivateGameOverlay_Parms), Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics
	{
		struct ISteamFriends_eventActivateGameOverlayToUser_Parms
		{
			ESteamUserOverlayType DialogType;
			FSteamPlayerInfo aPlayerInfo;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DialogType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::NewProp_DialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventActivateGameOverlayToUser_Parms, DialogType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamUserOverlayType, METADATA_PARAMS(nullptr, 0) }; // 2377987520
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::NewProp_aPlayerInfo = { "aPlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventActivateGameOverlayToUser_Parms, aPlayerInfo), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::NewProp_DialogType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::NewProp_DialogType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::NewProp_aPlayerInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam ActivateGameOverlay" },
		{ "Keywords", "Steam ISteamFriends ActivateGameOverlay" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "ActivateGameOverlayToUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::ISteamFriends_eventActivateGameOverlayToUser_Parms), Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics
	{
		struct ISteamFriends_eventGetClanCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetFriendGamePlayed\", Keywords = \"Steam ISteamFriends GetFriendGamePlayed\"), Category = \"SteamAPI|ISteamFriends \")\n//\x09static FSteamFriendGameInfo GetFriendGamePlayed(FSteamPlayerInfo aPlayerInfo);\n" },
		{ "DisplayName", "Steam GetClanCount" },
		{ "Keywords", "Steam ISteamFriends GetClanCount" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetFriendGamePlayed\", Keywords = \"Steam ISteamFriends GetFriendGamePlayed\"), Category = \"SteamAPI|ISteamFriends \")\n       static FSteamFriendGameInfo GetFriendGamePlayed(FSteamPlayerInfo aPlayerInfo);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetClanCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::ISteamFriends_eventGetClanCount_Parms), Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetClanCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetClanCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics
	{
		struct ISteamFriends_eventGetFriendByIndex_Parms
		{
			int32 iFriend;
			int32 iFriendFlags;
			FSteamPlayerInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_iFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_iFriendFlags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::NewProp_iFriend = { "iFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendByIndex_Parms, iFriend), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::NewProp_iFriendFlags = { "iFriendFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendByIndex_Parms, iFriendFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::NewProp_iFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::NewProp_iFriendFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam GetFriendByIndex" },
		{ "Keywords", "Steam ISteamFriends GetFriendByIndex" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetFriendByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::ISteamFriends_eventGetFriendByIndex_Parms), Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetFriendByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetFriendByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics
	{
		struct ISteamFriends_eventGetFriendCount_Parms
		{
			int32 iFriendFlags;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_iFriendFlags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::NewProp_iFriendFlags = { "iFriendFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendCount_Parms, iFriendFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::NewProp_iFriendFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam GetFriendCount" },
		{ "Keywords", "Steam ISteamFriends GetFriendCount" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetFriendCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::ISteamFriends_eventGetFriendCount_Parms), Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics
	{
		struct ISteamFriends_eventGetFriendPersonaName_Parms
		{
			FSteamPlayerInfo aPlayerInfo;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::NewProp_aPlayerInfo = { "aPlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendPersonaName_Parms, aPlayerInfo), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::NewProp_aPlayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam GetFriendPersonaName" },
		{ "Keywords", "Steam ISteamFriends GetFriendPersonaName" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetFriendPersonaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::ISteamFriends_eventGetFriendPersonaName_Parms), Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics
	{
		struct ISteamFriends_eventGetFriendPersonaState_Parms
		{
			FSteamPlayerInfo aPlayerInfo;
			ESteamPersonaState ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::NewProp_aPlayerInfo = { "aPlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendPersonaState_Parms, aPlayerInfo), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) }; // 283214426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::NewProp_aPlayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam GetFriendPersonaState" },
		{ "Keywords", "Steam ISteamFriends GetFriendPersonaState" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetFriendPersonaState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::ISteamFriends_eventGetFriendPersonaState_Parms), Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics
	{
		struct ISteamFriends_eventGetFriendRelationship_Parms
		{
			FSteamPlayerInfo aPlayerInfo;
			ESteamFriendRelationship ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aPlayerInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::NewProp_aPlayerInfo = { "aPlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendRelationship_Parms, aPlayerInfo), Z_Construct_UScriptStruct_FSteamPlayerInfo, METADATA_PARAMS(nullptr, 0) }; // 2098612511
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamFriendRelationship, METADATA_PARAMS(nullptr, 0) }; // 1830622919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::NewProp_aPlayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam GetFriendRelationship" },
		{ "Keywords", "Steam ISteamFriends GetFriendRelationship" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetFriendRelationship", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::ISteamFriends_eventGetFriendRelationship_Parms), Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetFriendRelationship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetFriendRelationship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics
	{
		struct ISteamFriends_eventGetPersonaName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "DisplayName", "Steam GetPersonaName" },
		{ "Keywords", "Steam ISteamFriends GetPersonaName" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "GetPersonaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::ISteamFriends_eventGetPersonaName_Parms), Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_GetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_GetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics
	{
		struct ISteamFriends_eventSetRichPresence_Parms
		{
			FString pchKey;
			FString pchValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pchKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pchKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pchValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pchValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchKey = { "pchKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventSetRichPresence_Parms, pchKey), METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchValue = { "pchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamFriends_eventSetRichPresence_Parms, pchValue), METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchValue_MetaData)) };
	void Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamFriends_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamFriends_eventSetRichPresence_Parms), &Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_pchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamFriends" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam SetPlayedWith\", Keywords = \"Steam ISteamFriends SetPlayedWith\"), Category = \"SteamAPI|ISteamFriends \")\n//\x09static int32 SetPlayedWith(CSteamID steamIDUserPlayedWith);\n" },
		{ "DisplayName", "Steam SetRichPresence" },
		{ "Keywords", "Steam ISteamFriends SetRichPresence" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam SetPlayedWith\", Keywords = \"Steam ISteamFriends SetPlayedWith\"), Category = \"SteamAPI|ISteamFriends \")\n       static int32 SetPlayedWith(CSteamID steamIDUserPlayedWith);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamFriends, nullptr, "SetRichPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::ISteamFriends_eventSetRichPresence_Parms), Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamFriends_SetRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamFriends_SetRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamFriends);
	UClass* Z_Construct_UClass_UISteamFriends_NoRegister()
	{
		return UISteamFriends::StaticClass();
	}
	struct Z_Construct_UClass_UISteamFriends_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamFriends_ActivateGameOverlay, "ActivateGameOverlay" }, // 1815893143
		{ &Z_Construct_UFunction_UISteamFriends_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 2994199511
		{ &Z_Construct_UFunction_UISteamFriends_GetClanCount, "GetClanCount" }, // 3547635669
		{ &Z_Construct_UFunction_UISteamFriends_GetFriendByIndex, "GetFriendByIndex" }, // 2597859827
		{ &Z_Construct_UFunction_UISteamFriends_GetFriendCount, "GetFriendCount" }, // 2415596264
		{ &Z_Construct_UFunction_UISteamFriends_GetFriendPersonaName, "GetFriendPersonaName" }, // 2855194527
		{ &Z_Construct_UFunction_UISteamFriends_GetFriendPersonaState, "GetFriendPersonaState" }, // 3831031759
		{ &Z_Construct_UFunction_UISteamFriends_GetFriendRelationship, "GetFriendRelationship" }, // 3597228246
		{ &Z_Construct_UFunction_UISteamFriends_GetPersonaName, "GetPersonaName" }, // 3126291984
		{ &Z_Construct_UFunction_UISteamFriends_SetRichPresence, "SetRichPresence" }, // 456203673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamFriends_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Interface to access information about individual users and interact with the Steam Overlay.\n" },
		{ "IncludePath", "UISteamFriends.h" },
		{ "ModuleRelativePath", "Public/UISteamFriends.h" },
		{ "ToolTip", "Interface to access information about individual users and interact with the Steam Overlay." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamFriends>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamFriends_Statics::ClassParams = {
		&UISteamFriends::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamFriends()
	{
		if (!Z_Registration_Info_UClass_UISteamFriends.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamFriends.OuterSingleton, Z_Construct_UClass_UISteamFriends_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamFriends.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamFriends>()
	{
		return UISteamFriends::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamFriends);
	UISteamFriends::~UISteamFriends() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamFriends, UISteamFriends::StaticClass, TEXT("UISteamFriends"), &Z_Registration_Info_UClass_UISteamFriends, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamFriends), 1309756571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_3534596130(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamFriends_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
