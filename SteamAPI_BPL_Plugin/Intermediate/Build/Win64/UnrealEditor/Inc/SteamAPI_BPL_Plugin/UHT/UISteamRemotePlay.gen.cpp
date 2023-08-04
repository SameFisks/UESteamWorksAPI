// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamRemotePlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamRemotePlay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamRemotePlay();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamRemotePlay_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamRemotePlay::StaticRegisterNativesUISteamRemotePlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamRemotePlay);
	UClass* Z_Construct_UClass_UISteamRemotePlay_NoRegister()
	{
		return UISteamRemotePlay::StaticClass();
	}
	struct Z_Construct_UClass_UISteamRemotePlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamRemotePlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamRemotePlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamRemotePlay.h" },
		{ "ModuleRelativePath", "Public/UISteamRemotePlay.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamRemotePlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamRemotePlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamRemotePlay_Statics::ClassParams = {
		&UISteamRemotePlay::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamRemotePlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamRemotePlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamRemotePlay()
	{
		if (!Z_Registration_Info_UClass_UISteamRemotePlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamRemotePlay.OuterSingleton, Z_Construct_UClass_UISteamRemotePlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamRemotePlay.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamRemotePlay>()
	{
		return UISteamRemotePlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamRemotePlay);
	UISteamRemotePlay::~UISteamRemotePlay() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamRemotePlay, UISteamRemotePlay::StaticClass, TEXT("UISteamRemotePlay"), &Z_Registration_Info_UClass_UISteamRemotePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamRemotePlay), 2521084152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_424823920(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamRemotePlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
