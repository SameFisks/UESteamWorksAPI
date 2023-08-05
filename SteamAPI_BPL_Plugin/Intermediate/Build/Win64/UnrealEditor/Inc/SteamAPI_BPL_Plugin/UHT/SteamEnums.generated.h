// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAPI_BPL_PLUGIN_SteamEnums_generated_h
#error "SteamEnums.generated.h already included, missing '#pragma once' in SteamEnums.h"
#endif
#define STEAMAPI_BPL_PLUGIN_SteamEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SameFisk_Home_SteamAPI_Plugins_SteamAPI_BPL_Plugin_Source_SteamAPI_BPL_Plugin_Public_SteamEnums_h


#define FOREACH_ENUM_ESTEAMGAMEOVERLAYTYPES(op) \
	op(ESteamGameOverlayTypes::Friends) \
	op(ESteamGameOverlayTypes::Community) \
	op(ESteamGameOverlayTypes::Players) \
	op(ESteamGameOverlayTypes::Settings) \
	op(ESteamGameOverlayTypes::OfficialGameGroup) \
	op(ESteamGameOverlayTypes::Stats) \
	op(ESteamGameOverlayTypes::Achievements) 

enum class ESteamGameOverlayTypes : uint8;
template<> struct TIsUEnumClass<ESteamGameOverlayTypes> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamGameOverlayTypes>();

#define FOREACH_ENUM_ESTEAMGAMEUSEROVERLAYTYPES(op) \
	op(ESteamGameUserOverlayTypes::SteamID) \
	op(ESteamGameUserOverlayTypes::Chat) \
	op(ESteamGameUserOverlayTypes::JoinTrade) \
	op(ESteamGameUserOverlayTypes::Stats) \
	op(ESteamGameUserOverlayTypes::Achievements) \
	op(ESteamGameUserOverlayTypes::FriendAdd) \
	op(ESteamGameUserOverlayTypes::FriendRemove) \
	op(ESteamGameUserOverlayTypes::FriendRequestAccept) \
	op(ESteamGameUserOverlayTypes::FriendRequestIgnore) 

enum class ESteamGameUserOverlayTypes : uint8;
template<> struct TIsUEnumClass<ESteamGameUserOverlayTypes> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamGameUserOverlayTypes>();

#define FOREACH_ENUM_ESTEAMBEGINAUTHSESSIONRESULT(op) \
	op(ESteamBeginAuthSessionResult::OK) \
	op(ESteamBeginAuthSessionResult::InvalidTicket) \
	op(ESteamBeginAuthSessionResult::DuplicateRequest) \
	op(ESteamBeginAuthSessionResult::InvalidVersion) \
	op(ESteamBeginAuthSessionResult::GameMismatch) \
	op(ESteamBeginAuthSessionResult::ExpiredTicket) 

enum class ESteamBeginAuthSessionResult : uint8;
template<> struct TIsUEnumClass<ESteamBeginAuthSessionResult> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamBeginAuthSessionResult>();

#define FOREACH_ENUM_ESTEAMAUTHSESSIONRESPONSE(op) \
	op(ESteamAuthSessionResponse::OK) \
	op(ESteamAuthSessionResponse::UserNotConnectedToSteam) \
	op(ESteamAuthSessionResponse::NoLicenseOrExpired) \
	op(ESteamAuthSessionResponse::VACBanned) \
	op(ESteamAuthSessionResponse::LoggedInElseWhere) \
	op(ESteamAuthSessionResponse::VACCheckTimedOut) \
	op(ESteamAuthSessionResponse::AuthTicketCanceled) \
	op(ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed) \
	op(ESteamAuthSessionResponse::AuthTicketInvalid) \
	op(ESteamAuthSessionResponse::PublisherIssuedBan) 

enum class ESteamAuthSessionResponse : uint8;
template<> struct TIsUEnumClass<ESteamAuthSessionResponse> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamAuthSessionResponse>();

#define FOREACH_ENUM_ESTEAMVOICERESULT(op) \
	op(ESteamVoiceResult::OK) \
	op(ESteamVoiceResult::NotInitialized) \
	op(ESteamVoiceResult::NotRecording) \
	op(ESteamVoiceResult::NoData) \
	op(ESteamVoiceResult::BufferTooSmall) \
	op(ESteamVoiceResult::DataCorrupted) \
	op(ESteamVoiceResult::Restricted) \
	op(ESteamVoiceResult::UnsupportedCodec) \
	op(ESteamVoiceResult::ReceiverOutOfDate) \
	op(ESteamVoiceResult::ReceiverDidNotAnswer) 

enum class ESteamVoiceResult : uint8;
template<> struct TIsUEnumClass<ESteamVoiceResult> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamVoiceResult>();

#define FOREACH_ENUM_ESTEAMUSERHASLICENSEFORAPPRESULT(op) \
	op(ESteamUserHasLicenseForAppResult::HasLicense) \
	op(ESteamUserHasLicenseForAppResult::DoesNotHaveLicense) \
	op(ESteamUserHasLicenseForAppResult::NoAuth) 

enum class ESteamUserHasLicenseForAppResult : uint8;
template<> struct TIsUEnumClass<ESteamUserHasLicenseForAppResult> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUserHasLicenseForAppResult>();

#define FOREACH_ENUM_ESTEAMFAILURETYPE(op) \
	op(ESteamFailureType::FlushedCallbackQueue) \
	op(ESteamFailureType::PipeFail) 

enum class ESteamFailureType : uint8;
template<> struct TIsUEnumClass<ESteamFailureType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamFailureType>();

#define FOREACH_ENUM_ESTEAMDENYREASON(op) \
	op(ESteamDenyReason::Invalid) \
	op(ESteamDenyReason::InvalidVersion) \
	op(ESteamDenyReason::Generic) \
	op(ESteamDenyReason::NotLoggedOn) \
	op(ESteamDenyReason::NoLicense) \
	op(ESteamDenyReason::Cheater) \
	op(ESteamDenyReason::LoggedInElseWhere) \
	op(ESteamDenyReason::UnknownText) \
	op(ESteamDenyReason::IncompatibleAnticheat) \
	op(ESteamDenyReason::MemoryCorruption) \
	op(ESteamDenyReason::IncompatibleSoftware) \
	op(ESteamDenyReason::SteamConnectionLost) \
	op(ESteamDenyReason::SteamConnectionError) \
	op(ESteamDenyReason::SteamResponseTimedOut) \
	op(ESteamDenyReason::SteamValidationStalled) \
	op(ESteamDenyReason::SteamOwnerLeftGuestUser) 

enum class ESteamDenyReason : uint8;
template<> struct TIsUEnumClass<ESteamDenyReason> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamDenyReason>();

#define FOREACH_ENUM_ESTEAMRESULT(op) \
	op(ESteamResult::None) \
	op(ESteamResult::OK) \
	op(ESteamResult::Fail) \
	op(ESteamResult::NoConnection) \
	op(ESteamResult::InvalidPassword) \
	op(ESteamResult::LoggedInElsewhere) \
	op(ESteamResult::InvalidProtocolVer) \
	op(ESteamResult::InvalidParam) \
	op(ESteamResult::FileNotFound) \
	op(ESteamResult::Busy) \
	op(ESteamResult::InvalidState) \
	op(ESteamResult::InvalidName) \
	op(ESteamResult::InvalidEmail) \
	op(ESteamResult::DuplicateName) \
	op(ESteamResult::AccessDenied) \
	op(ESteamResult::Timeout) \
	op(ESteamResult::Banned) \
	op(ESteamResult::AccountNotFound) \
	op(ESteamResult::InvalidSteamID) \
	op(ESteamResult::ServiceUnavailable) \
	op(ESteamResult::NotLoggedOn) \
	op(ESteamResult::Pending) \
	op(ESteamResult::EncryptionFailure) \
	op(ESteamResult::InsufficientPrivilege) \
	op(ESteamResult::LimitExceeded) \
	op(ESteamResult::Revoked) \
	op(ESteamResult::Expired) \
	op(ESteamResult::AlreadyRedeemed) \
	op(ESteamResult::DuplicateRequest) \
	op(ESteamResult::AlreadyOwned) \
	op(ESteamResult::IPNotFound) \
	op(ESteamResult::PersistFailed) \
	op(ESteamResult::LockingFailed) \
	op(ESteamResult::LogonSessionReplaced) \
	op(ESteamResult::ConnectFailed) \
	op(ESteamResult::HandshakeFailed) \
	op(ESteamResult::IOFailure) \
	op(ESteamResult::RemoteDisconnect) \
	op(ESteamResult::ShoppingCartNotFound) \
	op(ESteamResult::Blocked) \
	op(ESteamResult::Ignored) \
	op(ESteamResult::NoMatch) \
	op(ESteamResult::AccountDisabled) \
	op(ESteamResult::ServiceReadOnly) \
	op(ESteamResult::AccountNotFeatured) \
	op(ESteamResult::AdministratorOK) \
	op(ESteamResult::ContentVersion) \
	op(ESteamResult::TryAnotherCM) \
	op(ESteamResult::PasswordRequiredToKickSession) \
	op(ESteamResult::AlreadyLoggedInElsewhere) \
	op(ESteamResult::Suspended) \
	op(ESteamResult::Cancelled) \
	op(ESteamResult::DataCorruption) \
	op(ESteamResult::DiskFull) \
	op(ESteamResult::RemoteCallFailed) \
	op(ESteamResult::PasswordUnset) \
	op(ESteamResult::ExternalAccountUnlinked) \
	op(ESteamResult::PSNTicketInvalid) \
	op(ESteamResult::ExternalAccountAlreadyLinked) \
	op(ESteamResult::RemoteFileConflict) \
	op(ESteamResult::IllegalPassword) \
	op(ESteamResult::SameAsPreviousValue) \
	op(ESteamResult::AccountLogonDenied) \
	op(ESteamResult::CannotUseOldPassword) \
	op(ESteamResult::InvalidLoginAuthCode) \
	op(ESteamResult::AccountLogonDeniedNoMail) \
	op(ESteamResult::HardwareNotCapableOfIPT) \
	op(ESteamResult::IPTInitError) \
	op(ESteamResult::ParentalControlRestricted) \
	op(ESteamResult::FacebookQueryError) \
	op(ESteamResult::ExpiredLoginAuthCode) \
	op(ESteamResult::IPLoginRestrictionFailed) \
	op(ESteamResult::AccountLockedDown) \
	op(ESteamResult::AccountLogonDeniedVerifiedEmailRequired) \
	op(ESteamResult::NoMatchingURL) \
	op(ESteamResult::BadResponse) \
	op(ESteamResult::RequirePasswordReEntry) \
	op(ESteamResult::ValueOutOfRange) \
	op(ESteamResult::UnexpectedError) \
	op(ESteamResult::Disabled) \
	op(ESteamResult::InvalidCEGSubmission) \
	op(ESteamResult::RestrictedDevice) \
	op(ESteamResult::RegionLocked) \
	op(ESteamResult::RateLimitExceeded) \
	op(ESteamResult::AccountLoginDeniedNeedTwoFactor) \
	op(ESteamResult::ItemDeleted) \
	op(ESteamResult::AccountLoginDeniedThrottle) \
	op(ESteamResult::TwoFactorCodeMismatch) \
	op(ESteamResult::TwoFactorActivationCodeMismatch) \
	op(ESteamResult::AccountAssociatedToMultiplePartners) \
	op(ESteamResult::NotModified) \
	op(ESteamResult::NoMobileDevice) \
	op(ESteamResult::TimeNotSynced) \
	op(ESteamResult::SmsCodeFailed) \
	op(ESteamResult::AccountLimitExceeded) \
	op(ESteamResult::AccountActivityLimitExceeded) \
	op(ESteamResult::PhoneActivityLimitExceeded) \
	op(ESteamResult::RefundToWallet) \
	op(ESteamResult::EmailSendFailure) \
	op(ESteamResult::NotSettled) \
	op(ESteamResult::NeedCaptcha) \
	op(ESteamResult::GSLTDenied) \
	op(ESteamResult::GSOwnerDenied) \
	op(ESteamResult::InvalidItemType) \
	op(ESteamResult::IPBanned) \
	op(ESteamResult::GSLTExpired) \
	op(ESteamResult::InsufficientFunds) \
	op(ESteamResult::TooManyPending) 

enum class ESteamResult : uint8;
template<> struct TIsUEnumClass<ESteamResult> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamResult>();

#define FOREACH_ENUM_ESTEAMPERSONACHANGE(op) \
	op(ESteamPersonaChange::None) \
	op(ESteamPersonaChange::ChangeName) \
	op(ESteamPersonaChange::ChangeStatus) \
	op(ESteamPersonaChange::ChangeComeOnline) \
	op(ESteamPersonaChange::ChangeGoneOffline) \
	op(ESteamPersonaChange::ChangeGamePlayed) \
	op(ESteamPersonaChange::ChangeGameServer) \
	op(ESteamPersonaChange::ChangeAvatar) \
	op(ESteamPersonaChange::ChangeJoinedSource) \
	op(ESteamPersonaChange::ChangeLeftSource) \
	op(ESteamPersonaChange::ChangeRelationshipChanged) \
	op(ESteamPersonaChange::ChangeNameFirstSet) \
	op(ESteamPersonaChange::ChangeFacebookInfo) \
	op(ESteamPersonaChange::ChangeNickname) \
	op(ESteamPersonaChange::ChangeSteamLevel) \
	op(ESteamPersonaChange::ChangeErr) 

enum class ESteamPersonaChange : uint8;
template<> struct TIsUEnumClass<ESteamPersonaChange> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamPersonaChange>();

#define FOREACH_ENUM_ESTEAMDURATIONCONTROLNOTIFICATION(op) \
	op(ESteamDurationControlNotification::None) \
	op(ESteamDurationControlNotification::OneHour) \
	op(ESteamDurationControlNotification::ThreeHours) \
	op(ESteamDurationControlNotification::HalfProgress) \
	op(ESteamDurationControlNotification::NoProgress) 

enum class ESteamDurationControlNotification : uint8;
template<> struct TIsUEnumClass<ESteamDurationControlNotification> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamDurationControlNotification>();

#define FOREACH_ENUM_ESTEAMDURATIONCONTROLPROGRESS(op) \
	op(ESteamDurationControlProgress::Full) \
	op(ESteamDurationControlProgress::Half) \
	op(ESteamDurationControlProgress::None) \
	op(ESteamDurationControlProgress::ExitSoon_3h) \
	op(ESteamDurationControlProgress::ExitSoon_5h) \
	op(ESteamDurationControlProgress::ExitSoon_Night) 

enum class ESteamDurationControlProgress : uint8;
template<> struct TIsUEnumClass<ESteamDurationControlProgress> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamDurationControlProgress>();

#define FOREACH_ENUM_ESTEAMOVERLAYTOSTOREFLAG(op) \
	op(ESteamOverlayToStoreFlag::None) \
	op(ESteamOverlayToStoreFlag::AddToCart) \
	op(ESteamOverlayToStoreFlag::AddToCartAndShow) 

enum class ESteamOverlayToStoreFlag : uint8;
template<> struct TIsUEnumClass<ESteamOverlayToStoreFlag> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamOverlayToStoreFlag>();

#define FOREACH_ENUM_ESTEAMCHATENTRYTYPE(op) \
	op(ESteamChatEntryType::Invalid) \
	op(ESteamChatEntryType::ChatMessage) \
	op(ESteamChatEntryType::Typing) \
	op(ESteamChatEntryType::InviteGame) \
	op(ESteamChatEntryType::Emote) \
	op(ESteamChatEntryType::LeftConversation) \
	op(ESteamChatEntryType::Entered) \
	op(ESteamChatEntryType::WasKicked) \
	op(ESteamChatEntryType::WasBanned) \
	op(ESteamChatEntryType::Disconnected) \
	op(ESteamChatEntryType::HistoricalChat) \
	op(ESteamChatEntryType::LinkBlocked) 

enum class ESteamChatEntryType : uint8;
template<> struct TIsUEnumClass<ESteamChatEntryType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamChatEntryType>();

#define FOREACH_ENUM_ESTEAMFRIENDFLAGS(op) \
	op(ESteamFriendFlags::Blocked) \
	op(ESteamFriendFlags::FriendshipRequested) \
	op(ESteamFriendFlags::Immediate) \
	op(ESteamFriendFlags::ClanMember) \
	op(ESteamFriendFlags::OnGameServer) \
	op(ESteamFriendFlags::HasPlayedWith) \
	op(ESteamFriendFlags::FriendOfFriend) \
	op(ESteamFriendFlags::RequestingFriendship) \
	op(ESteamFriendFlags::RequestingInfo) \
	op(ESteamFriendFlags::Ignored) \
	op(ESteamFriendFlags::IgnoredFriend) \
	op(ESteamFriendFlags::Suggested) \
	op(ESteamFriendFlags::ChatMember) \
	op(ESteamFriendFlags::All) 

enum class ESteamFriendFlags : uint8;
template<> struct TIsUEnumClass<ESteamFriendFlags> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamFriendFlags>();

#define FOREACH_ENUM_ESTEAMAVATARSIZE(op) \
	op(ESteamAvatarSize::Small) \
	op(ESteamAvatarSize::Medium) \
	op(ESteamAvatarSize::Large) 

enum class ESteamAvatarSize : uint8;
template<> struct TIsUEnumClass<ESteamAvatarSize> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamAvatarSize>();

#define FOREACH_ENUM_ESTEAMUSERRESTRICTIONS(op) \
	op(ESteamUserRestrictions::Unknown) \
	op(ESteamUserRestrictions::AnyChat) \
	op(ESteamUserRestrictions::VoiceChat) \
	op(ESteamUserRestrictions::GroupChat) \
	op(ESteamUserRestrictions::Rating) \
	op(ESteamUserRestrictions::GameInvites) \
	op(ESteamUserRestrictions::Trading) 

enum class ESteamUserRestrictions : uint8;
template<> struct TIsUEnumClass<ESteamUserRestrictions> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUserRestrictions>();

#define FOREACH_ENUM_ESTEAMCHATROOMENTERRESPONSE(op) \
	op(ESteamChatRoomEnterResponse::Unknown) \
	op(ESteamChatRoomEnterResponse::Success) \
	op(ESteamChatRoomEnterResponse::DoesntExist) \
	op(ESteamChatRoomEnterResponse::NotAllowed) \
	op(ESteamChatRoomEnterResponse::Full) \
	op(ESteamChatRoomEnterResponse::Error) \
	op(ESteamChatRoomEnterResponse::Banned) \
	op(ESteamChatRoomEnterResponse::Limited) \
	op(ESteamChatRoomEnterResponse::ClanDisabled) \
	op(ESteamChatRoomEnterResponse::CommunityBan) \
	op(ESteamChatRoomEnterResponse::MemberBlockedYou) \
	op(ESteamChatRoomEnterResponse::YouBlockedMember) 

enum class ESteamChatRoomEnterResponse : uint8;
template<> struct TIsUEnumClass<ESteamChatRoomEnterResponse> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>();

#define FOREACH_ENUM_ESTEAMHTMLKEYMODIFIERS(op) \
	op(ESteamHTMLKeyModifiers::None) \
	op(ESteamHTMLKeyModifiers::AltDown) \
	op(ESteamHTMLKeyModifiers::CtrlDown) \
	op(ESteamHTMLKeyModifiers::ShiftDown) 

enum class ESteamHTMLKeyModifiers : uint8;
template<> struct TIsUEnumClass<ESteamHTMLKeyModifiers> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamHTMLKeyModifiers>();

#define FOREACH_ENUM_ESTEAMHTMLMOUSEBUTTON(op) \
	op(ESteamHTMLMouseButton::Left) \
	op(ESteamHTMLMouseButton::Right) \
	op(ESteamHTMLMouseButton::Middle) 

enum class ESteamHTMLMouseButton : uint8;
template<> struct TIsUEnumClass<ESteamHTMLMouseButton> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamHTMLMouseButton>();

#define FOREACH_ENUM_ESTEAMMOUSECURSOR(op) \
	op(ESteamMouseCursor::dc_user) \
	op(ESteamMouseCursor::dc_none) \
	op(ESteamMouseCursor::dc_arrow) \
	op(ESteamMouseCursor::dc_ibeam) \
	op(ESteamMouseCursor::dc_hourglass) \
	op(ESteamMouseCursor::dc_waitarrow) \
	op(ESteamMouseCursor::dc_crosshair) \
	op(ESteamMouseCursor::dc_up) \
	op(ESteamMouseCursor::dc_sizenw) \
	op(ESteamMouseCursor::dc_sizese) \
	op(ESteamMouseCursor::dc_sizene) \
	op(ESteamMouseCursor::dc_sizesw) \
	op(ESteamMouseCursor::dc_sizew) \
	op(ESteamMouseCursor::dc_sizee) \
	op(ESteamMouseCursor::dc_sizen) \
	op(ESteamMouseCursor::dc_sizes) \
	op(ESteamMouseCursor::dc_sizewe) \
	op(ESteamMouseCursor::dc_sizens) \
	op(ESteamMouseCursor::dc_sizeall) \
	op(ESteamMouseCursor::dc_no) \
	op(ESteamMouseCursor::dc_hand) \
	op(ESteamMouseCursor::dc_blank) \
	op(ESteamMouseCursor::dc_middle_pan) \
	op(ESteamMouseCursor::dc_north_pan) \
	op(ESteamMouseCursor::dc_north_east_pan) \
	op(ESteamMouseCursor::dc_east_pan) \
	op(ESteamMouseCursor::dc_south_east_pan) \
	op(ESteamMouseCursor::dc_south_pan) \
	op(ESteamMouseCursor::dc_south_west_pan) \
	op(ESteamMouseCursor::dc_west_pan) \
	op(ESteamMouseCursor::dc_north_west_pan) \
	op(ESteamMouseCursor::dc_alias) \
	op(ESteamMouseCursor::dc_cell) \
	op(ESteamMouseCursor::dc_colresize) \
	op(ESteamMouseCursor::dc_copycur) \
	op(ESteamMouseCursor::dc_verticaltext) \
	op(ESteamMouseCursor::dc_rowresize) \
	op(ESteamMouseCursor::dc_zoomin) \
	op(ESteamMouseCursor::dc_zoomout) \
	op(ESteamMouseCursor::dc_help) \
	op(ESteamMouseCursor::dc_custom) \
	op(ESteamMouseCursor::dc_last) 

enum class ESteamMouseCursor : uint8;
template<> struct TIsUEnumClass<ESteamMouseCursor> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamMouseCursor>();

#define FOREACH_ENUM_ESTEAMHTTPMETHOD(op) \
	op(ESteamHTTPMethod::Invalid) \
	op(ESteamHTTPMethod::GET) \
	op(ESteamHTTPMethod::HEAD) \
	op(ESteamHTTPMethod::POST) \
	op(ESteamHTTPMethod::PUT) \
	op(ESteamHTTPMethod::DELETE) \
	op(ESteamHTTPMethod::OPTIONS) \
	op(ESteamHTTPMethod::PATCH) 

enum class ESteamHTTPMethod : uint8;
template<> struct TIsUEnumClass<ESteamHTTPMethod> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamHTTPMethod>();

#define FOREACH_ENUM_ESTEAMHTTPSTATUS(op) \
	op(ESteamHTTPStatus::e_Invalid) \
	op(ESteamHTTPStatus::e_100Continue) \
	op(ESteamHTTPStatus::e_101SwitchingProtocols) \
	op(ESteamHTTPStatus::e_200OK) \
	op(ESteamHTTPStatus::e_201Created) \
	op(ESteamHTTPStatus::e_202Accepted) \
	op(ESteamHTTPStatus::e_203NonAuthoritative) \
	op(ESteamHTTPStatus::e_204NoContent) \
	op(ESteamHTTPStatus::e_205ResetContent) \
	op(ESteamHTTPStatus::e_206PartialContent) \
	op(ESteamHTTPStatus::e_300MultipleChoices) \
	op(ESteamHTTPStatus::e_301MovedPermanently) \
	op(ESteamHTTPStatus::e_302Found) \
	op(ESteamHTTPStatus::e_303SeeOther) \
	op(ESteamHTTPStatus::e_304NotModified) \
	op(ESteamHTTPStatus::e_305UseProxy) \
	op(ESteamHTTPStatus::e_307TemporaryRedirect) \
	op(ESteamHTTPStatus::e_400BadRequest) \
	op(ESteamHTTPStatus::e_401Unauthorized) \
	op(ESteamHTTPStatus::e_402PaymentRequired) \
	op(ESteamHTTPStatus::e_403Forbidden) \
	op(ESteamHTTPStatus::e_404NotFound) \
	op(ESteamHTTPStatus::e_405MethodNotAllowed) \
	op(ESteamHTTPStatus::e_406NotAcceptable) \
	op(ESteamHTTPStatus::e_407ProxyAuthRequired) \
	op(ESteamHTTPStatus::e_408RequestTimeout) \
	op(ESteamHTTPStatus::e_409Conflict) \
	op(ESteamHTTPStatus::e_410Gone) \
	op(ESteamHTTPStatus::e_411LengthRequired) \
	op(ESteamHTTPStatus::e_412PreconditionFailed) \
	op(ESteamHTTPStatus::e_413RequestEntityTooLarge) \
	op(ESteamHTTPStatus::e_414RequestURITooLong) \
	op(ESteamHTTPStatus::e_415UnsupportedMediaType) \
	op(ESteamHTTPStatus::e_416RequestedRangeNotSatisfiable) \
	op(ESteamHTTPStatus::e_417ExpectationFailed) \
	op(ESteamHTTPStatus::e_4xxUnknown) \
	op(ESteamHTTPStatus::e_429TooManyRequests) \
	op(ESteamHTTPStatus::e_500InternalServerError) \
	op(ESteamHTTPStatus::e_501NotImplemented) \
	op(ESteamHTTPStatus::e_502BadGateway) \
	op(ESteamHTTPStatus::e_503ServiceUnavailable) \
	op(ESteamHTTPStatus::e_504GatewayTimeout) \
	op(ESteamHTTPStatus::e_505HTTPVersionNotSupported) \
	op(ESteamHTTPStatus::e_5xxUnknown) 
#define FOREACH_ENUM_ESTEAMCONTROLLERSOURCEMODE(op) \
	op(ESteamControllerSourceMode::None) \
	op(ESteamControllerSourceMode::Dpad) \
	op(ESteamControllerSourceMode::Buttons) \
	op(ESteamControllerSourceMode::FourButtons) \
	op(ESteamControllerSourceMode::AbsoluteMouse) \
	op(ESteamControllerSourceMode::RelativeMouse) \
	op(ESteamControllerSourceMode::JoystickMove) \
	op(ESteamControllerSourceMode::JoystickMouse) \
	op(ESteamControllerSourceMode::JoystickCamera) \
	op(ESteamControllerSourceMode::ScrollWheel) \
	op(ESteamControllerSourceMode::Trigger) \
	op(ESteamControllerSourceMode::TouchMenu) \
	op(ESteamControllerSourceMode::MouseJoystick) \
	op(ESteamControllerSourceMode::MouseRegion) \
	op(ESteamControllerSourceMode::RadialMenu) \
	op(ESteamControllerSourceMode::SingleButton) \
	op(ESteamControllerSourceMode::Switches) 

enum class ESteamControllerSourceMode : uint8;
template<> struct TIsUEnumClass<ESteamControllerSourceMode> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamControllerSourceMode>();

#define FOREACH_ENUM_ESTEAMINPUTACTIONORIGIN(op) \
	op(ESteamInputActionOrigin::None) \
	op(ESteamInputActionOrigin::A) \
	op(ESteamInputActionOrigin::B) \
	op(ESteamInputActionOrigin::X) \
	op(ESteamInputActionOrigin::Y) \
	op(ESteamInputActionOrigin::LeftBumper) \
	op(ESteamInputActionOrigin::RightBumper) \
	op(ESteamInputActionOrigin::LeftGrip) \
	op(ESteamInputActionOrigin::RightGrip) \
	op(ESteamInputActionOrigin::Start) \
	op(ESteamInputActionOrigin::Back) \
	op(ESteamInputActionOrigin::LeftPad_Touch) \
	op(ESteamInputActionOrigin::LeftPad_Swipe) \
	op(ESteamInputActionOrigin::LeftPad_Click) \
	op(ESteamInputActionOrigin::LeftPad_DPadNorth) \
	op(ESteamInputActionOrigin::LeftPad_DPadSouth) \
	op(ESteamInputActionOrigin::LeftPad_DPadWest) \
	op(ESteamInputActionOrigin::LeftPad_DPadEast) \
	op(ESteamInputActionOrigin::RightPad_Touch) \
	op(ESteamInputActionOrigin::RightPad_Swipe) \
	op(ESteamInputActionOrigin::RightPad_Click) \
	op(ESteamInputActionOrigin::RightPad_DPadNorth) \
	op(ESteamInputActionOrigin::RightPad_DPadSouth) \
	op(ESteamInputActionOrigin::RightPad_DPadWest) \
	op(ESteamInputActionOrigin::RightPad_DPadEast) \
	op(ESteamInputActionOrigin::LeftTrigger_Pull) \
	op(ESteamInputActionOrigin::LeftTrigger_Click) \
	op(ESteamInputActionOrigin::RightTrigger_Pull) \
	op(ESteamInputActionOrigin::RightTrigger_Click) \
	op(ESteamInputActionOrigin::LeftStick_Move) \
	op(ESteamInputActionOrigin::LeftStick_Click) \
	op(ESteamInputActionOrigin::LeftStick_DPadNorth) \
	op(ESteamInputActionOrigin::LeftStick_DPadSouth) \
	op(ESteamInputActionOrigin::LeftStick_DPadWest) \
	op(ESteamInputActionOrigin::LeftStick_DPadEast) \
	op(ESteamInputActionOrigin::Gyro_Move) \
	op(ESteamInputActionOrigin::Gyro_Pitch) \
	op(ESteamInputActionOrigin::Gyro_Yaw) \
	op(ESteamInputActionOrigin::Gyro_Roll) \
	op(ESteamInputActionOrigin::SteamController_Reserved0) \
	op(ESteamInputActionOrigin::SteamController_Reserved1) \
	op(ESteamInputActionOrigin::SteamController_Reserved2) \
	op(ESteamInputActionOrigin::SteamController_Reserved3) \
	op(ESteamInputActionOrigin::SteamController_Reserved4) \
	op(ESteamInputActionOrigin::SteamController_Reserved5) \
	op(ESteamInputActionOrigin::SteamController_Reserved6) \
	op(ESteamInputActionOrigin::SteamController_Reserved7) \
	op(ESteamInputActionOrigin::SteamController_Reserved8) \
	op(ESteamInputActionOrigin::SteamController_Reserved9) \
	op(ESteamInputActionOrigin::SteamController_Reserved10) \
	op(ESteamInputActionOrigin::PS4_X) \
	op(ESteamInputActionOrigin::PS4_Circle) \
	op(ESteamInputActionOrigin::PS4_Triangle) \
	op(ESteamInputActionOrigin::PS4_Square) \
	op(ESteamInputActionOrigin::PS4_LeftBumper) \
	op(ESteamInputActionOrigin::PS4_RightBumper) \
	op(ESteamInputActionOrigin::PS4_Options) \
	op(ESteamInputActionOrigin::PS4_Share) \
	op(ESteamInputActionOrigin::PS4_LeftPad_Touch) \
	op(ESteamInputActionOrigin::PS4_LeftPad_Swipe) \
	op(ESteamInputActionOrigin::PS4_LeftPad_Click) \
	op(ESteamInputActionOrigin::PS4_LeftPad_DPadNorth) \
	op(ESteamInputActionOrigin::PS4_LeftPad_DPadSouth) \
	op(ESteamInputActionOrigin::PS4_LeftPad_DPadWest) \
	op(ESteamInputActionOrigin::PS4_LeftPad_DPadEast) \
	op(ESteamInputActionOrigin::PS4_RightPad_Touch) \
	op(ESteamInputActionOrigin::PS4_RightPad_Swipe) \
	op(ESteamInputActionOrigin::PS4_RightPad_Click) \
	op(ESteamInputActionOrigin::PS4_RightPad_DPadNorth) \
	op(ESteamInputActionOrigin::PS4_RightPad_DPadSouth) \
	op(ESteamInputActionOrigin::PS4_RightPad_DPadWest) \
	op(ESteamInputActionOrigin::PS4_RightPad_DPadEast) \
	op(ESteamInputActionOrigin::PS4_CenterPad_Touch) \
	op(ESteamInputActionOrigin::PS4_CenterPad_Swipe) \
	op(ESteamInputActionOrigin::PS4_CenterPad_Click) \
	op(ESteamInputActionOrigin::PS4_CenterPad_DPadNorth) \
	op(ESteamInputActionOrigin::PS4_CenterPad_DPadSouth) \
	op(ESteamInputActionOrigin::PS4_CenterPad_DPadWest) \
	op(ESteamInputActionOrigin::PS4_CenterPad_DPadEast) \
	op(ESteamInputActionOrigin::PS4_LeftTrigger_Pull) \
	op(ESteamInputActionOrigin::PS4_LeftTrigger_Click) \
	op(ESteamInputActionOrigin::PS4_RightTrigger_Pull) \
	op(ESteamInputActionOrigin::PS4_RightTrigger_Click) \
	op(ESteamInputActionOrigin::PS4_LeftStick_Move) \
	op(ESteamInputActionOrigin::PS4_LeftStick_Click) \
	op(ESteamInputActionOrigin::PS4_LeftStick_DPadNorth) \
	op(ESteamInputActionOrigin::PS4_LeftStick_DPadSouth) \
	op(ESteamInputActionOrigin::PS4_LeftStick_DPadWest) \
	op(ESteamInputActionOrigin::PS4_LeftStick_DPadEast) \
	op(ESteamInputActionOrigin::PS4_RightStick_Move) \
	op(ESteamInputActionOrigin::PS4_RightStick_Click) \
	op(ESteamInputActionOrigin::PS4_RightStick_DPadNorth) \
	op(ESteamInputActionOrigin::PS4_RightStick_DPadSouth) \
	op(ESteamInputActionOrigin::PS4_RightStick_DPadWest) \
	op(ESteamInputActionOrigin::PS4_RightStick_DPadEast) \
	op(ESteamInputActionOrigin::PS4_DPad_North) \
	op(ESteamInputActionOrigin::PS4_DPad_South) \
	op(ESteamInputActionOrigin::PS4_DPad_West) \
	op(ESteamInputActionOrigin::PS4_DPad_East) \
	op(ESteamInputActionOrigin::PS4_Gyro_Move) \
	op(ESteamInputActionOrigin::PS4_Gyro_Pitch) \
	op(ESteamInputActionOrigin::PS4_Gyro_Yaw) \
	op(ESteamInputActionOrigin::PS4_Gyro_Roll) \
	op(ESteamInputActionOrigin::PS4_Reserved0) \
	op(ESteamInputActionOrigin::PS4_Reserved1) \
	op(ESteamInputActionOrigin::PS4_Reserved2) \
	op(ESteamInputActionOrigin::PS4_Reserved3) \
	op(ESteamInputActionOrigin::PS4_Reserved4) \
	op(ESteamInputActionOrigin::PS4_Reserved5) \
	op(ESteamInputActionOrigin::PS4_Reserved6) \
	op(ESteamInputActionOrigin::PS4_Reserved7) \
	op(ESteamInputActionOrigin::PS4_Reserved8) \
	op(ESteamInputActionOrigin::PS4_Reserved9) \
	op(ESteamInputActionOrigin::PS4_Reserved10) \
	op(ESteamInputActionOrigin::XBoxOne_A) \
	op(ESteamInputActionOrigin::XBoxOne_B) \
	op(ESteamInputActionOrigin::XBoxOne_X) \
	op(ESteamInputActionOrigin::XBoxOne_Y) \
	op(ESteamInputActionOrigin::XBoxOne_LeftBumper) \
	op(ESteamInputActionOrigin::XBoxOne_RightBumper) \
	op(ESteamInputActionOrigin::XBoxOne_Menu) \
	op(ESteamInputActionOrigin::XBoxOne_View) \
	op(ESteamInputActionOrigin::XBoxOne_LeftTrigger_Pull) \
	op(ESteamInputActionOrigin::XBoxOne_LeftTrigger_Click) \
	op(ESteamInputActionOrigin::XBoxOne_RightTrigger_Pull) \
	op(ESteamInputActionOrigin::XBoxOne_RightTrigger_Click) \
	op(ESteamInputActionOrigin::XBoxOne_LeftStick_Move) \
	op(ESteamInputActionOrigin::XBoxOne_LeftStick_Click) \
	op(ESteamInputActionOrigin::XBoxOne_LeftStick_DPadNorth) \
	op(ESteamInputActionOrigin::XBoxOne_LeftStick_DPadSouth) \
	op(ESteamInputActionOrigin::XBoxOne_LeftStick_DPadWest) \
	op(ESteamInputActionOrigin::XBoxOne_LeftStick_DPadEast) \
	op(ESteamInputActionOrigin::XBoxOne_RightStick_Move) \
	op(ESteamInputActionOrigin::XBoxOne_RightStick_Click) \
	op(ESteamInputActionOrigin::XBoxOne_RightStick_DPadNorth) \
	op(ESteamInputActionOrigin::XBoxOne_RightStick_DPadSouth) \
	op(ESteamInputActionOrigin::XBoxOne_RightStick_DPadWest) \
	op(ESteamInputActionOrigin::XBoxOne_RightStick_DPadEast) \
	op(ESteamInputActionOrigin::XBoxOne_DPad_North) \
	op(ESteamInputActionOrigin::XBoxOne_DPad_South) \
	op(ESteamInputActionOrigin::XBoxOne_DPad_West) \
	op(ESteamInputActionOrigin::XBoxOne_DPad_East) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved0) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved1) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved2) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved3) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved4) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved5) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved6) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved7) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved8) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved9) \
	op(ESteamInputActionOrigin::XBoxOne_Reserved10) \
	op(ESteamInputActionOrigin::XBox360_A) \
	op(ESteamInputActionOrigin::XBox360_B) \
	op(ESteamInputActionOrigin::XBox360_X) \
	op(ESteamInputActionOrigin::XBox360_Y) \
	op(ESteamInputActionOrigin::XBox360_LeftBumper) \
	op(ESteamInputActionOrigin::XBox360_RightBumper) \
	op(ESteamInputActionOrigin::XBox360_Start) \
	op(ESteamInputActionOrigin::XBox360_Back) \
	op(ESteamInputActionOrigin::XBox360_LeftTrigger_Pull) \
	op(ESteamInputActionOrigin::XBox360_LeftTrigger_Click) \
	op(ESteamInputActionOrigin::XBox360_RightTrigger_Pull) \
	op(ESteamInputActionOrigin::XBox360_RightTrigger_Click) \
	op(ESteamInputActionOrigin::XBox360_LeftStick_Move) \
	op(ESteamInputActionOrigin::XBox360_LeftStick_Click) \
	op(ESteamInputActionOrigin::XBox360_LeftStick_DPadNorth) \
	op(ESteamInputActionOrigin::XBox360_LeftStick_DPadSouth) \
	op(ESteamInputActionOrigin::XBox360_LeftStick_DPadWest) \
	op(ESteamInputActionOrigin::XBox360_LeftStick_DPadEast) \
	op(ESteamInputActionOrigin::XBox360_RightStick_Move) \
	op(ESteamInputActionOrigin::XBox360_RightStick_Click) \
	op(ESteamInputActionOrigin::XBox360_RightStick_DPadNorth) \
	op(ESteamInputActionOrigin::XBox360_RightStick_DPadSouth) \
	op(ESteamInputActionOrigin::XBox360_RightStick_DPadWest) \
	op(ESteamInputActionOrigin::XBox360_RightStick_DPadEast) \
	op(ESteamInputActionOrigin::XBox360_DPad_North) \
	op(ESteamInputActionOrigin::XBox360_DPad_South) \
	op(ESteamInputActionOrigin::XBox360_DPad_West) \
	op(ESteamInputActionOrigin::XBox360_DPad_East) \
	op(ESteamInputActionOrigin::XBox360_Reserved0) \
	op(ESteamInputActionOrigin::XBox360_Reserved1) \
	op(ESteamInputActionOrigin::XBox360_Reserved2) \
	op(ESteamInputActionOrigin::XBox360_Reserved3) \
	op(ESteamInputActionOrigin::XBox360_Reserved4) \
	op(ESteamInputActionOrigin::XBox360_Reserved5) \
	op(ESteamInputActionOrigin::XBox360_Reserved6) \
	op(ESteamInputActionOrigin::XBox360_Reserved7) \
	op(ESteamInputActionOrigin::XBox360_Reserved8) \
	op(ESteamInputActionOrigin::XBox360_Reserved9) \
	op(ESteamInputActionOrigin::XBox360_Reserved10) \
	op(ESteamInputActionOrigin::Switch_A) \
	op(ESteamInputActionOrigin::Switch_B) \
	op(ESteamInputActionOrigin::Switch_X) \
	op(ESteamInputActionOrigin::Switch_Y) \
	op(ESteamInputActionOrigin::Switch_LeftBumper) \
	op(ESteamInputActionOrigin::Switch_RightBumper) \
	op(ESteamInputActionOrigin::Switch_Plus) \
	op(ESteamInputActionOrigin::Switch_Minus) \
	op(ESteamInputActionOrigin::Switch_Capture) \
	op(ESteamInputActionOrigin::Switch_LeftTrigger_Pull) \
	op(ESteamInputActionOrigin::Switch_LeftTrigger_Click) \
	op(ESteamInputActionOrigin::Switch_RightTrigger_Pull) \
	op(ESteamInputActionOrigin::Switch_RightTrigger_Click) \
	op(ESteamInputActionOrigin::Switch_LeftStick_Move) \
	op(ESteamInputActionOrigin::Switch_LeftStick_Click) \
	op(ESteamInputActionOrigin::Switch_LeftStick_DPadNorth) \
	op(ESteamInputActionOrigin::Switch_LeftStick_DPadSouth) \
	op(ESteamInputActionOrigin::Switch_LeftStick_DPadWest) \
	op(ESteamInputActionOrigin::Switch_LeftStick_DPadEast) \
	op(ESteamInputActionOrigin::Switch_RightStick_Move) \
	op(ESteamInputActionOrigin::Switch_RightStick_Click) \
	op(ESteamInputActionOrigin::Switch_RightStick_DPadNorth) \
	op(ESteamInputActionOrigin::Switch_RightStick_DPadSouth) \
	op(ESteamInputActionOrigin::Switch_RightStick_DPadWest) \
	op(ESteamInputActionOrigin::Switch_RightStick_DPadEast) \
	op(ESteamInputActionOrigin::Switch_DPad_North) \
	op(ESteamInputActionOrigin::Switch_DPad_South) \
	op(ESteamInputActionOrigin::Switch_DPad_West) \
	op(ESteamInputActionOrigin::Switch_DPad_East) \
	op(ESteamInputActionOrigin::SwitchProGyro_Move) \
	op(ESteamInputActionOrigin::SwitchProGyro_Pitch) \
	op(ESteamInputActionOrigin::SwitchProGyro_Yaw) \
	op(ESteamInputActionOrigin::SwitchProGyro_Roll) \
	op(ESteamInputActionOrigin::Switch_Reserved0) \
	op(ESteamInputActionOrigin::Switch_Reserved1) \
	op(ESteamInputActionOrigin::Switch_Reserved2) \
	op(ESteamInputActionOrigin::Switch_Reserved3) \
	op(ESteamInputActionOrigin::Switch_Reserved4) \
	op(ESteamInputActionOrigin::Switch_Reserved5) \
	op(ESteamInputActionOrigin::Switch_Reserved6) \
	op(ESteamInputActionOrigin::Switch_Reserved7) \
	op(ESteamInputActionOrigin::Switch_Reserved8) \
	op(ESteamInputActionOrigin::Switch_Reserved9) \
	op(ESteamInputActionOrigin::Switch_Reserved10) \
	op(ESteamInputActionOrigin::Count) 

enum class ESteamInputActionOrigin : uint8;
template<> struct TIsUEnumClass<ESteamInputActionOrigin> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamInputActionOrigin>();

#define FOREACH_ENUM_ESTEAMINPUTTYPE_(op) \
	op(ESteamInputType_::Unknown) \
	op(ESteamInputType_::SteamController) \
	op(ESteamInputType_::XBox360Controller) \
	op(ESteamInputType_::XBoxOneController) \
	op(ESteamInputType_::GenericXInput) \
	op(ESteamInputType_::PS4Controller) \
	op(ESteamInputType_::AppleMFiController) \
	op(ESteamInputType_::AndroidController) \
	op(ESteamInputType_::SwitchJoyConPair) \
	op(ESteamInputType_::SwitchJoyConSingle) \
	op(ESteamInputType_::SwitchProController) \
	op(ESteamInputType_::MobileTouch) \
	op(ESteamInputType_::PS3Controller) \
	op(ESteamInputType_::Count) 

enum class ESteamInputType_ : uint8;
template<> struct TIsUEnumClass<ESteamInputType_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamInputType_>();

#define FOREACH_ENUM_ESTEAMCONTROLLERLEDFLAG_(op) \
	op(ESteamControllerLEDFlag_::SetColor) \
	op(ESteamControllerLEDFlag_::RestoreUserDefault) 

enum class ESteamControllerLEDFlag_ : uint8;
template<> struct TIsUEnumClass<ESteamControllerLEDFlag_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamControllerLEDFlag_>();

#define FOREACH_ENUM_ESTEAMCONTROLLERPAD_(op) \
	op(ESteamControllerPad_::Left) \
	op(ESteamControllerPad_::Right) 

enum class ESteamControllerPad_ : uint8;
template<> struct TIsUEnumClass<ESteamControllerPad_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamControllerPad_>();

#define FOREACH_ENUM_ESTEAMXBOXORIGIN(op) \
	op(ESteamXboxOrigin::A) \
	op(ESteamXboxOrigin::B) \
	op(ESteamXboxOrigin::X) \
	op(ESteamXboxOrigin::Y) \
	op(ESteamXboxOrigin::LeftBumper) \
	op(ESteamXboxOrigin::RightBumper) \
	op(ESteamXboxOrigin::Menu) \
	op(ESteamXboxOrigin::View) \
	op(ESteamXboxOrigin::LeftTrigger_Pull) \
	op(ESteamXboxOrigin::LeftTrigger_Click) \
	op(ESteamXboxOrigin::RightTrigger_Pull) \
	op(ESteamXboxOrigin::RightTrigger_Click) \
	op(ESteamXboxOrigin::LeftStick_Move) \
	op(ESteamXboxOrigin::LeftStick_Click) \
	op(ESteamXboxOrigin::LeftStick_DPadNorth) \
	op(ESteamXboxOrigin::LeftStick_DPadSouth) \
	op(ESteamXboxOrigin::LeftStick_DPadWest) \
	op(ESteamXboxOrigin::LeftStick_DPadEast) \
	op(ESteamXboxOrigin::RightStick_Move) \
	op(ESteamXboxOrigin::RightStick_Click) \
	op(ESteamXboxOrigin::RightStick_DPadNorth) \
	op(ESteamXboxOrigin::RightStick_DPadSouth) \
	op(ESteamXboxOrigin::RightStick_DPadWest) \
	op(ESteamXboxOrigin::RightStick_DPadEast) \
	op(ESteamXboxOrigin::DPad_North) \
	op(ESteamXboxOrigin::DPad_South) \
	op(ESteamXboxOrigin::DPad_West) \
	op(ESteamXboxOrigin::DPad_East) \
	op(ESteamXboxOrigin::Count) 

enum class ESteamXboxOrigin : uint8;
template<> struct TIsUEnumClass<ESteamXboxOrigin> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamXboxOrigin>();

#define FOREACH_ENUM_ESTEAMITEMFLAGS_(op) \
	op(ESteamItemFlags_::NoTrade) \
	op(ESteamItemFlags_::ItemRemoved) \
	op(ESteamItemFlags_::ItemConsumed) 

enum class ESteamItemFlags_ : uint8;
template<> struct TIsUEnumClass<ESteamItemFlags_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamItemFlags_>();

#define FOREACH_ENUM_ESTEAMFAVORITEFLAGS(op) \
	op(ESteamFavoriteFlags::None) \
	op(ESteamFavoriteFlags::Favorite) \
	op(ESteamFavoriteFlags::History) 

enum class ESteamFavoriteFlags : uint8;
template<> struct TIsUEnumClass<ESteamFavoriteFlags> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamFavoriteFlags>();

#define FOREACH_ENUM_ESTEAMLOBBYDISTANCEFILTER(op) \
	op(ESteamLobbyDistanceFilter::Close) \
	op(ESteamLobbyDistanceFilter::Default) \
	op(ESteamLobbyDistanceFilter::Far) \
	op(ESteamLobbyDistanceFilter::Worldwide) 

enum class ESteamLobbyDistanceFilter : uint8;
template<> struct TIsUEnumClass<ESteamLobbyDistanceFilter> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>();

#define FOREACH_ENUM_ESTEAMLOBBYCOMPARISON(op) \
	op(ESteamLobbyComparison::EqualToOrLessThan) \
	op(ESteamLobbyComparison::LessThan) \
	op(ESteamLobbyComparison::Equal) \
	op(ESteamLobbyComparison::GreaterThan) \
	op(ESteamLobbyComparison::EqualToOrGreaterThan) \
	op(ESteamLobbyComparison::NotEqual) 

enum class ESteamLobbyComparison : uint8;
template<> struct TIsUEnumClass<ESteamLobbyComparison> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLobbyComparison>();

#define FOREACH_ENUM_ESTEAMLOBBYTYPE(op) \
	op(ESteamLobbyType::Private) \
	op(ESteamLobbyType::FriendsOnly) \
	op(ESteamLobbyType::Public) \
	op(ESteamLobbyType::Invisible) 

enum class ESteamLobbyType : uint8;
template<> struct TIsUEnumClass<ESteamLobbyType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLobbyType>();

#define FOREACH_ENUM_ESTEAMCHATMEMBERSTATECHANGE(op) \
	op(ESteamChatMemberStateChange::Entered) \
	op(ESteamChatMemberStateChange::Left) \
	op(ESteamChatMemberStateChange::Disconnected) \
	op(ESteamChatMemberStateChange::Kicked) \
	op(ESteamChatMemberStateChange::Banned) 

enum class ESteamChatMemberStateChange : uint8;
template<> struct TIsUEnumClass<ESteamChatMemberStateChange> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamChatMemberStateChange>();

#define FOREACH_ENUM_ESTEAMAUDIOPLAYBACKSTATUS(op) \
	op(ESteamAudioPlaybackStatus::Undefined) \
	op(ESteamAudioPlaybackStatus::Playing) \
	op(ESteamAudioPlaybackStatus::Paused) \
	op(ESteamAudioPlaybackStatus::Idle) 

enum class ESteamAudioPlaybackStatus : uint8;
template<> struct TIsUEnumClass<ESteamAudioPlaybackStatus> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();

#define FOREACH_ENUM_ESTEAMPARTYBEACONLOCATION(op) \
	op(ESteamPartyBeaconLocation::Invalid) \
	op(ESteamPartyBeaconLocation::ChatGroup) \
	op(ESteamPartyBeaconLocation::Max) 

enum class ESteamPartyBeaconLocation : uint8;
template<> struct TIsUEnumClass<ESteamPartyBeaconLocation> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamPartyBeaconLocation>();

#define FOREACH_ENUM_ESTEAMPARTYBEACONLOCATIONDATA_(op) \
	op(ESteamPartyBeaconLocationData_::Invalid) \
	op(ESteamPartyBeaconLocationData_::Name) \
	op(ESteamPartyBeaconLocationData_::IconURLSmall) \
	op(ESteamPartyBeaconLocationData_::IconURLMedium) \
	op(ESteamPartyBeaconLocationData_::IconURLLarge) 

enum class ESteamPartyBeaconLocationData_ : uint8;
template<> struct TIsUEnumClass<ESteamPartyBeaconLocationData_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamPartyBeaconLocationData_>();

#define FOREACH_ENUM_ESTEAMDEVICEFORMFACTOR_(op) \
	op(ESteamDeviceFormFactor_::Unknown) \
	op(ESteamDeviceFormFactor_::Phone) \
	op(ESteamDeviceFormFactor_::Tablet) \
	op(ESteamDeviceFormFactor_::Computer) \
	op(ESteamDeviceFormFactor_::TV) 

enum class ESteamDeviceFormFactor_ : uint8;
template<> struct TIsUEnumClass<ESteamDeviceFormFactor_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamDeviceFormFactor_>();

#define FOREACH_ENUM_ESTEAMAPICALLFAILURE_(op) \
	op(ESteamAPICallFailure_::None) \
	op(ESteamAPICallFailure_::SteamGone) \
	op(ESteamAPICallFailure_::NetworkFailure) \
	op(ESteamAPICallFailure_::InvalidHandle) \
	op(ESteamAPICallFailure_::MismatchedCallback) 

enum class ESteamAPICallFailure_ : uint8;
template<> struct TIsUEnumClass<ESteamAPICallFailure_> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamAPICallFailure_>();

#define FOREACH_ENUM_ESTEAMUNIVERSE(op) \
	op(ESteamUniverse::Invalid) \
	op(ESteamUniverse::Public) \
	op(ESteamUniverse::Beta) \
	op(ESteamUniverse::Internal) \
	op(ESteamUniverse::Dev) \
	op(ESteamUniverse::Max) 

enum class ESteamUniverse : uint8;
template<> struct TIsUEnumClass<ESteamUniverse> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUniverse>();

#define FOREACH_ENUM_ESTEAMTEXTFILTERINGCONTEXT(op) \
	op(ESteamTextFilteringContext::Unknown) \
	op(ESteamTextFilteringContext::GameContent) \
	op(ESteamTextFilteringContext::Chat) \
	op(ESteamTextFilteringContext::Name) 

enum class ESteamTextFilteringContext : uint8;
template<> struct TIsUEnumClass<ESteamTextFilteringContext> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamTextFilteringContext>();

#define FOREACH_ENUM_ESTEAMNOTIFICATIONPOSITION(op) \
	op(ESteamNotificationPosition::TopLeft) \
	op(ESteamNotificationPosition::TopRight) \
	op(ESteamNotificationPosition::BottomLeft) \
	op(ESteamNotificationPosition::BottomRight) 

enum class ESteamNotificationPosition : uint8;
template<> struct TIsUEnumClass<ESteamNotificationPosition> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamNotificationPosition>();

#define FOREACH_ENUM_ESTEAMGAMEPADTEXTINPUTMODE(op) \
	op(ESteamGamepadTextInputMode::Normal) \
	op(ESteamGamepadTextInputMode::Password) 

enum class ESteamGamepadTextInputMode : uint8;
template<> struct TIsUEnumClass<ESteamGamepadTextInputMode> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamGamepadTextInputMode>();

#define FOREACH_ENUM_ESTEAMGAMEPADTEXTINPUTLINEMODE(op) \
	op(ESteamGamepadTextInputLineMode::SingleLine) \
	op(ESteamGamepadTextInputLineMode::MultipleLines) 

enum class ESteamGamepadTextInputLineMode : uint8;
template<> struct TIsUEnumClass<ESteamGamepadTextInputLineMode> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>();

#define FOREACH_ENUM_ESTEAMLEADERBOARDDATAREQUEST(op) \
	op(ESteamLeaderboardDataRequest::Global) \
	op(ESteamLeaderboardDataRequest::GlobalAroundUser) \
	op(ESteamLeaderboardDataRequest::Friends) \
	op(ESteamLeaderboardDataRequest::Users) 

enum class ESteamLeaderboardDataRequest : uint8;
template<> struct TIsUEnumClass<ESteamLeaderboardDataRequest> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLeaderboardDataRequest>();

#define FOREACH_ENUM_ESTEAMLEADERBOARDSORTMETHOD(op) \
	op(ESteamLeaderboardSortMethod::None) \
	op(ESteamLeaderboardSortMethod::Ascending) \
	op(ESteamLeaderboardSortMethod::Descending) 

enum class ESteamLeaderboardSortMethod : uint8;
template<> struct TIsUEnumClass<ESteamLeaderboardSortMethod> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLeaderboardSortMethod>();

#define FOREACH_ENUM_ESTEAMLEADERBOARDDISPLAYTYPE(op) \
	op(ESteamLeaderboardDisplayType::None) \
	op(ESteamLeaderboardDisplayType::Numeric) \
	op(ESteamLeaderboardDisplayType::TimeSeconds) \
	op(ESteamLeaderboardDisplayType::TimeMilliSeconds) 

enum class ESteamLeaderboardDisplayType : uint8;
template<> struct TIsUEnumClass<ESteamLeaderboardDisplayType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>();

#define FOREACH_ENUM_ESTEAMLEADERBOARDUPLOADSCOREMETHOD(op) \
	op(ESteamLeaderboardUploadScoreMethod::None) \
	op(ESteamLeaderboardUploadScoreMethod::KeepBest) \
	op(ESteamLeaderboardUploadScoreMethod::ForceUpdate) 

enum class ESteamLeaderboardUploadScoreMethod : uint8;
template<> struct TIsUEnumClass<ESteamLeaderboardUploadScoreMethod> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>();

#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPLATFORM(op) \
	op(ESteamRemoteStoragePlatform::Windows) \
	op(ESteamRemoteStoragePlatform::OSX) \
	op(ESteamRemoteStoragePlatform::PS3) \
	op(ESteamRemoteStoragePlatform::Linux) \
	op(ESteamRemoteStoragePlatform::Reserved) \
	op(ESteamRemoteStoragePlatform::All) 

enum class ESteamRemoteStoragePlatform : uint8;
template<> struct TIsUEnumClass<ESteamRemoteStoragePlatform> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>();

#define FOREACH_ENUM_ESTEAMVRSCREENSHOTTYPE(op) \
	op(ESteamVRScreenshotType::None) \
	op(ESteamVRScreenshotType::Mono) \
	op(ESteamVRScreenshotType::Stereo) \
	op(ESteamVRScreenshotType::MonoCubemap) \
	op(ESteamVRScreenshotType::MonoPanorama) \
	op(ESteamVRScreenshotType::StereoPanorama) 

enum class ESteamVRScreenshotType : uint8;
template<> struct TIsUEnumClass<ESteamVRScreenshotType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamVRScreenshotType>();

#define FOREACH_ENUM_ESTEAMITEMPREVIEWTYPE(op) \
	op(ESteamItemPreviewType::Image) \
	op(ESteamItemPreviewType::YouTubeVideo) \
	op(ESteamItemPreviewType::Sketchfab) \
	op(ESteamItemPreviewType::EnvironmentMap_HorizontalCross) \
	op(ESteamItemPreviewType::EnvironmentMap_LatLong) \
	op(ESteamItemPreviewType::ReservedMax) 

enum class ESteamItemPreviewType : uint8;
template<> struct TIsUEnumClass<ESteamItemPreviewType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamItemPreviewType>();

#define FOREACH_ENUM_ESTEAMWORKSHOPFILETYPE(op) \
	op(ESteamWorkshopFileType::First) \
	op(ESteamWorkshopFileType::Community) \
	op(ESteamWorkshopFileType::Microtransaction) \
	op(ESteamWorkshopFileType::Collection) \
	op(ESteamWorkshopFileType::Art) \
	op(ESteamWorkshopFileType::Video) \
	op(ESteamWorkshopFileType::Screenshot) \
	op(ESteamWorkshopFileType::Game) \
	op(ESteamWorkshopFileType::Software) \
	op(ESteamWorkshopFileType::Concept) \
	op(ESteamWorkshopFileType::WebGuide) \
	op(ESteamWorkshopFileType::IntegratedGuide) \
	op(ESteamWorkshopFileType::Merch) \
	op(ESteamWorkshopFileType::ControllerBinding) \
	op(ESteamWorkshopFileType::SteamworksAccessInvite) \
	op(ESteamWorkshopFileType::SteamVideo) \
	op(ESteamWorkshopFileType::GameManagedItem) \
	op(ESteamWorkshopFileType::Max) 

enum class ESteamWorkshopFileType : uint8;
template<> struct TIsUEnumClass<ESteamWorkshopFileType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamWorkshopFileType>();

#define FOREACH_ENUM_ESTEAMUGCQUERY(op) \
	op(ESteamUGCQuery::RankedByVote) \
	op(ESteamUGCQuery::RankedByPublicationDate) \
	op(ESteamUGCQuery::AcceptedForGameRankedByAcceptanceDate) \
	op(ESteamUGCQuery::RankedByTrend) \
	op(ESteamUGCQuery::FavoritedByFriendsRankedByPublicationDate) \
	op(ESteamUGCQuery::CreatedByFriendsRankedByPublicationDate) \
	op(ESteamUGCQuery::RankedByNumTimesReported) \
	op(ESteamUGCQuery::CreatedByFollowedUsersRankedByPublicationDate) \
	op(ESteamUGCQuery::NotYetRated) \
	op(ESteamUGCQuery::RankedByTotalVotesAsc) \
	op(ESteamUGCQuery::RankedByVotesUp) \
	op(ESteamUGCQuery::RankedByTextSearch) \
	op(ESteamUGCQuery::RankedByTotalUniqueSubscriptions) \
	op(ESteamUGCQuery::RankedByPlaytimeTrend) \
	op(ESteamUGCQuery::RankedByTotalPlaytime) \
	op(ESteamUGCQuery::RankedByAveragePlaytimeTrend) \
	op(ESteamUGCQuery::RankedByLifetimeAveragePlaytime) \
	op(ESteamUGCQuery::RankedByPlaytimeSessionsTrend) \
	op(ESteamUGCQuery::RankedByLifetimePlaytimeSessions) 

enum class ESteamUGCQuery : uint8;
template<> struct TIsUEnumClass<ESteamUGCQuery> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUGCQuery>();

#define FOREACH_ENUM_ESTEAMUGCMATCHINGUGCTYPE(op) \
	op(ESteamUGCMatchingUGCType::Items) \
	op(ESteamUGCMatchingUGCType::Items_Mtx) \
	op(ESteamUGCMatchingUGCType::Items_ReadyToUse) \
	op(ESteamUGCMatchingUGCType::Collections) \
	op(ESteamUGCMatchingUGCType::Artwork) \
	op(ESteamUGCMatchingUGCType::Videos) \
	op(ESteamUGCMatchingUGCType::Screenshots) \
	op(ESteamUGCMatchingUGCType::AllGuides) \
	op(ESteamUGCMatchingUGCType::WebGuides) \
	op(ESteamUGCMatchingUGCType::IntegratedGuides) \
	op(ESteamUGCMatchingUGCType::UsableInGame) \
	op(ESteamUGCMatchingUGCType::ControllerBindings) \
	op(ESteamUGCMatchingUGCType::GameManagedItems) \
	op(ESteamUGCMatchingUGCType::All) 

enum class ESteamUGCMatchingUGCType : uint8;
template<> struct TIsUEnumClass<ESteamUGCMatchingUGCType> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUGCMatchingUGCType>();

#define FOREACH_ENUM_ESTEAMUSERUGCLIST(op) \
	op(ESteamUserUGCList::Published) \
	op(ESteamUserUGCList::VotedOn) \
	op(ESteamUserUGCList::VotedUp) \
	op(ESteamUserUGCList::VotedDown) \
	op(ESteamUserUGCList::WillVoteLater) \
	op(ESteamUserUGCList::Favorited) \
	op(ESteamUserUGCList::Subscribed) \
	op(ESteamUserUGCList::UsedOrPlayed) \
	op(ESteamUserUGCList::Followed) 

enum class ESteamUserUGCList : uint8;
template<> struct TIsUEnumClass<ESteamUserUGCList> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUserUGCList>();

#define FOREACH_ENUM_ESTEAMUSERUGCLISTSORTORDER(op) \
	op(ESteamUserUGCListSortOrder::CreationOrderDesc) \
	op(ESteamUserUGCListSortOrder::CreationOrderAsc) \
	op(ESteamUserUGCListSortOrder::TitleAsc) \
	op(ESteamUserUGCListSortOrder::LastUpdatedDesc) \
	op(ESteamUserUGCListSortOrder::SubscriptionDateDesc) \
	op(ESteamUserUGCListSortOrder::VoteScoreDesc) \
	op(ESteamUserUGCListSortOrder::ForModeration) 

enum class ESteamUserUGCListSortOrder : uint8;
template<> struct TIsUEnumClass<ESteamUserUGCListSortOrder> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamUserUGCListSortOrder>();

#define FOREACH_ENUM_ESTEAMITEMUPDATESTATUS(op) \
	op(ESteamItemUpdateStatus::Invalid) \
	op(ESteamItemUpdateStatus::PreparingConfig) \
	op(ESteamItemUpdateStatus::PreparingContent) \
	op(ESteamItemUpdateStatus::UploadingContent) \
	op(ESteamItemUpdateStatus::UploadingPreviewFile) \
	op(ESteamItemUpdateStatus::CommittingChanges) 

enum class ESteamItemUpdateStatus : uint8;
template<> struct TIsUEnumClass<ESteamItemUpdateStatus> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamItemUpdateStatus>();

#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPUBLISHEDFILEVISIBILITY(op) \
	op(ESteamRemoteStoragePublishedFileVisibility::Public) \
	op(ESteamRemoteStoragePublishedFileVisibility::FriendsOnly) \
	op(ESteamRemoteStoragePublishedFileVisibility::Private) 

enum class ESteamRemoteStoragePublishedFileVisibility : uint8;
template<> struct TIsUEnumClass<ESteamRemoteStoragePublishedFileVisibility> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamRemoteStoragePublishedFileVisibility>();

#define FOREACH_ENUM_ESTEAMITEMSTATISTIC(op) \
	op(ESteamItemStatistic::NumSubscriptions) \
	op(ESteamItemStatistic::NumFavorites) \
	op(ESteamItemStatistic::NumFollowers) \
	op(ESteamItemStatistic::NumUniqueSubscriptions) \
	op(ESteamItemStatistic::NumUniqueFavorites) \
	op(ESteamItemStatistic::NumUniqueFollowers) \
	op(ESteamItemStatistic::NumUniqueWebsiteViews) \
	op(ESteamItemStatistic::ReportScore) \
	op(ESteamItemStatistic::NumSecondsPlayed) \
	op(ESteamItemStatistic::NumPlaytimeSessions) \
	op(ESteamItemStatistic::NumComments) \
	op(ESteamItemStatistic::NumSecondsPlayedDuringTimePeriod) \
	op(ESteamItemStatistic::NumPlaytimeSessionsDuringTimePeriod) 

enum class ESteamItemStatistic : uint8;
template<> struct TIsUEnumClass<ESteamItemStatistic> { enum { Value = true }; };
template<> STEAMAPI_BPL_PLUGIN_API UEnum* StaticEnum<ESteamItemStatistic>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
