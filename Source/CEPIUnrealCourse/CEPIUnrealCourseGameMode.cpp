// Copyright Epic Games, Inc. All Rights Reserved.

#include "CEPIUnrealCourseGameMode.h"
#include "CEPIUnrealCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACEPIUnrealCourseGameMode::ACEPIUnrealCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
