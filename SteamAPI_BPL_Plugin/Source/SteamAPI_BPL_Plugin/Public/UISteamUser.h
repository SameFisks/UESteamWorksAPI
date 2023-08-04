
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "UISteamUser.generated.h"

//Functions for accessing and manipulating Steam user information.
UCLASS()
class UISteamUser : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam StartVoiceRecording", Keywords = "Steam ISteamUser StartVoiceRecording"), Category = "SteamAPI|ISteamUser")
	static void StartVoiceRecording();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam StopVoiceRecording", Keywords = "Steam ISteamUser StopVoiceRecording"), Category = "SteamAPI|ISteamUser")
		static void StopVoiceRecording();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SetInGameVoiceSpeaking", Keywords = "Steam ISteamUser SetInGameVoiceSpeaking"), Category = "SteamAPI|ISteamUser")
		static void SetInGameVoiceSpeaking(FSteamPlayerInfo aSteamIDUser, bool bSpeaking);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetVoiceOptimalSampleRate", Keywords = "Steam ISteamUser GetVoiceOptimalSampleRate"), Category = "SteamAPI|ISteamUser")
		static int32 GetVoiceOptimalSampleRate();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam DecompressVoice", Keywords = "Steam ISteamUser DecompressVoice"), Category = "SteamAPI|ISteamUser")
		static FSteamEVoiceResult DecompressVoice(const TArray<uint8>& CompressedData, TArray<uint8>& DestBuffer, int32 DesiredSampleRate);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetHSteamUser", Keywords = "Steam ISteamUser GetHSteamUser"), Category = "SteamAPI|ISteamUser")
		static int32 GetHSteamUser();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BLoggedOn", Keywords = "Steam ISteamUser BLoggedOn"), Category = "SteamAPI|ISteamUser")
		static bool BLoggedOn();

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetSteamID", Keywords = "Steam ISteamUser GetSteamID"), Category = "SteamAPI|ISteamUser")
	//	static FSteamPlayerInfo GetSteamID();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam InitiateGameConnection", Keywords = "Steam ISteamUser InitiateGameConnection"), Category = "SteamAPI|ISteamUser")
		static TArray<uint8> InitiateGameConnection(FSteamPlayerInfo aSteamIDGameServer, int32 nIPServer, int32 nPortServer, bool bSecure);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam TerminateGameConnection", Keywords = "Steam ISteamUser TerminateGameConnection"), Category = "SteamAPI|ISteamUser")
		static void TerminateGameConnection_DEPRECATED(int32 nIPServer, int32 nPortServer);

};

