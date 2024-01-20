// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWInventoryComponent.generated.h"


class UUWItemsStorage;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UMGWIDGETS_API UUWInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	TArray<UUWItemsStorage*> ItemsStorages;
};
