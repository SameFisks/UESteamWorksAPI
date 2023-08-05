#include "UISteamRemoteStorage.h"


UISteamRemoteStorage::UISteamRemoteStorage(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


UISteamRemoteStorage::UISteamRemoteStorage()
{
	OnRemoteStorageDownloadUGCResultCallback.Register(this, &UISteamRemoteStorage::OnRemoteStorageDownloadUGCResult);
	OnRemoteStorageFileReadAsyncCompleteCallback.Register(this, &UISteamRemoteStorage::OnRemoteStorageFileReadAsyncComplete);
	OnRemoteStorageFileShareResultCallback.Register(this, &UISteamRemoteStorage::OnRemoteStorageFileShareResult);
	OnRemoteStorageFileWriteAsyncCompleteCallback.Register(this, &UISteamRemoteStorage::OnRemoteStorageFileWriteAsyncComplete);
	OnRemoteStoragePublishedFileSubscribedCallback.Register(this, &UISteamRemoteStorage::OnRemoteStoragePublishedFileSubscribed);
	OnRemoteStoragePublishedFileUnsubscribedCallback.Register(this, &UISteamRemoteStorage::OnRemoteStoragePublishedFileUnsubscribed);
	OnRemoteStorageSubscribePublishedFileResultCallback.Register(this, &UISteamRemoteStorage::OnRemoteStorageSubscribePublishedFileResult);
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Register(this, &UISteamRemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult);
}

UISteamRemoteStorage::~UISteamRemoteStorage()
{
	OnRemoteStorageDownloadUGCResultCallback.Unregister();
	OnRemoteStorageFileReadAsyncCompleteCallback.Unregister();
	OnRemoteStorageFileShareResultCallback.Unregister();
	OnRemoteStorageFileWriteAsyncCompleteCallback.Unregister();
	OnRemoteStoragePublishedFileSubscribedCallback.Unregister();
	OnRemoteStoragePublishedFileUnsubscribedCallback.Unregister();
	OnRemoteStorageSubscribePublishedFileResultCallback.Unregister();
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Unregister();
}

int32 UISteamRemoteStorage::FileRead(const FString& FileName, TArray<uint8>& Data, int32 DataToRead) const
{
	Data.SetNum(DataToRead);
	int32 result = SteamRemoteStorage()->FileRead(TCHAR_TO_UTF8(*FileName), Data.GetData(), Data.Num());
	Data.SetNum(result);
	return result;
}

bool UISteamRemoteStorage::GetQuota(int64& TotalBytes, int64& AvailableBytes) const
{
	uint64 TmpTotal, TmpAvailable;
	bool bResult = SteamRemoteStorage()->GetQuota(&TmpTotal, &TmpAvailable);
	TotalBytes = TmpTotal;
	AvailableBytes = TmpAvailable;
	return bResult;
}

void UISteamRemoteStorage::OnRemoteStorageDownloadUGCResult(RemoteStorageDownloadUGCResult_t* pParam)
{
	m_OnRemoteStorageDownloadUGCResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_hFile, pParam->m_nAppID, pParam->m_nSizeInBytes, UTF8_TO_TCHAR(pParam->m_pchFileName), pParam->m_ulSteamIDOwner);
}

void UISteamRemoteStorage::OnRemoteStorageFileReadAsyncComplete(RemoteStorageFileReadAsyncComplete_t* pParam)
{
	m_OnRemoteStorageFileReadAsyncComplete.Broadcast(pParam->m_hFileReadAsync, (ESteamResult)pParam->m_eResult, pParam->m_nOffset, pParam->m_cubRead);
}

void UISteamRemoteStorage::OnRemoteStorageFileShareResult(RemoteStorageFileShareResult_t* pParam)
{
	m_OnRemoteStorageFileShareResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_hFile, UTF8_TO_TCHAR(pParam->m_rgchFilename));
}

void UISteamRemoteStorage::OnRemoteStorageFileWriteAsyncComplete(RemoteStorageFileWriteAsyncComplete_t* pParam)
{
	m_OnRemoteStorageFileWriteAsyncComplete.Broadcast((ESteamResult)pParam->m_eResult);
}

void UISteamRemoteStorage::OnRemoteStoragePublishedFileSubscribed(RemoteStoragePublishedFileSubscribed_t* pParam)
{
	m_OnRemoteStoragePublishedFileSubscribed.Broadcast(pParam->m_nPublishedFileId, pParam->m_nAppID);
}

void UISteamRemoteStorage::OnRemoteStoragePublishedFileUnsubscribed(RemoteStoragePublishedFileUnsubscribed_t* pParam)
{
	m_OnRemoteStoragePublishedFileUnsubscribed.Broadcast(pParam->m_nPublishedFileId, pParam->m_nAppID);
}

void UISteamRemoteStorage::OnRemoteStorageSubscribePublishedFileResult(RemoteStorageSubscribePublishedFileResult_t* pParam)
{
	m_OnRemoteStorageSubscribePublishedFileResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_nPublishedFileId);
}

void UISteamRemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult(RemoteStorageUnsubscribePublishedFileResult_t* pParam)
{
	m_OnRemoteStorageUnsubscribePublishedFileResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_nPublishedFileId);
}
