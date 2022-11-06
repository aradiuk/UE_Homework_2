// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework_2_aradiukGameMode.h"
#include "Homework_2_aradiukCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomework_2_aradiukGameMode::AHomework_2_aradiukGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
