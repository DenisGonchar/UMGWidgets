// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UWAttributeSetType.h"
#include "UWAttackAttributeSet.generated.h"

UCLASS()
class UMGWIDGETS_API UUWAttackAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Attack;
	ATTRIBUTE_ACCESSORS(UUWAttackAttributeSet, Attack);

};
