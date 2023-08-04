// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamNetworkingSockets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamNetworkingSockets() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamNetworkingSockets();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamNetworkingSockets_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamNetworkingSockets::StaticRegisterNativesUISteamNetworkingSockets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamNetworkingSockets);
	UClass* Z_Construct_UClass_UISteamNetworkingSockets_NoRegister()
	{
		return UISteamNetworkingSockets::StaticClass();
	}
	struct Z_Construct_UClass_UISteamNetworkingSockets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamNetworkingSockets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamNetworkingSockets_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamNetworkingSockets.h" },
		{ "ModuleRelativePath", "Public/UISteamNetworkingSockets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamNetworkingSockets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamNetworkingSockets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamNetworkingSockets_Statics::ClassParams = {
		&UISteamNetworkingSockets::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamNetworkingSockets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamNetworkingSockets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamNetworkingSockets()
	{
		if (!Z_Registration_Info_UClass_UISteamNetworkingSockets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamNetworkingSockets.OuterSingleton, Z_Construct_UClass_UISteamNetworkingSockets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamNetworkingSockets.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamNetworkingSockets>()
	{
		return UISteamNetworkingSockets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamNetworkingSockets);
	UISteamNetworkingSockets::~UISteamNetworkingSockets() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingSockets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingSockets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamNetworkingSockets, UISteamNetworkingSockets::StaticClass, TEXT("UISteamNetworkingSockets"), &Z_Registration_Info_UClass_UISteamNetworkingSockets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamNetworkingSockets), 3775720889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingSockets_h_1285786787(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingSockets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingSockets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
