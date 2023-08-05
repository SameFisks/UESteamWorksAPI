#include "UISteamGameServerStats.h"
#include "USteamUtils.h"

UISteamGameServerStats::UISteamGameServerStats(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


UISteamGameServerStats::UISteamGameServerStats()
{
	OnGSStatsReceivedCallback.Register(this, &UISteamGameServerStats::OnGSStatsReceived);
	OnGSStatsStoredCallback.Register(this, &UISteamGameServerStats::OnGSStatsStored);
	OnGSStatsUnloadedCallback.Register(this, &UISteamGameServerStats::OnGSStatsUnloaded);
}

UISteamGameServerStats::~UISteamGameServerStats()
{
	OnGSStatsReceivedCallback.Unregister();
	OnGSStatsStoredCallback.Unregister();
	OnGSStatsUnloadedCallback.Unregister();
}

bool UISteamGameServerStats::UpdateUserAvgRateStat(FSteamID SteamIDUser, const FString& Name, float CountThisSession, float SessionLength) const
{
	return SteamGameServerStats()->UpdateUserAvgRateStat(SteamIDUser, TCHAR_TO_UTF8(*Name), CountThisSession, SessionLength);
}

void UISteamGameServerStats::OnGSStatsReceived(GSStatsReceived_t* pParam)
{
	m_OnGSStatsReceived.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_steamIDUser.ConvertToUint64());
}

void UISteamGameServerStats::OnGSStatsStored(GSStatsStored_t* pParam)
{
	m_OnGSStatsStored.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_steamIDUser.ConvertToUint64());
}

void UISteamGameServerStats::OnGSStatsUnloaded(GSStatsUnloaded_t* pParam)
{
	m_OnGSStatsUnloaded.Broadcast(pParam->m_steamIDUser.ConvertToUint64());
}
