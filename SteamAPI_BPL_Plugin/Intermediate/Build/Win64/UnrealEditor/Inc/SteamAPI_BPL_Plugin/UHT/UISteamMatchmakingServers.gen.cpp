// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMatchmakingServers.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMatchmakingServers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmakingServers();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmakingServers_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHServerListRequest();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHServerQuery();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamMatchmakingServers::execReleaseRequest)
	{
		P_GET_STRUCT_REF(FHServerListRequest,Z_Param_Out_ServerListRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseRequest(Z_Param_Out_ServerListRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execRefreshServer)
	{
		P_GET_STRUCT_REF(FHServerListRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshServer(Z_Param_Out_Request,Z_Param_ServerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execRefreshQuery)
	{
		P_GET_STRUCT_REF(FHServerListRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshQuery(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execIsRefreshing)
	{
		P_GET_STRUCT_REF(FHServerListRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRefreshing(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execGetServerCount)
	{
		P_GET_STRUCT_REF(FHServerListRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetServerCount(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execCancelServerQuery)
	{
		P_GET_STRUCT(FHServerQuery,Z_Param_ServerQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelServerQuery(Z_Param_ServerQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execCancelQuery)
	{
		P_GET_STRUCT_REF(FHServerListRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelQuery(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamMatchmakingServers::execGetSteamMatchmakingServers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamMatchmakingServers**)Z_Param__Result=UISteamMatchmakingServers::GetSteamMatchmakingServers();
		P_NATIVE_END;
	}
	void UISteamMatchmakingServers::StaticRegisterNativesUISteamMatchmakingServers()
	{
		UClass* Class = UISteamMatchmakingServers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelQuery", &UISteamMatchmakingServers::execCancelQuery },
			{ "CancelServerQuery", &UISteamMatchmakingServers::execCancelServerQuery },
			{ "GetServerCount", &UISteamMatchmakingServers::execGetServerCount },
			{ "GetSteamMatchmakingServers", &UISteamMatchmakingServers::execGetSteamMatchmakingServers },
			{ "IsRefreshing", &UISteamMatchmakingServers::execIsRefreshing },
			{ "RefreshQuery", &UISteamMatchmakingServers::execRefreshQuery },
			{ "RefreshServer", &UISteamMatchmakingServers::execRefreshServer },
			{ "ReleaseRequest", &UISteamMatchmakingServers::execReleaseRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics
	{
		struct ISteamMatchmakingServers_eventCancelQuery_Parms
		{
			FHServerListRequest Request;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventCancelQuery_Parms, Request), Z_Construct_UScriptStruct_FHServerListRequest, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::NewProp_Request_MetaData)) }; // 2299228059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "CancelQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::ISteamMatchmakingServers_eventCancelQuery_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics
	{
		struct ISteamMatchmakingServers_eventCancelServerQuery_Parms
		{
			FHServerQuery ServerQuery;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerQuery;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::NewProp_ServerQuery = { "ServerQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventCancelServerQuery_Parms, ServerQuery), Z_Construct_UScriptStruct_FHServerQuery, METADATA_PARAMS(nullptr, 0) }; // 836201442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::NewProp_ServerQuery,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "CancelServerQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::ISteamMatchmakingServers_eventCancelServerQuery_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics
	{
		struct ISteamMatchmakingServers_eventGetServerCount_Parms
		{
			FHServerListRequest Request;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventGetServerCount_Parms, Request), Z_Construct_UScriptStruct_FHServerListRequest, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_Request_MetaData)) }; // 2299228059
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventGetServerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "GetServerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::ISteamMatchmakingServers_eventGetServerCount_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics
	{
		struct ISteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms
		{
			UISteamMatchmakingServers* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms, ReturnValue), Z_Construct_UClass_UISteamMatchmakingServers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamMatchmakingServers" },
		{ "DisplayName", "Steam Matchmaking Servers" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "GetSteamMatchmakingServers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::ISteamMatchmakingServers_eventGetSteamMatchmakingServers_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics
	{
		struct ISteamMatchmakingServers_eventIsRefreshing_Parms
		{
			FHServerListRequest Request;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventIsRefreshing_Parms, Request), Z_Construct_UScriptStruct_FHServerListRequest, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_Request_MetaData)) }; // 2299228059
	void Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamMatchmakingServers_eventIsRefreshing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamMatchmakingServers_eventIsRefreshing_Parms), &Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "Comment", "// #TODO: GetServerDetails\n" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
		{ "ToolTip", "#TODO: GetServerDetails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "IsRefreshing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::ISteamMatchmakingServers_eventIsRefreshing_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics
	{
		struct ISteamMatchmakingServers_eventRefreshQuery_Parms
		{
			FHServerListRequest Request;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventRefreshQuery_Parms, Request), Z_Construct_UScriptStruct_FHServerListRequest, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::NewProp_Request_MetaData)) }; // 2299228059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "Comment", "// #TODO: PingServer\n// #TODO: PlayerDetails\n" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
		{ "ToolTip", "#TODO: PingServer\n#TODO: PlayerDetails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "RefreshQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::ISteamMatchmakingServers_eventRefreshQuery_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics
	{
		struct ISteamMatchmakingServers_eventRefreshServer_Parms
		{
			FHServerListRequest Request;
			int32 ServerIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventRefreshServer_Parms, Request), Z_Construct_UScriptStruct_FHServerListRequest, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_Request_MetaData)) }; // 2299228059
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_ServerIndex = { "ServerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventRefreshServer_Parms, ServerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::NewProp_ServerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "RefreshServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::ISteamMatchmakingServers_eventRefreshServer_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics
	{
		struct ISteamMatchmakingServers_eventReleaseRequest_Parms
		{
			FHServerListRequest ServerListRequest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerListRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerListRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::NewProp_ServerListRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::NewProp_ServerListRequest = { "ServerListRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamMatchmakingServers_eventReleaseRequest_Parms, ServerListRequest), Z_Construct_UScriptStruct_FHServerListRequest, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::NewProp_ServerListRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::NewProp_ServerListRequest_MetaData)) }; // 2299228059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::NewProp_ServerListRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamMatchmakingServers" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamMatchmakingServers, nullptr, "ReleaseRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::ISteamMatchmakingServers_eventReleaseRequest_Parms), Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMatchmakingServers);
	UClass* Z_Construct_UClass_UISteamMatchmakingServers_NoRegister()
	{
		return UISteamMatchmakingServers::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMatchmakingServers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMatchmakingServers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamMatchmakingServers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_CancelQuery, "CancelQuery" }, // 414183130
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_CancelServerQuery, "CancelServerQuery" }, // 1243224232
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_GetServerCount, "GetServerCount" }, // 1291049131
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_GetSteamMatchmakingServers, "GetSteamMatchmakingServers" }, // 181334210
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_IsRefreshing, "IsRefreshing" }, // 2047693071
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_RefreshQuery, "RefreshQuery" }, // 528891324
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_RefreshServer, "RefreshServer" }, // 4287569711
		{ &Z_Construct_UFunction_UISteamMatchmakingServers_ReleaseRequest, "ReleaseRequest" }, // 3348558532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmakingServers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions which provide access to the game server browser.\n" },
		{ "IncludePath", "UISteamMatchmakingServers.h" },
		{ "ModuleRelativePath", "Public/UISteamMatchmakingServers.h" },
		{ "ToolTip", "Functions which provide access to the game server browser." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMatchmakingServers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMatchmakingServers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMatchmakingServers_Statics::ClassParams = {
		&UISteamMatchmakingServers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmakingServers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmakingServers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMatchmakingServers()
	{
		if (!Z_Registration_Info_UClass_UISteamMatchmakingServers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMatchmakingServers.OuterSingleton, Z_Construct_UClass_UISteamMatchmakingServers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMatchmakingServers.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMatchmakingServers>()
	{
		return UISteamMatchmakingServers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMatchmakingServers);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMatchmakingServers, UISteamMatchmakingServers::StaticClass, TEXT("UISteamMatchmakingServers"), &Z_Registration_Info_UClass_UISteamMatchmakingServers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMatchmakingServers), 241395718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_86583655(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
