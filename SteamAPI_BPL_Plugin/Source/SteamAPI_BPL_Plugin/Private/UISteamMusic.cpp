#include "UISteamMusic.h"
#include "USteamUtils.h"

UISteamMusic::UISteamMusic(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}



UISteamMusic::UISteamMusic()
{
	OnPlaybackStatusHasChangedCallback.Register(this, &UISteamMusic::OnPlaybackStatusHasChanged);
	OnVolumeHasChangedCallback.Register(this, &UISteamMusic::OnVolumeHasChanged);
}

UISteamMusic::~UISteamMusic()
{
	OnPlaybackStatusHasChangedCallback.Unregister();
	OnVolumeHasChangedCallback.Unregister();
}

void UISteamMusic::OnPlaybackStatusHasChanged(PlaybackStatusHasChanged_t* pParam)
{
	m_OnPlaybackStatusHasChanged.Broadcast();
}

void UISteamMusic::OnVolumeHasChanged(VolumeHasChanged_t* pParam)
{
	m_OnVolumeHasChanged.Broadcast(pParam->m_flNewVolume);
}