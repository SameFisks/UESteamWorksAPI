// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamInput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInput();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	void UISteamInput::StaticRegisterNativesUISteamInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamInput);
	UClass* Z_Construct_UClass_UISteamInput_NoRegister()
	{
		return UISteamInput::StaticClass();
	}
	struct Z_Construct_UClass_UISteamInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Interface for supporting Xbox, PlayStation, Switch and Steam Controllers.\n" },
		{ "IncludePath", "UISteamInput.h" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Interface for supporting Xbox, PlayStation, Switch and Steam Controllers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamInput_Statics::ClassParams = {
		&UISteamInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamInput()
	{
		if (!Z_Registration_Info_UClass_UISteamInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamInput.OuterSingleton, Z_Construct_UClass_UISteamInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamInput.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamInput>()
	{
		return UISteamInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamInput);
	UISteamInput::~UISteamInput() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamInput, UISteamInput::StaticClass, TEXT("UISteamInput"), &Z_Registration_Info_UClass_UISteamInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamInput), 4010003035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_1383852402(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
