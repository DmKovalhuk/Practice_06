// Fill out your copyright notice in the Description page of Project Settings.

#include "SStandardSlateWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Colors/SColorWheel.h"
#include "Widgets/Input/SCheckBox.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

#define LOCTEXT_NAMESPACE "SStandardSlateWidget"

void SStandardSlateWidget::Construct(const FArguments& InArgs)
{
	OwnerHUD = InArgs._OwnerHUDArg;
	
	ChildSlot
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.VAlign(VAlign_Bottom)
			.HAlign(HAlign_Left)
			[
				SNew(SHorizontalBox)
				.Visibility(EVisibility::Visible)
				+SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(SColorWheel)
				]
 				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Center)
				[
					SNew(STextBlock)
					.Font(FSlateFontInfo("Veranda", 26))
					.Text(FText::FromString("Slate Text"))
				]
			]
			+ SOverlay::Slot()
			.VAlign(VAlign_Bottom)
			.HAlign(HAlign_Right)
			[
				SNew(SVerticalBox)
				.Visibility(EVisibility::Visible)
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Center)
				[
					SNew(SCheckBox)
					.IsChecked(ECheckBoxState::Checked)
				]
				+ SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Center)
				[
					SNew(SButton)
					.ButtonColorAndOpacity(FLinearColor::Red)
					.Text(FText::FromString("Slate Button"))
					.DesiredSizeScale(FVector2D(3.0f, 2.5f))
					.ContentScale(FVector2D(2.0f, 1.5f))
				]
				+ SVerticalBox::Slot()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Center)
				[
					SNew(SButton)
					.ButtonColorAndOpacity(FLinearColor::Blue)
					.Text(FText::FromString("Slate Button"))
					.DesiredSizeScale(FVector2D(3.0f, 2.5f))
					.ContentScale(FVector2D(2.0f, 1.5f))
				]
				
			]
			
				
		];
	
}
#undef LOCTEXT_NAMESPACE

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
