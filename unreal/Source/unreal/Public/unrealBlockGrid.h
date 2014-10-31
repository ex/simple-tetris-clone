// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Actor.h"
#include "unrealBlockGrid.generated.h"

/** Class used to spawn blocks and manage score */
UCLASS(minimalapi)
class AunrealBlockGrid : public AActor
{
	GENERATED_UCLASS_BODY()

	/** Dummy root component */
	UPROPERTY(Category=Grid, VisibleDefaultsOnly, BlueprintReadOnly)
	TSubobjectPtr<class USceneComponent> DummyRoot;

	/** Text component for the score */
	UPROPERTY(Category=Grid, VisibleDefaultsOnly, BlueprintReadOnly)
	TSubobjectPtr<class UTextRenderComponent> ScoreText;

	/** How many blocks have been clicked */
	int32 Score;

	/** Number of blocks along each side of grid */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	int32 Size;

	/** Spacing of blocks */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	float BlockSpacing;

	// Begin AActor interface
	virtual void BeginPlay() override;
	// End AActor interface

	/** Handle the block being clicked */
	void AddScore();
};



