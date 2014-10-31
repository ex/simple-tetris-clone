// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "unreal.h"
#include "unrealGameMode.h"
#include "unrealPlayerController.h"

AunrealGameMode::AunrealGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// no pawn by default
	DefaultPawnClass = NULL;
	// use our own player controller class
	PlayerControllerClass = AunrealPlayerController::StaticClass();
}
