// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyFirstGameGameMode.h"
#include "MyFirstGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyFirstGameGameMode::AMyFirstGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
