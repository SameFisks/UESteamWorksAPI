// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamAppTicket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamAppTicket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamAppTicket();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamAppTicket_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamAppTicket::StaticRegisterNativesUISteamAppTicket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamAppTicket);
	UClass* Z_Construct_UClass_UISteamAppTicket_NoRegister()
	{
		return UISteamAppTicket::StaticClass();
	}
	struct Z_Construct_UClass_UISteamAppTicket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamAppTicket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamAppTicket_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\x09Interface to get app ownership data. This is used by the Steam DRM wrapper to let it ask about ownership with greater confidence.\n" },
		{ "IncludePath", "UISteamAppTicket.h" },
		{ "ModuleRelativePath", "Public/UISteamAppTicket.h" },
		{ "ToolTip", "Interface to get app ownership data. This is used by the Steam DRM wrapper to let it ask about ownership with greater confidence." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamAppTicket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamAppTicket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamAppTicket_Statics::ClassParams = {
		&UISteamAppTicket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamAppTicket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamAppTicket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamAppTicket()
	{
		if (!Z_Registration_Info_UClass_UISteamAppTicket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamAppTicket.OuterSingleton, Z_Construct_UClass_UISteamAppTicket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamAppTicket.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamAppTicket>()
	{
		return UISteamAppTicket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamAppTicket);
	UISteamAppTicket::~UISteamAppTicket() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamAppTicket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamAppTicket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamAppTicket, UISteamAppTicket::StaticClass, TEXT("UISteamAppTicket"), &Z_Registration_Info_UClass_UISteamAppTicket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamAppTicket), 1569882744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamAppTicket_h_2585166953(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamAppTicket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamAppTicket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
