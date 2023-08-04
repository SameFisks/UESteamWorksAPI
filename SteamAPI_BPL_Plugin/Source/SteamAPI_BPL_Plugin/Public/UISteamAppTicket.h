#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "UISteamAppTicket.generated.h"

//	Interface to get app ownership data. This is used by the Steam DRM wrapper to let it ask about ownership with greater confidence.
UCLASS()
class UISteamAppTicket : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
};

