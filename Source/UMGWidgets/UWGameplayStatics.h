// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffect.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWGameplayStatics.generated.h"


class UUWItem;
class UUWAttributeNamesAsset;

UCLASS()
class UMGWIDGETS_API UUWGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure)
	static UUWAttributeNamesAsset* GetAttributeNamesAsset(const UObject* ContextObject);

	UFUNCTION(BlueprintPure)
	static FText GetAttributeName(const UObject* ContextObject, const FGameplayAttribute& Attribute);

	UFUNCTION(BlueprintPure)
	static FGameplayAttribute GetAttributeFromModifier(const FGameplayModifierInfo& Modifier);

	UFUNCTION(BlueprintPure)
	static float GetMagnitudeFromModifier(const FGameplayEffectSpec& EffectSpec, const FGameplayModifierInfo& Modifier);

	UFUNCTION(BlueprintPure)
	static TEnumAsByte<EGameplayModOp::Type> GetOperationFromModifier(const FGameplayModifierInfo& Modifier);

	UFUNCTION(BlueprintPure)
	static UObject* GetDefaultObject(TSubclassOf<UUWItem> ItemClass);
	
public:


	
};
