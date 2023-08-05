#include "UISteamHTMLSurface.h"
#include "USteamUtils.h"

UISteamHTMLSurface::UISteamHTMLSurface(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UISteamHTMLSurface::UISteamHTMLSurface()
{
	OnHTMLBrowserReadyCallback.Register(this, &UISteamHTMLSurface::OnHTMLBrowserReady);
	OnHTMLCanGoBackAndForwardCallback.Register(this, &UISteamHTMLSurface::OnHTMLCanGoBackAndForward);
	OnHTMLChangedTitleCallback.Register(this, &UISteamHTMLSurface::OnHTMLChangedTitle);
	OnHTMLCloseBrowserCallback.Register(this, &UISteamHTMLSurface::OnHTMLCloseBrowser);
	OnHTMLFileOpenDialogCallback.Register(this, &UISteamHTMLSurface::OnHTMLFileOpenDialog);
	OnHTMLFinishedRequestCallback.Register(this, &UISteamHTMLSurface::OnHTMLFinishedRequest);
	OnHTMLHideToolTipCallback.Register(this, &UISteamHTMLSurface::OnHTMLHideToolTip);
	OnHTMLHorizontalScrollCallback.Register(this, &UISteamHTMLSurface::OnHTMLHorizontalScroll);
	OnHTMLJSAlertCallback.Register(this, &UISteamHTMLSurface::OnHTMLJSAlert);
	OnHTMLJSConfirmCallback.Register(this, &UISteamHTMLSurface::OnHTMLJSConfirm);
	OnHTMLLinkAtPositionCallback.Register(this, &UISteamHTMLSurface::OnHTMLLinkAtPosition);
	OnHTMLNeedsPaintCallback.Register(this, &UISteamHTMLSurface::OnHTMLNeedsPaint);
	OnHTMLNewWindowCallback.Register(this, &UISteamHTMLSurface::OnHTMLNewWindow);
	OnHTMLOpenLinkInNewTabCallback.Register(this, &UISteamHTMLSurface::OnHTMLOpenLinkInNewTab);
	OnHTMLSearchResultsCallback.Register(this, &UISteamHTMLSurface::OnHTMLSearchResults);
	OnHTMLSetCursorCallback.Register(this, &UISteamHTMLSurface::OnHTMLSetCursor);
	OnHTMLShowToolTipCallback.Register(this, &UISteamHTMLSurface::OnHTMLShowToolTip);
	OnHTMLStartRequestCallback.Register(this, &UISteamHTMLSurface::OnHTMLStartRequest);
	OnHTMLStatusTextCallback.Register(this, &UISteamHTMLSurface::OnHTMLStatusText);
	OnHTMLUpdateToolTipCallback.Register(this, &UISteamHTMLSurface::OnHTMLUpdateToolTip);
	OnHTMLURLChangedCallback.Register(this, &UISteamHTMLSurface::OnHTMLURLChanged);
	OnHTMLVerticalScrollCallback.Register(this, &UISteamHTMLSurface::OnHTMLVerticalScroll);
}

UISteamHTMLSurface::~UISteamHTMLSurface()
{
	OnHTMLBrowserReadyCallback.Unregister();
	OnHTMLCanGoBackAndForwardCallback.Unregister();
	OnHTMLChangedTitleCallback.Unregister();
	OnHTMLCloseBrowserCallback.Unregister();
	OnHTMLFileOpenDialogCallback.Unregister();
	OnHTMLFinishedRequestCallback.Unregister();
	OnHTMLHideToolTipCallback.Unregister();
	OnHTMLHorizontalScrollCallback.Unregister();
	OnHTMLJSAlertCallback.Unregister();
	OnHTMLJSConfirmCallback.Unregister();
	OnHTMLLinkAtPositionCallback.Unregister();
	OnHTMLNeedsPaintCallback.Unregister();
	OnHTMLNewWindowCallback.Unregister();
	OnHTMLOpenLinkInNewTabCallback.Unregister();
	OnHTMLSearchResultsCallback.Unregister();
	OnHTMLSetCursorCallback.Unregister();
	OnHTMLShowToolTipCallback.Unregister();
	OnHTMLStartRequestCallback.Unregister();
	OnHTMLStatusTextCallback.Unregister();
	OnHTMLUpdateToolTipCallback.Unregister();
	OnHTMLURLChangedCallback.Unregister();
	OnHTMLVerticalScrollCallback.Unregister();
}

void UISteamHTMLSurface::SetCookie(const FString& Hostname, const FString& Key, const FString& Value, const FString& Path, int32 Expires, bool bSecure, bool bHTTPOnly)
{
	SteamHTMLSurface()->SetCookie(TCHAR_TO_UTF8(*Hostname), TCHAR_TO_UTF8(*Key), TCHAR_TO_UTF8(*Value), TCHAR_TO_UTF8(*Path), Expires, bSecure, bHTTPOnly);
}

void UISteamHTMLSurface::OnHTMLBrowserReady(HTML_BrowserReady_t* pParam)
{
	m_OnHTMLBrowserReady.Broadcast(pParam->unBrowserHandle);
}

void UISteamHTMLSurface::OnHTMLCanGoBackAndForward(HTML_CanGoBackAndForward_t* pParam)
{
	m_OnHTMLCanGoBackAndForward.Broadcast(pParam->unBrowserHandle, pParam->bCanGoBack, pParam->bCanGoForward);
}

void UISteamHTMLSurface::OnHTMLChangedTitle(HTML_ChangedTitle_t* pParam)
{
	m_OnHTMLChangedTitle.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchTitle));
}

void UISteamHTMLSurface::OnHTMLCloseBrowser(HTML_CloseBrowser_t* pParam)
{
	m_OnHTMLCloseBrowser.Broadcast(pParam->unBrowserHandle);
}

void UISteamHTMLSurface::OnHTMLFileOpenDialog(HTML_FileOpenDialog_t* pParam)
{
	m_OnHTMLFileOpenDialog.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchTitle), UTF8_TO_TCHAR(pParam->pchInitialFile));
}

void UISteamHTMLSurface::OnHTMLFinishedRequest(HTML_FinishedRequest_t* pParam)
{
	m_OnHTMLFinishedRequest.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchURL), UTF8_TO_TCHAR(pParam->pchPageTitle));
}

void UISteamHTMLSurface::OnHTMLHideToolTip(HTML_HideToolTip_t* pParam)
{
	m_OnHTMLHideToolTip.Broadcast(pParam->unBrowserHandle);
}

void UISteamHTMLSurface::OnHTMLHorizontalScroll(HTML_HorizontalScroll_t* pParam)
{
	m_OnHTMLHorizontalScroll.Broadcast(pParam->unBrowserHandle, pParam->unScrollMax, pParam->unScrollCurrent, pParam->flPageScale, pParam->bVisible, pParam->unPageSize);
}

void UISteamHTMLSurface::OnHTMLJSAlert(HTML_JSAlert_t* pParam)
{
	m_OnHTMLJSAlert.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchMessage));
}

void UISteamHTMLSurface::OnHTMLJSConfirm(HTML_JSConfirm_t* pParam)
{
	m_OnHTMLJSConfirm.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchMessage));
}

void UISteamHTMLSurface::OnHTMLLinkAtPosition(HTML_LinkAtPosition_t* pParam)
{
	m_OnHTMLLinkAtPosition.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchURL), pParam->bInput, pParam->bLiveLink);
}

void UISteamHTMLSurface::OnHTMLNeedsPaint(HTML_NeedsPaint_t* pParam)
{
	m_OnHTMLNeedsPaint.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pBGRA), { (int32)pParam->unTall, (int32)pParam->unWide }, { (int32)pParam->unUpdateX, (int32)pParam->unUpdateY }, { (int32)pParam->unUpdateTall, (int32)pParam->unUpdateWide },
		{ (int32)pParam->unScrollX, (int32)pParam->unScrollY }, pParam->flPageScale, pParam->unPageSerial);
}

void UISteamHTMLSurface::OnHTMLNewWindow(HTML_NewWindow_t* pParam)
{
	m_OnHTMLNewWindow.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchURL), { (int32)pParam->unX, (int32)pParam->unY }, { (int32)pParam->unTall, (int32)pParam->unWide });
}

void UISteamHTMLSurface::OnHTMLOpenLinkInNewTab(HTML_OpenLinkInNewTab_t* pParam)
{
	m_OnHTMLOpenLinkInNewTab.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchURL));
}

void UISteamHTMLSurface::OnHTMLSearchResults(HTML_SearchResults_t* pParam)
{
	m_OnHTMLSearchResults.Broadcast(pParam->unBrowserHandle, pParam->unResults, pParam->unCurrentMatch);
}

void UISteamHTMLSurface::OnHTMLSetCursor(HTML_SetCursor_t* pParam)
{
	m_OnHTMLSetCursor.Broadcast(pParam->unBrowserHandle, (ESteamMouseCursor)pParam->eMouseCursor);
}

void UISteamHTMLSurface::OnHTMLShowToolTip(HTML_ShowToolTip_t* pParam)
{
	m_OnHTMLShowToolTip.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchMsg));
}

void UISteamHTMLSurface::OnHTMLStartRequest(HTML_StartRequest_t* pParam)
{
	m_OnHTMLStartRequest.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchURL), UTF8_TO_TCHAR(pParam->pchTarget), UTF8_TO_TCHAR(pParam->pchPostData), pParam->bIsRedirect);
}

void UISteamHTMLSurface::OnHTMLStatusText(HTML_StatusText_t* pParam)
{
	m_OnHTMLStatusText.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchMsg));
}

void UISteamHTMLSurface::OnHTMLUpdateToolTip(HTML_UpdateToolTip_t* pParam)
{
	m_OnHTMLUpdateToolTip.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchMsg));
}

void UISteamHTMLSurface::OnHTMLURLChanged(HTML_URLChanged_t* pParam)
{
	m_OnHTMLURLChanged.Broadcast(pParam->unBrowserHandle, UTF8_TO_TCHAR(pParam->pchURL), UTF8_TO_TCHAR(pParam->pchPostData), pParam->bIsRedirect, UTF8_TO_TCHAR(pParam->pchPageTitle), pParam->bNewNavigation);
}

void UISteamHTMLSurface::OnHTMLVerticalScroll(HTML_VerticalScroll_t* pParam)
{
	m_OnHTMLVerticalScroll.Broadcast(pParam->unBrowserHandle, pParam->unScrollMax, pParam->unScrollCurrent, pParam->flPageScale, pParam->bVisible, pParam->unPageSize);
}
