#include "UISteamGameServer.h"
#include "USteamUtils.h"

UISteamGameServer::UISteamGameServer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


UISteamGameServer::UISteamGameServer()
{
	OnAssociateWithClanResultCallback.Register(this, &UISteamGameServer::OnAssociateWithClanResult);
	OnComputeNewPlayerCompatibilityResultCallback.Register(this, &UISteamGameServer::OnComputeNewPlayerCompatibilityResult);
	OnGSClientApproveCallback.Register(this, &UISteamGameServer::OnGSClientApprove);
	OnGSClientDenyCallback.Register(this, &UISteamGameServer::OnGSClientDeny);
	OnGSClientGroupStatusCallback.Register(this, &UISteamGameServer::OnGSClientGroupStatus);
	OnGSClientKickCallback.Register(this, &UISteamGameServer::OnGSClientKick);
	OnGSPolicyResponseCallback.Register(this, &UISteamGameServer::OnGSPolicyResponse);
}

UISteamGameServer::~UISteamGameServer()
{
	OnAssociateWithClanResultCallback.Unregister();
	OnComputeNewPlayerCompatibilityResultCallback.Unregister();
	OnGSClientApproveCallback.Unregister();
	OnGSClientDenyCallback.Unregister();
	OnGSClientGroupStatusCallback.Unregister();
	OnGSClientKickCallback.Unregister();
	OnGSPolicyResponseCallback.Unregister();
}

ESteamBeginAuthSessionResult UISteamGameServer::BeginAuthSession(TArray<uint8> AuthTicket, FSteamID SteamID) const
{
	AuthTicket.SetNum(8192);
	return (ESteamBeginAuthSessionResult)SteamGameServer()->BeginAuthSession(AuthTicket.GetData(), 8192, SteamID);
}

FHAuthTicket UISteamGameServer::GetAuthSessionTicket(TArray<uint8>& AuthTicket) const
{
	uint32 length = 0;
	AuthTicket.SetNum(8192);

	// Pass nullptr as the fourth argument if you're not specifying an entity to connect to
	FHAuthTicket result = (FHAuthTicket)SteamGameServer()->GetAuthSessionTicket(AuthTicket.GetData(), 8192, &length, nullptr);
	AuthTicket.SetNum(length);
	return result;
}

FString UISteamGameServer::GetPublicIP() const
{
	FString TmpIP;
	USteamUtils::ConvertIPToString(SteamGameServer()->GetPublicIP().m_unIPv4);

	return TmpIP;
}

void UISteamGameServer::OnAssociateWithClanResult(AssociateWithClanResult_t* pParam)
{
	m_OnAssociateWithClanResult.Broadcast((ESteamResult)pParam->m_eResult);
}

void UISteamGameServer::OnComputeNewPlayerCompatibilityResult(ComputeNewPlayerCompatibilityResult_t* pParam)
{
	m_OnComputeNewPlayerCompatibilityResult.Broadcast((ESteamResult)pParam->m_eResult, pParam->m_cPlayersThatDontLikeCandidate, pParam->m_cPlayersThatCandidateDoesntLike,
		pParam->m_cClanPlayersThatDontLikeCandidate, pParam->m_SteamIDCandidate.ConvertToUint64());
}

void UISteamGameServer::OnGSClientApprove(GSClientApprove_t* pParam)
{
	m_OnGSClientApprove.Broadcast(pParam->m_SteamID.ConvertToUint64(), pParam->m_OwnerSteamID.ConvertToUint64());
}

void UISteamGameServer::OnGSClientDeny(GSClientDeny_t* pParam)
{
	m_OnGSClientDeny.Broadcast(pParam->m_SteamID.ConvertToUint64(), (ESteamDenyReason)pParam->m_eDenyReason, UTF8_TO_TCHAR(pParam->m_rgchOptionalText));
}

void UISteamGameServer::OnGSClientGroupStatus(GSClientGroupStatus_t* pParam)
{
	m_OnGSClientGroupStatus.Broadcast(pParam->m_SteamIDUser.ConvertToUint64(), pParam->m_SteamIDGroup.ConvertToUint64(), pParam->m_bMember, pParam->m_bOfficer);
}

void UISteamGameServer::OnGSClientKick(GSClientKick_t* pParam)
{
	m_OnGSClientKick.Broadcast(pParam->m_SteamID.ConvertToUint64(), (ESteamDenyReason)pParam->m_eDenyReason);
}

void UISteamGameServer::OnGSPolicyResponse(GSPolicyResponse_t* pParam)
{
	m_OnGSPolicyResponse.Broadcast(pParam->m_bSecure == 1);
}
