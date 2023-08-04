// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamGameServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamGameServer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServer();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameServer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamGameServer::StaticRegisterNativesUISteamGameServer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamGameServer);
	UClass* Z_Construct_UClass_UISteamGameServer_NoRegister()
	{
		return UISteamGameServer::StaticClass();
	}
	struct Z_Construct_UClass_UISteamGameServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamGameServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameServer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Provides the core of the Steam Game Servers API.\n" },
		{ "IncludePath", "UISteamGameServer.h" },
		{ "ModuleRelativePath", "Public/UISteamGameServer.h" },
		{ "ToolTip", "Provides the core of the Steam Game Servers API." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamGameServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamGameServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamGameServer_Statics::ClassParams = {
		&UISteamGameServer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamGameServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamGameServer()
	{
		if (!Z_Registration_Info_UClass_UISteamGameServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamGameServer.OuterSingleton, Z_Construct_UClass_UISteamGameServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamGameServer.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamGameServer>()
	{
		return UISteamGameServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamGameServer);
	UISteamGameServer::~UISteamGameServer() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamGameServer, UISteamGameServer::StaticClass, TEXT("UISteamGameServer"), &Z_Registration_Info_UClass_UISteamGameServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamGameServer), 1556149445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_2707938052(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
