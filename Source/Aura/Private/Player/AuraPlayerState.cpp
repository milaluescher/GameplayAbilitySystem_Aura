// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AuraPlayerState.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"



AAuraPlayerState::AAuraPlayerState()
{
    AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
    AbilitySystemComponent->SetIsReplicated(true);  // Server will replicate to clients
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed); 

    AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

    NetUpdateFrequency = 100; // how often the server will update clients
}

UAbilitySystemComponent *AAuraPlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}