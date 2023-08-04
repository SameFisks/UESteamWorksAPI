#include "UISteamApps.h"


UISteamApps::UISteamApps(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


bool UISteamApps::BIsAppInstalled(FSteamAppId_t aAppId)
{
	return SteamApps()->BIsAppInstalled(aAppId.AppId);
}

bool UISteamApps::BIsDlcInstalled(FSteamAppId_t aAppId)
{
	return SteamApps()->BIsDlcInstalled(aAppId.AppId);
}

bool UISteamApps::BIsSubscribed()
{return SteamApps()->BIsSubscribed();
}

bool UISteamApps::BIsLowViolence()
{return SteamApps()->BIsLowViolence();
}

bool UISteamApps::BIsCybercafe()
{return SteamApps()->BIsCybercafe();
}

bool UISteamApps::BIsVACBanned()
{return SteamApps()->BIsVACBanned();
}

FString UISteamApps::GetCurrentGameLanguage()
{return SteamApps()->GetCurrentGameLanguage();
}

FString UISteamApps::GetAvailableGameLanguages()
{return SteamApps()->GetAvailableGameLanguages();
}

bool UISteamApps::BIsSubscribedApp(FSteamAppId_t aAppId)
{
	return SteamApps()->BIsSubscribed();
}

int32 UISteamApps::GetEarliestPurchaseUnixTime(FSteamAppId_t aAppId)
{
	return SteamApps()->GetEarliestPurchaseUnixTime(aAppId.AppId);
}

bool UISteamApps::BIsSubscribedFromFreeWeekend()
{return SteamApps()->BIsSubscribedFromFreeWeekend();
}

int32 UISteamApps::GetDLCCount()
{return SteamApps()->GetDLCCount();
}

//bool UISteamApps::BGetDLCDataByIndex(int32 iDLC, uint32 pAppID)
//{
//	char nameBuffer[1024];
//	bool result;
//	SteamApps()->BGetDLCDataByIndex(iDLC, &pAppID, &result, nameBuffer, sizeof(nameBuffer));
//
//	return result;
//}

void UISteamApps::InstallDLC(FSteamAppId_t aAppId)
{SteamApps()->InstallDLC(aAppId.AppId);
}

void UISteamApps::UninstallDLC(FSteamAppId_t aAppId)
{SteamApps()->UninstallDLC(aAppId.AppId);
}

void UISteamApps::RequestAppProofOfPurchaseKey(FSteamAppId_t aAppId)
{
	SteamApps()->RequestAppProofOfPurchaseKey(aAppId.AppId);
}

FString UISteamApps::GetCurrentBetaName()
{
	char pchName[1024];
	SteamApps()->GetCurrentBetaName(pchName, sizeof(pchName));
	return FString(pchName);
}

bool UISteamApps::MarkContentCorrupt(bool bMissingFilesOnly)
{return SteamApps()->MarkContentCorrupt(bMissingFilesOnly);
}

TArray<FSteamDepotId_t> UISteamApps::GetInstalledDepots(FSteamAppId_t aAppId)
{
	return TArray<FSteamDepotId_t>();
}

FString UISteamApps::GetAppInstallDir(FSteamAppId_t aAppId)
{
	char pchFolder[1024];
	SteamApps()->GetAppInstallDir(aAppId.AppId, pchFolder, sizeof(pchFolder));
	return FString(pchFolder);

}
//
//FSteamId_t UISteamApps::GetAppOwner()
//{
//	return SteamApps()->GetAppOwner().ConvertToUint64();
//}

FString UISteamApps::GetLaunchQueryParam(FString Key)
{	return SteamApps()->GetLaunchQueryParam(TCHAR_TO_UTF8(*Key));
}

//bool UISteamApps::GetDlcDownloadProgress(FSteamAppId_t aAppId, uint64& punBytesDownloaded, uint64& punBytesTotal)
//{
//	return SteamApps()->GetDlcDownloadProgress(aAppId.AppId, &punBytesDownloaded, &punBytesTotal);
//}

int32 UISteamApps::GetAppBuildId()
{return SteamApps()->GetAppBuildId();
}
