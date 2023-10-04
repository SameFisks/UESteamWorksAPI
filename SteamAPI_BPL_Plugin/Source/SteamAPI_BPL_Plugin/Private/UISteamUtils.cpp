#include "UISteamUtils.h"
#include "USteamUtils.h"
#include "SteamAPI_BPL_Plugin.h"


UISteamUtils::UISteamUtils(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamUtils::UISteamUtils()
{
}

UISteamUtils::~UISteamUtils()
{
}

bool UISteamUtils::Init()
{
	return FSteamAPI_BPL_PluginModule::Get().SteamInit();
}

void UISteamUtils::RestartAppIfNecessary()
{
	FSteamAPI_BPL_PluginModule::Get().SteamRestartAppIfNecessary();
}

bool UISteamUtils::Shutdown()
{
	return FSteamAPI_BPL_PluginModule::Get().SteamShutdown();
}

TArray<FSteamPlayerInfo> UISteamUtils::GetFriends()
{
	TArray<FSteamPlayerInfo> Friends;

	// Implementation for retrieving a list of Steam friends
	// Populate the Friends array with the retrieved friend information
	int32 FriendCount = SteamFriends()->GetFriendCount(k_EFriendFlagImmediate);
	for (int32 i = 0; i < FriendCount; ++i)
	{
		CSteamID SteamFriend = SteamFriends()->GetFriendByIndex(i, k_EFriendFlagImmediate);
		const char* FriendName = SteamFriends()->GetFriendPersonaName(SteamFriend);
		FString FriendNameString(FriendName);
		AccountID_t FriendID = SteamFriend.GetAccountID();
		FString FriendIDString = FString::Printf(TEXT("%llu"), FriendID);


		// Create an FSteamPlayerInfo struct and populate it with the friend information
		FSteamPlayerInfo FriendInfo;
		FriendInfo.PlayerID = FriendIDString;
		FriendInfo.PlayerName = FriendNameString;

		Friends.Add(FriendInfo);
	}


	return Friends;
}

bool UISteamUtils::BOverlayNeedsPresent()
{
	return SteamUtils()->BOverlayNeedsPresent();
}

int32 UISteamUtils::GetAppID()
{
	return SteamUtils()->GetAppID();
}

int32 UISteamUtils::GetCurrentBatteryPower()
{
	return SteamUtils()->GetCurrentBatteryPower();
}

// Deprecated.  Do not call this.
//bool UISteamUtils::GetCSERIPPort(FString& IP, int32& Port) const
//{
//	uint32 TmpIP;
//	uint16 TmpPort;
//	bool bResult = SteamUtils()->GetCSERIPPort(&TmpIP, &TmpPort);
//	IP = USteamUtils::ConvertIPToString(TmpIP);
//	Port = TmpPort;
//	return bResult;
//}


bool UISteamUtils::GetEnteredGamepadTextInput(FString& Text) const
{
	TArray<char> TmpStr;
	bool bResult = SteamUtils()->GetEnteredGamepadTextInput(TmpStr.GetData(), 8192);
	Text = UTF8_TO_TCHAR(TmpStr.GetData());
	return bResult;
}

bool UISteamUtils::GetImageRGBA(int32 Image, TArray<uint8>& Buffer) const
{
	uint32 Width, Height;
	if (SteamUtils()->GetImageSize(Image, &Width, &Height))
	{
		const int32 ImageSize = Width * Height * 4;
		TArray<uint8> TmpBuffer;
		TmpBuffer.SetNum(ImageSize);
		bool bResult = SteamUtils()->GetImageRGBA(Image, TmpBuffer.GetData(), ImageSize);

		for (int32 i = 0; i < ImageSize; i++)
		{
			Buffer.Add(TmpBuffer[i]);
		}

		return bResult;
	}
	return false;
}

bool UISteamUtils::GetImageSize(int32 Image, FIntPoint& Size) const
{
	uint32 Width, Height;
	bool bResult = SteamUtils()->GetImageSize(Image, &Width, &Height);
	Size = { (int32)Width, (int32)Height };
	return bResult;
}

bool UISteamUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const FString& Description, const FString& ExistingText, int32 CharMax) const
{
	return SteamUtils()->ShowGamepadTextInput((EGamepadTextInputMode)InputMode, (EGamepadTextInputLineMode)LineInputMode, TCHAR_TO_UTF8(*Description), CharMax, TCHAR_TO_UTF8(*ExistingText));
}

void UISteamUtils::OnGamepadTextInputDismissed(GamepadTextInputDismissed_t* pParam)
{
	m_OnGamepadTextInputDismissed.Broadcast(pParam->m_bSubmitted, pParam->m_unSubmittedText);
}

void UISteamUtils::OnIPCountry(IPCountry_t* pParam)
{
	m_OnIPCountry.Broadcast();
}

void UISteamUtils::OnLowBatteryPower(LowBatteryPower_t* pParam)
{
	m_OnLowBatteryPower.Broadcast(pParam->m_nMinutesBatteryLeft);
}

void UISteamUtils::OnSteamAPICallCompleted(SteamAPICallCompleted_t* pParam)
{
	m_OnSteamAPICallCompleted.Broadcast((FSteamAPICall)pParam->m_hAsyncCall, pParam->m_iCallback, pParam->m_cubParam);
}

void UISteamUtils::OnSteamShutdown(SteamShutdown_t* pParam)
{
	m_OnSteamShutdown.Broadcast();
}
