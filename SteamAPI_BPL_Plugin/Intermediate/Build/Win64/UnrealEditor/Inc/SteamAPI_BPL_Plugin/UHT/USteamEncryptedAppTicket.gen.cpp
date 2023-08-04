// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/USteamEncryptedAppTicket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSteamEncryptedAppTicket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_USteamEncryptedAppTicket();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_USteamEncryptedAppTicket_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void USteamEncryptedAppTicket::StaticRegisterNativesUSteamEncryptedAppTicket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamEncryptedAppTicket);
	UClass* Z_Construct_UClass_USteamEncryptedAppTicket_NoRegister()
	{
		return USteamEncryptedAppTicket::StaticClass();
	}
	struct Z_Construct_UClass_USteamEncryptedAppTicket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamEncryptedAppTicket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamEncryptedAppTicket_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Utilities to decode/decrypt encrypted application tickets.\n" },
		{ "IncludePath", "USteamEncryptedAppTicket.h" },
		{ "ModuleRelativePath", "Public/USteamEncryptedAppTicket.h" },
		{ "ToolTip", "Utilities to decode/decrypt encrypted application tickets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamEncryptedAppTicket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamEncryptedAppTicket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamEncryptedAppTicket_Statics::ClassParams = {
		&USteamEncryptedAppTicket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamEncryptedAppTicket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamEncryptedAppTicket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamEncryptedAppTicket()
	{
		if (!Z_Registration_Info_UClass_USteamEncryptedAppTicket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamEncryptedAppTicket.OuterSingleton, Z_Construct_UClass_USteamEncryptedAppTicket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamEncryptedAppTicket.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<USteamEncryptedAppTicket>()
	{
		return USteamEncryptedAppTicket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamEncryptedAppTicket);
	USteamEncryptedAppTicket::~USteamEncryptedAppTicket() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamEncryptedAppTicket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamEncryptedAppTicket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamEncryptedAppTicket, USteamEncryptedAppTicket::StaticClass, TEXT("USteamEncryptedAppTicket"), &Z_Registration_Info_UClass_USteamEncryptedAppTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamEncryptedAppTicket), 3870409704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamEncryptedAppTicket_h_2589680904(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamEncryptedAppTicket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamEncryptedAppTicket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
