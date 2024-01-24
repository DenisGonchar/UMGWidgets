// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UWAttributeSetType.h"
#include "UWDefenceAttributeSet.generated.h"

UCLASS()
class UMGWIDGETS_API UUWDefenceAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UUWDefenceAttributeSet, Armor);

};
