#include "UISteamApps.h"


UISteamApps::UISteamApps(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamApps::UISteamApps()
{
	OnDlcInstalledCallback.Register(this, &UISteamApps::OnDlcInstalled);
	OnFileDetailsResultCallback.Register(this, &UISteamApps::OnFileDetailsResult);
	OnNewUrlLaunchParametersCallback.Register(this, &UISteamApps::OnNewUrlLaunchParameters);
}

UISteamApps::~UISteamApps()
{
	OnDlcInstalledCallback.Unregister();
	OnNewUrlLaunchParametersCallback.Unregister();
}

bool UISteamApps::BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name)
{
	if (DLC > GetDLCCount())
	{
		return false;
	}

	TArray<char> TempStr;
	bool bResult = SteamApps()->BGetDLCDataByIndex(DLC, (uint32*)&AppID, &bAvailable, TempStr.GetData(), MAX_int32);
	Name = UTF8_TO_TCHAR(TempStr.GetData());
	return bResult;
}

int32 UISteamApps::GetAppInstallDir(int32 AppID, FString& Folder)
{
	const uint32 buffer = 1024 * 1024 * 10;
	TArray<char> TempPath;
	TempPath.SetNum(buffer);
	uint32 Length = SteamApps()->GetAppInstallDir(AppID, TempPath.GetData(), buffer);
	if (Length < 0)
	{
		return -1;
	}
	TempPath.SetNum(Length);
	Folder = UTF8_TO_TCHAR(TempPath.GetData());
	return Length;
}

bool UISteamApps::GetCurrentBetaName(FString& Name)
{
	TArray<char> TempStr;
	bool bResult = SteamApps()->GetCurrentBetaName(TempStr.GetData(), 4096);
	Name = UTF8_TO_TCHAR(TempStr.GetData());
	return bResult;
}

int32 UISteamApps::GetLaunchCommandLine(FString& CommandLine)
{
	TArray<char> TempStr;
	int32 res = SteamApps()->GetLaunchCommandLine(TempStr.GetData(), 2048);
	CommandLine = UTF8_TO_TCHAR(TempStr.GetData());
	return res;
}

void UISteamApps::OnDlcInstalled(DlcInstalled_t* pParam)
{
	m_OnDlcInstalled.Broadcast((int32)pParam->m_nAppID);
}

void UISteamApps::OnFileDetailsResult(FileDetailsResult_t* pParam)
{
	m_OnFileDetailsResult.Broadcast((ESteamResult)pParam->m_eResult, (int64)pParam->m_ulFileSize, UTF8_TO_TCHAR(pParam->m_FileSHA), (int32)pParam->m_unFlags);
}

void UISteamApps::OnNewUrlLaunchParameters(NewUrlLaunchParameters_t* pParam)
{
	m_OnNewUrlLaunchParameters.Broadcast();
}



//Old
//
//bool UISteamApps::BIsAppInstalled(FSteamAppId_t aAppId)
//{
//	return SteamApps()->BIsAppInstalled(aAppId.AppId);
//}
//
//bool UISteamApps::BIsDlcInstalled(FSteamAppId_t aAppId)
//{
//	return SteamApps()->BIsDlcInstalled(aAppId.AppId);
//}
//
//bool UISteamApps::BIsSubscribed()
//{return SteamApps()->BIsSubscribed();
//}
//
//bool UISteamApps::BIsLowViolence()
//{return SteamApps()->BIsLowViolence();
//}
//

//
//bool UISteamApps::BIsVACBanned()
//{return SteamApps()->BIsVACBanned();
//}
//
//FString UISteamApps::GetCurrentGameLanguage()
//{return SteamApps()->GetCurrentGameLanguage();
//}
//
//FString UISteamApps::GetAvailableGameLanguages()
//{return SteamApps()->GetAvailableGameLanguages();
//}
//
//bool UISteamApps::BIsSubscribedApp(FSteamAppId_t aAppId)
//{
//	return SteamApps()->BIsSubscribed();
//}
//
//int32 UISteamApps::GetEarliestPurchaseUnixTime(FSteamAppId_t aAppId)
//{
//	return SteamApps()->GetEarliestPurchaseUnixTime(aAppId.AppId);
//}
//
//bool UISteamApps::BIsSubscribedFromFreeWeekend()
//{return SteamApps()->BIsSubscribedFromFreeWeekend();
//}
//
//int32 UISteamApps::GetDLCCount()
//{return SteamApps()->GetDLCCount();
//}
//
////bool UISteamApps::BGetDLCDataByIndex(int32 iDLC, uint32 pAppID)
////{
////	char nameBuffer[1024];
////	bool result;
////	SteamApps()->BGetDLCDataByIndex(iDLC, &pAppID, &result, nameBuffer, sizeof(nameBuffer));
////
////	return result;
////}
//
//void UISteamApps::InstallDLC(FSteamAppId_t aAppId)
//{SteamApps()->InstallDLC(aAppId.AppId);
//}
//
//void UISteamApps::UninstallDLC(FSteamAppId_t aAppId)
//{SteamApps()->UninstallDLC(aAppId.AppId);
//}
//
//void UISteamApps::RequestAppProofOfPurchaseKey(FSteamAppId_t aAppId)
//{
//	SteamApps()->RequestAppProofOfPurchaseKey(aAppId.AppId);
//}
//
//FString UISteamApps::GetCurrentBetaName()
//{
//	char pchName[1024];
//	SteamApps()->GetCurrentBetaName(pchName, sizeof(pchName));
//	return FString(pchName);
//}
//
//bool UISteamApps::MarkContentCorrupt(bool bMissingFilesOnly)
//{return SteamApps()->MarkContentCorrupt(bMissingFilesOnly);
//}
//
//TArray<FSteamDepotId_t> UISteamApps::GetInstalledDepots(FSteamAppId_t aAppId)
//{
//	return TArray<FSteamDepotId_t>();
//}
//
//FString UISteamApps::GetAppInstallDir(FSteamAppId_t aAppId)
//{
//	char pchFolder[1024];
//	SteamApps()->GetAppInstallDir(aAppId.AppId, pchFolder, sizeof(pchFolder));
//	return FString(pchFolder);
//
//}
////
////FSteamId_t UISteamApps::GetAppOwner()
////{
////	return SteamApps()->GetAppOwner().ConvertToUint64();
////}
//
//FString UISteamApps::GetLaunchQueryParam(FString Key)
//{	return SteamApps()->GetLaunchQueryParam(TCHAR_TO_UTF8(*Key));
//}
//
////bool UISteamApps::GetDlcDownloadProgress(FSteamAppId_t aAppId, uint64& punBytesDownloaded, uint64& punBytesTotal)
////{
////	return SteamApps()->GetDlcDownloadProgress(aAppId.AppId, &punBytesDownloaded, &punBytesTotal);
////}
//
//int32 UISteamApps::GetAppBuildId()
//{return SteamApps()->GetAppBuildId();
//}
//
//bool UISteamApps::BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name)
//{
//	if (DLC > GetDLCCount())
//	{
//		return false;
//	}
//
//	TArray<char> TempStr;
//	bool bResult = SteamApps()->BGetDLCDataByIndex(DLC, (uint32*)&AppID, &bAvailable, TempStr.GetData(), MAX_int32);
//	Name = UTF8_TO_TCHAR(TempStr.GetData());
//	return bResult;
//}
