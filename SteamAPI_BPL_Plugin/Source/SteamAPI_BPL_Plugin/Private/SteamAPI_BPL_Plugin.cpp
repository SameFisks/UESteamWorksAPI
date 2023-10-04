// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamAPI_BPL_Plugin.h"

#include "Engine/Engine.h"
#include "Misc/CoreDelegates.h"
#include "Misc/FileHelper.h"

#define LOCTEXT_NAMESPACE "FSteamAPI_BPL_PluginModule"

// Declare a member variable for the callback
CCallResult<FSteamAPI_BPL_PluginModule, GameOverlayActivated_t> m_GameOverlayActivatedCallback;

// Define the static variable inside the source file
static CSteamID myID;

void FSteamAPI_BPL_PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	//FFileHelper::SaveStringToFile(TEXT(RAW_APP_ID), TEXT("steam_appid.txt"));

 //   SteamAPI_RestartAppIfNecessary(atoi(APP_ID));

 //   if (SteamAPI_Init())
 //   {

 //   	CSteamID SteamID = FSteamAPI_BPL_PluginModule::GetSteamID();
 //   	FString SteamIDString = FString::Printf(TEXT("%llu"), SteamID.ConvertToUint64());
 //   	UE_LOG(LogTemp, Display, TEXT("SteamID: %s"), *SteamIDString);

 //   	UE_LOG(LogTemp, Display, TEXT("SteamAPI_Init Successful "));

 //   	// Register the callback function
 //   	SteamAPI_RunCallbacks();
 //   	SteamFriends()->SetRichPresence("status", "Hello, world!");

 //   	//// Run Steam callbacks in the main game loop
 //   	//FCoreDelegates::OnBeginFrame.AddRaw(this, &FSteamAPI_BPL_PluginModule::RunSteamCallbacks);
 //   }
 //   else
 //   {
 //   	UE_LOG(LogTemp, Error, TEXT("SteamAPI_Init Failed"));
 //   }



}

void FSteamAPI_BPL_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FCoreDelegates::OnBeginFrame.RemoveAll(this);

	SteamAPI_Shutdown();
	
}

void FSteamAPI_BPL_PluginModule::BeginPlay()
{
	//FFileHelper::SaveStringToFile(TEXT(RAW_APP_ID), TEXT("steam_appid.txt"));

}

void FSteamAPI_BPL_PluginModule::RunSteamCallbacks()
{
	if (bInitialized)
	{
		SteamAPI_RunCallbacks();
	}
}

bool FSteamAPI_BPL_PluginModule::SteamInit()
{
	SteamAPI_RestartAppIfNecessary(atoi(APP_ID));



	if (SteamAPI_Init())
	{
		// Get the local player's Steam ID
		myID = SteamUser()->GetSteamID();

		UE_LOG(LogTemp, Display, TEXT("Steam API initialized"));
		FString Message = FString(TEXT("Steam API initialized"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);


		// Register the callback function
		SteamAPI_RunCallbacks();
		SteamFriends()->SetRichPresence("status", "Hello, world!");

		// Run Steam callbacks in the main game loop
		FCoreDelegates::OnBeginFrame.AddRaw(this, &FSteamAPI_BPL_PluginModule::RunSteamCallbacks);

		bInitialized = true;
		return bInitialized;
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Steam API failed to initialize"));
		FString Message = FString(TEXT("Steam API failed to initialize"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
		return bInitialized;
	}

	return false;
}

void FSteamAPI_BPL_PluginModule::SteamRestartAppIfNecessary()
{
	SteamAPI_RestartAppIfNecessary(atoi(APP_ID));
}

bool FSteamAPI_BPL_PluginModule::SteamShutdown()
{
	if (bInitialized)
	{
		SteamAPI_Shutdown();
		bInitialized = false;
		return true;
	}
	else
	{
				return false;
	}
}

CSteamID& FSteamAPI_BPL_PluginModule::GetSteamID()
{return myID;
}

//Broken
const char* FSteamAPI_BPL_PluginModule::GetSteamAppID()
{return nullptr;
}


void FSteamAPI_BPL_PluginModule::OnGameOverlayActivated(GameOverlayActivated_t* pCallback)
{
	if (pCallback->m_bActive)
	{
		UE_LOG(LogTemp, Display, TEXT("Steam Overlay is open"));

		//FString Message = FString(TEXT("Steam Overlay is open"));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);

		bOverlayActive = true;
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Steam Overlay is closed"));

		//FString Message = FString(TEXT("Steam Overlay is closed"));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);

		bOverlayActive = false;
	}
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSteamAPI_BPL_PluginModule, SteamAPI_BPL_Plugin)