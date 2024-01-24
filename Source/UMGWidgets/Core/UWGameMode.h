// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UWGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UMGWIDGETS_API AUWGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:


public:
	UPROPERTY(EditAnywhere)
	class UUWAttributeNamesAsset* AttributeNamesAsset;
};
