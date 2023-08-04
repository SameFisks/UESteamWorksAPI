
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "../Steam/steamtypes.h"
#include "../Steam/steamclientpublic.h"
#include "UISteamApps.generated.h"


//Exposes a wide range of information and actions for applications and Downloadable Content (DLC).
UCLASS()
class UISteamApps : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsAppInstalled", Keywords = "Steam ISteamApps BIsAppInstalled"), Category = "SteamAPI|ISteamApps")
		static bool BIsAppInstalled(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsDlcInstalled", Keywords = "Steam ISteamApps BIsDlcInstalled"), Category = "SteamAPI|ISteamApps")
		static bool BIsDlcInstalled(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsSubscribed", Keywords = "Steam ISteamApps BIsSubscribed"), Category = "SteamAPI|ISteamApps")
		static bool BIsSubscribed();

	UFUNCTION(BlueprintCallable,meta = (DisplayName = "Steam BIsLowViolence", Keywords = "Steam ISteamApps BIsLowViolence"), Category = "SteamAPI|ISteamApps")
		static bool BIsLowViolence();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsCybercafe", Keywords = "Steam ISteamApps BIsCybercafe"), Category = "SteamAPI|ISteamApps")
		static bool BIsCybercafe();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsVACBanned", Keywords = "Steam ISteamApps BIsVACBanned"), Category = "SteamAPI|ISteamApps")
		static bool BIsVACBanned();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetCurrentGameLanguage", Keywords = "Steam ISteamApps GetCurrentGameLanguage"), Category = "SteamAPI|ISteamApps")
		static FString GetCurrentGameLanguage();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetAvailableGameLanguages", Keywords = "Steam ISteamApps GetAvailableGameLanguages"), Category = "SteamAPI|ISteamApps")
		static FString GetAvailableGameLanguages();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsSubscribedApp", Keywords = "Steam ISteamApps BIsSubscribedApp"), Category = "SteamAPI|ISteamApps")
		static bool BIsSubscribedApp(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetEarliestPurchaseUnixTime", Keywords = "Steam ISteamApps GetEarliestPurchaseUnixTime"), Category = "SteamAPI|ISteamApps")
		static int32 GetEarliestPurchaseUnixTime(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BIsSubscribedFromFreeWeekend", Keywords = "Steam ISteamApps BIsSubscribedFromFreeWeekend"), Category = "SteamAPI|ISteamApps")
		static bool BIsSubscribedFromFreeWeekend();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetDLCCount", Keywords = "Steam ISteamApps GetDLCCount"), Category = "SteamAPI|ISteamApps")
		static int32 GetDLCCount();

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BGetDLCDataByIndex", Keywords = "Steam ISteamApps BGetDLCDataByIndex"), Category = "SteamAPI|ISteamApps")
	//	static bool BGetDLCDataByIndex(int32 iDLC, uint32 pAppID);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam InstallDLC", Keywords = "Steam ISteamApps InstallDLC"), Category = "SteamAPI|ISteamApps")
		static void InstallDLC(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam UninstallDLC", Keywords = "Steam ISteamApps UninstallDLC"), Category = "SteamAPI|ISteamApps")
		static void UninstallDLC(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam RequestAppProofOfPurchaseKey", Keywords = "Steam ISteamApps RequestAppProofOfPurchaseKey"), Category = "SteamAPI|ISteamApps")
		static void RequestAppProofOfPurchaseKey(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetCurrentBetaName", Keywords = "Steam ISteamApps GetCurrentBetaName"), Category = "SteamAPI|ISteamApps")
		static FString GetCurrentBetaName();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam MarkContentCorrupt", Keywords = "Steam ISteamApps MarkContentCorrupt"), Category = "SteamAPI|ISteamApps")
		static bool MarkContentCorrupt(bool bMissingFilesOnly);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetInstalledDepots", Keywords = "Steam ISteamApps GetInstalledDepots"), Category = "SteamAPI|ISteamApps")
		static TArray<FSteamDepotId_t> GetInstalledDepots(FSteamAppId_t aAppId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetAppInstallDir", Keywords = "Steam ISteamApps GetAppInstallDir"), Category = "SteamAPI|ISteamApps")
		static FString GetAppInstallDir(FSteamAppId_t aAppId);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetAppOwner", Keywords = "Steam ISteamApps GetAppOwner"), Category = "SteamAPI|ISteamApps")
	//	static FSteamId_t GetAppOwner();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetLaunchQueryParam", Keywords = "Steam ISteamApps GetLaunchQueryParam"), Category = "SteamAPI|ISteamApps")
		static FString GetLaunchQueryParam(FString Key);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetDlcDownloadProgress", Keywords = "Steam ISteamApps GetDlcDownloadProgress"), Category = "SteamAPI|ISteamApps")
	//	static bool GetDlcDownloadProgress(FSteamAppId_t aAppId, uint64& punBytesDownloaded, int64& punBytesTotal);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetAppBuildId", Keywords = "Steam ISteamApps GetAppBuildId"), Category = "SteamAPI|ISteamApps")
		static int32 GetAppBuildId();

};

