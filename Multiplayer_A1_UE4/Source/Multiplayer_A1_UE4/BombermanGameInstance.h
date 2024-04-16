#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BombermanGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_A1_UE4_API UBombermanGameInstance : public UGameInstance
{
	GENERATED_BODY()
	public:
        UFUNCTION(BlueprintCallable)
        bool ServerTravel(const FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify);
};
