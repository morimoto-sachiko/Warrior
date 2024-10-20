// Copyright 2024 Morimoto. All Rights Reserved. This project is for personal study purposes only.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WarriorBaseCharactor.generated.h"

UCLASS()
class WARRIOR_API AWarriorBaseCharactor : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWarriorBaseCharactor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
