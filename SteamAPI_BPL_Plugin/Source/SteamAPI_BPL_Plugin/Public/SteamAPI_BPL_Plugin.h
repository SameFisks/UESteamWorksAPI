// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"


#define RAW_APP_ID "2545970"

struct FSteamAppId_t;

class FSteamAPI_BPL_PluginModule : public IModuleInterface
{
public:

	static FSteamAPI_BPL_PluginModule& Get()
	{
		static FSteamAPI_BPL_PluginModule Instance;
		return Instance;
	}

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void BeginPlay();

	void RunSteamCallbacks();

	bool SteamInit();

	void SteamRestartAppIfNecessary();

	bool SteamShutdown();

	static CSteamID& GetSteamID();

	static const char* GetSteamAppID();	//Broken

private:

	STEAM_CALLBACK(FSteamAPI_BPL_PluginModule, OnGameOverlayActivated, GameOverlayActivated_t);

	static constexpr char* APP_ID = RAW_APP_ID;

	bool bInitialized = false;
	bool bOverlayActive = false;
};
