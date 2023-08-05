
#pragma once
#include "SteamAPI_BPL_PluginBPLibrary.h"
#include "Steam.h"
#include "SteamEnums.h"
#include "SteamStructs.h"
#include "UISteamMatchmakingServers.generated.h"

//Functions which provide access to the game server browser.
UCLASS()
class UISteamMatchmakingServers : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


public:
	UISteamMatchmakingServers();
	~UISteamMatchmakingServers();

	UFUNCTION(BlueprintPure, Category = "SteamAPI", meta = (DisplayName = "Steam Matchmaking Servers", CompactNodeTitle = "SteamMatchmakingServers"))
		static UISteamMatchmakingServers* GetSteamMatchmakingServers() { return UISteamMatchmakingServers::StaticClass()->GetDefaultObject<UISteamMatchmakingServers>(); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmakingServers")
		void CancelQuery(const FHServerListRequest& Request) { SteamMatchmakingServers()->CancelQuery(Request.Value); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmakingServers")
		void CancelServerQuery(FHServerQuery ServerQuery) { SteamMatchmakingServers()->CancelServerQuery(ServerQuery.Value); }

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmakingServers")
		int32 GetServerCount(const FHServerListRequest& Request) const { return SteamMatchmakingServers()->GetServerCount(Request.Value); }

	// #TODO: GetServerDetails

	UFUNCTION(BlueprintPure, Category = "SteamAPI|UISteamMatchmakingServers")
		bool IsRefreshing(const FHServerListRequest& Request) const { return SteamMatchmakingServers()->IsRefreshing(Request.Value); }

	// #TODO: PingServer
	// #TODO: PlayerDetails

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmakingServers")
		void RefreshQuery(const FHServerListRequest& Request) { SteamMatchmakingServers()->RefreshQuery(Request.Value); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmakingServers")
		void RefreshServer(const FHServerListRequest& Request, int32 ServerIndex) { SteamMatchmakingServers()->RefreshServer(Request.Value, ServerIndex); }

	UFUNCTION(BlueprintCallable, Category = "SteamAPI|UISteamMatchmakingServers")
		void ReleaseRequest(const FHServerListRequest& ServerListRequest) { SteamMatchmakingServers()->ReleaseRequest(ServerListRequest.Value); }

	// #TODO: RequestFavoritesServerList
	// #TODO: RequestFriendsServerList
	// #TODO: RequestHistoryServerList
	// #TODO: RequestInternetServerList
	// #TODO: RequestLANServerList
	// #TODO: RequestSpectatorServerList
	// #TODO: ServerRules


protected:
private:
};

