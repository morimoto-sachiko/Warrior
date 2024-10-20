// Copyright 2024 Morimoto. All Rights Reserved. This project is for personal study purposes only.


#include "Charactors/WarriorBaseCharactor.h"

// Sets default values
AWarriorBaseCharactor::AWarriorBaseCharactor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;
}
