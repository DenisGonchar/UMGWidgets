#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWItem.generated.h"

class UTexture2D;
class UUWItemsAttributeSet;

UCLASS(Blueprintable, BlueprintType)
class UMGWIDGETS_API UUWItem : public UObject
{
	GENERATED_BODY()

public:
	UUWItem();
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* InventoryIcon;

	UPROPERTY(BlueprintReadOnly)
	UUWItemsAttributeSet* AttributeSet;
	
	
};
