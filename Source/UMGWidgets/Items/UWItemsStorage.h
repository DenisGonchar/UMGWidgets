// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UWItemStack.h"
#include "UObject/Object.h"
#include "UWItemsStorage.generated.h"

struct FUWItemStack;

UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class UMGWIDGETS_API UUWItemsStorage : public UObject
{
	GENERATED_BODY()
public:
	void BeginPlay();
	
	UFUNCTION(BlueprintCallable)
	void AddItem(const FUWItemStack& ItemStack);

	UFUNCTION(BlueprintPure)
	TArray<FUWItemStack> GetItems();
	
public:


protected:
	UPROPERTY(EditAnywhere)
	TArray<FUWItemStack> Items;
	
};
