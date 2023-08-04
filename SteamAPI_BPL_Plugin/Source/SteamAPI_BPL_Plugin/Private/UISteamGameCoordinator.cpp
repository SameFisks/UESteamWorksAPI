#include "UISteamGameCoordinator.h"

UISteamGameCoordinator::UISteamGameCoordinator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


bool UISteamGameCoordinator::IsMessageAvailable(int32& OutMsgSize)
{
	ISteamGameCoordinator* SteamGameCoordinator = static_cast<ISteamGameCoordinator*>(SteamClient()->GetISteamGenericInterface(SteamAPI_GetHSteamUser(), SteamAPI_GetHSteamPipe(), STEAMGAMECOORDINATOR_INTERFACE_VERSION));

	if (SteamGameCoordinator)
	{

		uint32 MyConvertedVariable = static_cast<uint32>(OutMsgSize);
		return SteamGameCoordinator->IsMessageAvailable(&MyConvertedVariable);
	}

	return false;
}

//Broken
int32 UISteamGameCoordinator::RetrieveMessage(int32& OutMsgType, TArray<uint8>& OutMsgBuffer)
{
	/*ISteamGameCoordinator* SteamGameCoordinator = static_cast<ISteamGameCoordinator*>(SteamClient()->GetISteamGenericInterface(SteamAPI_GetHSteamUser(), SteamAPI_GetHSteamPipe(), STEAMGAMECOORDINATOR_INTERFACE_VERSION));

if (SteamGameCoordinator)
{

	uint32 MyConvertedVariable = static_cast<uint32>(OutMsgType);
	uint32 MsgSize = 0;
	FSteamEGCResults Result = SteamGameCoordinator->RetrieveMessage(&MyConvertedVariable, nullptr, 0, &MsgSize);

	if (Result == FSteamEGCResults::k_EGCResultOK && MsgSize > 0)
	{
		OutMsgBuffer.SetNum(MsgSize);

		Result = SteamGameCoordinator->RetrieveMessage(&MyConvertedVariable, OutMsgBuffer.GetData(), MsgSize, &MsgSize);

		if (Result == FSteamEGCResults::k_EGCResultOK)
		{
			OutMsgBuffer.SetNum(MsgSize);
			return MsgSize;
		}
	}
}*/

	return 0;
}

//Broken
bool UISteamGameCoordinator::SendMessage(int32 MsgType, const TArray<uint8>& MsgBuffer)
{
	/*ISteamGameCoordinator* SteamGameCoordinator = static_cast<ISteamGameCoordinator*>(SteamClient()->GetISteamGenericInterface(SteamAPI_GetHSteamUser(), SteamAPI_GetHSteamPipe(), STEAMGAMECOORDINATOR_INTERFACE_VERSION));

if (SteamGameCoordinator)
{
	FSteamEGCResults Result = SteamGameCoordinator->SendMessage(MsgType, MsgBuffer.GetData(), MsgBuffer.Num());

	return Result == FSteamEGCResults::k_EGCResultOK;
}*/

	return false;
}
