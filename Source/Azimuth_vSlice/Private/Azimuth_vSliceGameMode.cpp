// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Azimuth_vSlice.h"
#include "Azimuth_vSliceGameMode.h"
#include "Azimuth_vSliceCharacter.h"

AAzimuth_vSliceGameMode::AAzimuth_vSliceGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
