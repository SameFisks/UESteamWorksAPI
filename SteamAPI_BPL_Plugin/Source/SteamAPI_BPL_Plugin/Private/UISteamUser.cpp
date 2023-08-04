#include "UISteamUser.h"


UISteamUser::UISteamUser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UISteamUser::StartVoiceRecording()
{
}

void UISteamUser::StopVoiceRecording()
{
}

void UISteamUser::SetInGameVoiceSpeaking(FSteamPlayerInfo aSteamIDUser, bool bSpeaking)
{
}

int32 UISteamUser::GetVoiceOptimalSampleRate()
{
	return SteamUser()->GetVoiceOptimalSampleRate();
}

FSteamEVoiceResult UISteamUser::DecompressVoice(const TArray<uint8>& CompressedData, TArray<uint8>& DestBuffer,
	int32 DesiredSampleRate)
{return FSteamEVoiceResult();
}

int32 UISteamUser::GetHSteamUser()
{
	return SteamUser()->GetHSteamUser();
}

bool UISteamUser::BLoggedOn()
{return SteamUser()->BLoggedOn();
}

//FSteamPlayerInfo UISteamUser::GetSteamID()
//{return FSteamPlayerInfo(SteamUser()->GetSteamID().ConvertToUint64());
//}

TArray<uint8> UISteamUser::InitiateGameConnection(FSteamPlayerInfo aSteamIDGameServer, int32 nIPServer,
	int32 nPortServer, bool bSecure)
{return TArray<uint8>();
}

void UISteamUser::TerminateGameConnection_DEPRECATED(int32 nIPServer, int32 nPortServer)
{
	SteamUser()->TerminateGameConnection_DEPRECATED(nIPServer, nPortServer);
}
