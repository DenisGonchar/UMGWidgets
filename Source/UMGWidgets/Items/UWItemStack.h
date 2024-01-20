// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWItemStack.generated.h"

class UUWItem;

USTRUCT(BlueprintType)
struct FUWItemStack
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUWItem> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount = 0;
	
	UPROPERTY(BlueprintReadWrite)
	UUWItem* Item = nullptr;

public:
	bool IsValid() const;
		
};
