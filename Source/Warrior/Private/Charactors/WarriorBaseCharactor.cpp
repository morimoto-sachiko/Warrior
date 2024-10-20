// Copyright 2024 Morimoto. All Rights Reserved. This project is for personal study purposes only.


#include "Charactors/WarriorBaseCharactor.h"

// Sets default values
AWarriorBaseCharactor::AWarriorBaseCharactor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWarriorBaseCharactor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarriorBaseCharactor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWarriorBaseCharactor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

