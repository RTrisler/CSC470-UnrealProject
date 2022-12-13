// Copyright Epic Games, Inc. All Rights Reserved.

#include "MARCGameMode.h"
#include "MARCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMARCGameMode::AMARCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
