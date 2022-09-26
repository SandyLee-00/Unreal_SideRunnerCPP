// Copyright Epic Games, Inc. All Rights Reserved.

#include "SideRunnerCPPGameMode.h"
#include "SideRunnerCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASideRunnerCPPGameMode::ASideRunnerCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
