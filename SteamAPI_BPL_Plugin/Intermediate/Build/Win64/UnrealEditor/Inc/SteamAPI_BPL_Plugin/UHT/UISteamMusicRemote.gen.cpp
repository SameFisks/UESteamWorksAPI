// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMusicRemote.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMusicRemote() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusicRemote();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusicRemote_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamMusicRemote::StaticRegisterNativesUISteamMusicRemote()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMusicRemote);
	UClass* Z_Construct_UClass_UISteamMusicRemote_NoRegister()
	{
		return UISteamMusicRemote::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMusicRemote_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMusicRemote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusicRemote_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamMusicRemote.h" },
		{ "ModuleRelativePath", "Public/UISteamMusicRemote.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMusicRemote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMusicRemote>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMusicRemote_Statics::ClassParams = {
		&UISteamMusicRemote::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamMusicRemote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusicRemote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMusicRemote()
	{
		if (!Z_Registration_Info_UClass_UISteamMusicRemote.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMusicRemote.OuterSingleton, Z_Construct_UClass_UISteamMusicRemote_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMusicRemote.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMusicRemote>()
	{
		return UISteamMusicRemote::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMusicRemote);
	UISteamMusicRemote::~UISteamMusicRemote() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMusicRemote, UISteamMusicRemote::StaticClass, TEXT("UISteamMusicRemote"), &Z_Registration_Info_UClass_UISteamMusicRemote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMusicRemote), 145763576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_219002617(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusicRemote_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
