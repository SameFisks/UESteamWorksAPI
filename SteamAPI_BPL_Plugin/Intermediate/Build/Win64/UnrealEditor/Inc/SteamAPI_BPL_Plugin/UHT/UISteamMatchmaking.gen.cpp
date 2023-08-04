// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMatchmaking.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMatchmaking() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmaking();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMatchmaking_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamMatchmaking::StaticRegisterNativesUISteamMatchmaking()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMatchmaking);
	UClass* Z_Construct_UClass_UISteamMatchmaking_NoRegister()
	{
		return UISteamMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions for clients to access matchmaking services, favorites, and to operate on game lobbies.\n" },
		{ "IncludePath", "UISteamMatchmaking.h" },
		{ "ModuleRelativePath", "Public/UISteamMatchmaking.h" },
		{ "ToolTip", "Functions for clients to access matchmaking services, favorites, and to operate on game lobbies." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMatchmaking>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMatchmaking_Statics::ClassParams = {
		&UISteamMatchmaking::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMatchmaking()
	{
		if (!Z_Registration_Info_UClass_UISteamMatchmaking.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMatchmaking.OuterSingleton, Z_Construct_UClass_UISteamMatchmaking_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMatchmaking.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMatchmaking>()
	{
		return UISteamMatchmaking::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMatchmaking);
	UISteamMatchmaking::~UISteamMatchmaking() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMatchmaking, UISteamMatchmaking::StaticClass, TEXT("UISteamMatchmaking"), &Z_Registration_Info_UClass_UISteamMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMatchmaking), 3850423604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_1899830002(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMatchmaking_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
