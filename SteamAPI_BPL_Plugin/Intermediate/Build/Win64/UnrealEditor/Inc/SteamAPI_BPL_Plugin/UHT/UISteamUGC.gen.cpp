// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamUGC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamUGC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUGC();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamUGC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamUGC::StaticRegisterNativesUISteamUGC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamUGC);
	UClass* Z_Construct_UClass_UISteamUGC_NoRegister()
	{
		return UISteamUGC::StaticClass();
	}
	struct Z_Construct_UClass_UISteamUGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamUGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamUGC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions to create, consume, and interact with the Steam Workshop.\n" },
		{ "IncludePath", "UISteamUGC.h" },
		{ "ModuleRelativePath", "Public/UISteamUGC.h" },
		{ "ToolTip", "Functions to create, consume, and interact with the Steam Workshop." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamUGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamUGC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamUGC_Statics::ClassParams = {
		&UISteamUGC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamUGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamUGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamUGC()
	{
		if (!Z_Registration_Info_UClass_UISteamUGC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamUGC.OuterSingleton, Z_Construct_UClass_UISteamUGC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamUGC.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamUGC>()
	{
		return UISteamUGC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamUGC);
	UISteamUGC::~UISteamUGC() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamUGC, UISteamUGC::StaticClass, TEXT("UISteamUGC"), &Z_Registration_Info_UClass_UISteamUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamUGC), 2215651613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_998081352(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamUGC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
