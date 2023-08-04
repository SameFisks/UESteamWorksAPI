// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUtils.h"
#include "SteamAPI_BPL_Plugin/Public/SteamAPI_BPL_PluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUtils();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUtils_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamUtils::execGetFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamPlayerInfo>*)Z_Param__Result=UISteamUtils::GetFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamUtils::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamUtils::Init();
		P_NATIVE_END;
	}
	void UISteamUtils::StaticRegisterNativesUISteamUtils()
	{
		UClass* Class = UISteamUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFriends", &UISteamUtils::execGetFriends },
			{ "Init", &UISteamUtils::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamUtils_GetFriends, "GetFriends" }, // 2800393371
		{ &Z_Construct_UFunction_UISteamUtils_Init, "Init" }, // 3799166926
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\x09Interface which provides access to a range of miscellaneous utility functions.\n" },
		{ "IncludePath", "UISteamUtils.h" },
		{ "ModuleRelativePath", "Public/UISteamUtils.h" },
		{ "ToolTip", "Interface which provides access to a range of miscellaneous utility functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUtils_Statics::ClassParams = {
		&UISteamUtils::StaticClass,
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
	UISteamUtils::~UISteamUtils() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUtils, UISteamUtils::StaticClass, TEXT("UISteamUtils"), &Z_Registration_Info_UClass_UISteamUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUtils), 1353969999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_1410607275(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
