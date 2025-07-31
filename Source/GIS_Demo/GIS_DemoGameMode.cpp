// Copyright Epic Games, Inc. All Rights Reserved.

#include "GIS_DemoGameMode.h"
#include "GIS_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGIS_DemoGameMode::AGIS_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
