// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "unreal.h"
#include "unrealPlayerController.h"

AunrealPlayerController::AunrealPlayerController(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
