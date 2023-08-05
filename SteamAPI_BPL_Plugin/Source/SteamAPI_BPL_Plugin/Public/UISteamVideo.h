
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamVideo.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetOPFSettingsResultDelegate, ESteamResult, Result, int32, VideoAppID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGetVideoURLResultDelegate, ESteamResult, Result, int32, VideoAppID, FString, URL);

//Provides functions to interface with the Steam video and broadcasting platforms.
UCLASS()
class UISteamVideo : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UISteamVideo();
	virtual ~UISteamVideo() override;



	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetSteamVideo", Keywords = "Steam GetSteamVideo"), Category = "SteamAPI")
		static UISteamVideo* GetSteamVideo();

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|ISteamVideo")
		void GetOPFSettings(int32 VideoAppID) { SteamVideo()->GetOPFSettings(VideoAppID); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|ISteamVideo")
		bool GetOPFStringForApp(int32 VideoAppID, FString& OPFString) const;

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|ISteamVideo")
		void GetVideoURL(int32 VideoAppID) { SteamVideo()->GetVideoURL(VideoAppID); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamVideo")
		bool IsBroadcasting(int32& NumViewers) { return SteamVideo()->IsBroadcasting(&NumViewers); }

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamVideo", meta = (DisplayName = "OnGetOPFSettingsResult"))
		FOnGetOPFSettingsResultDelegate m_OnGetOPFSettingsResult;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamVideo", meta = (DisplayName = "OnGetVideoURLResult"))
		FOnGetVideoURLResultDelegate m_OnGetVideoURLResult;

private:

	STEAM_CALLBACK_MANUAL(UISteamVideo, OnGetOPFSettingsResult, GetOPFSettingsResult_t, OnGetOPFSettingsResultCallback);
	STEAM_CALLBACK_MANUAL(UISteamVideo, OnGetVideoURLResult, GetVideoURLResult_t, OnGetVideoURLResultCallback);
};

