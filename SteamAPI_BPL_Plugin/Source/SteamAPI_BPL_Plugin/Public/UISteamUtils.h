
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamUtils.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGamepadTextInputDismissedDelegate, bool, bSubmitted, int32, SubmittedTextLen);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIPCountryDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowBatteryPowerDelegate, uint8, MinutesBatteryLeft);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSteamAPICallCompletedDelegate, FSteamAPICall, APICallHandle, int32, CallbackID, int32, CallbackSize);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSteamShutdownDelegate);

//	Interface which provides access to a range of miscellaneous utility functions.
UCLASS()
class UISteamUtils : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UISteamUtils();
	virtual ~UISteamUtils() override;


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Steam GetSteamUtils", Keywords = "Steam GetSteamUtils"), Category = "SteamAPI")
		static UISteamUtils* GetSteamUtils() { return UISteamUtils::StaticClass()->GetDefaultObject<UISteamUtils>(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Init", Keywords = "Steam Init"), Category = "SteamAPI|ISteamUtils")
		static bool Init();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam RestartAppIfNecessary", Keywords = "Steam RestartAppIfNecessary"), Category = "SteamAPI|ISteamUtils")
		static void RestartAppIfNecessary();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam Shutdown", Keywords = "Steam Shutdown"), Category = "SteamAPI|ISteamUtils")
		static bool Shutdown();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetFriends", Keywords = "Steam GetFriends"), Category = "SteamAPI|ISteamUtils")
		static TArray<FSteamPlayerInfo> GetFriends();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BOverlayNeedsPresent", Keywords = "Steam BOverlayNeedsPresent"), Category = "SteamAPI|ISteamUtils")
		static bool BOverlayNeedsPresent();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetSteamAppID", Keywords = "Steam GetSteamAppID"), Category = "SteamAPI|ISteamUtils")
		static int32 GetAppID();

	/**
	 * Gets the current amount of battery power on the computer.
	 *
	 * @return uint8 - The current battery power ranging between [0..100]%. Returns 255 when the user is on AC power.
	 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetCurrentBatteryPower", Keywords = "Steam GetCurrentBatteryPower"), Category = "SteamAPI|ISteamUtils")
		static int32 GetCurrentBatteryPower();

	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		ESteamAPICallFailure_ GetAPICallFailureReason(FSteamAPICall SteamAPICall) const { return (ESteamAPICallFailure_)((uint8)SteamUtils()->GetAPICallFailureReason(SteamAPICall) - 1); }



	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		ESteamUniverse GetConnectedUniverse() const { return (ESteamUniverse)SteamUtils()->GetConnectedUniverse(); }

	/**
	 * Gets the IP of the reporting server for valve - currently only used in Source engine games
	 *
	 * @param FString & IP - Returns the IP that the client is connected to.
	 * @param int32 & Port - Returns the port that the client is connected to.
	 * @return bool - Returns true if the user is currently connected; otherwise, false.
	 */
	//UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|ISteamUtils")
	//	bool GetCSERIPPort(FString& IP, int32& Port) const;

	/**
	 * Gets the gamepad text input from the Big Picture overlay.
	 * This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.
	 * Provides the text input as UTF8.
	 *
	 * @param FString & Text - DESCHERE
	 * @return bool - true if there was text to receive and cchText is the same size as GamepadTextInputDismissed_t.m_unSubmittedText; otherwise, false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|ISteamUtils")
		bool GetEnteredGamepadTextInput(FString& Text) const;

	/**
	 * Gets the length of the gamepad text input from the Big Picture overlay.
	 * This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.
	 *
	 * @return int32
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		int32 GetEnteredGamepadTextLength() const { return SteamUtils()->GetEnteredGamepadTextLength(); }

	/**
	 * Gets the image bytes from an image handle.
	 * Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as:
	 * width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer,
	 * thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.
	 *
	 * @param int32 Image - The handle to the image that will be obtained.
	 * @param TArray<uint8> & Buffer - The buffer that will be filled.
	 * @return bool - true upon success if the image handle is valid and the buffer was filled out, otherwise false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool GetImageRGBA(int32 Image, TArray<uint8>& Buffer) const;

	/**
	 * Gets the size of a Steam image handle.
	 * This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.
	 *
	 * @param int32 Image - The image handle to get the size for.
	 * @param FIntPoint & Size - Returns the width/height of the image.
	 * @return bool - true upon success if the image handle is valid and the sizes were filled out, otherwise false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool GetImageSize(int32 Image, FIntPoint& Size) const;

	/**
	 * Returns the number of IPC calls made since the last time this function was called.
	 * Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame
	 * Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.
	 *
	 * @return int32
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		int32 GetIPCCallCount() const { return SteamUtils()->GetIPCCallCount(); }

	/**
	 * Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g "US" or "UK".
	 * This is looked up via an IP-to-location database.
	 *
	 * @return FString
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		FString GetIPCountry() const { return UTF8_TO_TCHAR(SteamUtils()->GetIPCountry()); }

	/**
	 * Returns the number of seconds since the application was active.
	 *
	 * @return int32
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		int32 GetSecondsSinceAppActive() const { return SteamUtils()->GetSecondsSinceAppActive(); }

	/**
	 * Returns the number of seconds since the user last moved the mouse.
	 *
	 * @return int32
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		int32 GetSecondsSinceComputerActive() const { return SteamUtils()->GetSecondsSinceComputerActive(); }

	/**
	 * Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)
	 *
	 * @return int32
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		int32 GetServerRealTime() const { return SteamUtils()->GetServerRealTime(); }

	/**
	 * Returns the language the steam client is running in.
	 * You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.
	 *
	 * @return FString
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		FString GetSteamUILanguage() const { return UTF8_TO_TCHAR(SteamUtils()->GetSteamUILanguage()); }

	/**
	 * Checks if an API Call is completed. Provides the backend of the CallResult wrapper.
	 * It's generally not recommended that you use this yourself.
	 *
	 * @param FSteamAPICall SteamAPICall - The API Call handle to check.
	 * @param bool & bFailed - Returns whether the API call has encountered a failure (true) or not (false).
	 * @return bool - true if the API Call is valid and has completed, otherwise false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool IsAPICallCompleted(FSteamAPICall SteamAPICall, bool& bFailed) const { return SteamUtils()->IsAPICallCompleted(SteamAPICall, &bFailed); }

	/**
	 * Checks if the Steam Overlay is running & the user can access it.
	 * The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.
	 *
	 * @return bool
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool IsOverlayEnabled() const { return SteamUtils()->IsOverlayEnabled(); }

	/**
	 * Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.
	 *
	 * @return bool
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool IsSteamChinaLauncher() const { return SteamUtils()->IsSteamChinaLauncher(); }

	/**
	 * Initializes text filtering, loading dictionaries for the language the game is running in.
	 *
	 * @return bool - true if initialization succeeds, false if filtering is unavailable for the game's language, in which case FilterText() will act as a passthrough.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|ISteamUtils")
		bool InitFilterText() const { return SteamUtils()->InitFilterText(); }


	/**
	 * Checks if Steam & the Steam Overlay are running in Big Picture mode.
	 * Games must be launched through the Steam client to enable the Big Picture overlay.
	 * During development, a game can be added as a non-steam game to the developers library to test this feature.
	 *
	 * @return bool - true if the Big Picture overlay is available; otherwise, false. This will always return false if your app is not the 'game' application type.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool IsSteamInBigPictureMode() const { return SteamUtils()->IsSteamInBigPictureMode(); }

	/**
	 * Checks if Steam is running in VR mode.
	 *
	 * @return bool - true if Steam itself is running in VR mode; otherwise, false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool IsSteamRunningInVR() const { return SteamUtils()->IsSteamRunningInVR(); }

	/**
	 * Checks if the HMD view will be streamed via Steam Remote Play.
	 *
	 * @return bool - true if VR is enabled and the HMD view is currently being streamed; otherwise, false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|ISteamUtils")
		bool IsVRHeadsetStreamingEnabled() const { return SteamUtils()->IsVRHeadsetStreamingEnabled(); }

	/**
	 * Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.
	 * A value of (0, 0) resets the position into the corner.
	 * This position is per-game and is reset each launch.
	 *
	 * @param const FIntPoint & Inset - The horizontal (left-right) and vertical (up-down) distance in pixels from the corner.
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|ISteamUtils")
		void SetOverlayNotificationInset(const FIntPoint& Inset) { SteamUtils()->SetOverlayNotificationInset(Inset.X, Inset.Y); }

	/**
	 * Sets which corner the Steam overlay notification popup should display itself in.
	 * You can also set the distance from the specified corner by using SetOverlayNotificationInset.
	 * This position is per-game and is reset each launch.
	 *
	 * @param ESteamNotificationPosition NotificationPosition
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|ISteamUtils")
		void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition) { SteamUtils()->SetOverlayNotificationPosition((ENotificationPosition)NotificationPosition); }

	/**
	 * Set whether the HMD content will be streamed via Steam Remote Play.
	 * If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input
	 * will be allowed. VR games default to enabled unless "VRHeadsetStreaming" "0" is in the extended appinfo for a game.
	 * This is useful for games that have asymmetric multiplayer gameplay.
	 *
	 * @param bool bEnabled - Turns VR HMD Streaming on (true) or off (false).
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|ISteamUtils")
		void SetVRHeadsetStreamingEnabled(bool bEnabled) { SteamUtils()->SetVRHeadsetStreamingEnabled(bEnabled); }


	/**
	 * Activates the Big Picture text input dialog which only supports gamepad input.
	 *
	 * @param ESteamGamepadTextInputMode InputMode - Selects the input mode to use, either Normal or Password (hidden text)
	 * @param ESteamGamepadTextInputLineMode LineInputMode - Controls whether to use single or multi line input.
	 * @param const FString & Description - Sets the description that should inform the user what the input dialog is for.
	 * @param const FString & ExistingText - Sets the preexisting text which the user can edit.
	 * @param int32 CharMax - The maximum number of characters that the user can input.
	 * @return bool - true if the big picture overlay is running; otherwise, false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|ISteamUtils")
		bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const FString& Description, const FString& ExistingText, int32 CharMax = 200) const;

	/**
	 * Asks Steam to create and render the OpenVR dashboard.
	 *
	 * @return void
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamAPI|ISteamUtils")
		void StartVRDashboard() { SteamUtils()->StartVRDashboard(); }

	/** Delegates */

	/** Called when the big picture gamepad text input has been closed. */
	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamUtils", meta = (DisplayName = "OnGamepadTextInputDismissed"))
		FOnGamepadTextInputDismissedDelegate m_OnGamepadTextInputDismissed;

	/** Called when the country of the user changed. The country should be updated with GetIPCountry. */
	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamUtils", meta = (DisplayName = "OnIPCountry"))
		FOnIPCountryDelegate m_OnIPCountry;

	/** Called when running on a laptop and less than 10 minutes of battery is left, and then fires then every minute afterwards. */
	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamUtils", meta = (DisplayName = "OnLowBatteryPower"))
		FOnLowBatteryPowerDelegate m_OnLowBatteryPower;

	/** Called when a SteamAPICall_t has completed (or failed) */
	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamUtils", meta = (DisplayName = "OnSteamAPICallCompleted"))
		FOnSteamAPICallCompletedDelegate m_OnSteamAPICallCompleted;

	/** Called when Steam wants to shutdown. */
	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|ISteamUtils", meta = (DisplayName = "OnSteamShutdown"))
		FOnSteamShutdownDelegate m_OnSteamShutdown;

protected:
private:
	STEAM_CALLBACK_MANUAL(UISteamUtils, OnGamepadTextInputDismissed, GamepadTextInputDismissed_t, OnGamepadTextInputDismissedCallback);
	STEAM_CALLBACK_MANUAL(UISteamUtils, OnIPCountry, IPCountry_t, OnIPCountryCallback);
	STEAM_CALLBACK_MANUAL(UISteamUtils, OnLowBatteryPower, LowBatteryPower_t, OnLowBatteryPowerCallback);
	STEAM_CALLBACK_MANUAL(UISteamUtils, OnSteamAPICallCompleted, SteamAPICallCompleted_t, OnSteamAPICallCompletedCallback);
	STEAM_CALLBACK_MANUAL(UISteamUtils, OnSteamShutdown, SteamShutdown_t, OnSteamShutdownCallback);




























};

