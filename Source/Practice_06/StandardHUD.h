// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StandardHUD.generated.h"

/**
 * 
 */

class SStandardSlateWidget;
//class SSMainScreen;
UCLASS()
class PRACTICE_06_API AStandardHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	
	TSharedPtr<SStandardSlateWidget> MyUIWidget;
	//TSharedPtr<SSMainScreen> MyUIWidget;
	
	void BeginPlay();
	
};
