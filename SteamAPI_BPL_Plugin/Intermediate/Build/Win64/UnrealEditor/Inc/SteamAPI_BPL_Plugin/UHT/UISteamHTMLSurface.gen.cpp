// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamHTMLSurface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamHTMLSurface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamHTMLSurface();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamHTMLSurface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamHTMLSurface::StaticRegisterNativesUISteamHTMLSurface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamHTMLSurface);
	UClass* Z_Construct_UClass_UISteamHTMLSurface_NoRegister()
	{
		return UISteamHTMLSurface::StaticClass();
	}
	struct Z_Construct_UClass_UISteamHTMLSurface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamHTMLSurface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamHTMLSurface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Interface for rendering and interacting with HTML pages.\n" },
		{ "IncludePath", "UISteamHTMLSurface.h" },
		{ "ModuleRelativePath", "Public/UISteamHTMLSurface.h" },
		{ "ToolTip", "Interface for rendering and interacting with HTML pages." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamHTMLSurface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamHTMLSurface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamHTMLSurface_Statics::ClassParams = {
		&UISteamHTMLSurface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamHTMLSurface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamHTMLSurface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamHTMLSurface()
	{
		if (!Z_Registration_Info_UClass_UISteamHTMLSurface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamHTMLSurface.OuterSingleton, Z_Construct_UClass_UISteamHTMLSurface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamHTMLSurface.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamHTMLSurface>()
	{
		return UISteamHTMLSurface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamHTMLSurface);
	UISteamHTMLSurface::~UISteamHTMLSurface() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamHTMLSurface, UISteamHTMLSurface::StaticClass, TEXT("UISteamHTMLSurface"), &Z_Registration_Info_UClass_UISteamHTMLSurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamHTMLSurface), 760953098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_3723403030(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
