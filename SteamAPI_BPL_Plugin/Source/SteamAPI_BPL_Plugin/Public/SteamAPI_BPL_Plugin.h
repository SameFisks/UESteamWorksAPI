// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#pragma warning(pop)

#define RAW_APP_ID "480"

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

	static CSteamID& GetMyID();
	static const char* GetAppID();

private:

	STEAM_CALLBACK(FSteamAPI_BPL_PluginModule, OnGameOverlayActivated, GameOverlayActivated_t);

	static constexpr char* APP_ID = RAW_APP_ID;

	bool bInitialized = false;
	bool bOverlayActive = false;
};
