#include "UISteamMusicRemote.h"
#include "USteamUtils.h"

UISteamMusicRemote::UISteamMusicRemote(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamMusicRemote::UISteamMusicRemote()
{
	OnMusicPlayerRemoteToFrontCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerRemoteToFront);
	OnMusicPlayerRemoteWillActivateCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerRemoteWillActivate);
	OnMusicPlayerRemoteWillDeactivateCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerRemoteWillDeactivate);
	OnMusicPlayerSelectsPlaylistEntryCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerSelectsPlaylistEntry);
	OnMusicPlayerSelectsQueueEntryCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerSelectsQueueEntry);
	OnMusicPlayerWantsLoopedCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsLooped);
	OnMusicPlayerWantsPauseCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsPause);
	OnMusicPlayerWantsPlayingRepeatStatusCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsPlayingRepeatStatus);
	OnMusicPlayerWantsPlayNextCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsPlayNext);
	OnMusicPlayerWantsPlayPreviousCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsPlayPrevious);
	OnMusicPlayerWantsPlayCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsPlay);
	OnMusicPlayerWantsShuffledCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsShuffled);
	OnMusicPlayerWantsVolumeCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWantsVolume);
	OnMusicPlayerWillQuitCallback.Register(this, &UISteamMusicRemote::OnMusicPlayerWillQuit);
}

UISteamMusicRemote::~UISteamMusicRemote()
{
	OnMusicPlayerRemoteToFrontCallback.Unregister();
	OnMusicPlayerRemoteWillActivateCallback.Unregister();
	OnMusicPlayerRemoteWillDeactivateCallback.Unregister();
	OnMusicPlayerSelectsPlaylistEntryCallback.Unregister();
	OnMusicPlayerSelectsQueueEntryCallback.Unregister();
	OnMusicPlayerWantsLoopedCallback.Unregister();
	OnMusicPlayerWantsPauseCallback.Unregister();
	OnMusicPlayerWantsPlayingRepeatStatusCallback.Unregister();
	OnMusicPlayerWantsPlayNextCallback.Unregister();
	OnMusicPlayerWantsPlayPreviousCallback.Unregister();
	OnMusicPlayerWantsPlayCallback.Unregister();
	OnMusicPlayerWantsShuffledCallback.Unregister();
	OnMusicPlayerWantsVolumeCallback.Unregister();
	OnMusicPlayerWillQuitCallback.Unregister();
}

void UISteamMusicRemote::OnMusicPlayerRemoteToFront(MusicPlayerRemoteToFront_t* pParam)
{
	m_OnMusicPlayerRemoteToFront.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerRemoteWillActivate(MusicPlayerRemoteWillActivate_t* pParam)
{
	m_OnMusicPlayerRemoteWillActivate.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerRemoteWillDeactivate(MusicPlayerRemoteWillDeactivate_t* pParam)
{
	m_OnMusicPlayerRemoteWillDeactivate.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerSelectsPlaylistEntry(MusicPlayerSelectsPlaylistEntry_t* pParam)
{
	m_OnMusicPlayerSelectsPlaylistEntry.Broadcast(pParam->nID);
}

void UISteamMusicRemote::OnMusicPlayerSelectsQueueEntry(MusicPlayerSelectsQueueEntry_t* pParam)
{
	m_OnMusicPlayerSelectsQueueEntry.Broadcast(pParam->nID);
}

void UISteamMusicRemote::OnMusicPlayerWantsLooped(MusicPlayerWantsLooped_t* pParam)
{
	m_OnMusicPlayerWantsLooped.Broadcast(pParam->m_bLooped);
}

void UISteamMusicRemote::OnMusicPlayerWantsPause(MusicPlayerWantsPause_t* pParam)
{
	m_OnMusicPlayerWantsPause.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerWantsPlayingRepeatStatus(MusicPlayerWantsPlayingRepeatStatus_t* pParam)
{
	m_OnMusicPlayerWantsPlayingRepeatStatus.Broadcast(pParam->m_nPlayingRepeatStatus);
}

void UISteamMusicRemote::OnMusicPlayerWantsPlayNext(MusicPlayerWantsPlayNext_t* pParam)
{
	m_OnMusicPlayerWantsPlayNext.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerWantsPlayPrevious(MusicPlayerWantsPlayPrevious_t* pParam)
{
	m_OnMusicPlayerWantsPlayPrevious.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerWantsPlay(MusicPlayerWantsPlay_t* pParam)
{
	m_OnMusicPlayerWantsPlay.Broadcast();
}

void UISteamMusicRemote::OnMusicPlayerWantsShuffled(MusicPlayerWantsShuffled_t* pParam)
{
	m_OnMusicPlayerWantsShuffled.Broadcast(pParam->m_bShuffled);
}

void UISteamMusicRemote::OnMusicPlayerWantsVolume(MusicPlayerWantsVolume_t* pParam)
{
	m_OnMusicPlayerWantsVolume.Broadcast(pParam->m_flNewVolume);
}

void UISteamMusicRemote::OnMusicPlayerWillQuit(MusicPlayerWillQuit_t* pParam)
{
	m_OnMusicPlayerWillQuit.Broadcast();
}
