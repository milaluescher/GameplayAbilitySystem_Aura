// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacterBase.h"
#include "AuraCharacterBase.h"
AAuroCharacterBase::AAuroCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

UAbilitySystemComponent* AAuroCharacterBase::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void AAuroCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


