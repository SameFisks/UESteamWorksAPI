// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamMusic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamMusic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusic();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamMusic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamMusic::StaticRegisterNativesUISteamMusic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamMusic);
	UClass* Z_Construct_UClass_UISteamMusic_NoRegister()
	{
		return UISteamMusic::StaticClass();
	}
	struct Z_Construct_UClass_UISteamMusic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamMusic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamMusic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions to control music playback in the steam client.\n" },
		{ "IncludePath", "UISteamMusic.h" },
		{ "ModuleRelativePath", "Public/UISteamMusic.h" },
		{ "ToolTip", "Functions to control music playback in the steam client." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamMusic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamMusic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamMusic_Statics::ClassParams = {
		&UISteamMusic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamMusic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamMusic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamMusic()
	{
		if (!Z_Registration_Info_UClass_UISteamMusic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamMusic.OuterSingleton, Z_Construct_UClass_UISteamMusic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamMusic.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamMusic>()
	{
		return UISteamMusic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamMusic);
	UISteamMusic::~UISteamMusic() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamMusic, UISteamMusic::StaticClass, TEXT("UISteamMusic"), &Z_Registration_Info_UClass_UISteamMusic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamMusic), 385050696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_3901596888(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamMusic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
