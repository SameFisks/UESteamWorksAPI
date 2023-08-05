// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamNetworkingUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamNetworkingUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamNetworkingUtils();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamNetworkingUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamNetworkingUtils::StaticRegisterNativesUISteamNetworkingUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamNetworkingUtils);
	UClass* Z_Construct_UClass_UISteamNetworkingUtils_NoRegister()
	{
		return UISteamNetworkingUtils::StaticClass();
	}
	struct Z_Construct_UClass_UISteamNetworkingUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamNetworkingUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamNetworkingUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamNetworkingUtils.h" },
		{ "ModuleRelativePath", "Public/UISteamNetworkingUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamNetworkingUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamNetworkingUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamNetworkingUtils_Statics::ClassParams = {
		&UISteamNetworkingUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamNetworkingUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamNetworkingUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamNetworkingUtils()
	{
		if (!Z_Registration_Info_UClass_UISteamNetworkingUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamNetworkingUtils.OuterSingleton, Z_Construct_UClass_UISteamNetworkingUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamNetworkingUtils.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamNetworkingUtils>()
	{
		return UISteamNetworkingUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamNetworkingUtils);
	UISteamNetworkingUtils::~UISteamNetworkingUtils() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamNetworkingUtils, UISteamNetworkingUtils::StaticClass, TEXT("UISteamNetworkingUtils"), &Z_Registration_Info_UClass_UISteamNetworkingUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamNetworkingUtils), 1556888623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingUtils_h_2165450819(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamNetworkingUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
