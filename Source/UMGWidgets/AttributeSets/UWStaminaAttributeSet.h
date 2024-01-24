// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UWAttributeSetType.h"
#include "UWStaminaAttributeSet.generated.h"


UCLASS()
class UMGWIDGETS_API UUWStaminaAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UUWStaminaAttributeSet, Stamina);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UUWStaminaAttributeSet, MaxStamina);
};
