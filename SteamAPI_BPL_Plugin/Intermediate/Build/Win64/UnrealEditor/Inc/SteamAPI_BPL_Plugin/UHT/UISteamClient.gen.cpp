// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamClient.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamClient();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamClient_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHSteamPipe();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHSteamUser();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUint16();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUint32();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamClient::execSetLocalIPBinding)
	{
		P_GET_STRUCT(FUint32,Z_Param_unIP);
		P_GET_STRUCT(FUint16,Z_Param_usPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamClient::SetLocalIPBinding(Z_Param_unIP,Z_Param_usPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execReleaseUser)
	{
		P_GET_STRUCT(FHSteamPipe,Z_Param_hSteamPipe);
		P_GET_STRUCT(FHSteamUser,Z_Param_hUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamClient::ReleaseUser(Z_Param_hSteamPipe,Z_Param_hUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execGetISteamGenericInterface)
	{
		P_GET_STRUCT(FHSteamUser,Z_Param_hSteamUser);
		P_GET_STRUCT(FHSteamPipe,Z_Param_hSteamPipe);
		P_GET_PROPERTY(FStrProperty,Z_Param_pchVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		UISteamClient::GetISteamGenericInterface(Z_Param_hSteamUser,Z_Param_hSteamPipe,Z_Param_pchVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execGetIPCCallCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUint32*)Z_Param__Result=UISteamClient::GetIPCCallCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execCreateSteamPipe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHSteamPipe*)Z_Param__Result=UISteamClient::CreateSteamPipe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execConnectToGlobalUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_hSteamPipe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamClient::ConnectToGlobalUser(Z_Param_hSteamPipe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execBShutdownIfAllPipesClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamClient::BShutdownIfAllPipesClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execBReleaseSteamPipe)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_hSteamPipe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamClient::BReleaseSteamPipe(Z_Param_hSteamPipe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamClient::execGetSteamApps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamClient**)Z_Param__Result=UISteamClient::GetSteamApps();
		P_NATIVE_END;
	}
	void UISteamClient::StaticRegisterNativesUISteamClient()
	{
		UClass* Class = UISteamClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BReleaseSteamPipe", &UISteamClient::execBReleaseSteamPipe },
			{ "BShutdownIfAllPipesClosed", &UISteamClient::execBShutdownIfAllPipesClosed },
			{ "ConnectToGlobalUser", &UISteamClient::execConnectToGlobalUser },
			{ "CreateSteamPipe", &UISteamClient::execCreateSteamPipe },
			{ "GetIPCCallCount", &UISteamClient::execGetIPCCallCount },
			{ "GetISteamGenericInterface", &UISteamClient::execGetISteamGenericInterface },
			{ "GetSteamApps", &UISteamClient::execGetSteamApps },
			{ "ReleaseUser", &UISteamClient::execReleaseUser },
			{ "SetLocalIPBinding", &UISteamClient::execSetLocalIPBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics
	{
		struct ISteamClient_eventBReleaseSteamPipe_Parms
		{
			int32 hSteamPipe;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_hSteamPipe;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::NewProp_hSteamPipe = { "hSteamPipe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventBReleaseSteamPipe_Parms, hSteamPipe), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamClient_eventBReleaseSteamPipe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamClient_eventBReleaseSteamPipe_Parms), &Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::NewProp_hSteamPipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "DisplayName", "Steam BReleaseSteamPipe" },
		{ "Keywords", "Steam ISteamClient BReleaseSteamPipe" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "BReleaseSteamPipe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::ISteamClient_eventBReleaseSteamPipe_Parms), Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics
	{
		struct ISteamClient_eventBShutdownIfAllPipesClosed_Parms
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
	void Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamClient_eventBShutdownIfAllPipesClosed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamClient_eventBShutdownIfAllPipesClosed_Parms), &Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "Comment", "// Assuming HSteamPipe is a typedef for int32 here\n" },
		{ "DisplayName", "Steam BShutdownIfAllPipesClosed" },
		{ "Keywords", "Steam ISteamClient BShutdownIfAllPipesClosed" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
		{ "ToolTip", "Assuming HSteamPipe is a typedef for int32 here" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "BShutdownIfAllPipesClosed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::ISteamClient_eventBShutdownIfAllPipesClosed_Parms), Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics
	{
		struct ISteamClient_eventConnectToGlobalUser_Parms
		{
			int32 hSteamPipe;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_hSteamPipe;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::NewProp_hSteamPipe = { "hSteamPipe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventConnectToGlobalUser_Parms, hSteamPipe), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventConnectToGlobalUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::NewProp_hSteamPipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "DisplayName", "Steam ConnectToGlobalUser" },
		{ "Keywords", "Steam ISteamClient ConnectToGlobalUser" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "ConnectToGlobalUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::ISteamClient_eventConnectToGlobalUser_Parms), Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics
	{
		struct ISteamClient_eventCreateSteamPipe_Parms
		{
			FHSteamPipe ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventCreateSteamPipe_Parms, ReturnValue), Z_Construct_UScriptStruct_FHSteamPipe, METADATA_PARAMS(nullptr, 0) }; // 1783055744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam CreateLocalUser\", Keywords = \"Steam ISteamClient CreateLocalUser\"), Category = \"SteamAPI|ISteamClient\")\n//\x09static FHSteamUser CreateLocalUser(FHSteamPipe phSteamPipe, ESteamAccountType eAccountType);\n" },
		{ "DisplayName", "Steam CreateSteamPipe" },
		{ "Keywords", "Steam ISteamClient CreateSteamPipe" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam CreateLocalUser\", Keywords = \"Steam ISteamClient CreateLocalUser\"), Category = \"SteamAPI|ISteamClient\")\n       static FHSteamUser CreateLocalUser(FHSteamPipe phSteamPipe, ESteamAccountType eAccountType);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "CreateSteamPipe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::ISteamClient_eventCreateSteamPipe_Parms), Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_CreateSteamPipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_CreateSteamPipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics
	{
		struct ISteamClient_eventGetIPCCallCount_Parms
		{
			FUint32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventGetIPCCallCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FUint32, METADATA_PARAMS(nullptr, 0) }; // 3715311042
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "DisplayName", "Steam GetIPCCallCount" },
		{ "Keywords", "Steam ISteamClient GetIPCCallCount" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "GetIPCCallCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::ISteamClient_eventGetIPCCallCount_Parms), Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_GetIPCCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_GetIPCCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics
	{
		struct ISteamClient_eventGetISteamGenericInterface_Parms
		{
			FHSteamUser hSteamUser;
			FHSteamPipe hSteamPipe;
			FString pchVersion;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_hSteamUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_hSteamPipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pchVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pchVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_hSteamUser = { "hSteamUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventGetISteamGenericInterface_Parms, hSteamUser), Z_Construct_UScriptStruct_FHSteamUser, METADATA_PARAMS(nullptr, 0) }; // 1889031587
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_hSteamPipe = { "hSteamPipe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventGetISteamGenericInterface_Parms, hSteamPipe), Z_Construct_UScriptStruct_FHSteamPipe, METADATA_PARAMS(nullptr, 0) }; // 1783055744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_pchVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_pchVersion = { "pchVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventGetISteamGenericInterface_Parms, pchVersion), METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_pchVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_pchVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_hSteamUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_hSteamPipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::NewProp_pchVersion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetISteamGameServerStats\", Keywords = \"Steam ISteamClient GetISteamGameServerStats\"), Category = \"SteamAPI|ISteamClient\")\n//\x09static FISteamGameServerStats    GetISteamGameServerStats(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const char* pchVersion);\n" },
		{ "DisplayName", "Steam GetISteamGenericInterface" },
		{ "Keywords", "Steam ISteamClient GetISteamGenericInterface" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetISteamGameServerStats\", Keywords = \"Steam ISteamClient GetISteamGameServerStats\"), Category = \"SteamAPI|ISteamClient\")\n       static FISteamGameServerStats    GetISteamGameServerStats(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const char* pchVersion);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "GetISteamGenericInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::ISteamClient_eventGetISteamGenericInterface_Parms), Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics
	{
		struct ISteamClient_eventGetSteamApps_Parms
		{
			UISteamClient* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventGetSteamApps_Parms, ReturnValue), Z_Construct_UClass_UISteamClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamClient" },
		{ "DisplayName", "Steam Client" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "GetSteamApps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::ISteamClient_eventGetSteamApps_Parms), Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_GetSteamApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_GetSteamApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics
	{
		struct ISteamClient_eventReleaseUser_Parms
		{
			FHSteamPipe hSteamPipe;
			FHSteamUser hUser;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_hSteamPipe;
		static const UECodeGen_Private::FStructPropertyParams NewProp_hUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::NewProp_hSteamPipe = { "hSteamPipe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventReleaseUser_Parms, hSteamPipe), Z_Construct_UScriptStruct_FHSteamPipe, METADATA_PARAMS(nullptr, 0) }; // 1783055744
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::NewProp_hUser = { "hUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventReleaseUser_Parms, hUser), Z_Construct_UScriptStruct_FHSteamUser, METADATA_PARAMS(nullptr, 0) }; // 1889031587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::NewProp_hSteamPipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::NewProp_hUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetISteamVideo\", Keywords = \"Steam ISteamClient GetISteamVideo\"), Category = \"SteamAPI|ISteamClient\")\n//\x09static FISteamVideo           GetISteamVideo(FHSteamPipe hSteamPipe, const FString& pchVersion);\n" },
		{ "DisplayName", "Steam ReleaseUser" },
		{ "Keywords", "Steam ISteamClient ReleaseUser" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, meta = (DisplayName = \"Steam GetISteamVideo\", Keywords = \"Steam ISteamClient GetISteamVideo\"), Category = \"SteamAPI|ISteamClient\")\n       static FISteamVideo           GetISteamVideo(FHSteamPipe hSteamPipe, const FString& pchVersion);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "ReleaseUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::ISteamClient_eventReleaseUser_Parms), Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_ReleaseUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_ReleaseUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics
	{
		struct ISteamClient_eventSetLocalIPBinding_Parms
		{
			FUint32 unIP;
			FUint16 usPort;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_unIP;
		static const UECodeGen_Private::FStructPropertyParams NewProp_usPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::NewProp_unIP = { "unIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventSetLocalIPBinding_Parms, unIP), Z_Construct_UScriptStruct_FUint32, METADATA_PARAMS(nullptr, 0) }; // 3715311042
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::NewProp_usPort = { "usPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventSetLocalIPBinding_Parms, usPort), Z_Construct_UScriptStruct_FUint16, METADATA_PARAMS(nullptr, 0) }; // 893350793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::NewProp_unIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::NewProp_usPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "DisplayName", "Steam SetLocalIPBinding" },
		{ "Keywords", "Steam ISteamClient SetLocalIPBinding" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "SetLocalIPBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::ISteamClient_eventSetLocalIPBinding_Parms), Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_SetLocalIPBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_SetLocalIPBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamClient);
	UClass* Z_Construct_UClass_UISteamClient_NoRegister()
	{
		return UISteamClient::StaticClass();
	}
	struct Z_Construct_UClass_UISteamClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe, "BReleaseSteamPipe" }, // 854725348
		{ &Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed, "BShutdownIfAllPipesClosed" }, // 1853577365
		{ &Z_Construct_UFunction_UISteamClient_ConnectToGlobalUser, "ConnectToGlobalUser" }, // 2005524344
		{ &Z_Construct_UFunction_UISteamClient_CreateSteamPipe, "CreateSteamPipe" }, // 1406542541
		{ &Z_Construct_UFunction_UISteamClient_GetIPCCallCount, "GetIPCCallCount" }, // 1653901499
		{ &Z_Construct_UFunction_UISteamClient_GetISteamGenericInterface, "GetISteamGenericInterface" }, // 291393305
		{ &Z_Construct_UFunction_UISteamClient_GetSteamApps, "GetSteamApps" }, // 4205042895
		{ &Z_Construct_UFunction_UISteamClient_ReleaseUser, "ReleaseUser" }, // 870053149
		{ &Z_Construct_UFunction_UISteamClient_SetLocalIPBinding, "SetLocalIPBinding" }, // 267122877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\x09Interface to create a new steam instance or to connect to an existing steam instance, whether it's in a different process or is local.\n" },
		{ "IncludePath", "UISteamClient.h" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
		{ "ToolTip", "Interface to create a new steam instance or to connect to an existing steam instance, whether it's in a different process or is local." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamClient_Statics::ClassParams = {
		&UISteamClient::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamClient()
	{
		if (!Z_Registration_Info_UClass_UISteamClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamClient.OuterSingleton, Z_Construct_UClass_UISteamClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamClient.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamClient>()
	{
		return UISteamClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamClient);
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamClient, UISteamClient::StaticClass, TEXT("UISteamClient"), &Z_Registration_Info_UClass_UISteamClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamClient), 3875130368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_2119608484(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
