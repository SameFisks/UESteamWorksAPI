#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamClient.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetWarningMessageHookDelegate, int32, Int, FString, String);


//	Interface to create a new steam instance or to connect to an existing steam instance, whether it's in a different process or is local.
UCLASS()
class UISteamClient : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


public:
	UISteamClient();
	~UISteamClient();

	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Client ", CompactNodeTitle = "SteamClient"))
		static UISteamClient* GetSteamApps() { return UISteamClient::StaticClass()->GetDefaultObject<UISteamClient>(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BReleaseSteamPipe", Keywords = "Steam ISteamClient BReleaseSteamPipe"), Category = "SteamAPI|ISteamClient")
		static bool BReleaseSteamPipe(int32 hSteamPipe);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam BShutdownIfAllPipesClosed", Keywords = "Steam ISteamClient BShutdownIfAllPipesClosed"), Category = "SteamAPI|ISteamClient")
		static bool BShutdownIfAllPipesClosed();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ConnectToGlobalUser", Keywords = "Steam ISteamClient ConnectToGlobalUser"), Category = "SteamAPI|ISteamClient")
		static int32 ConnectToGlobalUser(int32 hSteamPipe);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam CreateLocalUser", Keywords = "Steam ISteamClient CreateLocalUser"), Category = "SteamAPI|ISteamClient")
	//	static FHSteamUser CreateLocalUser(FHSteamPipe phSteamPipe, ESteamAccountType eAccountType);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam CreateSteamPipe", Keywords = "Steam ISteamClient CreateSteamPipe"), Category = "SteamAPI|ISteamClient")
		static FHSteamPipe CreateSteamPipe();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetIPCCallCount", Keywords = "Steam ISteamClient GetIPCCallCount"), Category = "SteamAPI|ISteamClient")
		static FUint32  GetIPCCallCount();

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamAppList", Keywords = "Steam ISteamClient GetISteamAppList"), Category = "SteamAPI|ISteamClient")
	//	static FISteamAppList GetISteamAppList(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const char* pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamApps", Keywords = "Steam ISteamClient GetISteamApps"), Category = "SteamAPI|ISteamClient")
	//	static FISteamApps  GetISteamApps(FHSteamUser hSteamUser, FHSteamUser hSteamPipe, const char* pchVersio);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamController", Keywords = "Steam ISteamClient GetISteamController"), Category = "SteamAPI|ISteamClient")
	//	static FISteamController   GetISteamController(FHSteamUser hSteamUser, FHSteamUser hSteamPipe, const char* pchVersion);
	
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamFriends", Keywords = "Steam ISteamClient GetISteamFriends"), Category = "SteamAPI|ISteamClient")
	//	static FISteamFriends  GetISteamFriends(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const char* pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamGameServer", Keywords = "Steam ISteamClient GetISteamGameServer"), Category = "SteamAPI|ISteamClient")
	//	static FISteamGameServer   GetISteamGameServer(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const char* pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamGameServerStats", Keywords = "Steam ISteamClient GetISteamGameServerStats"), Category = "SteamAPI|ISteamClient")
	//	static FISteamGameServerStats    GetISteamGameServerStats(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const char* pchVersion);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamGenericInterface", Keywords = "Steam ISteamClient GetISteamGenericInterface"), Category = "SteamAPI|ISteamClient")
		static void GetISteamGenericInterface(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamHTMLSurface", Keywords = "Steam ISteamClient GetISteamHTMLSurface"), Category = "SteamAPI|ISteamClient")
	//	static FISteamHTMLSurface  GetISteamHTMLSurface(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamInventory", Keywords = "Steam ISteamClient GetISteamInventory"), Category = "SteamAPI|ISteamClient")
	//	static FISteamInventory   GetISteamInventory(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamMatchmaking", Keywords = "Steam ISteamClient GetISteamMatchmaking"), Category = "SteamAPI|ISteamClient")
	//	static FISteamMatchmaking    GetISteamMatchmaking(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamMatchmakingServers", Keywords = "Steam ISteamClient GetISteamMatchmakingServers"), Category = "SteamAPI|ISteamClient")
	//	static FISteamMatchmakingServers     GetISteamMatchmakingServers(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamMusic", Keywords = "Steam ISteamClient GetISteamMusic"), Category = "SteamAPI|ISteamClient")
	//	static FISteamMusic      GetISteamMusic(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamMusicRemote", Keywords = "Steam ISteamClient GetISteamMusicRemote"), Category = "SteamAPI|ISteamClient")
	//	static FISteamMusicRemote      GetISteamMusicRemote(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamRemoteStorage", Keywords = "Steam ISteamClient GetISteamRemoteStorage"), Category = "SteamAPI|ISteamClient")
	//	static FISteamRemoteStorage        GetISteamRemoteStorage(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamScreenshots", Keywords = "Steam ISteamClient GetISteamScreenshots"), Category = "SteamAPI|ISteamClient")
	//	static FISteamScreenshots        GetISteamScreenshots(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamUGC", Keywords = "Steam ISteamClient GetISteamUGC"), Category = "SteamAPI|ISteamClient")
	//	static FISteamUGC         GetISteamUGC(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamUnifiedMessages", Keywords = "Steam ISteamClient GetISteamUnifiedMessages"), Category = "SteamAPI|ISteamClient")
	//	static FISteamUnifiedMessages         GetISteamUnifiedMessages(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamUser", Keywords = "Steam ISteamClient GetISteamUser"), Category = "SteamAPI|ISteamClient")
	//	static FISteamUser         GetISteamUser(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamUserStats", Keywords = "Steam ISteamClient GetISteamUserStats"), Category = "SteamAPI|ISteamClient")
	//	static FISteamUserStats         GetISteamUserStats(FHSteamUser hSteamUser, FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamUtils", Keywords = "Steam ISteamClient GetISteamUtils"), Category = "SteamAPI|ISteamClient")
	//	static FISteamUtils          GetISteamUtils( FHSteamPipe hSteamPipe, const FString& pchVersion);

	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam GetISteamVideo", Keywords = "Steam ISteamClient GetISteamVideo"), Category = "SteamAPI|ISteamClient")
	//	static FISteamVideo           GetISteamVideo(FHSteamPipe hSteamPipe, const FString& pchVersion);


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam ReleaseUser", Keywords = "Steam ISteamClient ReleaseUser"), Category = "SteamAPI|ISteamClient")
		static void ReleaseUser(FHSteamPipe hSteamPipe, FHSteamUser hUser);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Steam SetLocalIPBinding", Keywords = "Steam ISteamClient SetLocalIPBinding"), Category = "SteamAPI|ISteamClient")
		static void SetLocalIPBinding(FUint32 unIP, FUint16 usPort);


//	/** Delegates */
//
///** Called when a large avatar is loaded if you have tried requesting it when it was unavailable. */
//	UPROPERTY(BlueprintAssignable, Category = "SteamAPI|UISteamClient", meta = (DisplayName = "SetWarningMessageHook"))
//		FSetWarningMessageHookDelegate m_SetWarningMessageHook;
//
//	private:
//	STEAM_CALLBACK_MANUAL(UISteamClient, SetWarningMessageHook, SteamAPIWarningMessageHook_t, SetWarningMessageHookCallback);
};


