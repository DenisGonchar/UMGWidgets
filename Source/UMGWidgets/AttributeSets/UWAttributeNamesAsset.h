// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Engine/DataAsset.h"
#include "UWAttributeNamesAsset.generated.h"



UCLASS()
class UMGWIDGETS_API UUWAttributeNamesAsset : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FGameplayAttribute, FText> Attributes;
	
	
};
