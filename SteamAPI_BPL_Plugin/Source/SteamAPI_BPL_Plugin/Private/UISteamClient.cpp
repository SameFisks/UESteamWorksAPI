#include "UISteamClient.h"
#include "USteamUtils.h"

UISteamClient::UISteamClient(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UISteamClient::BShutdownIfAllPipesClosed()
{
	return SteamClient()->BShutdownIfAllPipesClosed();
}

UISteamClient::UISteamClient()
{
	//SetWarningMessageHookCallback.Register(this, &UISteamClient::SetWarningMessageHook);
}

UISteamClient::~UISteamClient()
{
	//SetWarningMessageHookCallback.Unregister();
}

bool UISteamClient::BReleaseSteamPipe(int32 hSteamPipe)
{
	return SteamClient()->BReleaseSteamPipe(hSteamPipe);
}

int32 UISteamClient::ConnectToGlobalUser(int32 hSteamPipe)
{
	return SteamClient()->ConnectToGlobalUser(hSteamPipe);
}

//FHSteamUser UISteamClient::CreateLocalUser(FHSteamPipe phSteamPipe, ESteamAccountType eAccountType)
//{
//	return (FHSteamUser)SteamClient()->CreateLocalUser((HSteamPipe*)phSteamPipe, static_cast<EAccountType>(eAccountType));
//
//}

FHSteamPipe UISteamClient::CreateSteamPipe()
{
	return SteamClient()->CreateSteamPipe();
}

FUint32 UISteamClient::GetIPCCallCount()
{
	return SteamClient()->GetIPCCallCount();
}

void UISteamClient::GetISteamGenericInterface(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion)
{
	SteamClient()->GetISteamGenericInterface((HSteamUser)hSteamUser, (HSteamPipe)hSteamPipe, TCHAR_TO_UTF8(*pchVersion));
}

void UISteamClient::ReleaseUser(FHSteamPipe hSteamPipe, FHSteamUser hUser)
{SteamClient()->ReleaseUser((HSteamPipe)hSteamPipe, (HSteamUser)hUser);
}

void UISteamClient::SetLocalIPBinding(FUint32 unIP, FUint16 usPort)
{
	SteamIPAddress_t steamIP;
	steamIP.m_eType = k_ESteamIPTypeIPv4;
	steamIP.m_unIPv4 = (uint32)unIP;

	SteamClient()->SetLocalIPBinding(steamIP, (uint16)usPort);
}

//broekn
//void UISteamClient::SetWarningMessageHook(SteamAPIWarningMessageHook_t* pParam)
//{
//	//m_SetWarningMessageHook.Broadcast(pParam);
//}
