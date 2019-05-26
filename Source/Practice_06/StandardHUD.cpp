// Fill out your copyright notice in the Description page of Project Settings.

#include "StandardHUD.h"
#include "SStandardSlateWidget.h"
#include "SSMainScreen.h"

#include "Widgets/SWeakWidget.h" 

#include "Runtime/Engine/Classes/Engine/Engine.h" 

void AStandardHUD::BeginPlay()
{
	MyUIWidget = SNew(SStandardSlateWidget).OwnerHUDArg(this);
	GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MyUIWidget.ToSharedRef()));
	MyUIWidget->SetVisibility(EVisibility::Visible);

	//MyUIWidget = SNew(SSMainScreen).OwnerHUDArg(this);
	//GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MyUIWidget.ToSharedRef()));
	//MyUIWidget->SetVisibility(EVisibility::Visible);
}
