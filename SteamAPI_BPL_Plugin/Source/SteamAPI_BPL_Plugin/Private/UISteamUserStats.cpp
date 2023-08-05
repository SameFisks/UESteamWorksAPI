#include "UISteamUserStats.h"


UISteamUserStats::UISteamUserStats(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamUserStats::UISteamUserStats()
{
	OnGlobalAchievementPercentagesReadyCallback.Register(this, &UISteamUserStats::OnGlobalAchievementPercentagesReady);
	OnGlobalStatsReceivedCallback.Register(this, &UISteamUserStats::OnGlobalStatsReceived);
	OnLeaderboardFindResultCallback.Register(this, &UISteamUserStats::OnLeaderboardFindResult);
	OnLeaderboardScoresDownloadedCallback.Register(this, &UISteamUserStats::OnLeaderboardScoresDownloaded);
	OnLeaderboardScoreUploadedCallback.Register(this, &UISteamUserStats::OnLeaderboardScoreUploaded);
	OnLeaderboardUGCSetCallback.Register(this, &UISteamUserStats::OnLeaderboardUGCSet);
	OnNumberOfCurrentPlayersCallback.Register(this, &UISteamUserStats::OnNumberOfCurrentPlayers);
	OnUserAchievementIconFetchedCallback.Register(this, &UISteamUserStats::OnUserAchievementIconFetched);
	OnUserAchievementStoredCallback.Register(this, &UISteamUserStats::OnUserAchievementStored);
	OnUserStatsReceivedCallback.Register(this, &UISteamUserStats::OnUserStatsReceived);
	OnUserStatsStoredCallback.Register(this, &UISteamUserStats::OnUserStatsStored);
	OnUserStatsUnloadedCallback.Register(this, &UISteamUserStats::OnUserStatsUnloaded);
}

UISteamUserStats::~UISteamUserStats()
{
	OnGlobalAchievementPercentagesReadyCallback.Unregister();
	OnGlobalStatsReceivedCallback.Unregister();
	OnLeaderboardFindResultCallback.Unregister();
	OnLeaderboardScoresDownloadedCallback.Unregister();
	OnLeaderboardScoreUploadedCallback.Unregister();
	OnLeaderboardUGCSetCallback.Unregister();
	OnNumberOfCurrentPlayersCallback.Unregister();
	OnUserAchievementIconFetchedCallback.Unregister();
	OnUserAchievementStoredCallback.Unregister();
	OnUserStatsReceivedCallback.Unregister();
	OnUserStatsStoredCallback.Unregister();
	OnUserStatsUnloadedCallback.Unregister();
}

FSteamAPICall UISteamUserStats::DownloadLeaderboardEntries(FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd) const
{
	return SteamUserStats()->DownloadLeaderboardEntries(SteamLeaderboard, (ELeaderboardDataRequest)LeaderboardDataRequest, RangeStart, RangeEnd);
}

FSteamAPICall UISteamUserStats::FindOrCreateLeaderboard(const FString& LeaderboardName, ESteamLeaderboardSortMethod LeaderboardSortMethod, ESteamLeaderboardDisplayType LeaderboardDisplayType) const
{
	return SteamUserStats()->FindOrCreateLeaderboard(TCHAR_TO_UTF8(*LeaderboardName), (ELeaderboardSortMethod)LeaderboardSortMethod, (ELeaderboardDisplayType)LeaderboardDisplayType);
}

bool UISteamUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries SteamLeaderboardEntries, int32 index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32>& Details, int32 DetailsMax) const
{
	Details.SetNum(DetailsMax);
	LeaderboardEntry_t TmpEntry;
	bool bResult = SteamUserStats()->GetDownloadedLeaderboardEntry(SteamLeaderboardEntries, index, &TmpEntry, Details.GetData(), DetailsMax);
	LeaderboardEntry = TmpEntry;
	return bResult;
}

int32 UISteamUserStats::GetGlobalStatHistoryFloat(const FString& StatName, TArray<float>& Data, int32 Size) const
{
	TArray<double> TmpData;
	int32 result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*StatName), TmpData.GetData(), Size);
	for (int32 i = 0; i < TmpData.Num(); i++)
	{
		Data.Add((float)TmpData[i]);
	}
	return result;
}

int32 UISteamUserStats::GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved) const
{
	TArray<char> TmpName;
	int32 result = SteamUserStats()->GetMostAchievedAchievementInfo(TmpName.GetData(), 1024, &Percent, &bAchieved);
	Name = UTF8_TO_TCHAR(TmpName.GetData());
	return  result;
}

int32 UISteamUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& Percent, bool& bAchieved) const
{
	TArray<char> TmpName;
	int32 result = SteamUserStats()->GetNextMostAchievedAchievementInfo(IteratorPrevious, TmpName.GetData(), 1024, &Percent, &bAchieved);
	Name = UTF8_TO_TCHAR(TmpName.GetData());
	return  result;
}

FSteamAPICall UISteamUserStats::UploadLeaderboardScore(FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 Score, const TArray<int32>& ScoreDetails) const
{
	return SteamUserStats()->UploadLeaderboardScore(SteamLeaderboard, (ELeaderboardUploadScoreMethod)LeaderboardUploadScoreMethod, Score, ScoreDetails.GetData(), ScoreDetails.Num());
}

void UISteamUserStats::OnGlobalAchievementPercentagesReady(GlobalAchievementPercentagesReady_t* pParam)
{
	m_OnGlobalAchievementPercentagesReady.Broadcast(pParam->m_nGameID, (ESteamResult)pParam->m_eResult);
}

void UISteamUserStats::OnGlobalStatsReceived(GlobalStatsReceived_t* pParam)
{
	m_OnGlobalStatsReceived.Broadcast(pParam->m_nGameID, (ESteamResult)pParam->m_eResult);
}

void UISteamUserStats::OnLeaderboardFindResult(LeaderboardFindResult_t* pParam)
{
	m_OnLeaderboardFindResult.Broadcast(pParam->m_hSteamLeaderboard, pParam->m_bLeaderboardFound == 1);
}

void UISteamUserStats::OnLeaderboardScoresDownloaded(LeaderboardScoresDownloaded_t* pParam)
{
	m_OnLeaderboardScoresDownloaded.Broadcast(pParam->m_hSteamLeaderboard, pParam->m_hSteamLeaderboardEntries, pParam->m_cEntryCount);
}

void UISteamUserStats::OnLeaderboardScoreUploaded(LeaderboardScoreUploaded_t* pParam)
{
	m_OnLeaderboardScoreUploaded.Broadcast(pParam->m_bSuccess == 1, pParam->m_hSteamLeaderboard, pParam->m_nScore, pParam->m_bScoreChanged == 1, pParam->m_nGlobalRankNew, pParam->m_nGlobalRankPrevious);
}

void UISteamUserStats::OnLeaderboardUGCSet(LeaderboardUGCSet_t* pParam)
{
	m_OnLeaderboardUGCSet.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_hSteamLeaderboard);
}

void UISteamUserStats::OnNumberOfCurrentPlayers(NumberOfCurrentPlayers_t* pParam)
{
	m_OnNumberOfCurrentPlayers.Broadcast(pParam->m_bSuccess == 1, pParam->m_cPlayers);
}

void UISteamUserStats::OnUserAchievementIconFetched(UserAchievementIconFetched_t* pParam)
{
	m_OnUserAchievementIconFetched.Broadcast(pParam->m_nGameID.ToUint64(), UTF8_TO_TCHAR(pParam->m_rgchAchievementName), pParam->m_bAchieved, pParam->m_nIconHandle);
}

void UISteamUserStats::OnUserAchievementStored(UserAchievementStored_t* pParam)
{
	m_OnUserAchievementStored.Broadcast(pParam->m_nGameID, pParam->m_bGroupAchievement, UTF8_TO_TCHAR(pParam->m_rgchAchievementName), pParam->m_nCurProgress, pParam->m_nMaxProgress);
}

void UISteamUserStats::OnUserStatsReceived(UserStatsReceived_t* pParam)
{
	m_OnUserStatsReceived.Broadcast(pParam->m_nGameID, (ESteamResult)pParam->m_eResult, pParam->m_steamIDUser.ConvertToUint64());
}

void UISteamUserStats::OnUserStatsStored(UserStatsStored_t* pParam)
{
	m_OnUserStatsStored.Broadcast(pParam->m_nGameID, (ESteamResult)pParam->m_eResult);
}

void UISteamUserStats::OnUserStatsUnloaded(UserStatsUnloaded_t* pParam)
{
	m_OnUserStatsUnloaded.Broadcast(pParam->m_steamIDUser.ConvertToUint64());
}
