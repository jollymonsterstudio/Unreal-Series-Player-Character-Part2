// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PunchKick02GameMode.h"
#include "PunchKick02Character.h"
#include "UObject/ConstructorHelpers.h"

APunchKick02GameMode::APunchKick02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
