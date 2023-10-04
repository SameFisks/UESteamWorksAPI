#pragma once

#include "CoreMinimal.h"
#include "Steam.h"
#include "SteamEnums.h"

#include "SteamStructs.generated.h"

USTRUCT(BlueprintType)
struct FUint64
{
	GENERATED_BODY()

		uint64 Value;

	operator uint64() { return Value; }
	operator uint64() const { return Value; }

	FUint64() :
		Value(0) {}
	FUint64(uint64 value) :
		Value(value) {}
};

USTRUCT(BlueprintType)
struct FUint32
{
	GENERATED_BODY()

		uint32 Value;

	operator uint32() { return Value; }
	operator uint32() const { return Value; }

	FUint32() :
		Value(0) {}
	FUint32(uint32 value) :
		Value(value) {}
};

USTRUCT(BlueprintType)
struct FUint16
{
	GENERATED_BODY()

		uint16 Value;

	operator uint16() { return Value; }
	operator uint16() const { return Value; }

	FUint16() :
		Value(0) {}
	FUint16(uint16 value) :
		Value(value) {}
};


USTRUCT(BlueprintType)
struct FInt32
{
	GENERATED_BODY()

		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		int32 Value;

	operator int32() { return Value; }
	operator int32() const { return Value; }

	FInt32() :
		Value(0) {}
	FInt32(int32 InValue) :
		Value(InValue) {}
};

USTRUCT(BlueprintType)
struct FInt16
{
	GENERATED_BODY()

		int16 Value;

	operator int16() { return Value; }
	operator int16() const { return Value; }

	FInt16() :
		Value(0) {}
	FInt16(int16 InValue) :
		Value(InValue) {}
};

USTRUCT(BlueprintType)
struct FHServerListRequest
{
	GENERATED_BODY()

		void* Value;

	FHServerListRequest() :
		Value(nullptr) {}
	FHServerListRequest(void* InValue) :
		Value(InValue) {}
};

USTRUCT(BlueprintType)
struct FSteamID : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;

	operator CSteamID() const { return CSteamID(Value); }
	bool IsValid() const { return CSteamID(Value).IsValid(); }
};
USTRUCT(BlueprintType)
struct  FSteamAPICall : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FSteamItemInstanceID : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FSteamInventoryUpdateHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FHAuthTicket : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FHSteamUser : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FHSteamPipe : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FISteamAppList : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FAppID : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FAccountID : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FScreenshotHandle : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FSteamFriendsGroupID : public FInt16
{
	GENERATED_BODY()
		using FInt16::FInt16;
};
USTRUCT(BlueprintType)
struct  FSteamInventoryResult : public FInt32
{
	GENERATED_BODY()
		using FInt32::FInt32;
};
USTRUCT(BlueprintType)
struct  FSteamItemDef : public FInt32
{
	GENERATED_BODY()
		using FInt32::FInt32;
};
USTRUCT(BlueprintType)
struct  FHServerQuery : public FInt32
{
	GENERATED_BODY()
		using FInt32::FInt32;
};

USTRUCT(BlueprintType)
struct  FInputActionSetHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FInputAnalogActionHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FInputDigitalActionHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FInputHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FPartyBeaconID : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct  FUGCHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct  FPublishedFileId : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FPublishedFileUpdateHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FUGCFileWriteStreamHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FSteamLeaderboardEntries : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct  FSteamLeaderboard : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FUGCQueryHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct  FUGCUpdateHandle : public FUint64
{
	GENERATED_BODY()
		using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct  FHTTPCookieContainerHandle : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct  FHTTPRequestHandle : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};

USTRUCT(BlueprintType)
struct  FHHTMLBrowser : public FUint32
{
	GENERATED_BODY()
		using FUint32::FUint32;
};

USTRUCT(BlueprintType)
struct  FSteamInputAnalogActionData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		ESteamControllerSourceMode Mode;

	UPROPERTY(BlueprintReadWrite)
		float X;

	UPROPERTY(BlueprintReadWrite)
		float Y;

	UPROPERTY(BlueprintReadWrite)
		bool bActive;

		FSteamInputAnalogActionData()
			: Mode(ESteamControllerSourceMode::None), X(0.0f), Y(0.0f), bActive(false) {}
		FSteamInputAnalogActionData(ESteamControllerSourceMode InMode, float InX, float InY, bool InbActive)
			: Mode(InMode), X(InX), Y(InY), bActive(InbActive) {}
};

USTRUCT(BlueprintType)
struct  FSteamInputDigitalActionData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		bool bState;

	UPROPERTY(BlueprintReadWrite)
		bool bActive;

		FSteamInputDigitalActionData()
			: bState(false), bActive(false) {}
		FSteamInputDigitalActionData(bool InbState, bool InbActive)
			: bState(InbState), bActive(InbActive) {}
};

USTRUCT(BlueprintType)
struct  FSteamInputMotionData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FQuat RotQuat;

	UPROPERTY(BlueprintReadWrite)
		FVector PosAccel;

	UPROPERTY(BlueprintReadWrite)
		FVector RotVel;

		FSteamInputMotionData()
			: RotQuat(FQuat::Identity), PosAccel(FVector::ZeroVector), RotVel(FVector::ZeroVector) {}
		FSteamInputMotionData(const FQuat& InRotQuat, const FVector& InPosAccel, const FVector& InRotVel)
			: RotQuat(InRotQuat), PosAccel(InPosAccel), RotVel(InRotVel) {}
};

USTRUCT(BlueprintType)
struct  FSteamItemDetails
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FSteamItemInstanceID ItemID;

	UPROPERTY(BlueprintReadWrite)
		FSteamItemDef Definition;

	UPROPERTY(BlueprintReadWrite)
		int32 Quantity;

	UPROPERTY(BlueprintReadWrite)
		TArray<ESteamItemFlags_> Flags;

		FSteamItemDetails()
			: ItemID(0), Definition(0), Quantity(0), Flags({}) {}

		FSteamItemDetails(FSteamItemInstanceID InItemID, FSteamItemDef InDefinition, int32 InQuantity, const TArray<ESteamItemFlags_>& InFlags)
			: ItemID(InItemID), Definition(InDefinition), Quantity(InQuantity), Flags(InFlags) {}

		FSteamItemDetails(const SteamItemDetails_t& InDetails)
		{
			ItemID = InDetails.m_itemId;
			Definition = InDetails.m_iDefinition;
			Quantity = InDetails.m_unQuantity;
			Flags.Empty();

			if (InDetails.m_unFlags & (1 << (int32)ESteamItemFlags_::NoTrade))
			{
				Flags.Add(ESteamItemFlags_::NoTrade);
			}
			if (InDetails.m_unFlags & (1 << (int32)ESteamItemFlags_::ItemRemoved))
			{
				Flags.Add(ESteamItemFlags_::ItemRemoved);
			}
			if (InDetails.m_unFlags & (1 << (int32)ESteamItemFlags_::ItemConsumed))
			{
				Flags.Add(ESteamItemFlags_::ItemConsumed);
			}
		}
};

USTRUCT(BlueprintType)
struct  FSteamPartyBeaconLocation
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		ESteamPartyBeaconLocation Type;

	UPROPERTY(BlueprintReadWrite)
		int64 LocationID;

	operator SteamPartyBeaconLocation_t() const
	{
		SteamPartyBeaconLocation_t o;
		o.m_eType = (ESteamPartyBeaconLocationType)Type;
		o.m_ulLocationID = LocationID;
		return o;
	}

	FSteamPartyBeaconLocation()
		: Type(ESteamPartyBeaconLocation::Invalid), LocationID(0) {}

	FSteamPartyBeaconLocation(ESteamPartyBeaconLocation InType, int64 InLocationID)
		: Type(InType), LocationID(InLocationID) {}

	FSteamPartyBeaconLocation(const SteamPartyBeaconLocation_t& InType)
		: Type((ESteamPartyBeaconLocation)InType.m_eType), LocationID(InType.m_ulLocationID) {}
};

USTRUCT(BlueprintType)
struct  FSteamLeaderboardEntry
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FSteamID SteamIDUser;

	UPROPERTY(BlueprintReadWrite)
		int32 GlobalRank;

	UPROPERTY(BlueprintReadWrite)
		int32 Score;

	UPROPERTY(BlueprintReadWrite)
		int32 Details;

	UPROPERTY(BlueprintReadWrite)
		FUGCHandle UGC;

		FSteamLeaderboardEntry()
			: GlobalRank(0), Score(0), Details(0) {}

		FSteamLeaderboardEntry(FSteamID InSteamIDUser, int32 InGlobalRank, int32 InScore, int32 InDetails, FUGCHandle InUGC)
			: SteamIDUser(InSteamIDUser), GlobalRank(InGlobalRank), Score(InScore), Details(InDetails), UGC(InUGC) {}

		FSteamLeaderboardEntry(const LeaderboardEntry_t& InType)
			: SteamIDUser(InType.m_steamIDUser.ConvertToUint64()), GlobalRank(InType.m_nGlobalRank),
			Score(InType.m_nScore), Details(InType.m_cDetails), UGC(InType.m_hUGC) {}
};

USTRUCT(BlueprintType)
struct  FSteamUGCDetails
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FPublishedFileId PublishedFileId;

	UPROPERTY(BlueprintReadWrite)
		ESteamResult Result;  // The result of the operation.

	UPROPERTY(BlueprintReadWrite)
		ESteamWorkshopFileType FileType;  // Type of the file

	UPROPERTY(BlueprintReadWrite)
		int32 CreatorAppID;  // ID of the app that created this file.

	UPROPERTY(BlueprintReadWrite)
		int32 ConsumerAppID;  // ID of the app that will consume this file.

	UPROPERTY(BlueprintReadWrite)
		FString Title;  // title of document

	UPROPERTY(BlueprintReadWrite)
		FString Description;  // description of document

	UPROPERTY(BlueprintReadWrite)
		FSteamID SteamIDOwner;  // Steam ID of the user who created this content.

	UPROPERTY(BlueprintReadWrite)
		int32 TimeCreated;  // time when the published file was created

	UPROPERTY(BlueprintReadWrite)
		int32 TimeUpdated;  // time when the published file was last updated

	UPROPERTY(BlueprintReadWrite)
		int32 TimeAddedToUserList;  // time when the user added the published file to their list (not always applicable)

	UPROPERTY(BlueprintReadWrite)
		ESteamRemoteStoragePublishedFileVisibility Visibility;  // visibility

	UPROPERTY(BlueprintReadWrite)
		bool bBanned;  // whether the file was banned

	UPROPERTY(BlueprintReadWrite)
		bool bAcceptedForUse;  // developer has specifically flagged this item as accepted in the Workshop

	UPROPERTY(BlueprintReadWrite)
		bool bTagsTruncated;  // whether the list of tags was too long to be returned in the provided buffer

	UPROPERTY(BlueprintReadWrite)
		TArray<FString> Tags;  // comma separated list of all tags associated with this file

	UPROPERTY(BlueprintReadWrite)
		FUGCHandle File;  // The handle of the primary file

	UPROPERTY(BlueprintReadWrite)
		FUGCHandle PreviewFile;  // The handle of the preview file

	UPROPERTY(BlueprintReadWrite)
		FString FileName;  // The cloud filename of the primary file

	UPROPERTY(BlueprintReadWrite)
		int32 FileSize;  // Size of the primary file

	UPROPERTY(BlueprintReadWrite)
		int32 PreviewFileSize;  // Size of the preview file

	UPROPERTY(BlueprintReadWrite)
		FString URL;  // URL (for a video or a website)

	UPROPERTY(BlueprintReadWrite)
		int32 VotesUp;  // number of votes up

	UPROPERTY(BlueprintReadWrite)
		int32 VotesDown;  // number of votes down

	UPROPERTY(BlueprintReadWrite)
		float Score;  // calculated score

	UPROPERTY(BlueprintReadWrite)
		int32 NumChildren;


		FSteamUGCDetails()
			: Result(ESteamResult::None), FileType(ESteamWorkshopFileType::Max), CreatorAppID(0),
			ConsumerAppID(0), SteamIDOwner(0), TimeCreated(0), TimeUpdated(0), TimeAddedToUserList(0),
			Visibility(ESteamRemoteStoragePublishedFileVisibility::Public), bBanned(false), bAcceptedForUse(false),
			bTagsTruncated(false), File(0), PreviewFile(0), FileSize(0), PreviewFileSize(0),
			VotesUp(0), VotesDown(0), Score(0.0f), NumChildren(0) {}

		FSteamUGCDetails(const SteamUGCDetails_t& InData)
			: PublishedFileId(InData.m_nPublishedFileId), Result((ESteamResult)InData.m_eResult),
			FileType((ESteamWorkshopFileType)InData.m_eFileType), CreatorAppID(InData.m_nCreatorAppID),
			ConsumerAppID(InData.m_nConsumerAppID), Title(FString(UTF8_TO_TCHAR(InData.m_rgchTitle))),
			Description(FString(UTF8_TO_TCHAR(InData.m_rgchDescription))), SteamIDOwner(InData.m_ulSteamIDOwner),
			TimeCreated(InData.m_rtimeCreated), TimeUpdated(InData.m_rtimeUpdated),
			TimeAddedToUserList(InData.m_rtimeAddedToUserList),
			Visibility((ESteamRemoteStoragePublishedFileVisibility)InData.m_eVisibility),
			bBanned(InData.m_bBanned), bAcceptedForUse(InData.m_bAcceptedForUse), bTagsTruncated(InData.m_bTagsTruncated),
			File(InData.m_hFile), PreviewFile(InData.m_hPreviewFile), FileName(InData.m_pchFileName),
			FileSize(InData.m_nFileSize), PreviewFileSize(InData.m_nPreviewFileSize),
			URL(UTF8_TO_TCHAR(InData.m_rgchURL)), VotesUp(InData.m_unVotesUp), VotesDown(InData.m_unVotesDown),
			Score(InData.m_flScore), NumChildren(InData.m_unNumChildren)
		{
			FString(UTF8_TO_TCHAR(InData.m_rgchTags)).ParseIntoArray(Tags, TEXT(","), true);
		}
};

USTRUCT(BlueprintType)
struct  FSteamItemPriceData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FSteamItemDef ItemDef;

	UPROPERTY(BlueprintReadWrite)
		int64 CurrentPrice;

	UPROPERTY(BlueprintReadWrite)
		int64 BasePrice;

		FSteamItemPriceData()
			: ItemDef(0), CurrentPrice(0), BasePrice(0) {}

		FSteamItemPriceData(FSteamItemDef InItemDef, int64 InCurrentPrice, int64 InBasePrice)
			: ItemDef(InItemDef), CurrentPrice(InCurrentPrice), BasePrice(InBasePrice) {}
};