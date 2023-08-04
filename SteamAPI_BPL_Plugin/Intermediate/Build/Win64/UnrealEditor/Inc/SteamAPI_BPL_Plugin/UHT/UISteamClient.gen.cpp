// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamClient();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamClient::execBConnectToGlobalUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_hSteamPipe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamClient::BConnectToGlobalUser(Z_Param_hSteamPipe);
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
	DEFINE_FUNCTION(UISteamClient::execBShutdownIfAllPipesClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamClient::BShutdownIfAllPipesClosed();
		P_NATIVE_END;
	}
	void UISteamClient::StaticRegisterNativesUISteamClient()
	{
		UClass* Class = UISteamClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BConnectToGlobalUser", &UISteamClient::execBConnectToGlobalUser },
			{ "BReleaseSteamPipe", &UISteamClient::execBReleaseSteamPipe },
			{ "BShutdownIfAllPipesClosed", &UISteamClient::execBShutdownIfAllPipesClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics
	{
		struct ISteamClient_eventBConnectToGlobalUser_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::NewProp_hSteamPipe = { "hSteamPipe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventBConnectToGlobalUser_Parms, hSteamPipe), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamClient_eventBConnectToGlobalUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::NewProp_hSteamPipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamClient" },
		{ "Comment", "// Assuming HSteamPipe is a typedef for int32 here\n" },
		{ "DisplayName", "Steam BConnectToGlobalUser" },
		{ "Keywords", "Steam ISteamClient BConnectToGlobalUser" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
		{ "ToolTip", "Assuming HSteamPipe is a typedef for int32 here" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamClient, nullptr, "BConnectToGlobalUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::ISteamClient_eventBConnectToGlobalUser_Parms), Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "DisplayName", "Steam BShutdownIfAllPipesClosed" },
		{ "Keywords", "Steam ISteamClient BShutdownIfAllPipesClosed" },
		{ "ModuleRelativePath", "Public/UISteamClient.h" },
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
		{ &Z_Construct_UFunction_UISteamClient_BConnectToGlobalUser, "BConnectToGlobalUser" }, // 3237801197
		{ &Z_Construct_UFunction_UISteamClient_BReleaseSteamPipe, "BReleaseSteamPipe" }, // 854725348
		{ &Z_Construct_UFunction_UISteamClient_BShutdownIfAllPipesClosed, "BShutdownIfAllPipesClosed" }, // 4264181580
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
	UISteamClient::~UISteamClient() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamClient, UISteamClient::StaticClass, TEXT("UISteamClient"), &Z_Registration_Info_UClass_UISteamClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamClient), 3150070230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_2554819487(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
