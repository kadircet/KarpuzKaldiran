// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "KarpuzKaldiranGameMode.h"
#include "KarpuzKaldiranCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKarpuzKaldiranGameMode::AKarpuzKaldiranGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
