// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SButton.h"

/**
 * 
 */
class PRACTICE_06_API SSMainScreen : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSMainScreen)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<class AStandardHUD>, OwnerHUDArg);
	SLATE_END_ARGS()

	
	void Construct(const FArguments& InArgs);
private:
	//TWeakObjectPtr<class AStandartHUD> OwnerHUD;
};
