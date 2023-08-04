// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamInventory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInventory();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInventory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamInventory::StaticRegisterNativesUISteamInventory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamInventory);
	UClass* Z_Construct_UClass_UISteamInventory_NoRegister()
	{
		return UISteamInventory::StaticClass();
	}
	struct Z_Construct_UClass_UISteamInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Steam Inventory query and manipulation API.\n" },
		{ "IncludePath", "UISteamInventory.h" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Steam Inventory query and manipulation API." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamInventory_Statics::ClassParams = {
		&UISteamInventory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamInventory()
	{
		if (!Z_Registration_Info_UClass_UISteamInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamInventory.OuterSingleton, Z_Construct_UClass_UISteamInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamInventory.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamInventory>()
	{
		return UISteamInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamInventory);
	UISteamInventory::~UISteamInventory() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamInventory, UISteamInventory::StaticClass, TEXT("UISteamInventory"), &Z_Registration_Info_UClass_UISteamInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamInventory), 1769044814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_2819403346(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
