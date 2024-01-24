// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UWAttributeSetType.h"

#include "UWHealthAttributeSet.generated.h"

UCLASS()
class UMGWIDGETS_API UUWHealthAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UUWHealthAttributeSet, Health);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UUWHealthAttributeSet, MaxHealth);
};
