// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamInventory.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamInventory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInventory();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInventory_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAPICall();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemPriceData();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamInventoryDefinitionUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryDefinitionUpdateDelegate)
{
	OnSteamInventoryDefinitionUpdateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms
		{
			ESteamResult Result;
			FSteamID SteamID;
			int32 NumEligiblePromoItemDefs;
			bool bCachedData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumEligiblePromoItemDefs;
		static void NewProp_bCachedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_NumEligiblePromoItemDefs = { "NumEligiblePromoItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms, NumEligiblePromoItemDefs), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_bCachedData_SetBit(void* Obj)
	{
		((_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms*)Obj)->bCachedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_bCachedData = { "bCachedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms), &Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_bCachedData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_NumEligiblePromoItemDefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::NewProp_bCachedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamInventoryEligiblePromoItemDefIDsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryEligiblePromoItemDefIDsDelegate, ESteamResult Result, FSteamID SteamID, int32 NumEligiblePromoItemDefs, bool bCachedData)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms
	{
		ESteamResult Result;
		FSteamID SteamID;
		int32 NumEligiblePromoItemDefs;
		bool bCachedData;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryEligiblePromoItemDefIDsDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.SteamID=SteamID;
	Parms.NumEligiblePromoItemDefs=NumEligiblePromoItemDefs;
	Parms.bCachedData=bCachedData ? true : false;
	OnSteamInventoryEligiblePromoItemDefIDsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryFullUpdateDelegate_Parms
		{
			FSteamInventoryResult ResultHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryFullUpdateDelegate_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::NewProp_ResultHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamInventoryFullUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryFullUpdateDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamInventoryFullUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdateDelegate, FSteamInventoryResult ResultHandle)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryFullUpdateDelegate_Parms
	{
		FSteamInventoryResult ResultHandle;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryFullUpdateDelegate_Parms Parms;
	Parms.ResultHandle=ResultHandle;
	OnSteamInventoryFullUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryResultReadyDelegate_Parms
		{
			FSteamInventoryResult ResultHandle;
			ESteamResult Result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryResultReadyDelegate_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryResultReadyDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamInventoryResultReadyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryResultReadyDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamInventoryResultReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReadyDelegate, FSteamInventoryResult ResultHandle, ESteamResult Result)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryResultReadyDelegate_Parms
	{
		FSteamInventoryResult ResultHandle;
		ESteamResult Result;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryResultReadyDelegate_Parms Parms;
	Parms.ResultHandle=ResultHandle;
	Parms.Result=Result;
	OnSteamInventoryResultReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms
		{
			ESteamResult Result;
			int64 OrderID;
			int64 TransID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OrderID;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TransID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms, OrderID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_TransID = { "TransID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms, TransID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_OrderID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::NewProp_TransID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultDelegate, ESteamResult Result, int64 OrderID, int64 TransID)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms
	{
		ESteamResult Result;
		int64 OrderID;
		int64 TransID;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryStartPurchaseResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.OrderID=OrderID;
	Parms.TransID=TransID;
	OnSteamInventoryStartPurchaseResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryRequestPricesResultDelegate_Parms
		{
			ESteamResult Result;
			FString Currency;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryRequestPricesResultDelegate_Parms, Result), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryRequestPricesResultDelegate_Parms, Currency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin, nullptr, "OnSteamInventoryRequestPricesResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryRequestPricesResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultDelegate, ESteamResult Result, const FString& Currency)
{
	struct _Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryRequestPricesResultDelegate_Parms
	{
		ESteamResult Result;
		FString Currency;
	};
	_Script_SteamAPI_BPL_Plugin_eventOnSteamInventoryRequestPricesResultDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.Currency=Currency;
	OnSteamInventoryRequestPricesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UISteamInventory::execSetPropertyFloat)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_UpdateHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPropertyFloat(Z_Param_UpdateHandle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execSetPropertyInt)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_UpdateHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPropertyInt(Z_Param_UpdateHandle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execSetPropertyBool)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_UpdateHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPropertyBool(Z_Param_UpdateHandle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execSetPropertyString)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_UpdateHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPropertyString(Z_Param_UpdateHandle,Z_Param_ItemID,Z_Param_PropertyName,Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execRemoveProperty)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_UpdateHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveProperty(Z_Param_UpdateHandle,Z_Param_ItemID,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execSubmitUpdateProperties)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_UpdateHandle);
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SubmitUpdateProperties(Z_Param_UpdateHandle,Z_Param_Out_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execStartUpdateProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInventoryUpdateHandle*)Z_Param__Result=P_THIS->StartUpdateProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execTriggerItemDrop)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemDef,Z_Param_DropListDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TriggerItemDrop(Z_Param_Out_ResultHandle,Z_Param_DropListDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execTransferItemQuantity)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIdSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIdDest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransferItemQuantity(Z_Param_Out_ResultHandle,Z_Param_ItemIdSource,Z_Param_Quantity,Z_Param_ItemIdDest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execSerializeResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SerializeResult(Z_Param_ResultHandle,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execRequestPrices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamAPICall*)Z_Param__Result=P_THIS->RequestPrices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execLoadItemDefinitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadItemDefinitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGrantPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GrantPromoItems(Z_Param_Out_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetResultTimestamp)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResultTimestamp(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetResultStatus)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamResult*)Z_Param__Result=P_THIS->GetResultStatus(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetResultItems)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_ItemsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetResultItems(Z_Param_ResultHandle,Z_Param_Out_ItemsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetResultItemProperty)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetResultItemProperty(Z_Param_ResultHandle,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetNumItemsWithPrices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumItemsWithPrices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetItemsWithPrices)
	{
		P_GET_TARRAY_REF(FSteamItemPriceData,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemsWithPrices(Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetItemPrice)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_CurrentPrice);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BasePrice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemPrice(Z_Param_ItemDef,Z_Param_Out_CurrentPrice,Z_Param_Out_BasePrice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetItemsByID)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TARRAY_REF(FSteamItemInstanceID,Z_Param_Out_InstanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemsByID(Z_Param_Out_ResultHandle,Z_Param_Out_InstanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetItemDefinitionProperty)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_Definition);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemDefinitionProperty(Z_Param_Definition,Z_Param_PropertyName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetItemDefinitionIDs)
	{
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemDefinitionIDs(Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetEligiblePromoItemDefinitionIDs)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEligiblePromoItemDefinitionIDs(Z_Param_SteamID,Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetAllItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllItems(Z_Param_Out_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execDestroyResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyResult(Z_Param_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execDeserializeResult)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TARRAY(uint8,Z_Param_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeserializeResult(Z_Param_Out_ResultHandle,Z_Param_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execConsumeItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConsumeItem(Z_Param_Out_ResultHandle,Z_Param_ItemID,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execCheckResultSteamID)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_ResultHandle);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckResultSteamID(Z_Param_ResultHandle,Z_Param_SteamIDExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execAddPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPromoItems(Z_Param_Out_ResultHandle,Z_Param_Out_ItemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execAddPromoItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPromoItem(Z_Param_Out_ResultHandle,Z_Param_ItemDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInventory::execGetSteamInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamInventory**)Z_Param__Result=UISteamInventory::GetSteamInventory();
		P_NATIVE_END;
	}
	void UISteamInventory::StaticRegisterNativesUISteamInventory()
	{
		UClass* Class = UISteamInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPromoItem", &UISteamInventory::execAddPromoItem },
			{ "AddPromoItems", &UISteamInventory::execAddPromoItems },
			{ "CheckResultSteamID", &UISteamInventory::execCheckResultSteamID },
			{ "ConsumeItem", &UISteamInventory::execConsumeItem },
			{ "DeserializeResult", &UISteamInventory::execDeserializeResult },
			{ "DestroyResult", &UISteamInventory::execDestroyResult },
			{ "GetAllItems", &UISteamInventory::execGetAllItems },
			{ "GetEligiblePromoItemDefinitionIDs", &UISteamInventory::execGetEligiblePromoItemDefinitionIDs },
			{ "GetItemDefinitionIDs", &UISteamInventory::execGetItemDefinitionIDs },
			{ "GetItemDefinitionProperty", &UISteamInventory::execGetItemDefinitionProperty },
			{ "GetItemPrice", &UISteamInventory::execGetItemPrice },
			{ "GetItemsByID", &UISteamInventory::execGetItemsByID },
			{ "GetItemsWithPrices", &UISteamInventory::execGetItemsWithPrices },
			{ "GetNumItemsWithPrices", &UISteamInventory::execGetNumItemsWithPrices },
			{ "GetResultItemProperty", &UISteamInventory::execGetResultItemProperty },
			{ "GetResultItems", &UISteamInventory::execGetResultItems },
			{ "GetResultStatus", &UISteamInventory::execGetResultStatus },
			{ "GetResultTimestamp", &UISteamInventory::execGetResultTimestamp },
			{ "GetSteamInventory", &UISteamInventory::execGetSteamInventory },
			{ "GrantPromoItems", &UISteamInventory::execGrantPromoItems },
			{ "LoadItemDefinitions", &UISteamInventory::execLoadItemDefinitions },
			{ "RemoveProperty", &UISteamInventory::execRemoveProperty },
			{ "RequestPrices", &UISteamInventory::execRequestPrices },
			{ "SerializeResult", &UISteamInventory::execSerializeResult },
			{ "SetPropertyBool", &UISteamInventory::execSetPropertyBool },
			{ "SetPropertyFloat", &UISteamInventory::execSetPropertyFloat },
			{ "SetPropertyInt", &UISteamInventory::execSetPropertyInt },
			{ "SetPropertyString", &UISteamInventory::execSetPropertyString },
			{ "StartUpdateProperties", &UISteamInventory::execStartUpdateProperties },
			{ "SubmitUpdateProperties", &UISteamInventory::execSubmitUpdateProperties },
			{ "TransferItemQuantity", &UISteamInventory::execTransferItemQuantity },
			{ "TriggerItemDrop", &UISteamInventory::execTriggerItemDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics
	{
		struct ISteamInventory_eventAddPromoItem_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemDef ItemDef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventAddPromoItem_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	void Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventAddPromoItem_Parms), &Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Grant a specific one-time promotional item to the current user.\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own -\n\x09 * a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\n\x09 * have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the -\n\x09 * item to be granted if the user owns either TF2 or SpaceWar.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemDef ItemDef - The ItemDef to grant the player.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own -\na specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\nhave promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the -\nitem to be granted if the user owns either TF2 or SpaceWar.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemDef ItemDef - The ItemDef to grant the player.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nOn success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "AddPromoItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::ISteamInventory_eventAddPromoItem_Parms), Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_AddPromoItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_AddPromoItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics
	{
		struct ISteamInventory_eventAddPromoItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<FSteamItemDef> ItemDefs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventAddPromoItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_MetaData)) }; // 1666265417
	void Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventAddPromoItems_Parms), &Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ItemDefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Grant a specific one-time promotional items to the current user.\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\n\x09 * specific other game. If you want to grant a single promotional item then use AddPromoItem. If you want to grant all possible promo items then use GrantPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\n\x09 * have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\n\x09 * to be granted if the user owns either TF2 or SpaceWar.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param const TArray<FSteamItemDef> & ItemDefs - The list of items to grant the user.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional items to the current user.\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\nspecific other game. If you want to grant a single promotional item then use AddPromoItem. If you want to grant all possible promo items then use GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that -\nhave promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\nto be granted if the user owns either TF2 or SpaceWar.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param const TArray<FSteamItemDef> & ItemDefs - The list of items to grant the user.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nOn success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "AddPromoItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::ISteamInventory_eventAddPromoItems_Parms), Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_AddPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_AddPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics
	{
		struct ISteamInventory_eventCheckResultSteamID_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamID SteamIDExpected;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDExpected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventCheckResultSteamID_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected = { "SteamIDExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventCheckResultSteamID_Parms, SteamIDExpected), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	void Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Checks whether an inventory result handle belongs to the specified Steam ID.\n\x09 * This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - \x09The inventory result handle to check the Steam ID on.\n\x09 * @param FSteamID SteamIDExpected - The Steam ID to verify.\n\x09 * @return bool - true if the result belongs to the target steam ID; otherwise, false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Checks whether an inventory result handle belongs to the specified Steam ID.\nThis is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\n@param FSteamInventoryResult ResultHandle -  The inventory result handle to check the Steam ID on.\n@param FSteamID SteamIDExpected - The Steam ID to verify.\n@return bool - true if the result belongs to the target steam ID; otherwise, false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "CheckResultSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::ISteamInventory_eventCheckResultSteamID_Parms), Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_CheckResultSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_CheckResultSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics
	{
		struct ISteamInventory_eventConsumeItem_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemInstanceID ItemID;
			int32 Quantity;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventConsumeItem_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventConsumeItem_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventConsumeItem_Parms), &Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\x09 * Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\n\x09 * ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemInstanceID ItemID - The item instance id to consume.\n\x09 * @param int32 Quantity - The number of items in that stack to consume.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\nOnce an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\nConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemInstanceID ItemID - The item instance id to consume.\n@param int32 Quantity - The number of items in that stack to consume.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "ConsumeItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::ISteamInventory_eventConsumeItem_Parms), Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics
	{
		struct ISteamInventory_eventDeserializeResult_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventDeserializeResult_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Deserializes a result set and verifies the signature bytes.\n\x09 * This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. The \"expired\" result could indicate that the data may be out of date\n\x09 * not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. You could compare the timestamp from -\n\x09 * GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, or you could request the player with expired data to send an updated result set.\n\x09 * You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\x09 * NOTE: The bRESERVED_MUST_BE_FALSE parameter is reserved for future use and should never be set to true.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param TArray<uint8> Buffer - The buffer to deserialize.\n\x09 * @return bool - Always returns true and then delivers error codes via GetResultStatus.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Deserializes a result set and verifies the signature bytes.\nThis call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. The \"expired\" result could indicate that the data may be out of date\nnot just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. You could compare the timestamp from -\nGetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, or you could request the player with expired data to send an updated result set.\nYou should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\nNOTE: The bRESERVED_MUST_BE_FALSE parameter is reserved for future use and should never be set to true.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param TArray<uint8> Buffer - The buffer to deserialize.\n@return bool - Always returns true and then delivers error codes via GetResultStatus.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "DeserializeResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::ISteamInventory_eventDeserializeResult_Parms), Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_DeserializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_DeserializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics
	{
		struct ISteamInventory_eventDestroyResult_Parms
		{
			FSteamInventoryResult ResultHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventDestroyResult_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::NewProp_ResultHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Destroys a result handle and frees all associated memory.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The inventory result handle to destroy.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Destroys a result handle and frees all associated memory.\n\n@param FSteamInventoryResult ResultHandle - The inventory result handle to destroy.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "DestroyResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::ISteamInventory_eventDestroyResult_Parms), Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_DestroyResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_DestroyResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics
	{
		struct ISteamInventory_eventGetAllItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetAllItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	void Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetAllItems_Parms), &Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Start retrieving all items in the current users inventory.\n\x09 *\n\x09 * NOTE: Calls to this function are subject to rate limits and may return cached results if called too frequently. It is suggested that you call this function only when you are about to display the user's full inventory, -\n\x09 * or if you expect that the inventory may have changed.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Start retrieving all items in the current users inventory.\n\nNOTE: Calls to this function are subject to rate limits and may return cached results if called too frequently. It is suggested that you call this function only when you are about to display the user's full inventory, -\nor if you expect that the inventory may have changed.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetAllItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::ISteamInventory_eventGetAllItems_Parms), Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics
	{
		struct ISteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms
		{
			FSteamID SteamID;
			TArray<FSteamItemDef> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 2174972862
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	void Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Get the list of item definition ids that a user can be granted.\n\x09 * You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\x09 *\n\x09 * @param FSteamID SteamID - The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n\x09 * @param TArray<FSteamItemDef> & Items - \x09Returns the item definition ids by copying them into this array.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Get the list of item definition ids that a user can be granted.\nYou should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\n@param FSteamID SteamID - The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n@param TArray<FSteamItemDef> & Items -       Returns the item definition ids by copying them into this array.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetEligiblePromoItemDefinitionIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::ISteamInventory_eventGetEligiblePromoItemDefinitionIDs_Parms), Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics
	{
		struct ISteamInventory_eventGetItemDefinitionIDs_Parms
		{
			TArray<FSteamItemDef> Items;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemDefinitionIDs_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	void Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\x09 * These item definitions may not necessarily be contiguous integers.\n\x09 * This should be called in response to a SteamInventoryDefinitionUpdate_t callback. There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55)\n\x09 * and does not allow for adding new item types without a client patch.\n\x09 *\n\x09 * @param TArray<FSteamItemDef> & Items - Returns the item definitions by copying them into this array.\n\x09 * @return bool - This call returns true upon success. It only returns false if item definitions have not been loaded from the server, or no item defintions exist for the current application.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\nThese item definitions may not necessarily be contiguous integers.\nThis should be called in response to a SteamInventoryDefinitionUpdate_t callback. There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55)\nand does not allow for adding new item types without a client patch.\n\n@param TArray<FSteamItemDef> & Items - Returns the item definitions by copying them into this array.\n@return bool - This call returns true upon success. It only returns false if item definitions have not been loaded from the server, or no item defintions exist for the current application." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetItemDefinitionIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::ISteamInventory_eventGetItemDefinitionIDs_Parms), Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics
	{
		struct ISteamInventory_eventGetItemDefinitionProperty_Parms
		{
			FSteamItemDef Definition;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemDefinitionProperty_Parms, Definition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Gets a string property from the specified item definition.\n\x09 * Gets a property value for a specific item definition.\n\x09 * Note that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\n\x09 * Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\x09 *\n\x09 * @param FSteamItemDef Definition - The item definition to get the properties for.\n\x09 * @param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09 * @param FString & Value - Returns the value associated with pchPropertyName.\n\x09 * @return bool - This returns true upon success; otherwise, false indicating that the item definitions have not been loaded from the server, or no item definitions exist for the current application, or the property name was not found in the item definition.\n\x09 * The associated value is returned via pchValueBuffer, and the total number of bytes required to hold the value is available from punValueBufferSizeOut. It's recommended to call this function twice, the first time with pchValueBuffer\n\x09 * set to NULL and punValueBufferSizeOut set to zero to get the size required for the buffer for the subsequent call.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Gets a string property from the specified item definition.\nGets a property value for a specific item definition.\nNote that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\nPass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\n@param FSteamItemDef Definition - The item definition to get the properties for.\n@param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param FString & Value - Returns the value associated with pchPropertyName.\n@return bool - This returns true upon success; otherwise, false indicating that the item definitions have not been loaded from the server, or no item definitions exist for the current application, or the property name was not found in the item definition.\nThe associated value is returned via pchValueBuffer, and the total number of bytes required to hold the value is available from punValueBufferSizeOut. It's recommended to call this function twice, the first time with pchValueBuffer\nset to NULL and punValueBufferSizeOut set to zero to get the size required for the buffer for the subsequent call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetItemDefinitionProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::ISteamInventory_eventGetItemDefinitionProperty_Parms), Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics
	{
		struct ISteamInventory_eventGetItemPrice_Parms
		{
			FSteamItemDef ItemDef;
			int64 CurrentPrice;
			int64 BasePrice;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CurrentPrice;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BasePrice;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_CurrentPrice = { "CurrentPrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemPrice_Parms, CurrentPrice), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetItemPrice_Parms), &Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_CurrentPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_BasePrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09 *\n\x09 * @param FSteamItemDef ItemDef - The item definition id to retrieve the price for\n\x09 * @param int64 & CurrentPrice - The price pointer to populate. Prices are rendered in the user's local currency.\n\x09 * @param int64 & BasePrice\n\x09 * @return bool - true upon success, indicating that pPrice has been successfully filled with the price for the given item definition id.\n\x09 * false if the parameters are invalid or if there is no price for the given item definition id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param FSteamItemDef ItemDef - The item definition id to retrieve the price for\n@param int64 & CurrentPrice - The price pointer to populate. Prices are rendered in the user's local currency.\n@param int64 & BasePrice\n@return bool - true upon success, indicating that pPrice has been successfully filled with the price for the given item definition id.\nfalse if the parameters are invalid or if there is no price for the given item definition id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetItemPrice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::ISteamInventory_eventGetItemPrice_Parms), Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetItemPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetItemPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics
	{
		struct ISteamInventory_eventGetItemsByID_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<FSteamItemInstanceID> InstanceIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemsByID_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner = { "InstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs = { "InstanceIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemsByID_Parms, InstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_MetaData)) }; // 3818367112
	void Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetItemsByID_Parms), &Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_InstanceIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Gets the state of a subset of the current user's inventory.\n\x09 * The subset is specified by an array of item instance IDs.\n\x09 * The results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory.\n\x09 * For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param const TArray<FSteamItemInstanceID> & InstanceIDs - A list of the item instance ids to update the state of.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Gets the state of a subset of the current user's inventory.\nThe subset is specified by an array of item instance IDs.\nThe results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory.\nFor example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param const TArray<FSteamItemInstanceID> & InstanceIDs - A list of the item instance ids to update the state of.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer. Returns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetItemsByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::ISteamInventory_eventGetItemsByID_Parms), Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetItemsByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetItemsByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics
	{
		struct ISteamInventory_eventGetItemsWithPrices_Parms
		{
			TArray<FSteamItemPriceData> ItemData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ItemData_Inner = { "ItemData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemPriceData, METADATA_PARAMS(nullptr, 0) }; // 134755886
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetItemsWithPrices_Parms, ItemData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 134755886
	void Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ItemData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, you can call this method to get all the pricing for applicable item definitions. Use the result of GetNumItemsWithPrices as the the size of the arrays that you pass in.\n\x09 *\n\x09 * @param TArray<FSteamItemPriceData> & ItemData - The array of item definition ids to populate\n\x09 * @return bool - true upon success, indicating that pArrayItemDefs and pPrices have been successfully filled with the item definition ids and prices of items that are for sale. false if the parameters are invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get all the pricing for applicable item definitions. Use the result of GetNumItemsWithPrices as the the size of the arrays that you pass in.\n\n@param TArray<FSteamItemPriceData> & ItemData - The array of item definition ids to populate\n@return bool - true upon success, indicating that pArrayItemDefs and pPrices have been successfully filled with the item definition ids and prices of items that are for sale. false if the parameters are invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetItemsWithPrices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::ISteamInventory_eventGetItemsWithPrices_Parms), Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics
	{
		struct ISteamInventory_eventGetNumItemsWithPrices_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\x09 *\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetNumItemsWithPrices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::ISteamInventory_eventGetNumItemsWithPrices_Parms), Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics
	{
		struct ISteamInventory_eventGetResultItemProperty_Parms
		{
			FSteamInventoryResult ResultHandle;
			int32 ItemIndex;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultItemProperty_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Gets the dynamic properties from an item in an inventory result set.\n\x09 * Property names are always composed of ASCII letters, numbers, and/or underscores.\n\x09 * If the results do not fit in the given buffer, partial results may be copied.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The result handle containing the item to get the properties of.\n\x09 * @param int32 ItemIndex\n\x09 * @param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09 * @param FString & Value - Returns the value associated with pchPropertyName.\n\x09 * @return bool - This returns true upon success; otherwise, false indicating that the inventory result handle was invalid or the provided index does not contain an item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Gets the dynamic properties from an item in an inventory result set.\nProperty names are always composed of ASCII letters, numbers, and/or underscores.\nIf the results do not fit in the given buffer, partial results may be copied.\n\n@param FSteamInventoryResult ResultHandle - The result handle containing the item to get the properties of.\n@param int32 ItemIndex\n@param const FString & PropertyName - The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param FString & Value - Returns the value associated with pchPropertyName.\n@return bool - This returns true upon success; otherwise, false indicating that the inventory result handle was invalid or the provided index does not contain an item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetResultItemProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::ISteamInventory_eventGetResultItemProperty_Parms), Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetResultItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetResultItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics
	{
		struct ISteamInventory_eventGetResultItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<FSteamItemDetails> ItemsArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ItemsArray_Inner = { "ItemsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) }; // 505923140
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ItemsArray = { "ItemsArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultItems_Parms, ItemsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 505923140
	void Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGetResultItems_Parms), &Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ItemsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ItemsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Get the items associated with an inventory result handle.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The inventory result handle to get the items for.\n\x09 * @param TArray<FSteamItemDetails> & ItemsArray - The details are returned by copying them into this array.\n\x09 * @return bool - true if the call was successful, otherwise false.\n\x09 * Potential failure reasons include:\n\x09 * resultHandle is invalid or the inventory result handle is not ready.\n\x09 * pOutItemsArray is not large enough to hold the array.\n\x09 * The user has no items.\n\x09 * If the call is successful then punItemDefIDsArraySize will contain the number of item definitions available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Get the items associated with an inventory result handle.\n\n@param FSteamInventoryResult ResultHandle - The inventory result handle to get the items for.\n@param TArray<FSteamItemDetails> & ItemsArray - The details are returned by copying them into this array.\n@return bool - true if the call was successful, otherwise false.\nPotential failure reasons include:\nresultHandle is invalid or the inventory result handle is not ready.\npOutItemsArray is not large enough to hold the array.\nThe user has no items.\nIf the call is successful then punItemDefIDsArraySize will contain the number of item definitions available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetResultItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::ISteamInventory_eventGetResultItems_Parms), Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetResultItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetResultItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics
	{
		struct ISteamInventory_eventGetResultStatus_Parms
		{
			FSteamInventoryResult ResultHandle;
			ESteamResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultStatus_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamResult, METADATA_PARAMS(nullptr, 0) }; // 4167440504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Find out the status of an asynchronous inventory result handle.\n\x09 * This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - \x09The inventory result handle to get the status for.\n\x09 * @return ESteamResult - Whether the call was successful or not.\n\x09 * Possible values:\n\x09 *  k_EResultPending - Still in progress.\n\x09 *  k_EResultOK - Done, the request has completed successfully and the result is ready.\n\x09 *  k_EResultExpired - Done, result ready, maybe out of date (see DeserializeResult)\n\x09 *  k_EResultInvalidParam - ERROR: Invalid API call parameters.\n\x09 *  k_EResultServiceUnavailable - ERROR: Service temporarily down, you may retry later.\n\x09 *  k_EResultLimitExceeded - ERROR: Operation would exceed per-user inventory limits.\n\x09 *  k_EResultFail - ERROR: Generic error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Find out the status of an asynchronous inventory result handle.\nThis is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\n@param FSteamInventoryResult ResultHandle -  The inventory result handle to get the status for.\n@return ESteamResult - Whether the call was successful or not.\nPossible values:\n k_EResultPending - Still in progress.\n k_EResultOK - Done, the request has completed successfully and the result is ready.\n k_EResultExpired - Done, result ready, maybe out of date (see DeserializeResult)\n k_EResultInvalidParam - ERROR: Invalid API call parameters.\n k_EResultServiceUnavailable - ERROR: Service temporarily down, you may retry later.\n k_EResultLimitExceeded - ERROR: Operation would exceed per-user inventory limits.\n k_EResultFail - ERROR: Generic error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetResultStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::ISteamInventory_eventGetResultStatus_Parms), Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetResultStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetResultStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics
	{
		struct ISteamInventory_eventGetResultTimestamp_Parms
		{
			FSteamInventoryResult ResultHandle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultTimestamp_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Gets the server time at which the result was generated.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - \x09The inventory result handle to get the timestamp for.\n\x09 * @return int32 - The timestamp is provided as Unix epoch time (Time since Jan 1st, 1970)\n\x09 * You can compare this value against ISteamUtils::GetServerRealTime to determine the age of the result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Gets the server time at which the result was generated.\n\n@param FSteamInventoryResult ResultHandle -  The inventory result handle to get the timestamp for.\n@return int32 - The timestamp is provided as Unix epoch time (Time since Jan 1st, 1970)\nYou can compare this value against ISteamUtils::GetServerRealTime to determine the age of the result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetResultTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::ISteamInventory_eventGetResultTimestamp_Parms), Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetResultTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetResultTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics
	{
		struct ISteamInventory_eventGetSteamInventory_Parms
		{
			UISteamInventory* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGetSteamInventory_Parms, ReturnValue), Z_Construct_UClass_UISteamInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamInventory" },
		{ "DisplayName", "Steam Inventory" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GetSteamInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::ISteamInventory_eventGetSteamInventory_Parms), Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GetSteamInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GetSteamInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics
	{
		struct ISteamInventory_eventGrantPromoItems_Parms
		{
			FSteamInventoryResult ResultHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventGrantPromoItems_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	void Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventGrantPromoItems_Parms), &Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Grant all potential one-time promotional items to the current user.\n\x09 * This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\n\x09 * specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\n\x09 * Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that have -\n\x09 * promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\n\x09 * to be granted if the user owns either TF2 or SpaceWar.\n\x09 * promo: owns:440;owns:480\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * On success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Grant all potential one-time promotional items to the current user.\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to grant an item to users who also own a -\nspecific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. This version will grant all items that have -\npromo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. For example the following will allow the item -\nto be granted if the user owns either TF2 or SpaceWar.\npromo: owns:440;owns:480\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nOn success, the inventory result will include items which were granted, if any. If no items were granted because the user isn't eligible for any promotions, this is still considered a success.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "GrantPromoItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::ISteamInventory_eventGrantPromoItems_Parms), Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_GrantPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_GrantPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics
	{
		struct ISteamInventory_eventLoadItemDefinitions_Parms
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
	void Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Triggers an asynchronous load and refresh of item definitions.\n\x09 * Item definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. Some of these properties are required to display items on the Steam community web site.\n\x09 * Other properties can be defined by applications. There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for -\n\x09 * adding new item types without a client patch.\n\x09 * Triggers a SteamInventoryDefinitionUpdate_t callback.\n\x09 *\n\x09 * @return bool - This call will always return true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Triggers an asynchronous load and refresh of item definitions.\nItem definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. Some of these properties are required to display items on the Steam community web site.\nOther properties can be defined by applications. There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for -\nadding new item types without a client patch.\nTriggers a SteamInventoryDefinitionUpdate_t callback.\n\n@return bool - This call will always return true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "LoadItemDefinitions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::ISteamInventory_eventLoadItemDefinitions_Parms), Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics
	{
		struct ISteamInventory_eventRemoveProperty_Parms
		{
			FSteamInventoryUpdateHandle UpdateHandle;
			FSteamItemInstanceID ItemID;
			FString PropertyName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventRemoveProperty_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventRemoveProperty_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventRemoveProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventRemoveProperty_Parms), &Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Removes a dynamic property for the given item.\n\x09 *\n\x09 * @param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param FSteamItemInstanceID ItemID - ID of the item being modified.\n\x09 * @param const FString & PropertyName - The dynamic property being removed.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Removes a dynamic property for the given item.\n\n@param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param FSteamItemInstanceID ItemID - ID of the item being modified.\n@param const FString & PropertyName - The dynamic property being removed.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "RemoveProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::ISteamInventory_eventRemoveProperty_Parms), Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_RemoveProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_RemoveProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics
	{
		struct ISteamInventory_eventRequestPrices_Parms
		{
			FSteamAPICall ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventRequestPrices_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamAPICall, METADATA_PARAMS(nullptr, 0) }; // 3437648807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Request prices for all item definitions that can be purchased in the user's local currency. A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. After that, -\n\x09 * you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09 *\n\x09 * @return FSteamAPICall - SteamAPICall_t to be used with a SteamInventoryRequestPricesResult_t call result. Returns k_uAPICallInvalid if there was an internal problem.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency. A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. After that, -\nyou can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\n@return FSteamAPICall - SteamAPICall_t to be used with a SteamInventoryRequestPricesResult_t call result. Returns k_uAPICallInvalid if there was an internal problem." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "RequestPrices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::ISteamInventory_eventRequestPrices_Parms), Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_RequestPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_RequestPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics
	{
		struct ISteamInventory_eventSerializeResult_Parms
		{
			FSteamInventoryResult ResultHandle;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSerializeResult_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSerializeResult_Parms), &Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\x09 * A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. This is a secure way of preventing hackers from lying about -\n\x09 * posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. The size of a serialized result depends on the number items which are being serialized. When securely -\n\x09 * transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\n\x09 * Results have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\n\x09 * If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\x09 *\n\x09 * @param FSteamInventoryResult ResultHandle - The inventory result handle to serialize.\n\x09 * @param TArray<uint8> & Buffer - The buffer that the serialized result will be copied into.\n\x09 * @return bool - true upon success, indicating that punOutBufferSize has been successfully filled with the size of the buffer, and if pOutBuffer points to a buffer of sufficient size then it is filled out as well.\n\x09 * false under the following conditions:\n\x09 * The function was not called by a regular user. This call is not supported on GameServers.\n\x09 * resultHandle is invalid or the inventory result handle is not ready.\n\x09 * The value passed into punOutBufferSize was smaller then expected and pOutBuffer was not NULL.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\nA result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. This is a secure way of preventing hackers from lying about -\nposessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. The size of a serialized result depends on the number items which are being serialized. When securely -\ntransmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\nResults have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\nIf this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\n@param FSteamInventoryResult ResultHandle - The inventory result handle to serialize.\n@param TArray<uint8> & Buffer - The buffer that the serialized result will be copied into.\n@return bool - true upon success, indicating that punOutBufferSize has been successfully filled with the size of the buffer, and if pOutBuffer points to a buffer of sufficient size then it is filled out as well.\nfalse under the following conditions:\nThe function was not called by a regular user. This call is not supported on GameServers.\nresultHandle is invalid or the inventory result handle is not ready.\nThe value passed into punOutBufferSize was smaller then expected and pOutBuffer was not NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "SerializeResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::ISteamInventory_eventSerializeResult_Parms), Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_SerializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_SerializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics
	{
		struct ISteamInventory_eventSetPropertyBool_Parms
		{
			FSteamInventoryUpdateHandle UpdateHandle;
			FSteamItemInstanceID ItemID;
			FString PropertyName;
			bool Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyBool_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyBool_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyBool_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ISteamInventory_eventSetPropertyBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventSetPropertyBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param FSteamItemInstanceID ItemID - ID of the item being modified.\n\x09 * @param const FString & PropertyName - The dynamic property being added or updated.\n\x09 * @param bool Value - The value being set.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param FSteamItemInstanceID ItemID - ID of the item being modified.\n@param const FString & PropertyName - The dynamic property being added or updated.\n@param bool Value - The value being set.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "SetPropertyBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::ISteamInventory_eventSetPropertyBool_Parms), Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_SetPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_SetPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics
	{
		struct ISteamInventory_eventSetPropertyFloat_Parms
		{
			FSteamInventoryUpdateHandle UpdateHandle;
			FSteamItemInstanceID ItemID;
			FString PropertyName;
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyFloat_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyFloat_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyFloat_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventSetPropertyFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSetPropertyFloat_Parms), &Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param FSteamItemInstanceID ItemID - ID of the item being modified.\n\x09 * @param const FString & PropertyName - The dynamic property being added or updated.\n\x09 * @param float Value - The value being set.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param FSteamItemInstanceID ItemID - ID of the item being modified.\n@param const FString & PropertyName - The dynamic property being added or updated.\n@param float Value - The value being set.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "SetPropertyFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::ISteamInventory_eventSetPropertyFloat_Parms), Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_SetPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_SetPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics
	{
		struct ISteamInventory_eventSetPropertyInt_Parms
		{
			FSteamInventoryUpdateHandle UpdateHandle;
			FSteamItemInstanceID ItemID;
			FString PropertyName;
			int64 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyInt_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyInt_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyInt_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventSetPropertyInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSetPropertyInt_Parms), &Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param FSteamItemInstanceID ItemID - ID of the item being modified.\n\x09 * @param const FString & PropertyName - The dynamic property being added or updated.\n\x09 * @param int64 Value - The value being set.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param FSteamItemInstanceID ItemID - ID of the item being modified.\n@param const FString & PropertyName - The dynamic property being added or updated.\n@param int64 Value - The value being set.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "SetPropertyInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::ISteamInventory_eventSetPropertyInt_Parms), Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_SetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_SetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics
	{
		struct ISteamInventory_eventSetPropertyString_Parms
		{
			FSteamInventoryUpdateHandle UpdateHandle;
			FSteamItemInstanceID ItemID;
			FString PropertyName;
			FString PropertyValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyString_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyString_Parms, ItemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyString_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSetPropertyString_Parms, PropertyValue), METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyValue_MetaData)) };
	void Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventSetPropertyString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSetPropertyString_Parms), &Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_PropertyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09 *\n\x09 * @param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param FSteamItemInstanceID ItemID - ID of the item being modified.\n\x09 * @param const FString & PropertyName - The dynamic property being added or updated.\n\x09 * @param const FString & Value - The value being set.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param FSteamItemInstanceID ItemID - ID of the item being modified.\n@param const FString & PropertyName - The dynamic property being added or updated.\n@param const FString & Value - The value being set.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "SetPropertyString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::ISteamInventory_eventSetPropertyString_Parms), Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_SetPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_SetPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics
	{
		struct ISteamInventory_eventStartUpdateProperties_Parms
		{
			FSteamInventoryUpdateHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventStartUpdateProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Starts a transaction request to update dynamic properties on items for the current user. This call is rate-limited by user, so property modifications should be batched as much as possible -\n\x09 * (e.g. at the end of a map or game session). After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\n\x09 * A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result for SubmitUpdateProperties when you are done with it.\n\x09 *\n\x09 * @return FSteamInventoryUpdateHandle\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user. This call is rate-limited by user, so property modifications should be batched as much as possible -\n(e.g. at the end of a map or game session). After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation.\nNOTE: You must call DestroyResult on the provided inventory result for SubmitUpdateProperties when you are done with it.\n\n@return FSteamInventoryUpdateHandle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "StartUpdateProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::ISteamInventory_eventStartUpdateProperties_Parms), Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_StartUpdateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_StartUpdateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics
	{
		struct ISteamInventory_eventSubmitUpdateProperties_Parms
		{
			FSteamInventoryUpdateHandle UpdateHandle;
			FSteamInventoryResult ResultHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSubmitUpdateProperties_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 3959843940
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventSubmitUpdateProperties_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	void Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_UpdateHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Submits the transaction request to modify dynamic properties on items for the current user. See StartUpdateProperties.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result for when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @return bool\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Submits the transaction request to modify dynamic properties on items for the current user. See StartUpdateProperties.\nNOTE: You must call DestroyResult on the provided inventory result for when you are done with it.\n\n@param FSteamInventoryUpdateHandle UpdateHandle - The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@return bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "SubmitUpdateProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::ISteamInventory_eventSubmitUpdateProperties_Parms), Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics
	{
		struct ISteamInventory_eventTransferItemQuantity_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemInstanceID ItemIdSource;
			int32 Quantity;
			FSteamItemInstanceID ItemIdDest;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIdSource;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemIdDest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventTransferItemQuantity_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ItemIdSource = { "ItemIdSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventTransferItemQuantity_Parms, ItemIdSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ItemIdDest = { "ItemIdDest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventTransferItemQuantity_Parms, ItemIdDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) }; // 3818367112
	void Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ItemIdSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ItemIdDest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Transfer items between stacks within a user's inventory.\n\x09 * This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. To move items onto a destination stack specify the source, the quantity to move, and the -\n\x09 * destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\x09 * NOTE: Tradability/marketability restrictions are copied along with transferred items. The destination stack receives the latest tradability/marketability date of any item in its composition.\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemInstanceID ItemIdSource - \x09The source item to transfer.\n\x09 * @param int32 Quantity - The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n\x09 * @param FSteamItemInstanceID ItemIdDest - The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Transfer items between stacks within a user's inventory.\nThis can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. To move items onto a destination stack specify the source, the quantity to move, and the -\ndestination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\nNOTE: Tradability/marketability restrictions are copied along with transferred items. The destination stack receives the latest tradability/marketability date of any item in its composition.\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemInstanceID ItemIdSource -   The source item to transfer.\n@param int32 Quantity - The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n@param FSteamItemInstanceID ItemIdDest - The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "TransferItemQuantity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::ISteamInventory_eventTransferItemQuantity_Parms), Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_TransferItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_TransferItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics
	{
		struct ISteamInventory_eventTriggerItemDrop_Parms
		{
			FSteamInventoryResult ResultHandle;
			FSteamItemDef DropListDefinition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropListDefinition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventTriggerItemDrop_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) }; // 4227788509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_DropListDefinition = { "DropListDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInventory_eventTriggerItemDrop_Parms, DropListDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) }; // 1666265417
	void Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInventory_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInventory_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_ResultHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_DropListDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Trigger an item drop if the user has played a long enough period of time.\n\x09 * This period can be customized in two places:\n\x09 * At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\n\x09 * In an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\n\x09 * Only item definitions which are marked as \"playtime item generators\" can be spawned.\n\x09 * Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. The granularity of the playtime generator settings is -\n\x09 * in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers -\n\x09 * will also manage adding the item to the players inventory.\n\x09 *\n\x09 * NOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\x09 *\n\x09 * @param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n\x09 * @param FSteamItemDef DropListDefinition - This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n\x09 * @return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\n\x09 * Returns a new result handle via pResultHandle.\n\x09 * The inventory result returned by this function will be the new item granted if the player is eligible. If the user is not eligible then it will return an empty result ('[]').\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Trigger an item drop if the user has played a long enough period of time.\nThis period can be customized in two places:\nAt the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\nIn an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\nOnly item definitions which are marked as \"playtime item generators\" can be spawned.\nTypically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. The granularity of the playtime generator settings is -\nin minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers -\nwill also manage adding the item to the players inventory.\n\nNOTE: You must call DestroyResult on the provided inventory result when you are done with it.\n\n@param FSteamInventoryResult & ResultHandle - Returns a new inventory result handle.\n@param FSteamItemDef DropListDefinition - This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n@return bool - This function always returns true when called by a regular user, and always returns false when called from SteamGameServer.\nReturns a new result handle via pResultHandle.\nThe inventory result returned by this function will be the new item granted if the player is eligible. If the user is not eligible then it will return an empty result ('[]')." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInventory, nullptr, "TriggerItemDrop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::ISteamInventory_eventTriggerItemDrop_Parms), Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInventory_TriggerItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInventory_TriggerItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamInventory);
	UClass* Z_Construct_UClass_UISteamInventory_NoRegister()
	{
		return UISteamInventory::StaticClass();
	}
	struct Z_Construct_UClass_UISteamInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryDefinitionUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryFullUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryFullUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryResultReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryResultReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryStartPurchaseResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryStartPurchaseResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OnSteamInventoryRequestPricesResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_m_OnSteamInventoryRequestPricesResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamInventory_AddPromoItem, "AddPromoItem" }, // 2741843460
		{ &Z_Construct_UFunction_UISteamInventory_AddPromoItems, "AddPromoItems" }, // 2149258802
		{ &Z_Construct_UFunction_UISteamInventory_CheckResultSteamID, "CheckResultSteamID" }, // 3330786180
		{ &Z_Construct_UFunction_UISteamInventory_ConsumeItem, "ConsumeItem" }, // 1271923700
		{ &Z_Construct_UFunction_UISteamInventory_DeserializeResult, "DeserializeResult" }, // 1616866572
		{ &Z_Construct_UFunction_UISteamInventory_DestroyResult, "DestroyResult" }, // 238468674
		{ &Z_Construct_UFunction_UISteamInventory_GetAllItems, "GetAllItems" }, // 2977877030
		{ &Z_Construct_UFunction_UISteamInventory_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 108725742
		{ &Z_Construct_UFunction_UISteamInventory_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 424185517
		{ &Z_Construct_UFunction_UISteamInventory_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 2246206427
		{ &Z_Construct_UFunction_UISteamInventory_GetItemPrice, "GetItemPrice" }, // 2887539535
		{ &Z_Construct_UFunction_UISteamInventory_GetItemsByID, "GetItemsByID" }, // 3449292269
		{ &Z_Construct_UFunction_UISteamInventory_GetItemsWithPrices, "GetItemsWithPrices" }, // 871490734
		{ &Z_Construct_UFunction_UISteamInventory_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 4137913018
		{ &Z_Construct_UFunction_UISteamInventory_GetResultItemProperty, "GetResultItemProperty" }, // 4170290514
		{ &Z_Construct_UFunction_UISteamInventory_GetResultItems, "GetResultItems" }, // 1228016766
		{ &Z_Construct_UFunction_UISteamInventory_GetResultStatus, "GetResultStatus" }, // 531543627
		{ &Z_Construct_UFunction_UISteamInventory_GetResultTimestamp, "GetResultTimestamp" }, // 2756746976
		{ &Z_Construct_UFunction_UISteamInventory_GetSteamInventory, "GetSteamInventory" }, // 3869607384
		{ &Z_Construct_UFunction_UISteamInventory_GrantPromoItems, "GrantPromoItems" }, // 980939715
		{ &Z_Construct_UFunction_UISteamInventory_LoadItemDefinitions, "LoadItemDefinitions" }, // 2957987096
		{ &Z_Construct_UFunction_UISteamInventory_RemoveProperty, "RemoveProperty" }, // 2212824173
		{ &Z_Construct_UFunction_UISteamInventory_RequestPrices, "RequestPrices" }, // 3820411944
		{ &Z_Construct_UFunction_UISteamInventory_SerializeResult, "SerializeResult" }, // 1004382875
		{ &Z_Construct_UFunction_UISteamInventory_SetPropertyBool, "SetPropertyBool" }, // 2112415361
		{ &Z_Construct_UFunction_UISteamInventory_SetPropertyFloat, "SetPropertyFloat" }, // 1337010849
		{ &Z_Construct_UFunction_UISteamInventory_SetPropertyInt, "SetPropertyInt" }, // 2648546739
		{ &Z_Construct_UFunction_UISteamInventory_SetPropertyString, "SetPropertyString" }, // 2049025077
		{ &Z_Construct_UFunction_UISteamInventory_StartUpdateProperties, "StartUpdateProperties" }, // 66788817
		{ &Z_Construct_UFunction_UISteamInventory_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 1030231159
		{ &Z_Construct_UFunction_UISteamInventory_TransferItemQuantity, "TransferItemQuantity" }, // 3098132665
		{ &Z_Construct_UFunction_UISteamInventory_TriggerItemDrop, "TriggerItemDrop" }, // 3402055972
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Steam Inventory query and manipulation API.\n" },
		{ "IncludePath", "UISteamInventory.h" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Steam Inventory query and manipulation API." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * This callback is triggered whenever item definitions have been updated, which could be in response to LoadItemDefinitions or any time new item definitions are available -\n\x09 * (eg, from the dynamic addition of new item types while players are still in-game).\n\x09 */" },
		{ "DisplayName", "OnSteamInventoryDefinitionUpdate" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "This callback is triggered whenever item definitions have been updated, which could be in response to LoadItemDefinitions or any time new item definitions are available -\n(eg, from the dynamic addition of new item types while players are still in-game)." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate = { "m_OnSteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamInventory, m_OnSteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryDefinitionUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate_MetaData)) }; // 912389529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Returned when you have requested the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09 * These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09 */" },
		{ "DisplayName", "OnSteamInventoryEligiblePromoItemDefIDs" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Returned when you have requested the list of \"eligible\" promo items that can be manually granted to the given user.\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs = { "m_OnSteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamInventory, m_OnSteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryEligiblePromoItemDefIDsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs_MetaData)) }; // 1208179126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/**\n\x09 * Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result. (It will not trigger if the inventory hasn't changed, or if results from two overlapping calls are -\n\x09 * reversed in flight and the earlier result is already known to be stale/out-of-date.)\n\x09 * The regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience.\n\x09 */" },
		{ "DisplayName", "OnSteamInventoryFullUpdate" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Triggered when GetAllItems successfully returns a result which is newer / fresher than the last known result. (It will not trigger if the inventory hasn't changed, or if results from two overlapping calls are -\nreversed in flight and the earlier result is already known to be stale/out-of-date.)\nThe regular SteamInventoryResultReady_t callback will still be triggered immediately afterwards; this is an additional notification for your convenience." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryFullUpdate = { "m_OnSteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamInventory, m_OnSteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryFullUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryFullUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryFullUpdate_MetaData)) }; // 2318607834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryResultReady_MetaData[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/** This is fired whenever an inventory result transitions from k_EResultPending to any other completed state, see GetResultStatus for the complete list of states. There will always be exactly one callback per handle. */" },
		{ "DisplayName", "OnSteamInventoryResultReady" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "This is fired whenever an inventory result transitions from k_EResultPending to any other completed state, see GetResultStatus for the complete list of states. There will always be exactly one callback per handle." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryResultReady = { "m_OnSteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamInventory, m_OnSteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryResultReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryResultReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryResultReady_MetaData)) }; // 1705559454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryStartPurchaseResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/** Returned after StartPurchase is called. */" },
		{ "DisplayName", "OnSteamInventoryStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Returned after StartPurchase is called." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryStartPurchaseResult = { "m_OnSteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamInventory, m_OnSteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryStartPurchaseResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryStartPurchaseResult_MetaData)) }; // 3098580544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryRequestPricesResult_MetaData[] = {
		{ "Category", "SteamAPI|UISteamInventory" },
		{ "Comment", "/** Returned after RequestPrices is called. */" },
		{ "DisplayName", "OnSteamInventoryRequestPricesResult" },
		{ "ModuleRelativePath", "Public/UISteamInventory.h" },
		{ "ToolTip", "Returned after RequestPrices is called." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryRequestPricesResult = { "m_OnSteamInventoryRequestPricesResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISteamInventory, m_OnSteamInventoryRequestPricesResult), Z_Construct_UDelegateFunction_SteamAPI_BPL_Plugin_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryRequestPricesResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryRequestPricesResult_MetaData)) }; // 4000314099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISteamInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryDefinitionUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryEligiblePromoItemDefIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryFullUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryResultReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryStartPurchaseResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISteamInventory_Statics::NewProp_m_OnSteamInventoryRequestPricesResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamInventory_Statics::ClassParams = {
		&UISteamInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISteamInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISteamInventory_Statics::PropPointers),
		0,
		0x008000A0u,
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
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamInventory, UISteamInventory::StaticClass, TEXT("UISteamInventory"), &Z_Registration_Info_UClass_UISteamInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamInventory), 1639997633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_3205831886(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
