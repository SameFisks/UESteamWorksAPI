// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUserStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUserStats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUserStats();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUserStats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamUserStats::StaticRegisterNativesUISteamUserStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamUserStats);
	UClass* Z_Construct_UClass_UISteamUserStats_NoRegister()
	{
		return UISteamUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UISteamUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUserStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamUserStats.h" },
		{ "ModuleRelativePath", "Public/UISteamUserStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUserStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUserStats_Statics::ClassParams = {
		&UISteamUserStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamUserStats()
	{
		if (!Z_Registration_Info_UClass_UISteamUserStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamUserStats.OuterSingleton, Z_Construct_UClass_UISteamUserStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamUserStats.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamUserStats>()
	{
		return UISteamUserStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamUserStats);
	UISteamUserStats::~UISteamUserStats() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUserStats, UISteamUserStats::StaticClass, TEXT("UISteamUserStats"), &Z_Registration_Info_UClass_UISteamUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUserStats), 2434943368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_4005494410(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUserStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
