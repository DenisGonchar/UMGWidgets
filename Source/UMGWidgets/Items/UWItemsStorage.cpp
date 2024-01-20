// Fill out your copyright notice in the Description page of Project Settings.


#include "UWItemsStorage.h"

#include "UWItem.h"

void UUWItemsStorage::BeginPlay()
{
	auto tempItems = Items;
	Items.Empty();
	for (const auto& item : tempItems)
	{
		AddItem(item);
	}
}

void UUWItemsStorage::AddItem(const FUWItemStack& ItemStack)
{
	if (ItemStack.IsValid())
	{
		Items.Add(ItemStack);
		auto& addedItemStack = Items.Last();
		if (addedItemStack.Item == nullptr)
		{
			addedItemStack.Item = NewObject<UUWItem>(GetTransientPackage(), addedItemStack.ItemClass);
		}
		
	}
}

TArray<FUWItemStack> UUWItemsStorage::GetItems()
{
	return Items;
}
