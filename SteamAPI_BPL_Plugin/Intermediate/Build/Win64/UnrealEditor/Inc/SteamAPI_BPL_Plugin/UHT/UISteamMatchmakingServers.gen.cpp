// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMatchmakingServers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMatchmakingServers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmakingServers();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmakingServers_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamMatchmakingServers::StaticRegisterNativesUISteamMatchmakingServers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMatchmakingServers);
	UClass* Z_Construct_UClass_UISteamMatchmakingServers_NoRegister()
	{
		return UISteamMatchmakingServers::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMatchmakingServers_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	UISteamMatchmakingServers::~UISteamMatchmakingServers() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMatchmakingServers, UISteamMatchmakingServers::StaticClass, TEXT("UISteamMatchmakingServers"), &Z_Registration_Info_UClass_UISteamMatchmakingServers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMatchmakingServers), 2760592067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_202602421(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmakingServers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
