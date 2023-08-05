#include "UISteamVideo.h"


UISteamVideo::UISteamVideo()
{
	OnGetOPFSettingsResultCallback.Register(this, &UISteamVideo::OnGetOPFSettingsResult);
	OnGetVideoURLResultCallback.Register(this, &UISteamVideo::OnGetVideoURLResult);
}

UISteamVideo::~UISteamVideo()
{
	OnGetOPFSettingsResultCallback.Unregister();
	OnGetVideoURLResultCallback.Unregister();
}

UISteamVideo* UISteamVideo::GetSteamVideo()
{
	return UISteamVideo::StaticClass()->GetDefaultObject<UISteamVideo>();
}

UISteamVideo::UISteamVideo(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UISteamVideo::GetOPFStringForApp(int32 VideoAppID, FString& OPFString) const
{
	int32 TmpSize = 0;
	if (SteamVideo()->GetOPFStringForApp(VideoAppID, nullptr, &TmpSize))
	{
		TArray<char> TmpStr;
		bool bResult = SteamVideo()->GetOPFStringForApp(VideoAppID, TmpStr.GetData(), &TmpSize);
		OPFString = UTF8_TO_TCHAR(TmpStr.GetData());
		return bResult;
	}

	return false;
}


void UISteamVideo::OnGetOPFSettingsResult(GetOPFSettingsResult_t* pParam)
{
	m_OnGetOPFSettingsResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_unVideoAppID);
}

void UISteamVideo::OnGetVideoURLResult(GetVideoURLResult_t* pParam)
{
	m_OnGetVideoURLResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_unVideoAppID, UTF8_TO_TCHAR(pParam->m_rgchURL));
}
