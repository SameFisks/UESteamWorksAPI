// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamGameCoordinator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamGameCoordinator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameCoordinator();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamGameCoordinator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamGameCoordinator::execSendMessage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MsgType);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_MsgBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamGameCoordinator::SendMessage(Z_Param_MsgType,Z_Param_Out_MsgBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameCoordinator::execRetrieveMessage)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMsgType);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutMsgBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UISteamGameCoordinator::RetrieveMessage(Z_Param_Out_OutMsgType,Z_Param_Out_OutMsgBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamGameCoordinator::execIsMessageAvailable)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMsgSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UISteamGameCoordinator::IsMessageAvailable(Z_Param_Out_OutMsgSize);
		P_NATIVE_END;
	}
	void UISteamGameCoordinator::StaticRegisterNativesUISteamGameCoordinator()
	{
		UClass* Class = UISteamGameCoordinator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMessageAvailable", &UISteamGameCoordinator::execIsMessageAvailable },
			{ "RetrieveMessage", &UISteamGameCoordinator::execRetrieveMessage },
			{ "SendMessage", &UISteamGameCoordinator::execSendMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics
	{
		struct ISteamGameCoordinator_eventIsMessageAvailable_Parms
		{
			int32 OutMsgSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutMsgSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::NewProp_OutMsgSize = { "OutMsgSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameCoordinator_eventIsMessageAvailable_Parms, OutMsgSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameCoordinator_eventIsMessageAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameCoordinator_eventIsMessageAvailable_Parms), &Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::NewProp_OutMsgSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamGameCoordinator" },
		{ "DisplayName", "Steam IsMessageAvailable" },
		{ "Keywords", "Steam ISteamGameCoordinator IsMessageAvailable" },
		{ "ModuleRelativePath", "Public/UISteamGameCoordinator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameCoordinator, nullptr, "IsMessageAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::ISteamGameCoordinator_eventIsMessageAvailable_Parms), Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics
	{
		struct ISteamGameCoordinator_eventRetrieveMessage_Parms
		{
			int32 OutMsgType;
			TArray<uint8> OutMsgBuffer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutMsgType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutMsgBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMsgBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_OutMsgType = { "OutMsgType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameCoordinator_eventRetrieveMessage_Parms, OutMsgType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_OutMsgBuffer_Inner = { "OutMsgBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_OutMsgBuffer = { "OutMsgBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameCoordinator_eventRetrieveMessage_Parms, OutMsgBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameCoordinator_eventRetrieveMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_OutMsgType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_OutMsgBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_OutMsgBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamGameCoordinator" },
		{ "DisplayName", "Steam RetrieveMessage" },
		{ "Keywords", "Steam ISteamGameCoordinator RetrieveMessage" },
		{ "ModuleRelativePath", "Public/UISteamGameCoordinator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameCoordinator, nullptr, "RetrieveMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::ISteamGameCoordinator_eventRetrieveMessage_Parms), Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics
	{
		struct ISteamGameCoordinator_eventSendMessage_Parms
		{
			int32 MsgType;
			TArray<uint8> MsgBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MsgType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MsgBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MsgBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MsgBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgType = { "MsgType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameCoordinator_eventSendMessage_Parms, MsgType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer_Inner = { "MsgBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer = { "MsgBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamGameCoordinator_eventSendMessage_Parms, MsgBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer_MetaData)) };
	void Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamGameCoordinator_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamGameCoordinator_eventSendMessage_Parms), &Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_MsgBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|ISteamGameCoordinator" },
		{ "DisplayName", "Steam SendMessage" },
		{ "Keywords", "Steam ISteamGameCoordinator SendMessage" },
		{ "ModuleRelativePath", "Public/UISteamGameCoordinator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamGameCoordinator, nullptr, "SendMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::ISteamGameCoordinator_eventSendMessage_Parms), Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamGameCoordinator_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamGameCoordinator_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamGameCoordinator);
	UClass* Z_Construct_UClass_UISteamGameCoordinator_NoRegister()
	{
		return UISteamGameCoordinator::StaticClass();
	}
	struct Z_Construct_UClass_UISteamGameCoordinator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISteamGameCoordinator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamGameCoordinator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamGameCoordinator_IsMessageAvailable, "IsMessageAvailable" }, // 1116692573
		{ &Z_Construct_UFunction_UISteamGameCoordinator_RetrieveMessage, "RetrieveMessage" }, // 4131171131
		{ &Z_Construct_UFunction_UISteamGameCoordinator_SendMessage, "SendMessage" }, // 3077980376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISteamGameCoordinator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Functions for sending and receiving messages from the Game Coordinator.\n" },
		{ "IncludePath", "UISteamGameCoordinator.h" },
		{ "ModuleRelativePath", "Public/UISteamGameCoordinator.h" },
		{ "ToolTip", "Functions for sending and receiving messages from the Game Coordinator." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISteamGameCoordinator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISteamGameCoordinator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISteamGameCoordinator_Statics::ClassParams = {
		&UISteamGameCoordinator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISteamGameCoordinator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISteamGameCoordinator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISteamGameCoordinator()
	{
		if (!Z_Registration_Info_UClass_UISteamGameCoordinator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISteamGameCoordinator.OuterSingleton, Z_Construct_UClass_UISteamGameCoordinator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISteamGameCoordinator.OuterSingleton;
	}
	template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<UISteamGameCoordinator>()
	{
		return UISteamGameCoordinator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISteamGameCoordinator);
	UISteamGameCoordinator::~UISteamGameCoordinator() {}
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameCoordinator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameCoordinator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamGameCoordinator, UISteamGameCoordinator::StaticClass, TEXT("UISteamGameCoordinator"), &Z_Registration_Info_UClass_UISteamGameCoordinator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamGameCoordinator), 2830456449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameCoordinator_h_1815175855(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameCoordinator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_WorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamGameCoordinator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
