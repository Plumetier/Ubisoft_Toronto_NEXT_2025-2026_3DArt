// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ubisoft_3D_ArtGameMode.h"
#include "Ubisoft_3D_ArtCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUbisoft_3D_ArtGameMode::AUbisoft_3D_ArtGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
