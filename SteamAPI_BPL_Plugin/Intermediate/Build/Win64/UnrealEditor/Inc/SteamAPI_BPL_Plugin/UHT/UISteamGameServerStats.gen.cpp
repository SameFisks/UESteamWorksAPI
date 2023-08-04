// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamGameServerStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamGameServerStats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServerStats();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServerStats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamGameServerStats::StaticRegisterNativesUISteamGameServerStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamGameServerStats);
	UClass* Z_Construct_UClass_UISteamGameServerStats_NoRegister()
	{
		return UISteamGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UISteamGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions to allow game servers to set stats and achievements on players.\n" },
		{ "IncludePath", "UISteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/UISteamGameServerStats.h" },
		{ "ToolTip", "Functions to allow game servers to set stats and achievements on players." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamGameServerStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamGameServerStats_Statics::ClassParams = {
		&UISteamGameServerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamGameServerStats()
	{
		if (!Z_Registration_Info_UClass_UISteamGameServerStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamGameServerStats.OuterSingleton, Z_Construct_UClass_UISteamGameServerStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamGameServerStats.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamGameServerStats>()
	{
		return UISteamGameServerStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamGameServerStats);
	UISteamGameServerStats::~UISteamGameServerStats() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamGameServerStats, UISteamGameServerStats::StaticClass, TEXT("UISteamGameServerStats"), &Z_Registration_Info_UClass_UISteamGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamGameServerStats), 1593607883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_656726157(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServerStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
