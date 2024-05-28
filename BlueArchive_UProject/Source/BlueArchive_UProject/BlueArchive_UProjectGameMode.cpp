// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueArchive_UProjectGameMode.h"
#include "BlueArchive_UProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlueArchive_UProjectGameMode::ABlueArchive_UProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
