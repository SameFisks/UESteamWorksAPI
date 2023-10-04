// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamScreenshots.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamScreenshots() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamScreenshots();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamScreenshots_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamVRScreenshotType();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileId();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnScreenshotReadyDelegate_Parms
		{
			FScreenshotHandle ScreenshotHandle;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::NewProp_ScreenshotHandle = { "ScreenshotHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnScreenshotReadyDelegate_Parms, ScreenshotHandle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnScreenshotReadyDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::NewProp_ScreenshotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnScreenshotReadyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnScreenshotReadyDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnScreenshotReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReadyDelegate, FScreenshotHandle ScreenshotHandle, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnScreenshotReadyDelegate_Parms
	{
		FScreenshotHandle ScreenshotHandle;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnScreenshotReadyDelegate_Parms Parms;
	Parms.ScreenshotHandle=ScreenshotHandle;
	Parms.Result=Result;
	OnScreenshotReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnScreenshotRequestedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnScreenshotRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequestedDelegate)
{
	OnScreenshotRequestedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UISteamScreenshots::execWriteScreenshot)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Image);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=P_THIS->WriteScreenshot(Z_Param_Image);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execTriggerScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerScreenshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execTagUser)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_ScreenshotHandle);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TagUser(Z_Param_ScreenshotHandle,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execTagPublishedFile)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_ScreenshotHandle);
		P_GET_STRUCT(FPublishedFileId,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TagPublishedFile(Z_Param_ScreenshotHandle,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execSetLocation)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_ScreenshotHandle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLocation(Z_Param_ScreenshotHandle,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execIsScreenshotsHooked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsScreenshotsHooked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execHookScreenshots)
	{
		P_GET_UBOOL(Z_Param_bHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HookScreenshots(Z_Param_bHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execAddVRScreenshotToLibrary)
	{
		P_GET_ENUM(ESteamVRScreenshotType,Z_Param_Type);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VRFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=P_THIS->AddVRScreenshotToLibrary(ESteamVRScreenshotType(Z_Param_Type),Z_Param_FileName,Z_Param_VRFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execAddScreenshotToLibrary)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ThumbnailFileName);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=P_THIS->AddScreenshotToLibrary(Z_Param_FileName,Z_Param_ThumbnailFileName,Z_Param_Out_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamScreenshots::execGetSteamScreenshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamScreenshots**)Z_Param__Result=UISteamScreenshots::GetSteamScreenshots();
		P_NATIVE_END;
	}
	void UISteamScreenshots::StaticRegisterNativesUISteamScreenshots()
	{
		UClass* Class = UISteamScreenshots::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScreenshotToLibrary", &UISteamScreenshots::execAddScreenshotToLibrary },
			{ "AddVRScreenshotToLibrary", &UISteamScreenshots::execAddVRScreenshotToLibrary },
			{ "GetSteamScreenshots", &UISteamScreenshots::execGetSteamScreenshots },
			{ "HookScreenshots", &UISteamScreenshots::execHookScreenshots },
			{ "IsScreenshotsHooked", &UISteamScreenshots::execIsScreenshotsHooked },
			{ "SetLocation", &UISteamScreenshots::execSetLocation },
			{ "TagPublishedFile", &UISteamScreenshots::execTagPublishedFile },
			{ "TagUser", &UISteamScreenshots::execTagUser },
			{ "TriggerScreenshot", &UISteamScreenshots::execTriggerScreenshot },
			{ "WriteScreenshot", &UISteamScreenshots::execWriteScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics
	{
		struct ISteamScreenshots_eventAddScreenshotToLibrary_Parms
		{
			FString FileName;
			FString ThumbnailFileName;
			FIntPoint Size;
			FScreenshotHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName = { "ThumbnailFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddScreenshotToLibrary_Parms, ThumbnailFileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddScreenshotToLibrary_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Adds a screenshot to the user's Steam screenshot library from disk.\n\x09 * Triggers a ScreenshotReady_t callback.\n\x09 * This call is asynchronous, a ScreenshotReady_t callback will be sent when the screenshot has finished writing to disk.\n\x09 *\n\x09 * @param const FString & FileName - The absolute file path to the JPG, PNG, or TGA screenshot.\n\x09 * @param const FString & ThumbnailFileName - The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n\x09 * @param const FIntPoint & Size - The size of the screenshot.\n\x09 * @return FScreenshotHandle - The handle to this screenshot that is valid for the duration of the game process and can be used to apply tags. Returns INVALID_SCREENSHOT_HANDLE if the file could not be saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Adds a screenshot to the user's Steam screenshot library from disk.\nTriggers a ScreenshotReady_t callback.\nThis call is asynchronous, a ScreenshotReady_t callback will be sent when the screenshot has finished writing to disk.\n\n@param const FString & FileName - The absolute file path to the JPG, PNG, or TGA screenshot.\n@param const FString & ThumbnailFileName - The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n@param const FIntPoint & Size - The size of the screenshot.\n@return FScreenshotHandle - The handle to this screenshot that is valid for the duration of the game process and can be used to apply tags. Returns INVALID_SCREENSHOT_HANDLE if the file could not be saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "AddScreenshotToLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::ISteamScreenshots_eventAddScreenshotToLibrary_Parms), Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics
	{
		struct ISteamScreenshots_eventAddVRScreenshotToLibrary_Parms
		{
			ESteamVRScreenshotType Type;
			FString FileName;
			FString VRFileName;
			FScreenshotHandle ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VRFileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddVRScreenshotToLibrary_Parms, Type), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamVRScreenshotType, METADATA_PARAMS(nullptr, 0) }; // 706462677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddVRScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName = { "VRFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddVRScreenshotToLibrary_Parms, VRFileName), METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventAddVRScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\x09 * Triggers a ScreenshotReady_t callback.\n\x09 * This call is asynchronous, a ScreenshotReady_t callback will be sent when the screenshot has finished writing to disk.\n\x09 *\n\x09 * @param ESteamVRScreenshotType Type - The type of VR screenshot that this is.\n\x09 * @param const FString & FileName - The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n\x09 * @param const FString & VRFileName - The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType.\n\x09 * @return FScreenshotHandle - The handle to this screenshot that is valid for the duration of the game process and can be used to apply tags. Returns INVALID_SCREENSHOT_HANDLE if the file could not be saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\nTriggers a ScreenshotReady_t callback.\nThis call is asynchronous, a ScreenshotReady_t callback will be sent when the screenshot has finished writing to disk.\n\n@param ESteamVRScreenshotType Type - The type of VR screenshot that this is.\n@param const FString & FileName - The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n@param const FString & VRFileName - The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType.\n@return FScreenshotHandle - The handle to this screenshot that is valid for the duration of the game process and can be used to apply tags. Returns INVALID_SCREENSHOT_HANDLE if the file could not be saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "AddVRScreenshotToLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::ISteamScreenshots_eventAddVRScreenshotToLibrary_Parms), Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics
	{
		struct ISteamScreenshots_eventGetSteamScreenshots_Parms
		{
			UISteamScreenshots* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventGetSteamScreenshots_Parms, ReturnValue), Z_Construct_UClass_UISteamScreenshots_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "GetSteamScreenshots" },
		{ "DisplayName", "Get Steam Screenshots" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "GetSteamScreenshots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::ISteamScreenshots_eventGetSteamScreenshots_Parms), Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics
	{
		struct ISteamScreenshots_eventHookScreenshots_Parms
		{
			bool bHook;
		};
		static void NewProp_bHook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit(void* Obj)
	{
		((ISteamScreenshots_eventHookScreenshots_Parms*)Obj)->bHook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::NewProp_bHook = { "bHook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamScreenshots_eventHookScreenshots_Parms), &Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::NewProp_bHook,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\x09 * Hooking is disabled by default, and only ever enabled if you do so with this function.\n\x09 * If the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\n\x09 * You can check if hooking is enabled with IsScreenshotsHooked.\n\x09 *\n\x09 * @param bool bHook - Enable (true) or disable (false) hooking?\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\nHooking is disabled by default, and only ever enabled if you do so with this function.\nIf the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\nYou can check if hooking is enabled with IsScreenshotsHooked.\n\n@param bool bHook - Enable (true) or disable (false) hooking?\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "HookScreenshots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::ISteamScreenshots_eventHookScreenshots_Parms), Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_HookScreenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_HookScreenshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics
	{
		struct ISteamScreenshots_eventIsScreenshotsHooked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamScreenshots_eventIsScreenshotsHooked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamScreenshots_eventIsScreenshotsHooked_Parms), &Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Checks if the app is hooking screenshots, or if the Steam Overlay is handling them. This can be toggled with HookScreenshots.\n\x09 *\n\x09 * @return bool - true if the game is hooking screenshots and is expected to handle them; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Checks if the app is hooking screenshots, or if the Steam Overlay is handling them. This can be toggled with HookScreenshots.\n\n@return bool - true if the game is hooking screenshots and is expected to handle them; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "IsScreenshotsHooked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::ISteamScreenshots_eventIsScreenshotsHooked_Parms), Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics
	{
		struct ISteamScreenshots_eventSetLocation_Parms
		{
			FScreenshotHandle ScreenshotHandle;
			FString Location;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_ScreenshotHandle = { "ScreenshotHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventSetLocation_Parms, ScreenshotHandle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventSetLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamScreenshots_eventSetLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamScreenshots_eventSetLocation_Parms), &Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_ScreenshotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\x09 * You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09 *\n\x09 * @param FScreenshotHandle ScreenshotHandle - The handle to the screenshot to tag.\n\x09 * @param const FString & Location - The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax.\n\x09 * @return bool - true if the location was successfully added to the screenshot. false if hScreenshot was invalid, or pchLocation is invalid or too long.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param FScreenshotHandle ScreenshotHandle - The handle to the screenshot to tag.\n@param const FString & Location - The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax.\n@return bool - true if the location was successfully added to the screenshot. false if hScreenshot was invalid, or pchLocation is invalid or too long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "SetLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::ISteamScreenshots_eventSetLocation_Parms), Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_SetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_SetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics
	{
		struct ISteamScreenshots_eventTagPublishedFile_Parms
		{
			FScreenshotHandle ScreenshotHandle;
			FPublishedFileId PublishedFileID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_ScreenshotHandle = { "ScreenshotHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventTagPublishedFile_Parms, ScreenshotHandle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventTagPublishedFile_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileId, METADATA_PARAMS(nullptr, 0) }; // 2659357909
	void Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamScreenshots_eventTagPublishedFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamScreenshots_eventTagPublishedFile_Parms), &Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_ScreenshotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Tags a published file as being visible in the screenshot.\n\x09 * You can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\n\x09 * This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09 * You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09 *\n\x09 * @param FScreenshotHandle ScreenshotHandle - The handle to the screenshot to tag.\n\x09 * @param FPublishedFileId PublishedFileID - The workshop item ID that is in the screenshot.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Tags a published file as being visible in the screenshot.\nYou can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param FScreenshotHandle ScreenshotHandle - The handle to the screenshot to tag.\n@param FPublishedFileId PublishedFileID - The workshop item ID that is in the screenshot.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "TagPublishedFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::ISteamScreenshots_eventTagPublishedFile_Parms), Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics
	{
		struct ISteamScreenshots_eventTagUser_Parms
		{
			FScreenshotHandle ScreenshotHandle;
			FSteamID SteamID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_ScreenshotHandle = { "ScreenshotHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventTagUser_Parms, ScreenshotHandle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventTagUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamScreenshots_eventTagUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamScreenshots_eventTagUser_Parms), &Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_ScreenshotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Tags a Steam user as being visible in the screenshot.\n\x09 * You can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\n\x09 * This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09 * You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09 *\n\x09 * @param FScreenshotHandle ScreenshotHandle - The handle to the screenshot to tag.\n\x09 * @param FSteamID SteamID - The Steam ID of a user that is in the screenshot.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Tags a Steam user as being visible in the screenshot.\nYou can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param FScreenshotHandle ScreenshotHandle - The handle to the screenshot to tag.\n@param FSteamID SteamID - The Steam ID of a user that is in the screenshot.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "TagUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::ISteamScreenshots_eventTagUser_Parms), Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_TagUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_TagUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked.\n\x09 * Triggers a ScreenshotRequested_t callback.\n\x09 * Triggers a ScreenshotReady_t callback.\n\x09 * Only causes ScreenshotRequested_t if hooking has been enabled with HookScreenshots. Otherwise ScreenshotReady_t will be called when the screenshot has been saved and added to the library.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked.\nTriggers a ScreenshotRequested_t callback.\nTriggers a ScreenshotReady_t callback.\nOnly causes ScreenshotRequested_t if hooking has been enabled with HookScreenshots. Otherwise ScreenshotReady_t will be called when the screenshot has been saved and added to the library.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "TriggerScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics
	{
		struct ISteamScreenshots_eventWriteScreenshot_Parms
		{
			UTexture2D* Image;
			FScreenshotHandle ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventWriteScreenshot_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamScreenshots_eventWriteScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) }; // 88635965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/**\n\x09 * Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\x09 * Triggers a ScreenshotReady_t callback.\n\x09 * This call is asynchronous, the ScreenshotReady_t callback will be sent when the screenshot has finished writing to disk.\n\x09 *\n\x09 * @param UTexture2D * Image - The image to write.\n\x09 * @return FScreenshotHandle - The handle to this screenshot that is valid for the duration of the game process and can be used to apply tags. Returns INVALID_SCREENSHOT_HANDLE if the file could not be saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\nTriggers a ScreenshotReady_t callback.\nThis call is asynchronous, the ScreenshotReady_t callback will be sent when the screenshot has finished writing to disk.\n\n@param UTexture2D * Image - The image to write.\n@return FScreenshotHandle - The handle to this screenshot that is valid for the duration of the game process and can be used to apply tags. Returns INVALID_SCREENSHOT_HANDLE if the file could not be saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamScreenshots, nullptr, "WriteScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::ISteamScreenshots_eventWriteScreenshot_Parms), Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamScreenshots);
	UClass* Z_Construct_UClass_UISteamScreenshots_NoRegister()
	{
		return UISteamScreenshots::StaticClass();
	}
	struct Z_Construct_UClass_UISteamScreenshots_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnScreenshotReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnScreenshotReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnScreenshotRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnScreenshotRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamScreenshots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamScreenshots_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamScreenshots_AddScreenshotToLibrary, "AddScreenshotToLibrary" }, // 456024776
		{ &Z_Construct_UFunction_UISteamScreenshots_AddVRScreenshotToLibrary, "AddVRScreenshotToLibrary" }, // 1588449452
		{ &Z_Construct_UFunction_UISteamScreenshots_GetSteamScreenshots, "GetSteamScreenshots" }, // 2602073993
		{ &Z_Construct_UFunction_UISteamScreenshots_HookScreenshots, "HookScreenshots" }, // 3093919950
		{ &Z_Construct_UFunction_UISteamScreenshots_IsScreenshotsHooked, "IsScreenshotsHooked" }, // 2159021320
		{ &Z_Construct_UFunction_UISteamScreenshots_SetLocation, "SetLocation" }, // 2123635461
		{ &Z_Construct_UFunction_UISteamScreenshots_TagPublishedFile, "TagPublishedFile" }, // 335336366
		{ &Z_Construct_UFunction_UISteamScreenshots_TagUser, "TagUser" }, // 1140882267
		{ &Z_Construct_UFunction_UISteamScreenshots_TriggerScreenshot, "TriggerScreenshot" }, // 3361117819
		{ &Z_Construct_UFunction_UISteamScreenshots_WriteScreenshot, "WriteScreenshot" }, // 3345318860
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamScreenshots_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UISteamScreenshots.h" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotReady_MetaData[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/** A screenshot successfully written or otherwise added to the library and can now be tagged. */" },
		{ "DisplayName", "OnScreenshotReady" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "A screenshot successfully written or otherwise added to the library and can now be tagged." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotReady = { "m_OnScreenshotReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamScreenshots, m_OnScreenshotReady), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotReady_MetaData)) }; // 3849035421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotRequested_MetaData[] = {
		{ "Category", "SteamAPI|UISteamScreenshots" },
		{ "Comment", "/** A screenshot has been requested by the user from the Steam screenshot hotkey. This will only be called if HookScreenshots has been enabled, in which case Steam will not take the screenshot itself. */" },
		{ "DisplayName", "OnScreenshotRequested" },
		{ "ModuleRelativePath", "Public/UISteamScreenshots.h" },
		{ "ToolTip", "A screenshot has been requested by the user from the Steam screenshot hotkey. This will only be called if HookScreenshots has been enabled, in which case Steam will not take the screenshot itself." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotRequested = { "m_OnScreenshotRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamScreenshots, m_OnScreenshotRequested), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnScreenshotRequestedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotRequested_MetaData)) }; // 1669103055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamScreenshots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamScreenshots_Statics::NewProp_m_OnScreenshotRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamScreenshots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamScreenshots>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamScreenshots_Statics::ClassParams = {
		&UISteamScreenshots::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamScreenshots_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamScreenshots_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UISteamScreenshots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamScreenshots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamScreenshots()
	{
		if (!Z_Registration_Info_UClass_UISteamScreenshots.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamScreenshots.OuterSingleton, Z_Construct_UClass_UISteamScreenshots_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamScreenshots.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamScreenshots>()
	{
		return UISteamScreenshots::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamScreenshots);
	struct Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamScreenshots, UISteamScreenshots::StaticClass, TEXT("UISteamScreenshots"), &Z_Registration_Info_UClass_UISteamScreenshots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamScreenshots), 2121974626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_90920019(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamScreenshots_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
