// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UWAttributeSetType.h"
#include "UWDurabilityAttributeSet.generated.h"

UCLASS()
class UMGWIDGETS_API UUWDurabilityAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Durability;
	ATTRIBUTE_ACCESSORS(UUWDurabilityAttributeSet, Durability);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxDurability;
	ATTRIBUTE_ACCESSORS(UUWDurabilityAttributeSet, MaxDurability);
};
