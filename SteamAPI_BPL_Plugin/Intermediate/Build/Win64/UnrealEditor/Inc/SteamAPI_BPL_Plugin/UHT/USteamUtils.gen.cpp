// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/USteamUtils.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSteamUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_USteamUtils();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_USteamUtils_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(USteamUtils::execGetSteamIDAsString)
	{
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtils::GetSteamIDAsString(Z_Param_Out_SteamID);
		P_NATIVE_END;
	}
	void USteamUtils::StaticRegisterNativesUSteamUtils()
	{
		UClass* Class = USteamUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSteamIDAsString", &USteamUtils::execGetSteamIDAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics
	{
		struct SteamUtils_eventGetSteamIDAsString_Parms
		{
			FSteamID SteamID;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtils_eventGetSteamIDAsString_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_SteamID_MetaData)) }; // 2174972862
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamUtils_eventGetSteamIDAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Steam|USteamBridgeUtils" },
		{ "ModuleRelativePath", "Public/USteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtils, nullptr, "GetSteamIDAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::SteamUtils_eventGetSteamIDAsString_Parms), Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtils_GetSteamIDAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtils_GetSteamIDAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamUtils);
	UClass* Z_Construct_UClass_USteamUtils_NoRegister()
	{
		return USteamUtils::StaticClass();
	}
	struct Z_Construct_UClass_USteamUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamUtils_GetSteamIDAsString, "GetSteamIDAsString" }, // 3151825571
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "USteamUtils.h" },
		{ "ModuleRelativePath", "Public/USteamUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamUtils_Statics::ClassParams = {
		&USteamUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamUtils()
	{
		if (!Z_Registration_Info_UClass_USteamUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamUtils.OuterSingleton, Z_Construct_UClass_USteamUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamUtils.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<USteamUtils>()
	{
		return USteamUtils::StaticClass();
	}
	USteamUtils::USteamUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamUtils);
	USteamUtils::~USteamUtils() {}
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamUtils, USteamUtils::StaticClass, TEXT("USteamUtils"), &Z_Registration_Info_UClass_USteamUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamUtils), 303084348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamUtils_h_3001010183(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_USteamUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
