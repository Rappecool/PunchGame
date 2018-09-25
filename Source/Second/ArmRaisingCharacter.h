// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SecondCharacter.h"
#include "ArmRaisingCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SECOND_API AArmRaisingCharacter : public ASecondCharacter
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = Movement)
		float ArmMovementSpeed = 0;

	UPROPERTY(EditAnywhere, Category = Movement)
		float Direction = 0;
	
	
	
};
