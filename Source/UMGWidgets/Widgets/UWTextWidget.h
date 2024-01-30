// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components//TextBlock.h"
#include "UWTextWidget.generated.h"

/**
 * 
 */
UCLASS()
class UMGWIDGETS_API UUWTextWidget : public UTextBlock
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USlateWidgetStyleAsset* TextStyle;
};
