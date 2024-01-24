// Fill out your copyright notice in the Description page of Project Settings.


#include "UWGameplayStatics.h"

#include "AttributeSets/UWAttributeNamesAsset.h"
#include "Core/UWGameMode.h"
#include "Items/UWItem.h"

UUWAttributeNamesAsset* UUWGameplayStatics::GetAttributeNamesAsset(const UObject* ContextObject)
{
	if (const auto world = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::ReturnNull))
	{
		if (const auto gameMode = world->GetAuthGameMode<AUWGameMode>())
		{
			return gameMode->AttributeNamesAsset;
		}
	}
	return nullptr;
}

FText UUWGameplayStatics::GetAttributeName(const UObject* ContextObject, const FGameplayAttribute& Attribute)
{
	if (const auto attributeNamesAsset = GetAttributeNamesAsset(ContextObject))
	{
		const FText* attributeNamePtr = attributeNamesAsset->Attributes.Find(Attribute);
		return attributeNamePtr != nullptr ? *attributeNamePtr : FText();
	}
	return {};
}

FGameplayAttribute UUWGameplayStatics::GetAttributeFromModifier(const FGameplayModifierInfo& Modifier)
{
	return  Modifier.Attribute;
}

float UUWGameplayStatics::GetMagnitudeFromModifier(const FGameplayEffectSpec& EffectSpec, const FGameplayModifierInfo& Modifier)
{
	float value = 0.f;
	Modifier.ModifierMagnitude.AttemptCalculateMagnitude(EffectSpec, value);

	return value;
}

TEnumAsByte<EGameplayModOp::Type> UUWGameplayStatics::GetOperationFromModifier(const FGameplayModifierInfo& Modifier)
{
	return Modifier.ModifierOp;
}

UObject* UUWGameplayStatics::GetDefaultObject(TSubclassOf<UUWItem> ItemClass)
{
	return ItemClass.GetDefaultObject();
}
