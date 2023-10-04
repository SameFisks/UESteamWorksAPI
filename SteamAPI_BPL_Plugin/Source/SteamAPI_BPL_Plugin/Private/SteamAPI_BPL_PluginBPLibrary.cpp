// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamAPI_BPL_PluginBPLibrary.h"

#include <string>

#include "SteamAPI_BPL_Plugin.h"
#include "Misc/CoreDelegates.h"
#include "Misc/FileHelper.h"


//USteamAPI_BPL_PluginBPLibrary::USteamAPI_BPL_PluginBPLibrary(const FObjectInitializer& ObjectInitializer)
//: Super(ObjectInitializer)
//{
//
//}


//ISteamApps 
//bool USteamAPI_BPL_PluginBPLibrary::BIsAppInstalled(FSteamAppId_t aAppId)
//{
//	return SteamApps()->BIsAppInstalled(aAppId.AppId);
//}


////ISteamClient  
//bool USteamAPI_BPL_PluginBPLibrary::BShutdownIfAllPipesClosed()
//{
//	return SteamClient()->BShutdownIfAllPipesClosed();
//}

//ISteamFriends

//void USteamAPI_BPL_PluginBPLibrary::ActivateGameOverlay(ESteamUserOverlayType DialogType)
//{
//
//
//	CSteamID SteamId = FSteamAPI_BPL_PluginModule::Get().GetSteamID();
//
//	const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
//	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamId);
//	SteamFriends()->ActivateGameOverlay(TCHAR_TO_UTF8(*DialogName));
//}

//void USteamAPI_BPL_PluginBPLibrary::ActivateGameOverlayToUser(ESteamUserOverlayType DialogType, FSteamPlayerInfo aPlayerInfo)
//{
//	FString ID = aPlayerInfo.PlayerID;
//
//	CSteamID SteamID;
//	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);
//
//	const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
//	SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamID);
//}

//ISteamGameCoordinator

//bool USteamAPI_BPL_PluginBPLibrary::IsMessageAvailable(int32& OutMsgSize)
//{
//	ISteamGameCoordinator* SteamGameCoordinator = static_cast<ISteamGameCoordinator*>(SteamClient()->GetISteamGenericInterface(SteamAPI_GetHSteamUser(), SteamAPI_GetHSteamPipe(), STEAMGAMECOORDINATOR_INTERFACE_VERSION));
//
//	if (SteamGameCoordinator)
//	{
//
//		uint32 MyConvertedVariable = static_cast<uint32>(OutMsgSize);
//		return SteamGameCoordinator->IsMessageAvailable(&MyConvertedVariable);
//	}
//
//	return false;
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::RetrieveMessage(int32& OutMsgType, TArray<uint8>& OutMsgBuffer)
//{
//	/*ISteamGameCoordinator* SteamGameCoordinator = static_cast<ISteamGameCoordinator*>(SteamClient()->GetISteamGenericInterface(SteamAPI_GetHSteamUser(), SteamAPI_GetHSteamPipe(), STEAMGAMECOORDINATOR_INTERFACE_VERSION));
//
//	if (SteamGameCoordinator)
//	{
//
//		uint32 MyConvertedVariable = static_cast<uint32>(OutMsgType);
//		uint32 MsgSize = 0;
//		FSteamEGCResults Result = SteamGameCoordinator->RetrieveMessage(&MyConvertedVariable, nullptr, 0, &MsgSize);
//
//		if (Result == FSteamEGCResults::k_EGCResultOK && MsgSize > 0)
//		{
//			OutMsgBuffer.SetNum(MsgSize);
//
//			Result = SteamGameCoordinator->RetrieveMessage(&MyConvertedVariable, OutMsgBuffer.GetData(), MsgSize, &MsgSize);
//
//			if (Result == FSteamEGCResults::k_EGCResultOK)
//			{
//				OutMsgBuffer.SetNum(MsgSize);
//				return MsgSize;
//			}
//		}
//	}*/
//
//	return 0;
//}
//
//bool USteamAPI_BPL_PluginBPLibrary::SendMessage(int32 MsgType, const TArray<uint8>& MsgBuffer)
//{
//	/*ISteamGameCoordinator* SteamGameCoordinator = static_cast<ISteamGameCoordinator*>(SteamClient()->GetISteamGenericInterface(SteamAPI_GetHSteamUser(), SteamAPI_GetHSteamPipe(), STEAMGAMECOORDINATOR_INTERFACE_VERSION));
//
//	if (SteamGameCoordinator)
//	{
//		FSteamEGCResults Result = SteamGameCoordinator->SendMessage(MsgType, MsgBuffer.GetData(), MsgBuffer.Num());
//
//		return Result == FSteamEGCResults::k_EGCResultOK;
//	}*/
//
//	return false;
//}

//ISteamUser

//void USteamAPI_BPL_PluginBPLibrary::StartVoiceRecording()
//{
//	SteamUser()->StartVoiceRecording();
//}
//
//void USteamAPI_BPL_PluginBPLibrary::StopVoiceRecording()
//{
//	SteamUser()->StopVoiceRecording();
//}
//
//void USteamAPI_BPL_PluginBPLibrary::SetInGameVoiceSpeaking(FSteamPlayerInfo aSteamIDUser, bool bSpeaking)
//{
//	FString ID = aSteamIDUser.PlayerID;
//	CSteamID SteamID;
//	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);
//	SteamFriends()->SetInGameVoiceSpeaking(SteamID, bSpeaking);
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::GetVoiceOptimalSampleRate()
//{
//	return SteamUser()->GetVoiceOptimalSampleRate();
//}
//
//FSteamEVoiceResult USteamAPI_BPL_PluginBPLibrary::DecompressVoice(const TArray<uint8>& CompressedData,
//	TArray<uint8>& DestBuffer, int32 DesiredSampleRate)
//{
//	if (CompressedData.Num() == 0)
//	{
//		return FSteamEVoiceResult::k_EVoiceResultNoData;
//	}
//
//	// Prepare the input parameters
//	const void* PCompressed = CompressedData.GetData();
//	uint32 CBCompressed = CompressedData.Num();
//	void* PDestBuffer = DestBuffer.GetData();
//	uint32 CBDestBufferSize = DestBuffer.Num();
//	uint32 BytesWritten = 0;
//	uint32 NDesiredSampleRate = DesiredSampleRate;
//
//	// Call the DecompressVoice function
//	EVoiceResult VoiceResult = SteamUser()->DecompressVoice(PCompressed, CBCompressed, PDestBuffer, CBDestBufferSize, &BytesWritten, NDesiredSampleRate);
//
//	// Update the output buffer size
//	DestBuffer.SetNum(BytesWritten);
//
//	// Convert the VoiceResult to FSteamEVoiceResult enum
//	FSteamEVoiceResult EVoiceResult = FSteamEVoiceResult::k_EVoiceResultOK; // Default value
//
//	switch (VoiceResult)
//	{
//	case k_EVoiceResultOK:
//		EVoiceResult = FSteamEVoiceResult::k_EVoiceResultOK;
//		break;
//	case k_EVoiceResultNotInitialized:
//		// Handle other enum values if needed
//		break;
//	default:
//		break;
//	}
//
//	return EVoiceResult;
//}
//

//Tests

//float USteamAPI_BPL_PluginBPLibrary::SampleFunction(float Param)
//{
//	return -1;
//}
//
//float USteamAPI_BPL_PluginBPLibrary::Steam_SampleFunction(float Param)
//{
//	return -1;
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::Steam_GetPingFunction()
//{
//	int32 Ping = -1; // Default value if the ping cannot be retrieved
//	return Ping;
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_AchievementUnlocked(const FString& AchievementName)
//{
//	// Implementation for unlocking a Steam achievement
//	// Use the AchievementName parameter to specify the achievement to unlock
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_LeaderboardWriteEntry(const FString& LeaderboardName, int32 Score)
//{
//	// Implementation for writing a score entry to a Steam leaderboard
//	// Use the LeaderboardName parameter to specify the leaderboard to write to
//	// Use the Score parameter to specify the score value
//}
//
//FString USteamAPI_BPL_PluginBPLibrary::Steam_GetName()
//{
//	// Implementation for retrieving the Steam user's name
//	// You can use the Steam API to fetch the name here
//	const char* Name = SteamFriends()->GetPersonaName();
//
//	// Convert the name to FString and return it
//	return FString(UTF8_TO_TCHAR(Name));
//}
//
//TArray<FSteamPlayerInfo> USteamAPI_BPL_PluginBPLibrary::Steam_GetFriends()
//{
//	TArray<FSteamPlayerInfo> Friends;
//
//	// Implementation for retrieving a list of Steam friends
//	// Populate the Friends array with the retrieved friend information
//	int32 FriendCount = SteamFriends()->GetFriendCount(k_EFriendFlagImmediate);
//	for (int32 i = 0; i < FriendCount; ++i)
//	{
//		CSteamID SteamFriend = SteamFriends()->GetFriendByIndex(i, k_EFriendFlagImmediate);
//		const char* FriendName = SteamFriends()->GetFriendPersonaName(SteamFriend);
//		FString FriendNameString(FriendName);
//		AccountID_t FriendID = SteamFriend.GetAccountID();
//		FString FriendIDString = FString::Printf(TEXT("%llu"), FriendID);
//
//
//		// Create an FSteamPlayerInfo struct and populate it with the friend information
//		FSteamPlayerInfo FriendInfo;
//		FriendInfo.PlayerID = FriendIDString;
//		FriendInfo.PlayerName = FriendNameString;
//
//		Friends.Add(FriendInfo);
//	}
//
//
//	return Friends;
//}
//
//UTexture2D* USteamAPI_BPL_PluginBPLibrary::Steam_GetSteamAvatar(EBlueprintAsyncResultSwitch& Result,
//	SteamAvatarSize AvatarSize)
//{
//	uint32 Width = 0;
//	uint32 Height = 0;
//
//	//Getting the PictureID from the SteamAPI and getting the Size with the ID
//	//virtual bool RequestUserInformation( CSteamID steamIDUser, bool bRequireNameOnly ) = 0;
//
//
//	CSteamID SteamID = FSteamAPI_BPL_PluginModule::Get().GetSteamID();
//	int Picture = 0;
//
//	switch (AvatarSize)
//	{
//	case SteamAvatarSize::SteamAvatar_Small: Picture = SteamFriends()->GetSmallFriendAvatar(SteamID); break;
//	case SteamAvatarSize::SteamAvatar_Medium: Picture = SteamFriends()->GetMediumFriendAvatar(SteamID); break;
//	case SteamAvatarSize::SteamAvatar_Large: Picture = SteamFriends()->GetLargeFriendAvatar(SteamID); break;
//	default: break;
//	}
//
//	if (Picture == -1)
//	{
//		Result = EBlueprintAsyncResultSwitch::AsyncLoading;
//		return NULL;
//	}
//
//	SteamUtils()->GetImageSize(Picture, &Width, &Height);
//
//	// STOLEN FROM ANSWERHUB :p, then fixed because answerhub wasn't releasing the memory O.o
//	// Also fixed image pixel format and switched to a memcpy instead of manual iteration.
//	// At some point I should probably reply to that answerhub post with these fixes to prevent people killing their games.....
//
//	if (Width > 0 && Height > 0)
//	{
//		//Creating the buffer "oAvatarRGBA" and then filling it with the RGBA Stream from the Steam Avatar
//		uint8* oAvatarRGBA = new uint8[Width * Height * 4];
//
//
//		//Filling the buffer with the RGBA Stream from the Steam Avatar and creating a UTextur2D to parse the RGBA Steam in
//		SteamUtils()->GetImageRGBA(Picture, (uint8*)oAvatarRGBA, 4 * Height * Width * sizeof(char));
//
//
//		// Removed as I changed the image bit code to be RGB, I think the original author was unaware that there were different pixel formats
//		/*
//		//Swap R and B channels because for some reason the games whack
//		for (uint32 i = 0; i < (Width * Height * 4); i += 4)
//		{
//			uint8 Temp = oAvatarRGBA[i + 0];
//			oAvatarRGBA[i + 0] = oAvatarRGBA[i + 2];
//			oAvatarRGBA[i + 2] = Temp;
//		}*/
//
//		UTexture2D* Avatar = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);
//		// Switched to a Memcpy instead of byte by byte transer
//
//		if (FTexturePlatformData* PlatformData = Avatar->GetPlatformData())
//		{
//			uint8* MipData = (uint8*)PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
//			FMemory::Memcpy(MipData, (void*)oAvatarRGBA, Height * Width * 4);
//			PlatformData->Mips[0].BulkData.Unlock();
//
//			// Original implementation was missing this!!
//			// the hell man......
//			delete[] oAvatarRGBA;
//
//			//Setting some Parameters for the Texture and finally returning it
//			PlatformData->SetNumSlices(1);
//			Avatar->NeverStream = true;
//			//Avatar->CompressionSettings = TC_EditorIcon;
//		}
//
//		Avatar->UpdateResource();
//
//		Result = EBlueprintAsyncResultSwitch::OnSuccess;
//		return Avatar;
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Bad Height / Width with steam avatar!"));
//	}
//
//	Result = EBlueprintAsyncResultSwitch::OnFailure;
//	return nullptr;
//
//}
//
//UTexture2D* USteamAPI_BPL_PluginBPLibrary::Steam_GetSteamFriendAvatar(
//	FSteamPlayerInfo aPlayerInfo,
//	EBlueprintAsyncResultSwitch& Result,
//	SteamAvatarSize AvatarSize)
//{
//	uint32 Width = 0;
//	uint32 Height = 0;
//
//	//Getting the PictureID from the SteamAPI and getting the Size with the ID
//	//virtual bool RequestUserInformation( CSteamID steamIDUser, bool bRequireNameOnly ) = 0;
//
//
//	FString ID = aPlayerInfo.PlayerID;
//	int Picture = 0;
//
//	CSteamID SteamID;
//	SteamID.Set(FCString::Atoi64(*ID), k_EUniversePublic, k_EAccountTypeIndividual);
//
//
//	switch (AvatarSize)
//	{
//	case SteamAvatarSize::SteamAvatar_Small: Picture = SteamFriends()->GetSmallFriendAvatar(SteamID); break;
//	case SteamAvatarSize::SteamAvatar_Medium: Picture = SteamFriends()->GetMediumFriendAvatar(SteamID); break;
//	case SteamAvatarSize::SteamAvatar_Large: Picture = SteamFriends()->GetLargeFriendAvatar(SteamID); break;
//	default: break;
//	}
//
//	if (Picture == -1)
//	{
//		Result = EBlueprintAsyncResultSwitch::AsyncLoading;
//		return NULL;
//	}
//
//	SteamUtils()->GetImageSize(Picture, &Width, &Height);
//
//	// STOLEN FROM ANSWERHUB :p, then fixed because answerhub wasn't releasing the memory O.o
//	// Also fixed image pixel format and switched to a memcpy instead of manual iteration.
//	// At some point I should probably reply to that answerhub post with these fixes to prevent people killing their games.....
//
//	if (Width > 0 && Height > 0)
//	{
//		//Creating the buffer "oAvatarRGBA" and then filling it with the RGBA Stream from the Steam Avatar
//		uint8* oAvatarRGBA = new uint8[Width * Height * 4];
//
//
//		//Filling the buffer with the RGBA Stream from the Steam Avatar and creating a UTextur2D to parse the RGBA Steam in
//		SteamUtils()->GetImageRGBA(Picture, (uint8*)oAvatarRGBA, 4 * Height * Width * sizeof(char));
//
//
//		// Removed as I changed the image bit code to be RGB, I think the original author was unaware that there were different pixel formats
//		/*
//		//Swap R and B channels because for some reason the games whack
//		for (uint32 i = 0; i < (Width * Height * 4); i += 4)
//		{
//			uint8 Temp = oAvatarRGBA[i + 0];
//			oAvatarRGBA[i + 0] = oAvatarRGBA[i + 2];
//			oAvatarRGBA[i + 2] = Temp;
//		}*/
//
//		UTexture2D* Avatar = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);
//		// Switched to a Memcpy instead of byte by byte transer
//
//		if (FTexturePlatformData* PlatformData = Avatar->GetPlatformData())
//		{
//			uint8* MipData = (uint8*)PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
//			FMemory::Memcpy(MipData, (void*)oAvatarRGBA, Height * Width * 4);
//			PlatformData->Mips[0].BulkData.Unlock();
//
//			// Original implementation was missing this!!
//			// the hell man......
//			delete[] oAvatarRGBA;
//
//			//Setting some Parameters for the Texture and finally returning it
//			PlatformData->SetNumSlices(1);
//			Avatar->NeverStream = true;
//			//Avatar->CompressionSettings = TC_EditorIcon;
//		}
//
//		Avatar->UpdateResource();
//
//		Result = EBlueprintAsyncResultSwitch::OnSuccess;
//		return Avatar;
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Bad Height / Width with steam avatar!"));
//	}
//
//	Result = EBlueprintAsyncResultSwitch::OnFailure;
//	return nullptr;
//
//}
//
//
//bool USteamAPI_BPL_PluginBPLibrary::Steam_OpenOverlay(ESteamUserOverlayType DialogType)
//{
//	if (SteamAPI_Init())
//	{
//		CSteamID SteamId = FSteamAPI_BPL_PluginModule::Get().GetSteamID();
//
//		const FString DialogName = EnumToString(TEXT("ESteamUserOverlayType"), static_cast<uint8>(DialogType));
//		SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*DialogName), SteamId);
//		return true;
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("OpenSteamUserOverlay Couldn't init steamAPI!"));
//		return false;
//	}
//	return false;
//}
//
//bool USteamAPI_BPL_PluginBPLibrary::Steam_IsOverlayEnabled()
//{
//	if (SteamAPI_Init())
//	{
//		return SteamUtils()->IsOverlayEnabled();
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("IsOverlayEnabled Couldn't init steamAPI!"));
//		return false;
//	}
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_RequestStats()
//{
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::Steam_GetStat(const FString& StatName)
//{return -1;
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_SetStat(const FString& StatName, int32 StatValue)
//{
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_ResetAllStats()
//{
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_OnGameOverlayActivated(bool bActive)
//{
//	// Implementation for handling the game overlay activation event
//	// Use the bActive parameter to determine if the overlay is being activated or deactivated
//}
//
//void USteamAPI_BPL_PluginBPLibrary::Steam_Init()
//{
//	FSteamAPI_BPL_PluginModule::Get().SteamInit();
//}
//
//FSteamPlayerInfo USteamAPI_BPL_PluginBPLibrary::Steam_GetPlayerInfo()
//{FSteamPlayerInfo PlayerInfo;
//	// Implementation for retrieving the Steam user's name
//	// You can use the Steam API to fetch the name here
//	const char* Name = SteamFriends()->GetPersonaName();
//	// Convert the name to FString and return it
//	PlayerInfo.PlayerName = FString(UTF8_TO_TCHAR(Name));
//	// Implementation for retrieving the Steam user's ID
//	// You can use the Steam API to fetch the ID here
//	CSteamID SteamID = SteamUser()->GetSteamID();
//	PlayerInfo.PlayerID = FString::Printf(TEXT("%llu"), SteamID.GetAccountID());
//	return PlayerInfo;
//}
//
//int USteamAPI_BPL_PluginBPLibrary::Steam_GetFriendCount()
//{
//	int a = SteamFriends()->GetFriendCount(k_EFriendFlagImmediate);
//	return a;
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::Steam_GetLocalPingLocation(FSteamNetworkPingLocation& Result)
//{
//	SteamNetworkPingLocation_t SteamResult;
//	float ErrorCode = SteamNetworkingUtils()->GetLocalPingLocation(SteamResult);
//
//	if (ErrorCode == k_EResultOK)
//	{
//		// Convert the SteamNetworkPingLocation_t to a string
//		char Buffer[512]; // Assuming a maximum string length of 512 characters
//		SteamNetworkingUtils()->ConvertPingLocationToString(SteamResult, Buffer, sizeof(Buffer));
//
//
//
//		// Copy the converted values to the FSteamNetworkPingLocation struct
//		//Result.Region = FString(SteamResult.m_data.m_szRegion);
//		Result.Ping = FString(Buffer);
//
//		UE_LOG(LogTemp, Display, TEXT("Steam GetLocalPingLocation"));
//		FString Message = FString(TEXT("Steam GetLocalPingLocation"));
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
//		FString Message2 = FString(Result.Ping);
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message2);
//	}
//	return ErrorCode;
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::Steam_EstimatePingTimeBetweenTwoLocations(
//	const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2)
//{
//	return 0;
//}
//
//int32 USteamAPI_BPL_PluginBPLibrary::Steam_GetFriendLevel(CSteamID steamIDFriend)
//{
//	if (SteamAPI_Init())
//	{
//		int32 Level = SteamFriends()->GetFriendSteamLevel(steamIDFriend);
//		UE_LOG(LogTemp, Warning, TEXT("Steam_GetFriendLevel: SteamUserStats interface is null."));
//		return Level;
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Steam_GetFriendLevel: Steam API is not initialized."));
//		return -1; // Default value if the level cannot be retrieved
//	}
//
//	return -1; // Default value if the level cannot be retrieved
//}
//

