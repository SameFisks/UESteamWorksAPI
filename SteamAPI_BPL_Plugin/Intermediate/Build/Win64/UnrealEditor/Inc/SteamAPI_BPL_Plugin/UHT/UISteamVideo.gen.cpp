// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamVideo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamVideo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamVideo();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamVideo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamVideo::StaticRegisterNativesUISteamVideo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamVideo);
	UClass* Z_Construct_UClass_UISteamVideo_NoRegister()
	{
		return UISteamVideo::StaticClass();
	}
	struct Z_Construct_UClass_UISteamVideo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamVideo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamVideo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Provides functions to interface with the Steam video and broadcasting platforms.\n" },
		{ "IncludePath", "UISteamVideo.h" },
		{ "ModuleRelativePath", "Public/UISteamVideo.h" },
		{ "ToolTip", "Provides functions to interface with the Steam video and broadcasting platforms." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamVideo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamVideo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamVideo_Statics::ClassParams = {
		&UISteamVideo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamVideo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamVideo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamVideo()
	{
		if (!Z_Registration_Info_UClass_UISteamVideo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamVideo.OuterSingleton, Z_Construct_UClass_UISteamVideo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamVideo.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamVideo>()
	{
		return UISteamVideo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamVideo);
	UISteamVideo::~UISteamVideo() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamVideo, UISteamVideo::StaticClass, TEXT("UISteamVideo"), &Z_Registration_Info_UClass_UISteamVideo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamVideo), 3690717062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_411860871(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamVideo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
