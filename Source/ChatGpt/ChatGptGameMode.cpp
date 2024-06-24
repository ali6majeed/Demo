// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChatGptGameMode.h"
#include "ChatGptCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChatGptGameMode::AChatGptGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
