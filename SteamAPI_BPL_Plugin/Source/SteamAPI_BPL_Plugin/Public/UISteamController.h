#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamController.generated.h"

//	Steam Controller support API (deprecated and replaced with ISteamInput)

UCLASS()
class UISteamController : public UBlueprintFunctionLibrary{
	GENERATED_UCLASS_BODY()
public:
	UISteamController();
	~UISteamController();


	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Controller", CompactNodeTitle = "SteamController"))
		static UISteamController* GetSteamApps() { return UISteamController::StaticClass()->GetDefaultObject<UISteamController>(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BReleaseSActivateActionSetteamPipe", Keywords = "Steam ISteamController ActivateActionSet"), Category = "SteamAPI|ISteamController")
		static bool ActivateActionSet(int32 hSteamPipe);

	
};

