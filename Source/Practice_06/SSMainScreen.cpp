// Fill out your copyright notice in the Description page of Project Settings.

#include "SSMainScreen.h"
#include "SlateOptMacros.h"


BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

#define LOCTEXT_NAMESPACE "SStandardSlateWidget"

void SSMainScreen::Construct(const FArguments& InArgs)
{
	//OwnerHUD = InArgs._OwnerHUDArg;
	
	ChildSlot
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.VAlign(VAlign_Top)
			//.HALign(HAlign_Left)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				[
					SNew(STextBlock)
					.Font(FSlateFontInfo("Verdana", 26))
					.Text(LOCTEXT("PracticeSlate", "Text BOX Slate"))
				]
			]
		
	];
	
}

#undef LOCTEXT_NAMESPACE

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
