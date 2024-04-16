#include "BombermanGameInstance.h"

bool UBombermanGameInstance::ServerTravel(const FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify)
{
    if (!GetWorld())
    {
        return false;
    }

    GetWorld()->ServerTravel(InURL, bAbsolute, bShouldSkipGameNotify);
    return true;
}