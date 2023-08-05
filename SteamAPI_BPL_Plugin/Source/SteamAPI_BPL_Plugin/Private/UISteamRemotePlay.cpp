#include "UISteamRemotePlay.h"
#include "USteamUtils.h"


UISteamRemotePlay::UISteamRemotePlay(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamRemotePlay::UISteamRemotePlay()
{
	OnSteamRemotePlaySessionConnectedCallback.Register(this, &UISteamRemotePlay::OnSteamRemotePlaySessionConnected);
	OnSteamRemotePlaySessionDisconnectedCallback.Register(this, &UISteamRemotePlay::OnSteamRemotePlaySessionDisconnected);
}

UISteamRemotePlay::~UISteamRemotePlay()
{
	OnSteamRemotePlaySessionConnectedCallback.Unregister();
	OnSteamRemotePlaySessionDisconnectedCallback.Unregister();
}

bool UISteamRemotePlay::BGetSessionClientResolution(int32 SessionID, FIntPoint& Resolution) const
{
	int32 x, y;
	bool bResult = SteamRemotePlay()->BGetSessionClientResolution(SessionID, &x, &y);
	Resolution = { x,y };
	return bResult;
}

void UISteamRemotePlay::OnSteamRemotePlaySessionConnected(SteamRemotePlaySessionConnected_t* pParam)
{
	m_OnSteamRemotePlaySessionConnected.Broadcast(pParam->m_unSessionID);
}

void UISteamRemotePlay::OnSteamRemotePlaySessionDisconnected(SteamRemotePlaySessionDisconnected_t* pParam)
{
	m_OnSteamRemotePlaySessionDisconnected.Broadcast(pParam->m_unSessionID);
}
