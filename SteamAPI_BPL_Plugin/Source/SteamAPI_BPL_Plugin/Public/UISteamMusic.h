
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "../Steam/steam_api.h"
#include "UISteamMusic.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlaybackStatusHasChangedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeHasChangedDelegate, float, NewVolume);


//Functions to control music playback in the steam client.
UCLASS()
class UISteamMusic : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


public:
	UISteamMusic();
	~UISteamMusic();

	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Music", CompactNodeTitle = "SteamMusic"))
		static UISteamMusic* GetSteamMusic() { return UISteamMusic::StaticClass()->GetDefaultObject<UISteamMusic>(); }

	/**
	 * Checks if Steam Music is enabled.
	 *
	 * @return bool - true if it is enabled; otherwise false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusic")
		bool BIsEnabled() const { return SteamMusic()->BIsEnabled(); }

	/**
	 * Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.
	 * For finer grain control use GetPlaybackStatus.
	 *
	 * @return bool - true if a song is currently playing, paused, or queued up to play; otherwise false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusic")
		bool BIsPlaying() const { return SteamMusic()->BIsPlaying(); }

	/**
	 * Gets the current status of the Steam Music player.
	 *
	 * @return ESteamAudioPlaybackStatus
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusic")
		ESteamAudioPlaybackStatus GetPlaybackStatus() const { return (ESteamAudioPlaybackStatus)SteamMusic()->GetPlaybackStatus(); }

	/**
	 * Gets the current volume of the Steam Music player.
	 *
	 * @return float - The volume is returned as a percentage between 0.0 and 1.0.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusic")
		float GetVolume() const { return SteamMusic()->GetVolume(); }

	/**
	 * Pause the Steam Music player.
	 *
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMusic")
		void Pause() { SteamMusic()->Pause(); }

	/**
	 * Have the Steam Music player resume playing.
	 *
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMusic")
		void Play() { SteamMusic()->Play(); }

	/**
	 * Have the Steam Music player skip to the next song.
	 *
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMusic")
		void PlayNext() { SteamMusic()->PlayNext(); }

	/**
	 * Have the Steam Music player play the previous song.
	 *
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMusic")
		void PlayPrevious() { SteamMusic()->PlayPrevious(); }

	/**
	 * Sets the volume of the Steam Music player.
	 *
	 * @param float Volume - The volume percentage to set from 0.0 to 1.0.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMusic")
		void SetVolume(float Volume) { SteamMusic()->SetVolume(Volume); }

	/** Delegates */

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusic", meta = (DisplayName = "OnPlaybackStatusHasChanged"))
		FOnPlaybackStatusHasChangedDelegate m_OnPlaybackStatusHasChanged;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusic", meta = (DisplayName = "OnVolumeHasChanged"))
		FOnVolumeHasChangedDelegate m_OnVolumeHasChanged;

protected:
private:
	STEAM_CALLBACK_MANUAL(UISteamMusic, OnPlaybackStatusHasChanged, PlaybackStatusHasChanged_t, OnPlaybackStatusHasChangedCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusic, OnVolumeHasChanged, VolumeHasChanged_t, OnVolumeHasChangedCallback);
};

