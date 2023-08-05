//Functions for getting information about Steam Remote Play sessions.

#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamRemotePlay.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionConnectedDelegate, int32, SessionID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionDisconnectedDelegate, int32, SessionID);


UCLASS()
class UISteamRemotePlay : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


public:
	UISteamRemotePlay();
	~UISteamRemotePlay();

	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Remote Play", CompactNodeTitle = "SteamRemotePlay"))
		static UISteamRemotePlay* GetSteamRemotePlay() { return UISteamRemotePlay::StaticClass()->GetDefaultObject<UISteamRemotePlay>(); }

	/**
	 * Get the number of currently connected Steam Remote Play sessions
	 *
	 * @return int32 - The number of currently connected Steam Remote Play sessions
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamRemotePlay")
		int32 GetSessionCount() const { return SteamRemotePlay()->GetSessionCount(); }

	/**
	 * Get the currently connected Steam Remote Play session ID at the specified index
	 *
	 * @param int32 SessionIndex - The index of the specified session
	 * @return int32 - The session ID of the session at the specified index, or 0 if the index is less than 0 or greater than or equal to GetSessionCount()
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamRemotePlay")
		int32 GetSessionID(int32 SessionIndex) const { return SteamRemotePlay()->GetSessionID(SessionIndex); }

	/**
	 * Get the SteamID of the connected user
	 *
	 * @param int32 SessionID - The session ID to get information about
	 * @return FSteamID - The Steam ID of the user associated with the Remote Play session. This would normally be the logged in user, or a friend in the case of Remote Play Together.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamRemotePlay")
		FSteamID GetSessionSteamID(int32 SessionID) const { return SteamRemotePlay()->GetSessionSteamID(SessionID).ConvertToUint64(); }

	/**
	 * Get the name of the session client device
	 *
	 * @param int32 SessionID - The session ID to get information about
	 * @return FString - The name of the device associated with the Remote Play session, or NULL if the session ID is not valid.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamRemotePlay")
		FString GetSessionClientName(int32 SessionID) const { return UTF8_TO_TCHAR(*SteamRemotePlay()->GetSessionClientName(SessionID)); }

	/**
	 * Get the form factor of the session client device
	 *
	 * @param int32 SessionID - 	The session ID to get information about
	 * @return ESteamDeviceFormFactor_ - The form factor of the device associated with the Remote Play session, or k_ESteamDeviceFormFactorUnknown if the session ID is not valid.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamRemotePlay")
		ESteamDeviceFormFactor_ GetSessionClientFormFactor(int32 SessionID) const { return (ESteamDeviceFormFactor_)SteamRemotePlay()->GetSessionClientFormFactor(SessionID); }

	/**
	 * Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.
	 *
	 * @param int32 SessionID - The session ID to get information about
	 * @param FIntPoint & Resolution - device resolution
	 * @return bool - true if the session ID is valid; otherwise, false.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "SteamAPI|UISteamRemotePlay")
		bool BGetSessionClientResolution(int32 SessionID, FIntPoint& Resolution) const;

	/**
	 * Invite a friend to join the game using Remote Play Together
	 *
	 * @param FSteamID SteamIDFriend - The Steam ID of the friend you'd like to invite
	 * @return bool - true if the invite was successfully sent; otherwise, false.
	 */
	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamRemotePlay")
		bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend) const { return SteamRemotePlay()->BSendRemotePlayTogetherInvite(SteamIDFriend); }

	/** Delegates */

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamRemotePlay", meta = (DisplayName = "OnSteamRemotePlaySessionConnected"))
		FOnSteamRemotePlaySessionConnectedDelegate m_OnSteamRemotePlaySessionConnected;

	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamRemotePlay", meta = (DisplayName = "OnSteamRemotePlaySessionDisconnected"))
		FOnSteamRemotePlaySessionDisconnectedDelegate m_OnSteamRemotePlaySessionDisconnected;

protected:
private:
	STEAM_CALLBACK_MANUAL(UISteamRemotePlay, OnSteamRemotePlaySessionConnected, SteamRemotePlaySessionConnected_t, OnSteamRemotePlaySessionConnectedCallback);
	STEAM_CALLBACK_MANUAL(UISteamRemotePlay, OnSteamRemotePlaySessionDisconnected, SteamRemotePlaySessionDisconnected_t, OnSteamRemotePlaySessionDisconnectedCallback);
};

