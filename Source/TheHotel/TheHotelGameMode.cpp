// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheHotelGameMode.h"
#include "TheHotelHUD.h"
#include "TheHotelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheHotelGameMode::ATheHotelGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheHotelHUD::StaticClass();
}
