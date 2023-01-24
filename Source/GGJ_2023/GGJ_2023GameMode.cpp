// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ_2023GameMode.h"
#include "GGJ_2023Character.h"
#include "UObject/ConstructorHelpers.h"

AGGJ_2023GameMode::AGGJ_2023GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
