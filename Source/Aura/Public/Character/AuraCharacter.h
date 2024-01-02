// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Character/AuraCharacterBase.h"
#include "CoreMinimal.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuroCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
	
};
