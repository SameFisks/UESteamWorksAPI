// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamScreenshots.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamScreenshots() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamScreenshots();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamScreenshots_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamScreenshots::StaticRegisterNativesUISteamScreenshots()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamScreenshots);
	UClass* Z_Construct_UClass_UISteamScreenshots_NoRegister()
	{
		return UISteamScreenshots::StaticClass();
	}
	struct Z_Construct_UClass_UISteamScreenshots_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamScreenshots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamScreenshots_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamScreenshots.h" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamScreenshots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamScreenshots>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamScreenshots_Statics::ClassParams = {
		&UISteamScreenshots::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamScreenshots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamScreenshots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamScreenshots()
	{
		if (!Z_Registration_Info_UClass_UISteamScreenshots.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamScreenshots.OuterSingleton, Z_Construct_UClass_UISteamScreenshots_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamScreenshots.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamScreenshots>()
	{
		return UISteamScreenshots::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamScreenshots);
	UISteamScreenshots::~UISteamScreenshots() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamScreenshots, UISteamScreenshots::StaticClass, TEXT("UISteamScreenshots"), &Z_Registration_Info_UClass_UISteamScreenshots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamScreenshots), 2201104068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_3367472682(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
