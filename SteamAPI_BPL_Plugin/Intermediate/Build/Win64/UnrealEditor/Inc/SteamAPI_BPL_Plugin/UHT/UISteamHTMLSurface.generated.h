// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UISteamHTMLSurface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UISteamHTMLSurface;
enum class ESteamHTMLKeyModifiers : uint8;
enum class ESteamHTMLMouseButton : uint8;
enum class ESteamMouseCursor : uint8;
struct FHHTMLBrowser;
struct FSteamAPICall;
#ifdef STEAMAPI_BPL_PLUGIN_UISteamHTMLSurface_generated_h
#error "UISteamHTMLSurface.generated.h already included, missing '#pragma once' in UISteamHTMLSurface.h"
#endif
#define STEAMAPI_BPL_PLUGIN_UISteamHTMLSurface_generated_h

#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_10_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLBrowserReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLBrowserReadyDelegate, FHHTMLBrowser BrowserHandle);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_11_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLCanGoBackAndForwardDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLCanGoBackAndForwardDelegate, FHHTMLBrowser BrowserHandle, bool bCanGoBack, bool bCanGoForward);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_12_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLChangedTitleDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLChangedTitleDelegate, FHHTMLBrowser BrowserHandle, const FString& Title);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_13_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLCloseBrowserDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLCloseBrowserDelegate, FHHTMLBrowser BrowserHandle);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_14_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLFileOpenDialogDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLFileOpenDialogDelegate, FHHTMLBrowser BrowserHandle, const FString& Title, const FString& InitialFileName);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_15_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLFinishedRequestDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLFinishedRequestDelegate, FHHTMLBrowser BrowserHandle, const FString& URL, const FString& PageTitle);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_16_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLHideToolTipDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLHideToolTipDelegate, FHHTMLBrowser BrowserHandle);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_17_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLHorizontalScrollDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLHorizontalScrollDelegate, FHHTMLBrowser BrowserHandle, int32 ScrollMax, int32 ScrollCurrent, float PageScale, bool bVisible, int32 PageSize);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_18_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLJSAlertDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLJSAlertDelegate, FHHTMLBrowser BrowserHandle, const FString& Message);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_19_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLJSConfirmDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLJSConfirmDelegate, FHHTMLBrowser BrowserHandle, const FString& Message);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_20_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLLinkAtPositionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLLinkAtPositionDelegate, FHHTMLBrowser BrowserHandle, const FString& URL, bool bInput, bool bLiveLink);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_21_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLNeedsPaintDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLNeedsPaintDelegate, FHHTMLBrowser BrowserHandle, const FString& BGRA, FIntPoint Size, FIntPoint Update, FIntPoint UpdateSize, FIntPoint ScrollPosition, float PageScale, int32 PageSerial);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_22_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLNewWindowDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLNewWindowDelegate, FHHTMLBrowser BrowserHandle, const FString& URL, FIntPoint Position, FIntPoint Size);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_23_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLOpenLinkInNewTabDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLOpenLinkInNewTabDelegate, FHHTMLBrowser BrowserHandle, const FString& URL);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_24_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLSearchResultsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLSearchResultsDelegate, FHHTMLBrowser BrowserHandle, int32 Results, int32 CurrentMatch);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_25_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLSetCursorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLSetCursorDelegate, FHHTMLBrowser BrowserHandle, ESteamMouseCursor MouseCursor);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_26_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLShowToolTipDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLShowToolTipDelegate, FHHTMLBrowser BrowserHandle, const FString& Message);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_27_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLStartRequestDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLStartRequestDelegate, FHHTMLBrowser BrowserHandle, const FString& URL, const FString& Target, const FString& PostData, bool bIsRedirect);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_28_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLStatusTextDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLStatusTextDelegate, FHHTMLBrowser BrowerHandle, const FString& Message);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_29_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLUpdateToolTipDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLUpdateToolTipDelegate, FHHTMLBrowser BrowserHandle, const FString& Message);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_30_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLURLChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLURLChangedDelegate, FHHTMLBrowser BrowserHandle, const FString& URL, const FString& PostData, bool bIsRedirect, const FString& PageTitle, bool bNewNavigation);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_31_DELEGATE \
STEAMAPI_BPL_PLUGIN_API void FOnHTMLVerticalScrollDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHTMLVerticalScrollDelegate, FHHTMLBrowser BrowserHandle, int32 ScrollMax, int32 ScrollCurrent, float PageScale, bool bVisible, int32 PageSize);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_SPARSE_DATA
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execViewSource); \
	DECLARE_FUNCTION(execStopLoad); \
	DECLARE_FUNCTION(execStopFind); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execSetVerticalScroll); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPageScaleFactor); \
	DECLARE_FUNCTION(execSetKeyFocus); \
	DECLARE_FUNCTION(execSetHorizontalScroll); \
	DECLARE_FUNCTION(execSetCookie); \
	DECLARE_FUNCTION(execSetBackgroundMode); \
	DECLARE_FUNCTION(execRemoveBrowser); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execPasteFromClipboard); \
	DECLARE_FUNCTION(execMouseWheel); \
	DECLARE_FUNCTION(execMouseUp); \
	DECLARE_FUNCTION(execMouseMove); \
	DECLARE_FUNCTION(execMouseDown); \
	DECLARE_FUNCTION(execMouseDoubleClick); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execKeyUp); \
	DECLARE_FUNCTION(execKeyDown); \
	DECLARE_FUNCTION(execKeyChar); \
	DECLARE_FUNCTION(execJSDialogResponse); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGoForward); \
	DECLARE_FUNCTION(execGoBack); \
	DECLARE_FUNCTION(execGetLinkAtPosition); \
	DECLARE_FUNCTION(execFind); \
	DECLARE_FUNCTION(execExecuteJavascript); \
	DECLARE_FUNCTION(execCreateBrowser); \
	DECLARE_FUNCTION(execCopyToClipboard); \
	DECLARE_FUNCTION(execAllowStartRequest); \
	DECLARE_FUNCTION(execAddHeader); \
	DECLARE_FUNCTION(execGetSteamHTMLSurface);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execViewSource); \
	DECLARE_FUNCTION(execStopLoad); \
	DECLARE_FUNCTION(execStopFind); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execSetVerticalScroll); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPageScaleFactor); \
	DECLARE_FUNCTION(execSetKeyFocus); \
	DECLARE_FUNCTION(execSetHorizontalScroll); \
	DECLARE_FUNCTION(execSetCookie); \
	DECLARE_FUNCTION(execSetBackgroundMode); \
	DECLARE_FUNCTION(execRemoveBrowser); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execPasteFromClipboard); \
	DECLARE_FUNCTION(execMouseWheel); \
	DECLARE_FUNCTION(execMouseUp); \
	DECLARE_FUNCTION(execMouseMove); \
	DECLARE_FUNCTION(execMouseDown); \
	DECLARE_FUNCTION(execMouseDoubleClick); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execKeyUp); \
	DECLARE_FUNCTION(execKeyDown); \
	DECLARE_FUNCTION(execKeyChar); \
	DECLARE_FUNCTION(execJSDialogResponse); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGoForward); \
	DECLARE_FUNCTION(execGoBack); \
	DECLARE_FUNCTION(execGetLinkAtPosition); \
	DECLARE_FUNCTION(execFind); \
	DECLARE_FUNCTION(execExecuteJavascript); \
	DECLARE_FUNCTION(execCreateBrowser); \
	DECLARE_FUNCTION(execCopyToClipboard); \
	DECLARE_FUNCTION(execAllowStartRequest); \
	DECLARE_FUNCTION(execAddHeader); \
	DECLARE_FUNCTION(execGetSteamHTMLSurface);


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_ACCESSORS
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISteamHTMLSurface(); \
	friend struct Z_Construct_UClass_UISteamHTMLSurface_Statics; \
public: \
	DECLARE_CLASS(UISteamHTMLSurface, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamHTMLSurface)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUISteamHTMLSurface(); \
	friend struct Z_Construct_UClass_UISteamHTMLSurface_Statics; \
public: \
	DECLARE_CLASS(UISteamHTMLSurface, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAPI_BPL_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UISteamHTMLSurface)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISteamHTMLSurface(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISteamHTMLSurface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamHTMLSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamHTMLSurface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamHTMLSurface(UISteamHTMLSurface&&); \
	NO_API UISteamHTMLSurface(const UISteamHTMLSurface&); \
public:


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UISteamHTMLSurface(UISteamHTMLSurface&&); \
	NO_API UISteamHTMLSurface(const UISteamHTMLSurface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISteamHTMLSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISteamHTMLSurface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISteamHTMLSurface)


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_35_PROLOG
#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_RPC_WRAPPERS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_INCLASS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_SPARSE_DATA \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_ACCESSORS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_INCLASS_NO_PURE_DECLS \
	FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISteamHTMLSurface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAPI_BPL_PLUGIN_API UClass* StaticClass<class UISteamHTMLSurface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_LyraWorldWar_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_UISteamHTMLSurface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
