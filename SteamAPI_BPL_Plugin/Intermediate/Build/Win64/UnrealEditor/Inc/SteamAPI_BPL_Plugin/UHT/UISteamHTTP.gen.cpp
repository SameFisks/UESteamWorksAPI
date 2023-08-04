// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamHTTP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamHTTP() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamHTTP();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamHTTP_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamHTTP::StaticRegisterNativesUISteamHTTP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamHTTP);
	UClass* Z_Construct_UClass_UISteamHTTP_NoRegister()
	{
		return UISteamHTTP::StaticClass();
	}
	struct Z_Construct_UClass_UISteamHTTP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamHTTP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamHTTP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//A small and easy to use HTTP client to send and receive data from the web.\n" },
		{ "IncludePath", "UISteamHTTP.h" },
		{ "ModuleRelativePath", "Public/UISteamHTTP.h" },
		{ "ToolTip", "A small and easy to use HTTP client to send and receive data from the web." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamHTTP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamHTTP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamHTTP_Statics::ClassParams = {
		&UISteamHTTP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamHTTP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTTP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamHTTP()
	{
		if (!Z_Registration_Info_UClass_UISteamHTTP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamHTTP.OuterSingleton, Z_Construct_UClass_UISteamHTTP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamHTTP.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamHTTP>()
	{
		return UISteamHTTP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamHTTP);
	UISteamHTTP::~UISteamHTTP() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamHTTP, UISteamHTTP::StaticClass, TEXT("UISteamHTTP"), &Z_Registration_Info_UClass_UISteamHTTP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamHTTP), 3473585641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_2667432939(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTTP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
