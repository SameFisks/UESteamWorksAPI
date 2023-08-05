#include "UISteamUser.h"

#include "USteamUtils.h"


UISteamUser::UISteamUser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


void UISteamUser::SetInGameVoiceSpeaking(FSteamPlayerInfo aSteamIDUser, bool bSpeaking)
{
}

//int32 UISteamUser::GetVoiceOptimalSampleRate()
//{
//	return SteamUser()->GetVoiceOptimalSampleRate();
//}
//
//FSteamEVoiceResult UISteamUser::DecompressVoice(const TArray<uint8>& CompressedData, TArray<uint8>& DestBuffer,
//	int32 DesiredSampleRate)
//{return FSteamEVoiceResult();
//}
//
//int32 UISteamUser::GetHSteamUser()
//{
//	return SteamUser()->GetHSteamUser();
//}
//
//bool UISteamUser::BLoggedOn()
//{return SteamUser()->BLoggedOn();
//}

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

UISteamUser::UISteamUser()
{
	OnClientGameServerDenyCallback.Register(this, &UISteamUser::OnClientGameServerDeny);
	OnDurationControlCallback.Register(this, &UISteamUser::OnDurationControl);
	OnEncryptedAppTicketResponseCallback.Register(this, &UISteamUser::OnEncryptedAppTicketResponse);
	OnGameWebCallback.Register(this, &UISteamUser::OnGameWeb);
	OnGetAuthSessionTicketResponseCallback.Register(this, &UISteamUser::OnGetAuthSessionTicketResponse);
	OnIPCFailureCallback.Register(this, &UISteamUser::OnIPCFailure);
	OnLicensesUpdatedCallback.Register(this, &UISteamUser::OnLicensesUpdated);
	OnMicroTxnAuthorizationResponseCallback.Register(this, &UISteamUser::OnMicroTxnAuthorizationResponse);
	OnSteamServerConnectFailureCallback.Register(this, &UISteamUser::OnSteamServerConnectFailure);
	OnSteamServersConnectedCallback.Register(this, &UISteamUser::OnSteamServersConnected);
	OnSteamServersDisconnectedCallback.Register(this, &UISteamUser::OnSteamServersDisconnected);
	OnStoreAuthURLResponseCallback.Register(this, &UISteamUser::OnStoreAuthURLResponse);
	OnValidateAuthTicketResponseCallback.Register(this, &UISteamUser::OnValidateAuthTicketResponse);
}

UISteamUser::~UISteamUser()
{
	OnClientGameServerDenyCallback.Unregister();
	OnDurationControlCallback.Unregister();
	OnEncryptedAppTicketResponseCallback.Unregister();
	OnGameWebCallback.Unregister();
	OnGetAuthSessionTicketResponseCallback.Unregister();
	OnIPCFailureCallback.Unregister();
	OnLicensesUpdatedCallback.Unregister();
	OnMicroTxnAuthorizationResponseCallback.Unregister();
	OnSteamServerConnectFailureCallback.Unregister();
	OnSteamServersConnectedCallback.Unregister();
	OnSteamServersDisconnectedCallback.Unregister();
	OnStoreAuthURLResponseCallback.Unregister();
	OnValidateAuthTicketResponseCallback.Unregister();
}

void UISteamUser::AdvertiseGame(FSteamID SteamID, const FString& IP, int32 Port)
{
	uint32 TmpIP;
	USteamUtils::ConvertIPStringToUint32(IP, TmpIP);
	SteamUser()->AdvertiseGame(SteamID, TmpIP, FMath::Clamp<uint16>(Port, 0, 65535));
}

ESteamVoiceResult UISteamUser::DecompressVoice(const TArray<uint8>& CompressedBuffer, TArray<uint8>& UncompressedBuffer)
{
	ESteamVoiceResult result = ESteamVoiceResult::NotInitialized;
	uint16 BufferSize = 1024;
	for (int i = 0; i < 4; i++)
	{
		uint32 BytesWritten = 0;
		UncompressedBuffer.SetNum(BufferSize);
		result = (ESteamVoiceResult)SteamUser()->DecompressVoice(CompressedBuffer.GetData(), CompressedBuffer.Num(), UncompressedBuffer.GetData(), UncompressedBuffer.Num(), &BytesWritten, 48000);
		UncompressedBuffer.SetNum(BytesWritten);

		if (result == ESteamVoiceResult::OK)
		{
			return result;
		}

		BufferSize = BufferSize * 2 ^ i;
	}
	return result;
}

FHAuthTicket UISteamUser::GetAuthSessionTicket(TArray<uint8>& Ticket)
{
	Ticket.SetNum(8192);
	uint32 TempCounter = 0;

	// Pass nullptr as the fourth argument if you're not specifying an entity to connect to
	FHAuthTicket bResult = SteamUser()->GetAuthSessionTicket(Ticket.GetData(), 8192, &TempCounter, nullptr);

	Ticket.SetNum(TempCounter);
	return bResult;
}

bool UISteamUser::GetEncryptedAppTicket(TArray<uint8>& Ticket)
{
	uint32 TempCounter = 0;
	Ticket.SetNum(8192);
	bool bResult = SteamUser()->GetEncryptedAppTicket(Ticket.GetData(), 8192, &TempCounter);
	Ticket.SetNum(TempCounter);
	return bResult;
}

ESteamVoiceResult UISteamUser::GetVoice(TArray<uint8>& VoiceData)
{
	int32 TmpData = 0;
	ESteamVoiceResult result = GetAvailableVoice(TmpData);
	if (result == ESteamVoiceResult::OK)
	{
		VoiceData.SetNum(TmpData);
		result = (ESteamVoiceResult)SteamUser()->GetVoice(true, VoiceData.GetData(), VoiceData.Num(), (uint32*)&TmpData);
		VoiceData.SetNum(TmpData);
	}
	return result;
}

void UISteamUser::OnClientGameServerDeny(ClientGameServerDeny_t* pParam)
{
	FString IP = USteamUtils::ConvertIPToString(pParam->m_unGameServerIP);
	m_OnClientGameServerDeny.Broadcast(pParam->m_uAppID, IP, pParam->m_usGameServerPort, pParam->m_bSecure == 1, (ESteamDenyReason)pParam->m_uReason);
}

void UISteamUser::OnDurationControl(DurationControl_t* pParam)
{
	m_OnDurationControl.Broadcast((ESteamResult)pParam->m_eResult, (int32)pParam->m_appid, pParam->m_bApplicable, pParam->m_csecsLast5h, (ESteamDurationControlProgress)pParam->m_progress,
		(ESteamDurationControlNotification)pParam->m_notification);
}

void UISteamUser::OnEncryptedAppTicketResponse(EncryptedAppTicketResponse_t* pParam)
{
	m_OnEncryptedAppTicketResponse.Broadcast((ESteamResult)pParam->m_eResult);
}

void UISteamUser::OnGameWeb(GameWebCallback_t* pParam)
{
	m_OnGameWeb.Broadcast(pParam->m_szURL);
}

void UISteamUser::OnGetAuthSessionTicketResponse(GetAuthSessionTicketResponse_t* pParam)
{
	m_OnGetAuthSessionTicketResponse.Broadcast(pParam->m_hAuthTicket, (ESteamResult)pParam->m_eResult);
}

void UISteamUser::OnIPCFailure(IPCFailure_t* pParam)
{
	m_IPCFailure.Broadcast((ESteamFailureType)pParam->m_eFailureType);
}

void UISteamUser::OnLicensesUpdated(LicensesUpdated_t* pParam)
{
	m_OnLicensesUpdated.Broadcast();
}

void UISteamUser::OnMicroTxnAuthorizationResponse(MicroTxnAuthorizationResponse_t* pParam)
{
	m_OnMicroTxnAuthorizationResponse.Broadcast(pParam->m_unAppID, FString::FromInt(pParam->m_ulOrderID), pParam->m_bAuthorized == 1);
}

void UISteamUser::OnSteamServerConnectFailure(SteamServerConnectFailure_t* pParam)
{
	m_OnSteamServerConnectFailure.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_bStillRetrying);
}

void UISteamUser::OnSteamServersConnected(SteamServersConnected_t* pParam)
{
	m_OnSteamServersConnected.Broadcast();
}

void UISteamUser::OnSteamServersDisconnected(SteamServersDisconnected_t* pParam)
{
	m_OnSteamServersDisconnected.Broadcast((ESteamResult)pParam->m_eResult);
}

void UISteamUser::OnStoreAuthURLResponse(StoreAuthURLResponse_t* pParam)
{
	m_OnStoreAuthURLResponse.Broadcast(pParam->m_szURL);
}

void UISteamUser::OnValidateAuthTicketResponse(ValidateAuthTicketResponse_t* pParam)
{
	m_OnValidateAuthTicketResponse.Broadcast(pParam->m_SteamID.ConvertToUint64(), (ESteamAuthSessionResponse)pParam->m_eAuthSessionResponse, pParam->m_OwnerSteamID.ConvertToUint64());
}
