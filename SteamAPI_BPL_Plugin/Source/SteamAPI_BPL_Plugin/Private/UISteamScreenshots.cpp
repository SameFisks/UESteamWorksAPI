#include "UISteamScreenshots.h"

#include "USteamUtils.h"
#include "Engine/Texture2D.h"

UISteamScreenshots::UISteamScreenshots(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamScreenshots::UISteamScreenshots()
{
	OnScreenshotReadyCallback.Register(this, &UISteamScreenshots::OnScreenshotReady);
	OnScreenshotRequestedCallback.Register(this, &UISteamScreenshots::OnScreenshotRequested);
}

UISteamScreenshots::~UISteamScreenshots()
{
	OnScreenshotReadyCallback.Unregister();
	OnScreenshotRequestedCallback.Unregister();
}

FScreenshotHandle UISteamScreenshots::AddScreenshotToLibrary(const FString& FileName, const FString& ThumbnailFileName, const FIntPoint& Size /*= { 1920, 1080 }*/) const
{
	return SteamScreenshots()->AddScreenshotToLibrary(TCHAR_TO_UTF8(*FileName), TCHAR_TO_UTF8(*ThumbnailFileName), Size.X, Size.Y);
}

FScreenshotHandle UISteamScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType Type, const FString& FileName, const FString& VRFileName) const
{
	return SteamScreenshots()->AddVRScreenshotToLibrary((EVRScreenshotType)Type, TCHAR_TO_UTF8(*FileName), TCHAR_TO_UTF8(*VRFileName));
}

FScreenshotHandle UISteamScreenshots::WriteScreenshot(UTexture2D* Image) const
{
	FTexture2DMipMap* TmpMipMap = &Image->PlatformData->Mips[0];
	FByteBulkData* TmpData = &TmpMipMap->BulkData;
	return SteamScreenshots()->WriteScreenshot(TmpData, TmpData->GetBulkDataSize(), Image->GetSizeX(), Image->GetSizeY());
}

void UISteamScreenshots::OnScreenshotReady(ScreenshotReady_t* pParam)
{
	m_OnScreenshotReady.Broadcast(pParam->m_hLocal, (ESteamResult)pParam->m_eResult);
}

void UISteamScreenshots::OnScreenshotRequested(ScreenshotRequested_t* pParam)
{
	m_OnScreenshotRequested.Broadcast();
}
