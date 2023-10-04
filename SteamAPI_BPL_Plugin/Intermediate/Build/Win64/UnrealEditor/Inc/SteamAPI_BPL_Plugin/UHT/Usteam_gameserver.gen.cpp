// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/Usteam_gameserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUsteam_gameserver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_Usteam_gameserver();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_Usteam_gameserver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void Usteam_gameserver::StaticRegisterNativesUsteam_gameserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Usteam_gameserver);
	UClass* Z_Construct_UClass_Usteam_gameserver_NoRegister()
	{
		return Usteam_gameserver::StaticClass();
	}
	struct Z_Construct_UClass_Usteam_gameserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Usteam_gameserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usteam_gameserver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\x09Provides the core foundation to initialize and access the Steamworks GameServer API.\n" },
		{ "IncludePath", "Usteam_gameserver.h" },
		{ "ModuleRelativePath", "Public/Usteam_gameserver.h" },
		{ "ToolTip", "Provides the core foundation to initialize and access the Steamworks GameServer API." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Usteam_gameserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Usteam_gameserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Usteam_gameserver_Statics::ClassParams = {
		&Usteam_gameserver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Usteam_gameserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Usteam_gameserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Usteam_gameserver()
	{
		if (!Z_Registration_Info_UClass_Usteam_gameserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Usteam_gameserver.OuterSingleton, Z_Construct_UClass_Usteam_gameserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Usteam_gameserver.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<Usteam_gameserver>()
	{
		return Usteam_gameserver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Usteam_gameserver);
	Usteam_gameserver::~Usteam_gameserver() {}
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_gameserver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_gameserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Usteam_gameserver, Usteam_gameserver::StaticClass, TEXT("Usteam_gameserver"), &Z_Registration_Info_UClass_Usteam_gameserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Usteam_gameserver), 4183930963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_gameserver_h_1901658483(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_gameserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_gameserver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
