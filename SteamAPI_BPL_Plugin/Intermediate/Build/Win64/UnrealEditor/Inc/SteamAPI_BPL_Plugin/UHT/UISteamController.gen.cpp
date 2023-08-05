// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamController();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamController::StaticRegisterNativesUISteamController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamController);
	UClass* Z_Construct_UClass_UISteamController_NoRegister()
	{
		return UISteamController::StaticClass();
	}
	struct Z_Construct_UClass_UISteamController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\x09Steam Controller support API (deprecated and replaced with ISteamInput)\n" },
		{ "IncludePath", "UISteamController.h" },
		{ "ModuleRelativePath", "Public/UISteamController.h" },
		{ "ToolTip", "Steam Controller support API (deprecated and replaced with ISteamInput)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamController_Statics::ClassParams = {
		&UISteamController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamController()
	{
		if (!Z_Registration_Info_UClass_UISteamController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamController.OuterSingleton, Z_Construct_UClass_UISteamController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamController.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamController>()
	{
		return UISteamController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamController);
	UISteamController::~UISteamController() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamController, UISteamController::StaticClass, TEXT("UISteamController"), &Z_Registration_Info_UClass_UISteamController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamController), 1869424722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamController_h_1273373905(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
