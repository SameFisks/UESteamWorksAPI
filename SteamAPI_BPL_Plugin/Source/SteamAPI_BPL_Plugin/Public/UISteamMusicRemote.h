//Allows direct interaction with the Steam Music player.


#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamMusicRemote.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerRemoteToFrontDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerRemoteWillActivateDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerRemoteWillDeactivateDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicPlayerSelectsPlaylistEntryDelegate, int32, ID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicPlayerSelectsQueueEntryDelegate, int32, ID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicPlayerWantsLoopedDelegate, bool, bLooped);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerWantsPauseDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicPlayerWantsPlayingRepeatStatusDelegate, int32, RepeatStatus);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerWantsPlayNextDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerWantsPlayPreviousDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerWantsPlayDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicPlayerWantsShuffledDelegate, bool, bShuffled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicPlayerWantsVolumeDelegate, float, NewVolume);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMusicPlayerWillQuitDelegate);


UCLASS()
class UISteamMusicRemote : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


public:
	UISteamMusicRemote();
	~UISteamMusicRemote();

	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Music Remote", CompactNodeTitle = "SteamMusicRemote"))
		static UISteamMusicRemote* GetSteamMusicRemote() { return UISteamMusicRemote::StaticClass()->GetDefaultObject<UISteamMusicRemote>(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool BActivationSuccess(bool bValue) const { return SteamMusicRemote()->BActivationSuccess(bValue); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool BIsCurrentMusicRemote() const { return SteamMusicRemote()->BIsCurrentMusicRemote(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool CurrentEntryIsAvailable(bool bAvailable) const { return SteamMusicRemote()->CurrentEntryIsAvailable(bAvailable); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool CurrentEntryWillChange() const { return SteamMusicRemote()->CurrentEntryWillChange(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool DeregisterSteamMusicRemote() const { return SteamMusicRemote()->DeregisterSteamMusicRemote(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool EnableLooped(bool bValue) const { return SteamMusicRemote()->EnableLooped(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool EnablePlaylists(bool bValue) const { return SteamMusicRemote()->EnablePlaylists(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool EnablePlayNext(bool bValue) const { return SteamMusicRemote()->EnablePlayNext(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool EnablePlayPrevious(bool bValue) const { return SteamMusicRemote()->EnablePlayPrevious(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool EnableQueue(bool bValue) const { return SteamMusicRemote()->EnableQueue(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool EnableShuffled(bool bValue) const { return SteamMusicRemote()->EnableShuffled(bValue); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool PlaylistDidChange() const { return SteamMusicRemote()->PlaylistDidChange(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool PlaylistWillChange() const { return SteamMusicRemote()->PlaylistWillChange(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool QueueDidChange() const { return SteamMusicRemote()->QueueDidChange(); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMusicRemote")
		bool QueueWillChange() const { return SteamMusicRemote()->QueueWillChange(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool RegisterSteamMusicRemote(const FString& Name) const { return SteamMusicRemote()->RegisterSteamMusicRemote(TCHAR_TO_UTF8(*Name)); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool ResetPlaylistEntries() const { return SteamMusicRemote()->ResetPlaylistEntries(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool ResetQueueEntries() const { return SteamMusicRemote()->ResetQueueEntries(); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool SetCurrentPlaylistEntry(int32 ID) const { return SteamMusicRemote()->SetCurrentPlaylistEntry(ID); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool SetCurrentQueueEntry(int32 ID) const { return SteamMusicRemote()->SetCurrentQueueEntry(ID); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool SetDisplayName(const FString& DisplayName) const { return SteamMusicRemote()->SetDisplayName(TCHAR_TO_UTF8(*DisplayName)); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool SetPlaylistEntry(int32 ID, int32 Position, const FString& EntryText) const { return SteamMusicRemote()->SetPlaylistEntry(ID, Position, TCHAR_TO_UTF8(*EntryText)); }

	// #TODO: SetPNGIcon_64x64

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool SetQueueEntry(int32 ID, int32 Position, const FString& EntryText) const { return SteamMusicRemote()->SetQueueEntry(ID, Position, TCHAR_TO_UTF8(*EntryText)); }

	// #TODO: UpdateCurrentEntryCoverArt

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool UpdateCurrentEntryElapsedSeconds(int32 Value) const { return SteamMusicRemote()->UpdateCurrentEntryElapsedSeconds(Value); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool UpdateCurrentEntryText(const FString& Text) const { return SteamMusicRemote()->UpdateCurrentEntryText(TCHAR_TO_UTF8(*Text)); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool UpdateLooped(bool bValue) const { return SteamMusicRemote()->UpdateLooped(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool UpdatePlaybackStatus(ESteamAudioPlaybackStatus Status) const { return SteamMusicRemote()->UpdatePlaybackStatus((AudioPlayback_Status)Status); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool UpdateShuffled(bool bValue) const { return SteamMusicRemote()->UpdateShuffled(bValue); }

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamMusicRemote")
		bool UpdateVolume(float Value) const { return SteamMusicRemote()->UpdateVolume(Value); }

	/** Delegates */

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerRemoteToFront"))
		FOnMusicPlayerRemoteToFrontDelegate m_OnMusicPlayerRemoteToFront;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerRemoteWillActivate"))
		FOnMusicPlayerRemoteWillActivateDelegate m_OnMusicPlayerRemoteWillActivate;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerRemoteWillDeactivate"))
		FOnMusicPlayerRemoteWillDeactivateDelegate m_OnMusicPlayerRemoteWillDeactivate;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerSelectsPlaylistEntry"))
		FOnMusicPlayerSelectsPlaylistEntryDelegate m_OnMusicPlayerSelectsPlaylistEntry;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerSelectsQueueEntry"))
		FOnMusicPlayerSelectsQueueEntryDelegate m_OnMusicPlayerSelectsQueueEntry;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsLooped"))
		FOnMusicPlayerWantsLoopedDelegate m_OnMusicPlayerWantsLooped;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsPause"))
		FOnMusicPlayerWantsPauseDelegate m_OnMusicPlayerWantsPause;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsPlayingRepeatStatus"))
		FOnMusicPlayerWantsPlayingRepeatStatusDelegate m_OnMusicPlayerWantsPlayingRepeatStatus;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsPlayNext"))
		FOnMusicPlayerWantsPlayNextDelegate m_OnMusicPlayerWantsPlayNext;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsPlayPrevious"))
		FOnMusicPlayerWantsPlayPreviousDelegate m_OnMusicPlayerWantsPlayPrevious;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsPlay"))
		FOnMusicPlayerWantsPlayDelegate m_OnMusicPlayerWantsPlay;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsShuffled"))
		FOnMusicPlayerWantsShuffledDelegate m_OnMusicPlayerWantsShuffled;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWantsVolume"))
		FOnMusicPlayerWantsVolumeDelegate m_OnMusicPlayerWantsVolume;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamMusicRemote", meta = (DisplayName = "OnMusicPlayerWillQuit"))
		FOnMusicPlayerWillQuitDelegate m_OnMusicPlayerWillQuit;

protected:
private:
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerRemoteToFront, MusicPlayerRemoteToFront_t, OnMusicPlayerRemoteToFrontCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerRemoteWillActivate, MusicPlayerRemoteWillActivate_t, OnMusicPlayerRemoteWillActivateCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerRemoteWillDeactivate, MusicPlayerRemoteWillDeactivate_t, OnMusicPlayerRemoteWillDeactivateCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerSelectsPlaylistEntry, MusicPlayerSelectsPlaylistEntry_t, OnMusicPlayerSelectsPlaylistEntryCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerSelectsQueueEntry, MusicPlayerSelectsQueueEntry_t, OnMusicPlayerSelectsQueueEntryCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsLooped, MusicPlayerWantsLooped_t, OnMusicPlayerWantsLoopedCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsPause, MusicPlayerWantsPause_t, OnMusicPlayerWantsPauseCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsPlayingRepeatStatus, MusicPlayerWantsPlayingRepeatStatus_t, OnMusicPlayerWantsPlayingRepeatStatusCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsPlayNext, MusicPlayerWantsPlayNext_t, OnMusicPlayerWantsPlayNextCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsPlayPrevious, MusicPlayerWantsPlayPrevious_t, OnMusicPlayerWantsPlayPreviousCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsPlay, MusicPlayerWantsPlay_t, OnMusicPlayerWantsPlayCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsShuffled, MusicPlayerWantsShuffled_t, OnMusicPlayerWantsShuffledCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWantsVolume, MusicPlayerWantsVolume_t, OnMusicPlayerWantsVolumeCallback);
	STEAM_CALLBACK_MANUAL(UISteamMusicRemote, OnMusicPlayerWillQuit, MusicPlayerWillQuit_t, OnMusicPlayerWillQuitCallback);
};

