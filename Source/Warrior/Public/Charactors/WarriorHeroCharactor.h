// Copyright 2024 Morimoto. All Rights Reserved. This project is for personal study purposes only.

#pragma once

#include "CoreMinimal.h"
#include "Charactors/WarriorBaseCharactor.h"
#include "WarriorHeroCharactor.generated.h"

class USpringArmComponent;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class WARRIOR_API AWarriorHeroCharactor : public AWarriorBaseCharactor
{
	GENERATED_BODY()

public:
	AWarriorHeroCharactor();

protected:
	virtual void BeginPlay() override;

private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

#pragma endregion

	
};
