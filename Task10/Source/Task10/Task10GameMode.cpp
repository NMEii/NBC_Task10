// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task10GameMode.h"
#include "Task10Character.h"
#include "UObject/ConstructorHelpers.h"

ATask10GameMode::ATask10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
