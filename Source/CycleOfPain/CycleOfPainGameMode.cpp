// Copyright Epic Games, Inc. All Rights Reserved.

#include "CycleOfPainGameMode.h"
#include "CycleOfPainCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACycleOfPainGameMode::ACycleOfPainGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
