// Fill out your copyright notice in the Description page of Project Settings.

#include "Practice_06GameModeBase.h"

#include "StandardHUD.h"


APractice_06GameModeBase::APractice_06GameModeBase() : Super()
{
	HUDClass = AStandardHUD::StaticClass();
}

