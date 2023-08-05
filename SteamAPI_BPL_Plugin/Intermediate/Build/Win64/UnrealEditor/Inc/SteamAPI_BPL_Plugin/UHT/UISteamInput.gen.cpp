// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAPI_BPL_Plugin/Public/UISteamInput.h"
#include "SteamAPI_BPL_Plugin/Public/SteamStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUISteamInput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInput();
	STEAMAPI_BPL_PLUGIN_API UClass* Z_Construct_UClass_UISteamInput_NoRegister();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamControllerLEDFlag_();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputType_();
	STEAMAPI_BPL_PLUGIN_API UEnum* Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamXboxOrigin();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInputAnalogActionData();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInputDigitalActionData();
	STEAMAPI_BPL_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInputMotionData();
	UPackage* Z_Construct_UPackage__Script_SteamAPI_BPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UISteamInput::execGetRemotePlaySessionID)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_InputHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetDeviceBindingRevision)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDeviceBindingRevision(Z_Param_InputHandle,Z_Param_Out_Major,Z_Param_Out_Minor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execTranslateActionOrigin)
	{
		P_GET_ENUM(ESteamInputType_,Z_Param_DestinationInputType);
		P_GET_ENUM(ESteamInputActionOrigin,Z_Param_SourceOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamInputActionOrigin*)Z_Param__Result=P_THIS->TranslateActionOrigin(ESteamInputType_(Z_Param_DestinationInputType),ESteamInputActionOrigin(Z_Param_SourceOrigin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetActionOriginFromXboxOrigin)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_ENUM(ESteamXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamInputActionOrigin*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_InputHandle,ESteamXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execTriggerVibration)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeftSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_RightSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerVibration(Z_Param_InputHandle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execStopAnalogActionMomentum)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_ActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnalogActionMomentum(Z_Param_InputHandle,Z_Param_ActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execShowBindingPanel)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_InputHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execSetLEDColor)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_TARRAY_REF(ESteamControllerLEDFlag_,Z_Param_Out_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLEDColor(Z_Param_InputHandle,Z_Param_Out_Color,Z_Param_Out_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execSetLEDColorU)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_PROPERTY(FByteProperty,Z_Param_R);
		P_GET_PROPERTY(FByteProperty,Z_Param_G);
		P_GET_PROPERTY(FByteProperty,Z_Param_B);
		P_GET_TARRAY_REF(ESteamControllerLEDFlag_,Z_Param_Out_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLEDColorU(Z_Param_InputHandle,Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_Out_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execRunFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execInit)
	{
		P_GET_UBOOL(Z_Param_bExplicitlyCallRunFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Init(Z_Param_bExplicitlyCallRunFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetStringForActionOrigin)
	{
		P_GET_ENUM(ESteamInputActionOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(ESteamInputActionOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetMotionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_InputHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetInputTypeForHandle)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamInputType_*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_InputHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetGamepadIndexForController)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_ControllerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_ControllerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetDigitalActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
		P_GET_TARRAY_REF(ESteamInputActionOrigin,Z_Param_Out_Origins);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_InputHandle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_Origins);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetDigitalActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetDigitalActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInputDigitalActionData*)Z_Param__Result=P_THIS->GetDigitalActionData(Z_Param_InputHandle,Z_Param_DigitalActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetCurrentActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_InputHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetControllerForGamepadIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetConnectedControllers)
	{
		P_GET_TARRAY_REF(FInputHandle,Z_Param_Out_Handles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConnectedControllers(Z_Param_Out_Handles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetAnalogActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
		P_GET_TARRAY_REF(ESteamInputActionOrigin,Z_Param_Out_Origins);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_InputHandle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_Origins);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetAnalogActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetAnalogActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInputAnalogActionData*)Z_Param__Result=P_THIS->GetAnalogActionData(Z_Param_InputHandle,Z_Param_ActionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetActionSetHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_ActionSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetActiveActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_TARRAY_REF(FInputHandle,Z_Param_Out_Handles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveActionSetLayers(Z_Param_InputHandle,Z_Param_Out_Handles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execDeactivateAllActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllActionSetLayers(Z_Param_InputHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execDeactivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateActionSetLayer(Z_Param_InputHandle,Z_Param_ActionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execActivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSetLayer(Z_Param_InputHandle,Z_Param_ActionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execActivateActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_InputHandle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSet(Z_Param_InputHandle,Z_Param_ActionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISteamInput::execGetSteamInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UISteamInput**)Z_Param__Result=UISteamInput::GetSteamInput();
		P_NATIVE_END;
	}
	void UISteamInput::StaticRegisterNativesUISteamInput()
	{
		UClass* Class = UISteamInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateActionSet", &UISteamInput::execActivateActionSet },
			{ "ActivateActionSetLayer", &UISteamInput::execActivateActionSetLayer },
			{ "DeactivateActionSetLayer", &UISteamInput::execDeactivateActionSetLayer },
			{ "DeactivateAllActionSetLayers", &UISteamInput::execDeactivateAllActionSetLayers },
			{ "GetActionOriginFromXboxOrigin", &UISteamInput::execGetActionOriginFromXboxOrigin },
			{ "GetActionSetHandle", &UISteamInput::execGetActionSetHandle },
			{ "GetActiveActionSetLayers", &UISteamInput::execGetActiveActionSetLayers },
			{ "GetAnalogActionData", &UISteamInput::execGetAnalogActionData },
			{ "GetAnalogActionHandle", &UISteamInput::execGetAnalogActionHandle },
			{ "GetAnalogActionOrigins", &UISteamInput::execGetAnalogActionOrigins },
			{ "GetConnectedControllers", &UISteamInput::execGetConnectedControllers },
			{ "GetControllerForGamepadIndex", &UISteamInput::execGetControllerForGamepadIndex },
			{ "GetCurrentActionSet", &UISteamInput::execGetCurrentActionSet },
			{ "GetDeviceBindingRevision", &UISteamInput::execGetDeviceBindingRevision },
			{ "GetDigitalActionData", &UISteamInput::execGetDigitalActionData },
			{ "GetDigitalActionHandle", &UISteamInput::execGetDigitalActionHandle },
			{ "GetDigitalActionOrigins", &UISteamInput::execGetDigitalActionOrigins },
			{ "GetGamepadIndexForController", &UISteamInput::execGetGamepadIndexForController },
			{ "GetInputTypeForHandle", &UISteamInput::execGetInputTypeForHandle },
			{ "GetMotionData", &UISteamInput::execGetMotionData },
			{ "GetRemotePlaySessionID", &UISteamInput::execGetRemotePlaySessionID },
			{ "GetSteamInput", &UISteamInput::execGetSteamInput },
			{ "GetStringForActionOrigin", &UISteamInput::execGetStringForActionOrigin },
			{ "Init", &UISteamInput::execInit },
			{ "RunFrame", &UISteamInput::execRunFrame },
			{ "SetLEDColor", &UISteamInput::execSetLEDColor },
			{ "SetLEDColorU", &UISteamInput::execSetLEDColorU },
			{ "ShowBindingPanel", &UISteamInput::execShowBindingPanel },
			{ "Shutdown", &UISteamInput::execShutdown },
			{ "StopAnalogActionMomentum", &UISteamInput::execStopAnalogActionMomentum },
			{ "TranslateActionOrigin", &UISteamInput::execTranslateActionOrigin },
			{ "TriggerVibration", &UISteamInput::execTriggerVibration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics
	{
		struct ISteamInput_eventActivateActionSet_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ActionSetHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventActivateActionSet_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::NewProp_ActionSetHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\x09 * This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to activate an action set for.\n\x09 * @param FInputActionSetHandle ActionSetHandle - The handle of the action set you want to activate.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\n@param FInputHandle InputHandle - The handle of the controller you want to activate an action set for.\n@param FInputActionSetHandle ActionSetHandle - The handle of the action set you want to activate.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "ActivateActionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::ISteamInput_eventActivateActionSet_Parms), Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_ActivateActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_ActivateActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics
	{
		struct ISteamInput_eventActivateActionSetLayer_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ActionSetHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventActivateActionSetLayer_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventActivateActionSetLayer_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::NewProp_ActionSetHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Reconfigure the controller to use the specified action set layer.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to activate an action set layer for.\n\x09 * @param FInputActionSetHandle ActionSetHandle - The handle of the action set layer you want to activate.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer.\n\n@param FInputHandle InputHandle - The handle of the controller you want to activate an action set layer for.\n@param FInputActionSetHandle ActionSetHandle - The handle of the action set layer you want to activate.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "ActivateActionSetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::ISteamInput_eventActivateActionSetLayer_Parms), Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics
	{
		struct ISteamInput_eventDeactivateActionSetLayer_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ActionSetHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventDeactivateActionSetLayer_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventDeactivateActionSetLayer_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Reconfigure the controller to stop using the specified action set layer.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to deactivate an action set layer for.\n\x09 * @param FInputActionSetHandle ActionSetHandle - The handle of the action set layer you want to deactivate.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer.\n\n@param FInputHandle InputHandle - The handle of the controller you want to deactivate an action set layer for.\n@param FInputActionSetHandle ActionSetHandle - The handle of the action set layer you want to deactivate.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "DeactivateActionSetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::ISteamInput_eventDeactivateActionSetLayer_Parms), Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics
	{
		struct ISteamInput_eventDeactivateAllActionSetLayers_Parms
		{
			FInputHandle InputHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventDeactivateAllActionSetLayers_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::NewProp_InputHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Reconfigure the controller to stop using all action set layers.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to deactivate all action set layers for.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers.\n\n@param FInputHandle InputHandle - The handle of the controller you want to deactivate all action set layers for.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "DeactivateAllActionSetLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::ISteamInput_eventDeactivateAllActionSetLayers_Parms), Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics
	{
		struct ISteamInput_eventGetActionOriginFromXboxOrigin_Parms
		{
			FInputHandle InputHandle;
			ESteamXboxOrigin Origin;
			ESteamInputActionOrigin ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActionOriginFromXboxOrigin_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActionOriginFromXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamXboxOrigin, METADATA_PARAMS(nullptr, 0) }; // 557500238
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to affect. You can use GetControllerForGamepadIndex to get this handle\n\x09 * @param ESteamXboxOrigin Origin - This is the button you want to get the image for ex: k_EXboxOrigin_A\n\x09 * @return ESteamInputActionOrigin\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param FInputHandle InputHandle - The handle of the controller to affect. You can use GetControllerForGamepadIndex to get this handle\n@param ESteamXboxOrigin Origin - This is the button you want to get the image for ex: k_EXboxOrigin_A\n@return ESteamInputActionOrigin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetActionOriginFromXboxOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::ISteamInput_eventGetActionOriginFromXboxOrigin_Parms), Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics
	{
		struct ISteamInput_eventGetActionSetHandle_Parms
		{
			FString ActionSetName;
			FInputActionSetHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ActionSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls.\n\x09 *\n\x09 * @param const FString & ActionSetName - The string identifier of an action set defined in the game's VDF file.\n\x09 * @return FInputActionSetHandle - The handle of the specified action set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls.\n\n@param const FString & ActionSetName - The string identifier of an action set defined in the game's VDF file.\n@return FInputActionSetHandle - The handle of the specified action set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetActionSetHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::ISteamInput_eventGetActionSetHandle_Parms), Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetActionSetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetActionSetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics
	{
		struct ISteamInput_eventGetActiveActionSetLayers_Parms
		{
			FInputHandle InputHandle;
			TArray<FInputHandle> Handles;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActiveActionSetLayers_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActiveActionSetLayers_Parms, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_Handles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Fill an array with all of the currently active action set layers for a specified controller handle.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to get active action set layers for.\n\x09 * @param TArray<int64> & Handles - This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller handle.\n\n@param FInputHandle InputHandle - The handle of the controller you want to get active action set layers for.\n@param TArray<int64> & Handles - This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetActiveActionSetLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::ISteamInput_eventGetActiveActionSetLayers_Parms), Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics
	{
		struct ISteamInput_eventGetAnalogActionData_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ActionSetHandle;
			FSteamInputAnalogActionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionData_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionData_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInputAnalogActionData, METADATA_PARAMS(nullptr, 0) }; // 3773373501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::NewProp_ActionSetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns the current state of the supplied analog game action.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to query.\n\x09 * @param FInputActionSetHandle ActionSetHandle - The handle of the analog action you want to query.\n\x09 * @return FSteamInputAnalogActionData - The current state of the specified analog action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns the current state of the supplied analog game action.\n\n@param FInputHandle InputHandle - The handle of the controller you want to query.\n@param FInputActionSetHandle ActionSetHandle - The handle of the analog action you want to query.\n@return FSteamInputAnalogActionData - The current state of the specified analog action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetAnalogActionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::ISteamInput_eventGetAnalogActionData_Parms), Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetAnalogActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetAnalogActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics
	{
		struct ISteamInput_eventGetAnalogActionHandle_Parms
		{
			FString ActionName;
			FInputAnalogActionHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionHandle_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ActionName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1717825258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the handle of the specified Analog action.\n\x09 * NOTE: This function does not take an action set handle parameter. That means that each action in your VDF file must have a unique string identifier. In other words, if you use an action called \"up\" in two -\n\x09 * different action sets, this function will only ever return one of them and the other will be ignored.\n\x09 *\n\x09 * @param const FString & ActionName - The string identifier of the analog action defined in the game's VDF file.\n\x09 * @return FInputAnalogActionHandle - The handle of the specified analog action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the handle of the specified Analog action.\nNOTE: This function does not take an action set handle parameter. That means that each action in your VDF file must have a unique string identifier. In other words, if you use an action called \"up\" in two -\ndifferent action sets, this function will only ever return one of them and the other will be ignored.\n\n@param const FString & ActionName - The string identifier of the analog action defined in the game's VDF file.\n@return FInputAnalogActionHandle - The handle of the specified analog action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetAnalogActionHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::ISteamInput_eventGetAnalogActionHandle_Parms), Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics
	{
		struct ISteamInput_eventGetAnalogActionOrigins_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ActionSetHandle;
			FInputAnalogActionHandle AnalogActionHandle;
			TArray<ESteamInputActionOrigin> Origins;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origins_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origins_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Origins;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionOrigins_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1717825258
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_Origins_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_Origins_Inner = { "Origins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_Origins = { "Origins", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionOrigins_Parms, Origins), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_Origins_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_Origins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_Origins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to query.\n\x09 * @param FInputActionSetHandle ActionSetHandle - The handle of the action set you want to query.\n\x09 * @param FInputAnalogActionHandle AnalogActionHandle - The handle of the analog action you want to query.\n\x09 * @param TArray<ESteamInputActionOrigin> & Origins - A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.\n\x09 * @return int32 - The number of origins supplied in Origins.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param FInputHandle InputHandle - The handle of the controller you want to query.\n@param FInputActionSetHandle ActionSetHandle - The handle of the action set you want to query.\n@param FInputAnalogActionHandle AnalogActionHandle - The handle of the analog action you want to query.\n@param TArray<ESteamInputActionOrigin> & Origins - A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.\n@return int32 - The number of origins supplied in Origins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetAnalogActionOrigins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::ISteamInput_eventGetAnalogActionOrigins_Parms), Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics
	{
		struct ISteamInput_eventGetConnectedControllers_Parms
		{
			TArray<FInputHandle> Handles;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetConnectedControllers_Parms, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetConnectedControllers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::NewProp_Handles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Enumerates currently connected controllers by filling handlesOut with controller handles.\n\x09 *\n\x09 * @param TArray<int64> & Handles - This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09 * @return int32 - The number of handles written to Handles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Enumerates currently connected controllers by filling handlesOut with controller handles.\n\n@param TArray<int64> & Handles - This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n@return int32 - The number of handles written to Handles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetConnectedControllers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::ISteamInput_eventGetConnectedControllers_Parms), Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetConnectedControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetConnectedControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics
	{
		struct ISteamInput_eventGetControllerForGamepadIndex_Parms
		{
			int32 Index;
			FInputHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\x09 *\n\x09 * @param int32 Index - The index of the emulated gamepad you want to get a controller handle for.\n\x09 * @return FInputHandle\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\n@param int32 Index - The index of the emulated gamepad you want to get a controller handle for.\n@return FInputHandle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetControllerForGamepadIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::ISteamInput_eventGetControllerForGamepadIndex_Parms), Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics
	{
		struct ISteamInput_eventGetCurrentActionSet_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetCurrentActionSet_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the currently active action set for the specified controller.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to query.\n\x09 * @return FInputActionSetHandle - The handle of the action set activated for the specified controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the currently active action set for the specified controller.\n\n@param FInputHandle InputHandle - The handle of the controller you want to query.\n@return FInputActionSetHandle - The handle of the action set activated for the specified controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetCurrentActionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::ISteamInput_eventGetCurrentActionSet_Parms), Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetCurrentActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetCurrentActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics
	{
		struct ISteamInput_eventGetDeviceBindingRevision_Parms
		{
			FInputHandle InputHandle;
			int32 Major;
			int32 Minor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDeviceBindingRevision_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInput_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInput_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_Major,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_Minor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Gets the major and minor device binding revisions for Steam Input API configurations. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree -\n\x09 * that older configurations are no longer usable. When a user's binding disagrees with the major revision of the current official configuration Steam will forcibly update the user to the new configuration.\n\x09 * New configurations will need to be made for every controller when updating the major revision. Minor revisions are for small changes such as adding a new optional action or updating localization in the configuration.\n\x09 * When updating the minor revision you generally can update a single configuration and check the \"Use Action Block\" to apply the action block changes to the other configurations.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to query.\n\x09 * @param int32 & Major - Pointer to int that Major binding revision will be populated into\n\x09 * @param int32 & Minor - Pointer to int that Minor binding revision will be populated into\n\x09 * @return bool - true if a device binding was successfully found and false if the binding is still loading.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Gets the major and minor device binding revisions for Steam Input API configurations. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree -\nthat older configurations are no longer usable. When a user's binding disagrees with the major revision of the current official configuration Steam will forcibly update the user to the new configuration.\nNew configurations will need to be made for every controller when updating the major revision. Minor revisions are for small changes such as adding a new optional action or updating localization in the configuration.\nWhen updating the minor revision you generally can update a single configuration and check the \"Use Action Block\" to apply the action block changes to the other configurations.\n\n@param FInputHandle InputHandle - The handle of the controller to query.\n@param int32 & Major - Pointer to int that Major binding revision will be populated into\n@param int32 & Minor - Pointer to int that Minor binding revision will be populated into\n@return bool - true if a device binding was successfully found and false if the binding is still loading." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetDeviceBindingRevision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::ISteamInput_eventGetDeviceBindingRevision_Parms), Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics
	{
		struct ISteamInput_eventGetDigitalActionData_Parms
		{
			FInputHandle InputHandle;
			FInputDigitalActionHandle DigitalActionHandle;
			FSteamInputDigitalActionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionData_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) }; // 4272146198
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInputDigitalActionData, METADATA_PARAMS(nullptr, 0) }; // 3196442298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns the current state of the supplied digital game action.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to query.\n\x09 * @param FInputDigitalActionHandle DigitalActionHandle - The handle of the digital action you want to query.\n\x09 * @return FSteamInputDigitalActionData - The current state of the specified digital action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns the current state of the supplied digital game action.\n\n@param FInputHandle InputHandle - The handle of the controller you want to query.\n@param FInputDigitalActionHandle DigitalActionHandle - The handle of the digital action you want to query.\n@return FSteamInputDigitalActionData - The current state of the specified digital action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetDigitalActionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::ISteamInput_eventGetDigitalActionData_Parms), Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetDigitalActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetDigitalActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics
	{
		struct ISteamInput_eventGetDigitalActionHandle_Parms
		{
			FString ActionName;
			FInputDigitalActionHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionHandle_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ActionName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) }; // 4272146198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the handle of the specified digital action.\n\x09 * NOTE: This function does not take an action set handle parameter. That means that each action in your VDF file must have a unique string identifier. In other words, if you use an action called \"up\" in two -\n\x09 * different action sets, this function will only ever return one of them and the other will be ignored.\n\x09 *\n\x09 * @param const FString & ActionName - \x09The string identifier of the digital action defined in the game's VDF file.\n\x09 * @return FInputDigitalActionHandle - The handle of the specified digital action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the handle of the specified digital action.\nNOTE: This function does not take an action set handle parameter. That means that each action in your VDF file must have a unique string identifier. In other words, if you use an action called \"up\" in two -\ndifferent action sets, this function will only ever return one of them and the other will be ignored.\n\n@param const FString & ActionName -  The string identifier of the digital action defined in the game's VDF file.\n@return FInputDigitalActionHandle - The handle of the specified digital action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetDigitalActionHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::ISteamInput_eventGetDigitalActionHandle_Parms), Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics
	{
		struct ISteamInput_eventGetDigitalActionOrigins_Parms
		{
			FInputHandle InputHandle;
			FInputActionSetHandle ActionSetHandle;
			FInputDigitalActionHandle DigitalActionHandle;
			TArray<ESteamInputActionOrigin> Origins;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origins_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origins_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Origins;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionOrigins_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 181148962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) }; // 4272146198
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_Origins_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_Origins_Inner = { "Origins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_Origins = { "Origins", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionOrigins_Parms, Origins), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_Origins_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_Origins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_Origins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to query.\n\x09 * @param FInputActionSetHandle ActionSetHandle - The handle of the action set you want to query.\n\x09 * @param FInputDigitalActionHandle DigitalActionHandle - The handle of the digital aciton you want to query.\n\x09 * @param TArray<ESteamInputActionOrigin> & Origins - A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.\n\x09 * @return int32 - The number of origins supplied in Origins.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param FInputHandle InputHandle - The handle of the controller you want to query.\n@param FInputActionSetHandle ActionSetHandle - The handle of the action set you want to query.\n@param FInputDigitalActionHandle DigitalActionHandle - The handle of the digital aciton you want to query.\n@param TArray<ESteamInputActionOrigin> & Origins - A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.\n@return int32 - The number of origins supplied in Origins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetDigitalActionOrigins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::ISteamInput_eventGetDigitalActionOrigins_Parms), Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics
	{
		struct ISteamInput_eventGetGamepadIndexForController_Parms
		{
			FInputHandle ControllerHandle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::NewProp_ControllerHandle = { "ControllerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetGamepadIndexForController_Parms, ControllerHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::NewProp_ControllerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\x09 *\n\x09 * @param FInputHandle ControllerHandle - The handle of the controller you want to get a gamepad index for.\n\x09 * @return int32\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\n@param FInputHandle ControllerHandle - The handle of the controller you want to get a gamepad index for.\n@return int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetGamepadIndexForController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::ISteamInput_eventGetGamepadIndexForController_Parms), Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics
	{
		struct ISteamInput_eventGetInputTypeForHandle_Parms
		{
			FInputHandle InputHandle;
			ESteamInputType_ ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetInputTypeForHandle_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputType_, METADATA_PARAMS(nullptr, 0) }; // 3429883191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller whose input type (device model) you want to query\n\x09 * @return ESteamInputType_\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc.\n\n@param FInputHandle InputHandle - The handle of the controller whose input type (device model) you want to query\n@return ESteamInputType_" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetInputTypeForHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::ISteamInput_eventGetInputTypeForHandle_Parms), Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetMotionData_Statics
	{
		struct ISteamInput_eventGetMotionData_Parms
		{
			FInputHandle InputHandle;
			FSteamInputMotionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetMotionData_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInputMotionData, METADATA_PARAMS(nullptr, 0) }; // 162407072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns raw motion data for the specified controller.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to get motion data for.\n\x09 * @return FSteamInputMotionData\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns raw motion data for the specified controller.\n\n@param FInputHandle InputHandle - The handle of the controller you want to get motion data for.\n@return FSteamInputMotionData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetMotionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::ISteamInput_eventGetMotionData_Parms), Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetMotionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetMotionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics
	{
		struct ISteamInput_eventGetRemotePlaySessionID_Parms
		{
			FInputHandle InputHandle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetRemotePlaySessionID_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to query.\n\x09 * @return int32 - Steam Remote Play session ID\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\n@param FInputHandle InputHandle - The handle of the controller to query.\n@return int32 - Steam Remote Play session ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetRemotePlaySessionID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::ISteamInput_eventGetRemotePlaySessionID_Parms), Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics
	{
		struct ISteamInput_eventGetSteamInput_Parms
		{
			UISteamInput* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetSteamInput_Parms, ReturnValue), Z_Construct_UClass_UISteamInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI" },
		{ "CompactNodeTitle", "SteamInput" },
		{ "DisplayName", "Steam Input" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetSteamInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::ISteamInput_eventGetSteamInput_Parms), Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetSteamInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetSteamInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics
	{
		struct ISteamInput_eventGetStringForActionOrigin_Parms
		{
			ESteamInputActionOrigin Origin;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetStringForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Returns a localized string (from Steam's language setting) for the specified origin.\n\x09 *\n\x09 * @param ESteamInputActionOrigin Origin\n\x09 * @return FString\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified origin.\n\n@param ESteamInputActionOrigin Origin\n@return FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "GetStringForActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::ISteamInput_eventGetStringForActionOrigin_Parms), Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_Init_Statics
	{
		struct ISteamInput_eventInit_Parms
		{
			bool bExplicitlyCallRunFrame;
			bool ReturnValue;
		};
		static void NewProp_bExplicitlyCallRunFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitlyCallRunFrame;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_bExplicitlyCallRunFrame_SetBit(void* Obj)
	{
		((ISteamInput_eventInit_Parms*)Obj)->bExplicitlyCallRunFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_bExplicitlyCallRunFrame = { "bExplicitlyCallRunFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInput_eventInit_Parms), &Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_bExplicitlyCallRunFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInput_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInput_eventInit_Parms), &Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_bExplicitlyCallRunFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Must be called when starting use of the ISteamInput interface.\n\x09 *\n\x09 * @return bool - Always returns true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Must be called when starting use of the ISteamInput interface.\n\n@return bool - Always returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_Init_Statics::ISteamInput_eventInit_Parms), Z_Construct_UFunction_UISteamInput_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_RunFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_RunFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Synchronize API state with the latest Steam Controller inputs available. This is performed automatically by SteamAPI_RunCallbacks, but for the absolute lowest possible latency, you can call this -\n\x09 * directly before reading controller state.\n\x09 *\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Synchronize API state with the latest Steam Controller inputs available. This is performed automatically by SteamAPI_RunCallbacks, but for the absolute lowest possible latency, you can call this -\ndirectly before reading controller state.\n\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_RunFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "RunFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_RunFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_RunFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_RunFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_RunFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics
	{
		struct ISteamInput_eventSetLEDColor_Parms
		{
			FInputHandle InputHandle;
			FLinearColor Color;
			TArray<ESteamControllerLEDFlag_> Flags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColor_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamControllerLEDFlag_, METADATA_PARAMS(nullptr, 0) }; // 4055854517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColor_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_MetaData)) }; // 4055854517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::NewProp_Flags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Set the controller LED color on supported controllers.\n\x09 * NOTE: The VSC does not support any color but white, and will interpret the RGB values as a greyscale value affecting the brightness of the Steam button LED.\n\x09 * The DS4 responds to full color information and uses the values to set the color & brightness of the lightbar.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to affect.\n\x09 * @param const FLinearColor & Color\n\x09 * @param const TArray<ESteamControllerLEDFlag_> & Flags - Bit-masked flags combined from values defined in ESteamControllerLEDFlag.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Set the controller LED color on supported controllers.\nNOTE: The VSC does not support any color but white, and will interpret the RGB values as a greyscale value affecting the brightness of the Steam button LED.\nThe DS4 responds to full color information and uses the values to set the color & brightness of the lightbar.\n\n@param FInputHandle InputHandle - The handle of the controller to affect.\n@param const FLinearColor & Color\n@param const TArray<ESteamControllerLEDFlag_> & Flags - Bit-masked flags combined from values defined in ESteamControllerLEDFlag.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "SetLEDColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::ISteamInput_eventSetLEDColor_Parms), Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_SetLEDColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_SetLEDColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics
	{
		struct ISteamInput_eventSetLEDColorU_Parms
		{
			FInputHandle InputHandle;
			uint8 R;
			uint8 G;
			uint8 B;
			TArray<ESteamControllerLEDFlag_> Flags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_R;
		static const UECodeGen_Private::FBytePropertyParams NewProp_G;
		static const UECodeGen_Private::FBytePropertyParams NewProp_B;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColorU_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColorU_Parms, R), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColorU_Parms, G), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColorU_Parms, B), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamControllerLEDFlag_, METADATA_PARAMS(nullptr, 0) }; // 4055854517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventSetLEDColorU_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_MetaData)) }; // 4055854517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::NewProp_Flags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Set the controller LED color on supported controllers.\n\x09 * NOTE: The VSC does not support any color but white, and will interpret the RGB values as a greyscale value affecting the brightness of the Steam button LED.\n\x09 * The DS4 responds to full color information and uses the values to set the color & brightness of the lightbar.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to affect.\n\x09 * @param uint8 R - The red component of the color to set (0-255).\n\x09 * @param uint8 G - The green component of the color to set (0-255).\n\x09 * @param uint8 B - The blue component of the color to set (0-255).\n\x09 * @param const TArray<ESteamControllerLEDFlag_> & Flags - Bit-masked flags combined from values defined in ESteamControllerLEDFlag.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Set the controller LED color on supported controllers.\nNOTE: The VSC does not support any color but white, and will interpret the RGB values as a greyscale value affecting the brightness of the Steam button LED.\nThe DS4 responds to full color information and uses the values to set the color & brightness of the lightbar.\n\n@param FInputHandle InputHandle - The handle of the controller to affect.\n@param uint8 R - The red component of the color to set (0-255).\n@param uint8 G - The green component of the color to set (0-255).\n@param uint8 B - The blue component of the color to set (0-255).\n@param const TArray<ESteamControllerLEDFlag_> & Flags - Bit-masked flags combined from values defined in ESteamControllerLEDFlag.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "SetLEDColorU", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::ISteamInput_eventSetLEDColorU_Parms), Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_SetLEDColorU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_SetLEDColorU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics
	{
		struct ISteamInput_eventShowBindingPanel_Parms
		{
			FInputHandle InputHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventShowBindingPanel_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	void Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInput_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInput_eventShowBindingPanel_Parms), &Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Invokes the Steam overlay and brings up the binding screen.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller you want to bring up the binding screen for.\n\x09 * @return bool - true for success; false if overlay is disabled/unavailable, or the user is not in Big Picture Mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen.\n\n@param FInputHandle InputHandle - The handle of the controller you want to bring up the binding screen for.\n@return bool - true for success; false if overlay is disabled/unavailable, or the user is not in Big Picture Mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "ShowBindingPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::ISteamInput_eventShowBindingPanel_Parms), Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_ShowBindingPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_ShowBindingPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_Shutdown_Statics
	{
		struct ISteamInput_eventShutdown_Parms
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
	void Z_Construct_UFunction_UISteamInput_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ISteamInput_eventShutdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UISteamInput_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ISteamInput_eventShutdown_Parms), &Z_Construct_UFunction_UISteamInput_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_Shutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_Shutdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Must be called when ending use of the ISteamInput interface.\n\x09 *\n\x09 * @return bool - Always returns true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Must be called when ending use of the ISteamInput interface.\n\n@return bool - Always returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "Shutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_Shutdown_Statics::ISteamInput_eventShutdown_Parms), Z_Construct_UFunction_UISteamInput_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_Shutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics
	{
		struct ISteamInput_eventStopAnalogActionMomentum_Parms
		{
			FInputHandle InputHandle;
			FInputAnalogActionHandle ActionHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventStopAnalogActionMomentum_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::NewProp_ActionHandle = { "ActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventStopAnalogActionMomentum_Parms, ActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1717825258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::NewProp_ActionHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\x09 * NOTE: This will also stop all associated haptics. This is useful for situations where you want to indicate to the user that the limit of an action has been reached, such as spinning a carousel or scrolling a webpage.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to affect.\n\x09 * @param FInputAnalogActionHandle ActionHandle - The analog action to stop momentum for.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\nNOTE: This will also stop all associated haptics. This is useful for situations where you want to indicate to the user that the limit of an action has been reached, such as spinning a carousel or scrolling a webpage.\n\n@param FInputHandle InputHandle - The handle of the controller to affect.\n@param FInputAnalogActionHandle ActionHandle - The analog action to stop momentum for.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "StopAnalogActionMomentum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::ISteamInput_eventStopAnalogActionMomentum_Parms), Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics
	{
		struct ISteamInput_eventTranslateActionOrigin_Parms
		{
			ESteamInputType_ DestinationInputType;
			ESteamInputActionOrigin SourceOrigin;
			ESteamInputActionOrigin ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationInputType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrigin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceOrigin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType = { "DestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventTranslateActionOrigin_Parms, DestinationInputType), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputType_, METADATA_PARAMS(nullptr, 0) }; // 3429883191
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin = { "SourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventTranslateActionOrigin_Parms, SourceOrigin), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventTranslateActionOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamAPI_BPL_Plugin_ESteamInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 363527869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Get the equivalent origin for a given controller type or the closest controller type that existed in the SDK you built into your game if eDestinationInputType is k_ESteamInputType_Unknown. This action origin -\n\x09 * can be used in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09 *\n\x09 * @param ESteamInputType_ DestinationInputType - \x09The controller type you want to translate to. Steam will pick the closest type from your SDK version if k_ESteamInputType_Unknown is used\n\x09 * @param ESteamInputActionOrigin SourceOrigin - This is the button you want to translate\n\x09 * @return ESteamInputActionOrigin\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Get the equivalent origin for a given controller type or the closest controller type that existed in the SDK you built into your game if eDestinationInputType is k_ESteamInputType_Unknown. This action origin -\ncan be used in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param ESteamInputType_ DestinationInputType -       The controller type you want to translate to. Steam will pick the closest type from your SDK version if k_ESteamInputType_Unknown is used\n@param ESteamInputActionOrigin SourceOrigin - This is the button you want to translate\n@return ESteamInputActionOrigin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "TranslateActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::ISteamInput_eventTranslateActionOrigin_Parms), Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_TranslateActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_TranslateActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics
	{
		struct ISteamInput_eventTriggerVibration_Parms
		{
			FInputHandle InputHandle;
			int32 LeftSpeed;
			int32 RightSpeed;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LeftSpeed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RightSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventTriggerVibration_Parms, InputHandle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 3119484282
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventTriggerVibration_Parms, LeftSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ISteamInput_eventTriggerVibration_Parms, RightSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::NewProp_InputHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::NewProp_LeftSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::NewProp_RightSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamAPI|UISteamInput" },
		{ "Comment", "/**\n\x09 * Trigger a vibration event on supported controllers.\n\x09 * This API call will be ignored for incompatible controller models.\n\x09 * This generates the traditional \"rumble\" vibration effect.\n\x09 * The VSC will emulate traditional rumble using its haptics.\n\x09 *\n\x09 * @param FInputHandle InputHandle - The handle of the controller to affect.\n\x09 * @param int32 LeftSpeed - The intensity value for the left rumble motor.\n\x09 * @param int32 RightSpeed - The intensity value for the right rumble motor.\n\x09 * @return void\n\x09 */" },
		{ "ModuleRelativePath", "Public/UISteamInput.h" },
		{ "ToolTip", "Trigger a vibration event on supported controllers.\nThis API call will be ignored for incompatible controller models.\nThis generates the traditional \"rumble\" vibration effect.\nThe VSC will emulate traditional rumble using its haptics.\n\n@param FInputHandle InputHandle - The handle of the controller to affect.\n@param int32 LeftSpeed - The intensity value for the left rumble motor.\n@param int32 RightSpeed - The intensity value for the right rumble motor.\n@return void" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISteamInput, nullptr, "TriggerVibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::ISteamInput_eventTriggerVibration_Parms), Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISteamInput_TriggerVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISteamInput_TriggerVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISteamInput);
	UClass* Z_Construct_UClass_UISteamInput_NoRegister()
	{
		return UISteamInput::StaticClass();
	}
	struct Z_Construct_UClass_UISteamInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UISteamInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISteamInput_ActivateActionSet, "ActivateActionSet" }, // 1329017890
		{ &Z_Construct_UFunction_UISteamInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 112649815
		{ &Z_Construct_UFunction_UISteamInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 1078558980
		{ &Z_Construct_UFunction_UISteamInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 4109595773
		{ &Z_Construct_UFunction_UISteamInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 1946443586
		{ &Z_Construct_UFunction_UISteamInput_GetActionSetHandle, "GetActionSetHandle" }, // 1628156114
		{ &Z_Construct_UFunction_UISteamInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 3506534722
		{ &Z_Construct_UFunction_UISteamInput_GetAnalogActionData, "GetAnalogActionData" }, // 967880883
		{ &Z_Construct_UFunction_UISteamInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 1553856592
		{ &Z_Construct_UFunction_UISteamInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 192099000
		{ &Z_Construct_UFunction_UISteamInput_GetConnectedControllers, "GetConnectedControllers" }, // 3214928821
		{ &Z_Construct_UFunction_UISteamInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 1000957690
		{ &Z_Construct_UFunction_UISteamInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 3542166466
		{ &Z_Construct_UFunction_UISteamInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 3726979471
		{ &Z_Construct_UFunction_UISteamInput_GetDigitalActionData, "GetDigitalActionData" }, // 3867833363
		{ &Z_Construct_UFunction_UISteamInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 3287586503
		{ &Z_Construct_UFunction_UISteamInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 634250925
		{ &Z_Construct_UFunction_UISteamInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 357995081
		{ &Z_Construct_UFunction_UISteamInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 540820718
		{ &Z_Construct_UFunction_UISteamInput_GetMotionData, "GetMotionData" }, // 3110272106
		{ &Z_Construct_UFunction_UISteamInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 552726937
		{ &Z_Construct_UFunction_UISteamInput_GetSteamInput, "GetSteamInput" }, // 4112820800
		{ &Z_Construct_UFunction_UISteamInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 3933676390
		{ &Z_Construct_UFunction_UISteamInput_Init, "Init" }, // 1574873794
		{ &Z_Construct_UFunction_UISteamInput_RunFrame, "RunFrame" }, // 3496133313
		{ &Z_Construct_UFunction_UISteamInput_SetLEDColor, "SetLEDColor" }, // 1724124909
		{ &Z_Construct_UFunction_UISteamInput_SetLEDColorU, "SetLEDColorU" }, // 1049714214
		{ &Z_Construct_UFunction_UISteamInput_ShowBindingPanel, "ShowBindingPanel" }, // 2200536994
		{ &Z_Construct_UFunction_UISteamInput_Shutdown, "Shutdown" }, // 1626903612
		{ &Z_Construct_UFunction_UISteamInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 244668400
		{ &Z_Construct_UFunction_UISteamInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 34647930
		{ &Z_Construct_UFunction_UISteamInput_TriggerVibration, "TriggerVibration" }, // 4001250463
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISteamInput, UISteamInput::StaticClass, TEXT("UISteamInput"), &Z_Registration_Info_UClass_UISteamInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISteamInput), 2757110516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_3990084609(TEXT("/Script/SteamAPI_BPL_Plugin"),
		Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
