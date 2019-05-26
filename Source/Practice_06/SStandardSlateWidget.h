// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"



/**
 * 
 */
class PRACTICE_06_API SStandardSlateWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SStandardSlateWidget)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<class AStandardHUD>, OwnerHUDArg);
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

private:

	TWeakObjectPtr<class AStandardHUD> OwnerHUD;

};
