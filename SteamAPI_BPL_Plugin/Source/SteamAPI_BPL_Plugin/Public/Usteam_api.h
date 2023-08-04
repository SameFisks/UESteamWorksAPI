
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#include "../Steam/steam_api.h"
#pragma warning(pop)

#define RAW_APP_ID "480"

#include "Usteam_api.generated.h"

//Provides the core foundation to initialize and access the Steamworks API.

UCLASS()
class Usteam_api : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


};

