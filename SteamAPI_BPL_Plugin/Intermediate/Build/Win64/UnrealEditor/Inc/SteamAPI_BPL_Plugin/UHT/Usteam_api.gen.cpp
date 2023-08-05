// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/Usteam_api.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUsteam_api() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_Usteam_api();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_Usteam_api_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void Usteam_api::StaticRegisterNativesUsteam_api()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Usteam_api);
	UClass* Z_Construct_UClass_Usteam_api_NoRegister()
	{
		return Usteam_api::StaticClass();
	}
	struct Z_Construct_UClass_Usteam_api_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Usteam_api_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usteam_api_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Provides the core foundation to initialize and access the Steamworks API.\n" },
		{ "IncludePath", "Usteam_api.h" },
		{ "ModuleRelativePath", "Public/Usteam_api.h" },
		{ "ToolTip", "Provides the core foundation to initialize and access the Steamworks API." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Usteam_api_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Usteam_api>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Usteam_api_Statics::ClassParams = {
		&Usteam_api::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Usteam_api_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Usteam_api_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Usteam_api()
	{
		if (!Z_Registration_Info_UClass_Usteam_api.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Usteam_api.OuterSingleton, Z_Construct_UClass_Usteam_api_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Usteam_api.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<Usteam_api>()
	{
		return Usteam_api::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Usteam_api);
	Usteam_api::~Usteam_api() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_api_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_api_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Usteam_api, Usteam_api::StaticClass, TEXT("Usteam_api"), &Z_Registration_Info_UClass_Usteam_api, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Usteam_api), 2366043414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_api_h_326926167(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_api_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_Usteam_api_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
