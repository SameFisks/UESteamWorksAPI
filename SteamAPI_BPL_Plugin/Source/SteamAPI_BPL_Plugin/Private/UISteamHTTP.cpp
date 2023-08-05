#include "UISteamHTTP.h"
#include "USteamUtils.h"

UISteamHTTP::UISteamHTTP(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


UISteamHTTP::UISteamHTTP()
{
	OnHTTPRequestCompletedCallback.Register(this, &UISteamHTTP::OnHTTPRequestCompleted);
	OnHTTPRequestDataReceivedCallback.Register(this, &UISteamHTTP::OnHTTPRequestDataReceived);
	OnHTTPRequestHeadersReceivedCallback.Register(this, &UISteamHTTP::OnHTTPRequestHeadersReceived);
}

UISteamHTTP::~UISteamHTTP()
{
	OnHTTPRequestCompletedCallback.Unregister();
	OnHTTPRequestDataReceivedCallback.Unregister();
	OnHTTPRequestHeadersReceivedCallback.Unregister();
}

void UISteamHTTP::OnHTTPRequestCompleted(HTTPRequestCompleted_t* pParam)
{
	m_OnHTTPRequestCompleted.Broadcast(pParam->m_hRequest, pParam->m_ulContextValue, pParam->m_bRequestSuccessful, (ESteamHTTPStatus::Type)pParam->m_eStatusCode, pParam->m_unBodySize);
}

void UISteamHTTP::OnHTTPRequestDataReceived(HTTPRequestDataReceived_t* pParam)
{
	m_OnHTTPRequestDataReceived.Broadcast(pParam->m_hRequest, pParam->m_ulContextValue, pParam->m_cOffset, pParam->m_cBytesReceived);
}

void UISteamHTTP::OnHTTPRequestHeadersReceived(HTTPRequestHeadersReceived_t* pParam)
{
	m_OnHTTPRequestHeadersReceived.Broadcast(pParam->m_hRequest, pParam->m_ulContextValue);
}
