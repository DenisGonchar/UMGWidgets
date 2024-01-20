// Fill out your copyright notice in the Description page of Project Settings.


#include "UWItemStack.h"

#include "UWItem.h"

bool FUWItemStack::IsValid() const
{
	return ItemClass != nullptr && Amount > 0;
}
